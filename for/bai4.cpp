//tong nghich dao
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    double s=0;
    for(int i=1;i<=n;i++){
        s+=(double)1/i;
    }

    cout<< fixed <<setprecision(3)<<s<<endl;
    return 0;
}