--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:49:57 05/29/2019
-- Design Name:   
-- Module Name:   /home/rahmoun/Projet_systeme_info/TestDecode.vhd
-- Project Name:  Projet_systeme_info
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Decode
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
 
ENTITY TestDecode IS
END TestDecode;
 
ARCHITECTURE behavior OF TestDecode IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Decode
    PORT(
         Instruction : IN  std_logic_vector(31 downto 0);
         OP : OUT  std_logic_vector(3 downto 0);
         A : OUT  std_logic_vector(7 downto 0);
         B : OUT  std_logic_vector(15 downto 0);
         C : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Instruction : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal OP : std_logic_vector(3 downto 0);
   signal A : std_logic_vector(7 downto 0);
   signal B : std_logic_vector(15 downto 0);
   signal C : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Decode PORT MAP (
          Instruction => Instruction,
          OP => OP,
          A => A,
          B => B,
          C => C
        );


 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
     -- wait for 100 ns;	



      -- insert stimulus here
			-- AFC R1 1
		--Instruction <= x"61000100";
		
		--wait for 100 ns;	
		-- ADD R1 R2 R3
		--Instruction <= x"11230000";
			
	--	wait for 100 ns;	
		-- JMP 5
		--Instruction <= x"E0500000";
		
		--wait for 100 ns;	
		-- STORE 2 R4
		Instruction <= x"80240000";

      wait;
   end process;

END;
