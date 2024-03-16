// todo - learn file i/o using fstream functions
// * ofstream to write the data to file (not append)
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout; // object to write to file
    string line;

    fout.open("Sample1.txt");

    // execute a loop if file successfully opened
    cout << "Start Writing : \n"<<endl;
    while(fout)
    {
        // read line from user input
        getline(cin , line);

        // Press -1 to stop writing and exit the process
        if (line == "-1")   break;  

        // write line to file   ~ running again will delete the prev data (not like append)
        fout<<line<<endl;
    }

    fout.close();   // close the file
    // the data that you are writing will only get stored in RAM and not in the disk until you close the file
    return 0;
}