//bai toan frog
#include<iostream>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    long long phai,trai;
    if(k%2==0){
        trai =phai=k/2;
    }else{
        trai=k/2;
        phai =trai+1;
    }
    cout<<phai*a-trai*b<<endl;
    return 0;
}