#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
    long long a ,b ,c;
    cin>>a>>b>>c;
    cout<<min(c , min(a,b))<<" ";
    cout<<max(c , max(a,b));
    return 0;
}