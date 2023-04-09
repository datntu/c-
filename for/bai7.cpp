//liet ke uoc vaf dem so luong tang dan
#include<iostream>
#include<cmath>
using namespace std;
void solve(int n){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ++dem;
        }
    }
    cout<<dem<<endl;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}