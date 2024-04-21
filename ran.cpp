#include<bits/stdc++.h>
using namespace std;
#define f fixed
#define sp(C) setprecision(C) 
int main() {
    vector<string> aa = {"leu", "lys", "met", "phe", "pro", "ser", "thr", "trp", "tyr", "val", "ala", "arg", "asn", "asp", "cys", "gln", "glu", "gly", "his", "ile"};

    int n;
    cout << "Enter the number of amino acids: ";
    cin >> n;

    // Open the .rib file for writing
    ofstream outFile("output.rib");

    // Seed for random number generation
    random_device rd;
    mt19937 gen(rd());

    // Define distribution for indices
    uniform_int_distribution<> dist(0, aa.size() - 1);
    // Distribution of alpha helix
    uniform_real_distribution<> ah_phi(-60.0, -40.0);
    uniform_real_distribution<> ah_psi(-50.0, -30.0);
    //Distribution of beta sheet
    uniform_real_distribution<> bs_phi(-135.0, -115.0);
    uniform_real_distribution<> bs_psi(110.0, 135.0);
    // Switch
    uniform_int_distribution<> sw(0,1);


    // Write amino acids to the .rib file
    outFile <<"# sample command file. this builds the peptide as a helix\n\n# except for the glycine which has a phi of 90.0 and psi of 0.0\n\nTITLE RIBOSOME EXAMPLE 2\n\ndefault helix\n\n";
    for (int i = 0; i < n; i++) {
        // Generate random index
        int randomIndex = dist(gen);
        int swich=sw(gen);

        // Write the amino acid to the file
        double random_ah_Phi = ah_phi(gen);
        double random_ah_Psi = ah_psi(gen);

        double random_bs_Phi = bs_phi(gen);
        double random_bs_Psi = bs_psi(gen);

        if(swich)
        {

        outFile <<"res "<< aa[randomIndex]<<" phi "<<random_ah_Phi<<f<<sp(2)<<" psi  "<<random_ah_Psi<<f<<setprecision(2)<<endl<<endl;
        
        }
        else
        {
        outFile << "res "<<aa[randomIndex]<<" phi "<<random_bs_Phi<<f<<sp(2)<<" psi "<<random_bs_Psi<<f<<setprecision(2)<<endl<<endl;
        }

    }

    // Close the .rib file
    outFile.close();

    cout << "Amino acids listed in output.rib" <<endl;

    return 0;
}