//tinh cap so cong 
//ct tinh tong: na+(n(n-1)/2)d
#include<iostream>
using namespace std;

int main(){
    long long n,u1,d;
    cin>>n>>u1>>d;
    long long s=0;
    s=u1*n +(n*(n-1)/2)*d;
    cout<<s<<endl;
    return 0;
}