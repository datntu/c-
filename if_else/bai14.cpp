#include<iostream>
using namespace std;

int main(){
    float a,a1,b,c;
    cin>>a>>a1>>b>>c;
    int x=(a+a1+b+c)/4;
    if(x<5){
        cout<<"YEU"<<endl;
    }else{
        if(x>=5 && x<6.5){
            cout<<"TRUNG BINH"<<endl;
        }else{
            if(x>=6.5 && x<8){
                cout<<"KHA"<<endl;
            }else{
                cout<<"GIOI"<<endl;
            }
        }
    }
    return 0;
}