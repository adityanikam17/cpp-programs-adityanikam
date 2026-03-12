
// 39. File Handling 

// File Handling - storing and retriving data from files using c++ program.
// - it allows data to be stored permanently even after program finishes running.

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    // creating a file and write datat to a file.
    ofstream outfile ("Example.txt");       // ofstream is used to write into file, this will create new file named example.txt.

    if(!outfile)
    {
        cout << "Error creating file!!" << endl;
        return 0;                     // exit program if file not created 
    }

    // writing data to a file 
    outfile << "Hello Students!!" << endl;
    outfile << "Welcome to File Handling in C++ " << endl;
    outfile << "This file contains a simple text." << endl;

    outfile.close();                // close file after writing 
    cout << "Data successfully written in example.txt" << endl;

    // read the data from same file
    ifstream file("Example.txt");               // ifstream is used to read from a file.

    // check if file is opened successfully
    if(!file)
    {
        cout << "Error opening file for reading... " << endl;
        return 0;
    }
    string line;            // variable to store each line read from the file 

    cout << "Reading data from a file " << endl;

    while(getline(file,line))
    {
        cout << line << endl;
    }
    file.close();           // close file after reading 
    cout << "File reading completed successfully!!!" << endl;
    return 0;

}

