--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:49:39 05/14/2019
-- Design Name:   
-- Module Name:   /home/rahmoun/Projet_systeme_info/Test_mem_donnees.vhd
-- Project Name:  Projet_systeme_info
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Memoire_donnees
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Test_mem_donnees IS
END Test_mem_donnees;
 
ARCHITECTURE behavior OF Test_mem_donnees IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Memoire_donnees
    PORT(
         Adr : IN  std_logic_vector(7 downto 0);
         DIN : IN  std_logic_vector(15 downto 0);
         RW : IN  std_logic;
         RST : IN  std_logic;
         CLK : IN  std_logic;
         DOUT : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Adr : std_logic_vector(7 downto 0) := (others => '0');
   signal DIN : std_logic_vector(15 downto 0) := (others => '0');
   signal RW : std_logic := '0';
   signal RST : std_logic := '1';
   signal CLK : std_logic := '0';

 	--Outputs
   signal DOUT : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Memoire_donnees PORT MAP (
          Adr => Adr,
          DIN => DIN,
          RW => RW,
          RST => RST,
          CLK => CLK,
          DOUT => DOUT
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 
		RW <= '1';
		Adr <= x"02";
		DIN <= x"AAAA";
		
		--wait for 100 ns;	
		
		--RW <= '0';
		--Adr <= x"02";
		
		--wait for 100 ns;	
		
		--RST <= '0';

      wait;
   end process;

END;
