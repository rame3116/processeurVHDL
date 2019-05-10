----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:26:08 05/07/2019 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( A : in  STD_LOGIC_VECTOR (15 downto 0);
           B : in  STD_LOGIC_VECTOR (15 downto 0);
           S : out  STD_LOGIC_VECTOR (15 downto 0);
           OP : in  STD_LOGIC_VECTOR (3 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           C : out  STD_LOGIC;
           Z : out  STD_LOGIC);
end ALU;

architecture Behavioral of ALU is

	Signal Stmp: STD_LOGIC_VECTOR (16 downto 0);
	Signal Stmpmult: STD_LOGIC_VECTOR (31 downto 0);
begin
	Stmp <= ('0'&A)+('0'&B) when OP=x"01" else
				('0'&A)-('0'&B) when OP=x"02";
	Stmpmult <= A * B; --Suffit grâce à a librairie use IEEE.STD_LOGIC_ARITH.ALL;
	
	--std_logic_vector(to_unsigned((to_integer(unsigned(A)) * to_integer(unsigned(B))),32)) when OP=x"03" ;
	
	O <= '1' when (OP=x"03" and Stmpmult(31 downto 16) /= x"0000")
				OR (OP=x"01" and A(15)='1' and B(15)='1' and Stmp(15)='0') -- négatif + négatif donne positif => problème 
				OR (OP=x"01" and A(15)='0' and B(15)='0' and Stmp(15)='1')-- positif + positif donne négatif => ""
				OR (OP=x"02" and A(15)='0' and B(15)='1' and Stmp(15)='1') -- p - n donne n => problème
				OR (OP=x"02" and A(15)='1' and B(15)='0' and Stmp(15)='0') else -- n - p donne p => problème
				'0';
	
--Cas d'overflows : (p = positif; n =négatif; si p + p 				
				
			
	C <= Stmp(16) when OP=x"01" else 
			'0';
	
	S<= Stmp(15 downto 0) when OP=x"01" or OP=x"02" else -- A et B peuvent être négatifs
		 Stmpmult(15 downto 0) when OP=x"03";
	N <= Stmp(15) when OP=x"01" or OP=x"02"else
		'0';
		
	Z <= '1' when Stmp(15 downto 0) = "0000000000000000" else '0'; 
	--Overflow à faire
end Behavioral;

