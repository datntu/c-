//cap so nhan
#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cb;
    if(b%a==0){
        cb=b/a;
        if(b*cb ==c && c*cb== d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}