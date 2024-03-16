// ? Question - to calculate the sum of frequency of those elements with the highest frequency
// * source -> https://leetcode.com/problems/count-elements-with-maximum-frequency/description/?envType=daily-question&envId=2024-03-08

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int nums[] = {1,2,2,3,1,4};
    int size = sizeof(nums) / sizeof(int);
    map <int , int> freq;
    for(int i = 0; i < size ; i++)
    {
        freq[nums[i]] += 1;
    }

    int maxfreq = 0,count = 0;
    for(auto i : freq)
    {
        cout << i.first <<" "<< i.second<<endl;
        if( maxfreq < i.second ) {   maxfreq = i.second; count = 1;}
        else if(maxfreq == i.second){
            count++;
        };
    }
    cout<<"\n\n Maximum frequency -> "<< maxfreq;
    cout<<"\n\n Count of Maximum frequency -> "<< count;
    // for(auto i : freq)
    return 0;
}