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
    Port ( Instruction : in  STD_LOGIC_VECTOR (15 downto 0)); 
	 --Entrée du processeur, quoi mettre exactement ???????
end Processeur;

architecture struct of Processeur is
for all : Banc_registre use entity work.Banc_registre;
for all : ALU use entity work.ALU;
for all : Memoire_donnees use entity work.Memoire_donnees;
for all : Pipeline use entity work.Pipeline;
signal A1, A2, A3, A4, A5 : STD_LOGIC_VECTOR (3 downto 0);
signal B1, B2, B3, B4, B5 : STD_LOGIC_VECTOR (15 downto 0);
signal OP1, OP2, OP3, OP4, OP5 : STD_LOGIC_VECTOR (15 downto 0);
signal OPw : bit;
signal CLK : bit;
begin
							--port map (Adr, DIN, RW, RST, CLK, DOUT);
	bancRegistre : Banc_registre port map (aW => A5, W => OPw, DATA =>5, CLK=> CLK)
							--port map (aA, aB, aW, W, DATA, RST, CLK, QA, QB)
	--alu : ALU port map (A => , B, S, OP, N, O, C, Z);
							--port map (A, B, S, OP, N, O, C, Z);
	--memoireDonnees : Memoire_donnees port map (Adr, DIN, RW, RST, CLK, DOUT);

	li_di : Pipeline port map (Ain => A1, OPin => OP1, Bin => B1, Aout => A2, OPout => OP2, Bout => B2, CLK => CLK);
							--port map (Ain, OPin, Bin, Cin, Aout, OPout, Bout, Cout, Bout, CLK);
	di_ex : Pipeline port map (Ain => A2, OPin => OP2, Bin => B2, Aout => A3, OPout => OP3, Bout => B3, CLK => CLK);
	ex_mem : Pipeline port map (Ain => A3, OPin => OP3, Bin => B3, Aout => A4, OPout => OP4, Bout => B4, CLK => CLK);
	mem_re : Pipeline port map (Ain => A4, OPin => OP4, Bin => B4, Aout => A5, OPout => OP5, Bout => B5, CLK => CLK);

	OPw <= '1' when OP5 =x"6"; --LC 
	

end struct;
--création LCs et MUXs directement ici et pas de modules à créer

--LC c'est 2 signaux OP5 et OPw 
 
