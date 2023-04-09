//tổng ước
#include<iostream>
#include<cmath>
using namespace std;

void solve(long long n){
    long long s=0;
    for(int i=1;i<=sqrt(n);i++){
       if(n%i==0){
        s+=i;
       
       if(i!=n/i){
        s+=n/i;
       }
    }
    }
    cout<<s<<endl;
}
int main(){
    long long n;
    cin>>n;
    solve(n);
    return 0;
}