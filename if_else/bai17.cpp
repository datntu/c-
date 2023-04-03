#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    if(a>='a' && a<='z'){
        cout<<"LOWER"<<endl;
    }else{
        if(a>='A' && a<='Z'){
            cout<<"UPPER"<<endl;
        }else{
            if(a>='0' && a<='9'){
                cout<<"DIGIT"<<endl;
            }else{
                cout<<"SPECIAL"<<endl;
            }
        }
    }
    return 0;
}