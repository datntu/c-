//so lon nhat , nho nhat
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    int max,min;
    cin>>a>>b>>c>>d;
     max=a;min=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(max<d) max=d;
    if(min>b) min=b;
    if(min>c) min=c;
    if(min>d) min=d;
    cout<<max<<" "<<min<<endl;
    return 0;
}