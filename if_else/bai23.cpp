//tao leo cau thang
//b1 so luong toi thieu leo toi thieu 
//xet so luong toi thieu ->toi da (set trong do xem so nao chia het cho boi khong)
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int min,max=n;
    if(n%2==0){
        min=n/2;
    }else{
        min=n/2+1;
    }
    int res= ((min+m-1)/m)*m;
    if(res<=max){
        cout<<res<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}