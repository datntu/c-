//lat da quang truong
#include<iostream>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long ngang,doc;
    if(n%a==0){
        doc=n/a;
    }else{
        doc=n/a +1;
    }
    if(m%a==0){
        ngang =m/a;
    }else{
        ngang =m/a+1;
    }
    cout<< ngang*doc<<endl;
    return 0;
}