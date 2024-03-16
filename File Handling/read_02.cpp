// todo - reading from a utf-32 encoded file 👽
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    wifstream fin;
    fin.open("input1.txt" , ios::in);
    // to read utf-32 encoded string
    wstring line;

    while(!(fin.eof()))
    {
        getline(fin , line);
        wcout << line << endl;
    }
    fin.close();

    // todo : writing the utf-32 data to a file 👍
    wofstream fout;

    fout.open("output1.txt" , ios::app);
    int t = 2;
    while(t)
    {
        fout <<  L"ÄNGSFIBBLA" <<endl;
        fout << L"Blåhaj" << endl;
        t--;
    }
    fout.close();
    return 0;
}
