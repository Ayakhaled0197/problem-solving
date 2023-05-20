#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin>>n;

    cout<<n/365<<" years"<<endl<<(n%365)/30<<" months"<<endl<<(n%365%30)<<" days";

}