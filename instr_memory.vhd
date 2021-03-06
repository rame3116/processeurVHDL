library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.common.all;


entity instr_memory is
	generic(
		LEN_SEL: natural := 16;
		LEN_INSTR: natural := 32
	);
	port(
		sel: in std_logic_vector(LEN_SEL-1 downto 0);
		q: out std_logic_vector(LEN_INSTR-1 downto 0)
	);
end entity;


architecture beh of instr_memory is

	--signal instr_memory: instrArray := init_rom(filename => "/home/rahmoun/Projet_systeme_info/");

	signal instr_memory: instrArray := (
		0 => x"0601FFFD", --Pour la gestion des aléas:
		--D'abord j'affecte puis je fais un add
		--L'affectation n'aura pas le temps de se faire
		--avant que le add ne lise la valeur
		--donc il faut faire 4 NOP
		--1 => x"06020002", 
		--2 => x"00020102", 
		--3 => x"08000102",
		--4 => x"06020001", 
		5 => x"07010001",
		6 => x"00010102",
		others => x"FFFFFFFF"
	);

begin
	
	q <= instr_memory(to_integer(unsigned(sel)));

end architecture;

