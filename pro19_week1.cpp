#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;
int main(){
    double n;
    cin>> n;
    if(n == (int)n) cout<<"int "<<(int)n<<"\n";
    else cout<<"float "<<(int)n<<" "<< n - (int)n<<"\n";
}