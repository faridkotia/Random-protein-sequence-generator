# Peptide Builder (C++)

This C++ program generates a sample command file (.rib) that constructs a peptide as a helix, utilizing randomly selected amino acids from a predefined list. Additionally, the program allows for the introduction of variations simulating both alpha helix and beta sheet conformations within the peptide structure.

## Usage:

1. **Compile the Program:** Ensure a C++ compiler is installed. Compile the program using the compiler of your choice.

2. **Run the Executable:** Execute the compiled program. Follow the prompts to input the desired number of amino acids for the peptide.

3. **Output Generation:** Upon completion of the program, locate the generated output.rib file in the same directory.

4. **Convert to PDB:** Utilize builder tools like Ribosome to convert the generated .rib file to a .pdb file for further analysis and visualization.

## Notes:
- **Tool Dependencies:** Ensure that Ribosome tool (`ribosome`) and `res.zmat` file are correctly aligned in the program's path for successful conversion to .pdb format.
- **Compiler Requirement:** A C++ compiler must be installed to compile and run the program.

This program serves as a demonstration of peptide structure modeling and can be extended or modified for more complex peptide modeling tasks.
