//ki tu ke tiep 
#include <iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a =='z' || a=='Z'){
        cout<<"a"<<endl;
    }else{
        if(a>='A' && a < 'Z'){
            a+=32+1;
            cout<<a<<endl;
        }else{
            a+=1;
            cout<<a<<endl;
        }
    }
    return 0;
}