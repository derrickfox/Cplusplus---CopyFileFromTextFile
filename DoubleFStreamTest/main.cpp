#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    string fileName = "StartFile.txt";
    ofstream outFile;
    ifstream inFile(fileName.c_str());
    string word1, word2, word3;
    //inFile.open("StartFile.txt");
    outFile.open("EndFile.txt");
    
    
    // This copies one file to another AND prints out what was copied to the console.
    if (inFile.is_open()){
        //while (getline(inFile, word1, word2))
        {
            inFile >> word1 >> word2 >> word3;
            cout << word1 << " " << word2 << " " << word3 << "\n";
            outFile << word1 << " " << word2 << " " << word3 << "\n";
        }
    }
    /////////////////////////////////////////////////////////////////////////////////
    
    inFile.close();
    
    cout << "Run Completed.\n";
    return 0;
    
}