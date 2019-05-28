----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:38:23 05/13/2019 
-- Design Name: 
-- Module Name:    Memoire_donnees - Behavioral 
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

entity Memoire_donnees is
    Port ( Adr : in  STD_LOGIC_VECTOR (7 downto 0);
           DIN : in  STD_LOGIC_VECTOR (15 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           DOUT : out  STD_LOGIC_VECTOR (15 downto 0));
end Memoire_donnees;

architecture Behavioral of Memoire_donnees is

type myTab_type    is array(255 downto 0) of std_logic_vector(15 downto 0);
signal tab  :   myTab_type;
begin

--RW=1 => Ecriture, 0 => lecture
process
begin
	wait until CLK'event and CLK ='1';
	if RST ='0' then
		tab <= (others => ( others => '0')); 
	else
		if RW='1' then tab(to_integer(unsigned(Adr))) <= DIN;
		else DOUT <= tab(to_integer(unsigned(Adr)));
		end if;
	end if;
	
	

end process;

end Behavioral;

