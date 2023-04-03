#include<iostream>
using namespace std;

int main(){
	char a;
	cin>>a;
	if(a>='a' && a<='z'){
		a-=32;
		cout<<a<<endl;
	}else{
		if(a>='A' && a<= 'Z'){
		a+=32;
		cout<<a<<endl;
		}else{
		cout<<a<<endl;
		}
	}
}
