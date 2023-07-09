#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdio.h>
using namespace std;

// void aya_khaled(){
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r" , stdin), freopen("output.txt" ,"w" , stdout);
//     #endif
// }
int main(){
    int a , b ,c;
    cin>>a>>b>>c;
    int copy_a =a , copy_b =b ,copy_c =c;
    if(a>=b)swap(a ,b);
    if(a>=c)swap(a ,c);
    if(b>=c)swap(a ,c);
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n\n";
    cout<<copy_a<<"\n"<<copy_b<<"\n"<<copy_c;
}