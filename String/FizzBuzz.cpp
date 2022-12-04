/*
Given an integer n, return a string array answer (1-indexed) where:
answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
Input: n = 3
Output: ["1","2","Fizz"]

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
*/

#include<iostream>
using namespace std;
vector<string> fizzBuzz(int n) {
    vector<string>v;
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0)
        v.push_back("FizzBuzz");
        else if(i%3==0)
        v.push_back("Fizz");
        else if(i%5==0)
        v.push_back("Buzz");
        else if(i%3==0 && i%5==0)
        v.push_back("FizzBuzz");
        else
        v.push_back(to_string(i));
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    
}
