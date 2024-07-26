#include<iostream>
using namespace std;

int main()
{
    string text;
    text = "Hi guys how are you doing today, did you get time to watch the new spiderverse film and now I want you to find the letter with the maximum freq in this sentence";

    // cout<<text[0]<<endl;
    // cout<<text[1]<<endl;
    // cout<<text[2]<<endl;
    // cout<<text[3]<<endl;

    //To store all the frequencies I wil first define an array of size 26
    int freq[26];

    int i;

    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<text.length();i++)
    {
        if(text[i] != ' ')
        {
            freq[text[i]-'a']++;
             
             //We are finding the index of which we have to increment directly from the value of text[i]-'a'
        }
    }
    char temp;
    int max;

    for(i=0,temp='a';i<26;i++)
    {
        cout<<"The frequency of the character "<<temp<<" is "<<freq[i]<<endl;
        temp++;

        if(freq[i]>max)
        {
            max = freq[i];
        }
    }
    cout<<endl<<"The letter with maximum frequency is "<<max<<endl;

    return 0;

}
