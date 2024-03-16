// * ifstream to read data from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // Creation of ifstream class object to read the file
    ifstream fin;
    string line;    // to read the data from file
    fin.open("input1.txt");

    // until EOF is encountered keep reading
    cout << "Data read from file : \n"<< endl;


    // * Method 1 

    // while(getline(fin , line))  // this statemen will keep on reading the line until EOF 
    // {
    //     cout << line << endl;
    // }       


    // * Method 2
    // ? ifstream_obj.eof() -> this eof() gives 1 if the eof is encountered else returns 0 , thus we have used a NOT operator to read until the EOF is encountered
    
    while(!(fin.eof())){
        getline(fin , line);
        cout << line <<endl;
    }

    fin.close();
    return 0;
}