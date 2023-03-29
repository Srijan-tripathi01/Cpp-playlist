#include<bits/stdc++.h>
using namespace std;

int main(){

/* print--
	* * * *
	* * * *
	* * * * 
	* * * *
*/	
	// int i=0;
	// while(i<4){
	// 	int j=0;
	// 	while(j<4){
	// 		cout<<"*"<<" ";
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/* print-
	1 1 1
	2 2 2
	3 3 3
*/	
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=0;
	// 	while(j<n){
	// 		cout<<i<<" ";
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/* print-
	1 2 3
	1 2 3
	1 2 3 
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=n){
	// 		cout<<j<<" ";
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print-
	3 2 1
	3 2 1
	3 2 1
	 
*/
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=n;
		while(j>=1){
			cout<<j<<" ";
			j--;
		}
		cout<<endl;


		i++;
	}

	return 0;
}