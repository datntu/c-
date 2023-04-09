//đường đi ngắn nhất
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int k=a+b+c;
    if(k>2*(b+c)){
        k=2*(b+c);
    }
    if(k>2*(a+c)){
        k=2*(a+c);
    }
    if(k>2*(a+b)){
        k=2*(a+b);
    }
    cout<<k<<endl;
    return 0;
}