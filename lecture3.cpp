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
/*	char ch;
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
*/

/*	
	int n,i,a,sum;
	cin>>n;
	i=1;
	a=1;
	sum=0;
	while(i<=n){
		if(i%2==0){
			sum+=i;
			i=i+2;
						 
		}
		else{
			i++;
		}
	}
	cout<<sum;
*/	
	// float f=1;	
	// while(f<=10){
	// 	float c=((f-32)*5)/9;
	// 	cout<<"F :"<<f<<"  ";
	// 	cout<<"C :"<<fixed<<setprecision(1)<<c<<endl;
	// 	f++;
	// }
	int n;
	cin>>n;
	int i=2;
	int count=0;
	while(i<n){
		if(n%i==0){
			count+=1;
			break;
		}
		i+=1;
	}
	if(count==1){
		cout<<"Not prime"<<endl;
	}
	else{
		cout<<"Prime"<<endl;
	}

	


	return 0;
}