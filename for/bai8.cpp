//liet ke so chinh phuong
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin>>n;
    for(long long i=1;i<=sqrt(n);i++){
            cout<<i*i<<" ";  
    }

    return 0 ;
}