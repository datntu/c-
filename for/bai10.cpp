//kiem tra so 2023
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int check=0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(tmp==2022){
            check=1;
        }
    }
    if(check==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}