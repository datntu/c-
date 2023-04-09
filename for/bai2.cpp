//tong binh phuong
#include<iostream>
using namespace std;

int main(){
     unsigned int n;
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++){
        s+= i*i;
    }
    cout<<s<<endl;
    return 0;
}