----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:01:24 05/28/2019 
-- Design Name: 
-- Module Name:    Decode - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Decode is
    Port ( Instruction : in  STD_LOGIC_VECTOR (31 downto 0);
           OP : out  STD_LOGIC_VECTOR (3 downto 0);
           A : out  STD_LOGIC_VECTOR (7 downto 0);--A ne peut avoir qu'une adresse ou le numéro d'un registre
           B : out  STD_LOGIC_VECTOR (15 downto 0);-- B peut prendre une valeur de 16 bits
           C : out  STD_LOGIC_VECTOR (3 downto 0));
end Decode;

architecture Behavioral of Decode is
signal OPaux : STD_LOGIC_VECTOR (3 downto 0);
begin
	-- les 4 bits de poids fort codent OP
	OPaux <= Instruction (31 downto 28);
	OP <= OPaux;--On peut pas lire une sortie
	
	A <= Instruction (27 downto 20) when OPaux=x"E" or OPaux=x"F" or OPaux=x"8" else
		"0000"&Instruction(27 downto 24);
	
	B <= Instruction (23 downto 8) when OPaux=x"6" else
		 x"000"&Instruction (23 downto 16) when OPaux=x"7" else
		 x"0" when OPaux=x"8" or OPaux=x"E" or OPaux=x"F" else
		  x"000"&Instruction (23 downto 20); --Quand B est un registre
		 
	C <= x"0" when OPaux=x"5" or OPaux=x"6" or OPaux=x"7" or OPaux=x"E" else
			Instruction (19 downto 16);
end Behavioral;

