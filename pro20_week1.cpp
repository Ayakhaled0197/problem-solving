#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
    long long a, b , c;
    string s , q="=";
    cin>>a>>s>>b>>q>>c;
    if(s == "+"){
        if(a + b == c) cout<<"Yes\n";
        else cout<<a + b; 
    }
    else if(s == "-"){
        if(a-b == c) cout<<"Yes\n";
        else cout<<a-b;
    }
    else if(s == "*"){
        if(a*b == c) cout<<"Yes\n";
        else cout<< a*b;
    }
}