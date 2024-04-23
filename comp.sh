mkdir -p rib_files
mkdir -p PDB_files

g++ ran.cpp -o ran.exe && ./ran.exe

cd rib_files

for rib_file in output*.rib; do
    ../ribosome "$rib_file" "../PDB_files/output${rib_file%.rib}.pdb" ../res.zmat
done