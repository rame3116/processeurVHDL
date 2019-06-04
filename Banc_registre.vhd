----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:14:30 05/13/2019 
-- Design Name: 
-- Module Name:    Banc_registre - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Banc_registre is
    Port ( aA : in  STD_LOGIC_VECTOR (7 downto 0);
           aB : in  STD_LOGIC_VECTOR (7 downto 0);
           aW : in  STD_LOGIC_VECTOR (7 downto 0);
           W : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (15 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (15 downto 0);
           QB : out  STD_LOGIC_VECTOR (15 downto 0));
end Banc_registre;

architecture Behavioral of Banc_registre is

type myTab_type    is array(15 downto 0) of std_logic_vector(15 downto 0);
signal tab  :   myTab_type;
begin

process
begin
	wait until CLK'event and CLK ='1';
	if RST ='0' then
		tab <= (others => ( others => '0')); 
	else
		if W='1' then tab(to_integer(unsigned(aW))) <= DATA;
		end if;
	end if;
	
	

end process;

QA <= DATA when W='1' and aA=aW else
	tab(to_integer(unsigned(aA)));
	
QB <= DATA when W='1' and aB=aW else
	tab(to_integer(unsigned(aB)));

end Behavioral;

