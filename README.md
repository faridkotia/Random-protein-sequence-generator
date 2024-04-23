# Random Protein Sequence Generator (C++)

This C++ program generates sample command files (.rib) and (.pdb) that constructs a peptide, utilizing randomly selected amino acids from a predefined list. Additionally, the program allows for the introduction of variations simulating both alpha helix and beta sheet conformations within the peptide structure.

## Usage:
2. **Pre-requsites:** 
- C++ compiler
- fortran installed 
- A Linux operating system

2. **Compile the Program:** Nvigate to the main directory and run the following commands:
- chmod +x comp.sh
- ./comp.sh

3. **Run the Executable:** Execute the compiled program. Follow the prompts to input the desired number of proteins and then desired number of amino acids for all peptide sequence.

4. **Output Generation:** Upon completion of the program, locate the generated .rib files in the directory "rib files" and .pdb files in the directory "PDB_files"

## Notes:
- **Tool Dependencies:** Ensure that Ribosome tool `ribosome` and `res.zmat` file are correctly aligned in the program's path for successful conversion to .pdb format.
- **Compiler Requirement:** A C++ compiler must be installed to compile and run the program.

This program serves as a demonstration of peptide structure modeling and can be extended or modified for more complex peptide modeling tasks.
