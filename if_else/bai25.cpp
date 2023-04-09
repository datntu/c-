//đổi tiền cơ bản
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int tong=0;
    tong += n/100;
    n %=100;
    tong+=n/20;
    n %=20;
    tong+=n/10;
    n %=10;
    tong+=n/5;
    n %=5;
    tong +=n;
    cout<<tong<<endl;
    return 0;
}
