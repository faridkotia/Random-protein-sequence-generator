mkdir -p rib_files
mkdir -p PDB_files

g++ ran.cpp -o ran.exe && ./ran.exe

cd rib_files

for files in output*.rib
    