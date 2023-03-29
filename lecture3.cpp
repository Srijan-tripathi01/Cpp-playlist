#include<bits/stdc++.h>
using namespace std;
int main() {
	/*int a=9;
	if(a==9){
		cout<<"Niney";
	}
	if(a>0){
		cout<<"positive";
	}
	else{
		cout<<"negative";
	}
	*/
/*	int a=2;
	int b=a+1;
	if((a=3)==b){
		cout<<a;
	}
	else{
		cout<<a+1;
	}

*/
	char ch;
	cin>>ch;
	if(ch>='a'&& ch<='z'){
		cout<<"This is lowercase";
	}
	else if(ch>='A'&& ch<='Z'){
		cout<<"This is uppercase";
	}
	else if(ch>='0'&& ch<='9'){
		cout<<"This is number";
	}


	return 0;
}