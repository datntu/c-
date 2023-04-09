//tich cac uoc
#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    int res=1;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            res*=i;
        }
    }
    cout<<res<<endl;

    return 0;
}