#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    char a;
    cin>>a;
    if(int(a)>=65 && int(a)<=90){
        int x = a + 32;
        cout<<char(x);
    }
    else if(int(a)>=97 && int(a)<=122 ){
        int y = a - 32;
        cout<<char(y); 
    }
}