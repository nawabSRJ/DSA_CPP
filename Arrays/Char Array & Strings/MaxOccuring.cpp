// ? Question : To get the maximum occuring element in a string
#include<iostream>
using namespace std;

char getMaxoccuring(string s)
{
    int arr[26] = {0}; // * array of count of numbers
    // * for lowercase only
    for(int i = 0; i < s.length() ; i++)
    {
        char ch = s[i];
        int num = 0;

        num = ch - 'a'; // * distance from a 
        arr[num] += 1;  // * incrementing the count of that character
    }

    // * analyzing the max occuring
    int max = -1, index = -1;
    for(int j = 0 ; j < 26 ; j++)
    {
        if(max < arr[j])
        {
            max = arr[j];
            index = j;
        }
    }
    
    return 'a' + index;
}



int main()
{
    string s;
    cout << "Enter a String : "<<endl;
    getline(cin , s);
    char ans = getMaxoccuring(s);
    cout << "Maximum occuring character is : " << ans;
    return 0;
}