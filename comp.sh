cd Ribosome/src
f77 -O *.f -o ../../ribosome
cd ../../

mkdir -p rib_files
mkdir -p PDB_files

g++ ran.cpp -o ran && ./ran

cd rib_files

for rib_files in output*.rib; do
    ../ribosome "$rib_files" "../PDB_files/${rib_files%.rib}.pdb" ../res.zmat
done