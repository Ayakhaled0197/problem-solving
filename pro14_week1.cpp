#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x;
    cin>>x;
    int y = x/1000;
    if(y%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }
}