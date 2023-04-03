//bài toán domino
#include<iostream>
using namespace std;

int main(int argc ,char *argv[]){

    long long m,n; //m la so cot, n la so hang
    cout<<"nhap M va N: ";
    cin>>m>>n;
    if(n%2==0){
        cout<<n/2*m<<endl;
    }else{
        cout<<(n-1)/2*m +m/2<<endl;
    }
    return 0;
}