//tong le
#include<iostream>
using namespace std;
int main(){
    int n;
    long long s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        s+=2*(long long)i-1;
    }
    cout<<s<<endl;
    return 0;
}