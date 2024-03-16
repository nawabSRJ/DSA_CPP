// todo - to append data in file and not re-write it 
/*
    * File Modes :
?    ios::in  -> input/read  (default in ifstream object)

?    ios::out  -> output/write  (default in ofstream object)  

?    ios::app  -> append  (present in ofstream class)

?    ios::ate  -> update  (present in ofstream class) , used for updating/manipulating the data randomly in between the content of the file

?    ios::binary  -> binary

*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // todo - append data to a file    😄
    ofstream fout;
    string line;
    fout.open("Sample1.txt" , ios::app);

    cout << "Write Data to file : \n"<<endl;
    // line = "👍";
    while(fout)
    {
        
        getline(cin , line);

        if(line == "-1") {
            cout <<"\n\n\t Terminating..."<<endl;
            break;
        }
        fout << line << endl;
    }

    fout.close();
    
    return 0;
}