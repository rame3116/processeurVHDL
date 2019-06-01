----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:35:17 05/14/2019 
-- Design Name: 
-- Module Name:    Processeur - Behavioral 
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

entity Processeur is
    Port ( Instruction : in  STD_LOGIC_VECTOR (31 downto 0);
				RESET : in  STD_LOGIC;
				CLOCK : in  STD_LOGIC); 
	 --Entrée du processeur, quoi mettre exactement ??????
end Processeur;

architecture struct of Processeur is
--for all : Banc_registre use entity work.Banc_registre;
--for all : ALU use entity work.ALU;
--for all : Memoire_donnees use entity work.Memoire_donnees;
--for all : Pipeline use entity work.Pipeline;
--for all : Decode use entity work.Decode;


    COMPONENT Banc_registre
    PORT(
         aA : IN  std_logic_vector(3 downto 0);
         aB : IN  std_logic_vector(3 downto 0);
         aW : IN  std_logic_vector(3 downto 0);
         W : IN  std_logic;
         DATA : IN  std_logic_vector(15 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic;
         QA : OUT  std_logic_vector(15 downto 0);
         QB : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
	 COMPONENT Decode
    PORT(
         Instruction : IN  std_logic_vector(31 downto 0);
         OP : OUT  std_logic_vector(3 downto 0);
         A : OUT  std_logic_vector(7 downto 0);
         B : OUT  std_logic_vector(15 downto 0);
         C : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
	 
	 COMPONENT Pipeline
    PORT(
         Ain : IN  std_logic_vector(7 downto 0);
         OPin : IN  std_logic_vector(3 downto 0);
         Bin : IN  std_logic_vector(15 downto 0);
         Cin : IN  std_logic_vector(7 downto 0);
         Aout : OUT  std_logic_vector(7 downto 0);
         OPout : OUT  std_logic_vector(3 downto 0);
         Bout : OUT  std_logic_vector(15 downto 0);
         Cout : OUT  std_logic_vector(7 downto 0);
         CLK : IN  std_logic
        );
    END COMPONENT;
	 
	 COMPONENT ALU
    PORT(
         A : IN  std_logic_vector(15 downto 0);
         B : IN  std_logic_vector(15 downto 0);
         S : OUT  std_logic_vector(15 downto 0);
         OP : IN  std_logic_vector(3 downto 0);
         N : OUT  std_logic;
         O : OUT  std_logic;
         C : OUT  std_logic;
         Z : OUT  std_logic
        );
    END COMPONENT;

signal A1, A2, A3, A4, A5 : STD_LOGIC_VECTOR (7 downto 0);
signal B1, B2, B3, B4, B5, Binexmem : STD_LOGIC_VECTOR (15 downto 0);
signal OP1, OP2, OP3, OP4, OP5, C1, A6: STD_LOGIC_VECTOR (3 downto 0);
signal OPw : STD_LOGIC;
signal CLK : STD_LOGIC;
signal Benter: STD_LOGIC_VECTOR (15 downto 0); --Pour le multiplexeur avant DI/EX
signal OutQA, OutQB: STD_LOGIC_VECTOR (15 downto 0);
signal C2: STD_LOGIC_VECTOR (3 downto 0);
begin
	decodeur: Decode PORT MAP (
          Instruction => Instruction,
          OP => OP1,
          A => A1,
          B => B1,
          C => C1
        );	
	bancRegistre: Banc_registre PORT MAP (
          aA => B2(3 downto 0), --Pour l'instant, le temps de faire AFC
          aB => C2, --Pour l'instant, le temps de faire AFC
          aW => A5(3 downto 0),
          W => OPw,
          DATA => B5,
          RST => RESET,
          CLK => CLOCK,
          QA => OutQA,
          QB => OutQB
        );
	
	ual: ALU PORT MAP (
          A => AinALU,
          B => BinALU,
          S => OutALU,
          OP => OPinALU,
          N => open,
          O => open,
          C => open,
          Z => open
        );
	
	li_di : Pipeline port map (
		Ain => A1, 
		Aout => A2,
		Bin => B1,
		Bout => B2,
		OPin => OP1,   
		OPout => OP2,
		Cin => C1, --la sortie C du decode
		Cout => C2, -- Va direct dans aB du banc de rg
		CLK => CLOCK);
		
	di_ex : Pipeline port map (
		Ain => A2, 
		Aout => A3,
		Bin => Benter,
		Bout => B3,
		OPin => OP2,   
		OPout => OP3,
		Cin => OutQB,
		Cout => BinALU,
		CLK => CLOCK);
		
	ex_mem : Pipeline port map (
		Ain => A3, 
		Aout => A4,
		Bin => Binexmem,
		Bout => B4,
		OPin => OP3,   
		OPout => OP4,
		Cin => x"00",
		Cout => open,
		CLK => CLOCK);
		
	
		
	mem_re : Pipeline port map (
		Ain => A4, 
		Aout => A5,
		Bin => B4,
		Bout => B5,
		OPin => OP4,   
		OPout => OP5,
		Cin => x"00",
		Cout => open,
		CLK => CLOCK);
		
		
	--ICI ON GERE LES MULTIPLEXEURS ET LES LC, 
	--IL FAUT GÉRER TOUS LES CODES POSSIBLES
	OPw <= '1' when OP5 =x"6" or OP5 =x"1" or OP5 =x"2" or OP5 =x"3" ; --LC 
	Benter <= OutQA when OP2=x"5" else--Multiplexeur avant DI/EX
		B2;
	OPinALU<= x"1" when OP3=x"1" else
		x"2" when OP3=x"3" else
		x"3" when OP3=x"2" else
		x"0";
	--A6 prend les 4 bits de poids faibles de A5
	--pour rentrer dans aW du banc de registre
	A6 <= A5(3 downto 0);
	
	
	--
	Binexmem <= OutALU when OP3=x"1" or OP3=x"2" or OP3=x"3" or OP3=x"4" else
		B3;
end struct;

 
