// ? Question : WAP to generate the (i)length of a string (using char array) ; (ii) reverse of a string ; based on user choice
#include<iostream>
#include<cstring>
using namespace std;

int len(char str[]);
void reverse(char str[]);
int countvowel(char str[]);
bool isPalindrome(char str[]);
char toLower(char ch);

int main()
{
    char s[10];
    cout<<"Enter a string : ";
    cin>>s;
    int choice;
    int ans;
    bool check;
    cout<<"Make Choice : \n1->Length of String\n2->Reverse String\n3->Count Vowels and Consonants\n4->Check Palindrome (Not case Sensitive)\n\nChoose : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        ans = len(s);
        cout<<"Length of string entered is = "<<ans;
        break;

        case 2 :
        reverse(s);
        break;

        case 3:
        ans = countvowel(s);
        cout<<"No. of Vowels = "<<ans<<endl;
        // cout<<"No. of Consonants = "<<len(s) - countvowel(s)<<endl;

        case 4:
        check = isPalindrome(s);
        if(check) cout<<"Palindrome";
        else cout<<"Not a Palindrome";
    }
    

    return 0;
}
// TODO - make a function to convert Upper case to Lower Case
char toLower(char ch)
{
    char temp;
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        
        temp = ch - 'A' + 'a';
    }
    return temp;
}

int len(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char str[])
{
    int size = len(str);
    for(int i = size - 1 ; i >=0 ; i-- )
    {
        cout<<str[i];
    }
}

int countvowel(char str[])
{
    char bit;
    int cnt = 0;
    char vowels[] = {'A','E','I','O','U','a','e','i','o','u'};
    for(int i = 0; str[i] != '\0'; i++)
    {
        bit = str[i];
        for(int j = 0; vowels[j] != '\0'; j++)
        {
            if(bit == vowels[j]) {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

bool isPalindrome(char str[])
{
    int start = 0;
    int end = len(str) - 1;

    while(start <= end){
        if(toLower(str[start]) != toLower(str[end])){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}
