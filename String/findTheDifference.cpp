/*
You are given two strings s and t.
String t is generated by random shuffling string s and then add one more letter at a random position.
Return the letter that was added to t.
*/
#include<iostream>
#include<string>
using namespace std;
char findTheDifference(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int ans=0;
    for(int i=0;i<s.size();i++)
        if(s[i]==t[ans])
        ans++;
        else
        break;
        
        return t[ans];
    }
int main(){
    string s,t;
    
}
