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

/* print- for n=3
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

/* print- for n=3
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

/*	print- for n=3  H/W
	3 2 1
	3 2 1
	3 2 1

*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=n;
	// 	while(j>=1){
	// 		cout<<j<<" ";
	// 		j--;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/* print- for n=3
	1 2 3
	4 5 6 
	7 8 9
*/
	// int n;
	// cin>>n;
	// int i=1;
	// int count=1;
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=n){
	// 		cout<<count<<" ";
	// 		count++;
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4
	*
	* *
	* * *
	* * * *
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=i){
	// 		cout<<"*"<<" ";
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4
	1 
	2 2
	3 3 3
	4 4 4 4
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=i){
	// 		cout<<i<<" ";
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4
	1
	2 3
	4 5 6
	7 8 9 10
*/
	// int n;
	// cin>>n;
	// int i=1;
	// int count=1;
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=i){
	// 		cout<<count<<" ";
	// 		count++;
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4
	1
	2 3
	3 4 5
	4 5 6 7
*/
	// int n;
	// cin>>n;
	// int i=1;
	
	// while(i<=n){
	// 	int j=1;
	// 	int count=i;
	// 	while(j<=i){
	// 		cout<<count<<" ";
	// 		count++;
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/* without using count (H/W) */
	// int n;
	// cin>>n;
	// int i=1;
	
	// while(i<=n){
	// 	int j=1;
		
	// 	while(j<=i){
	// 		cout<<i+j-1<<" ";						
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4
	1
	2 1
	3 2 1
	4 3 2 1
*/
	// int n;
	// cin>>n;
	// int i=1;
	
	// while(i<=n){
	// 	int j=i;		
	// 	while(j>0){			
	// 		cout<<j<<" ";
	// 		j--;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=3
	A A A
	B B B
	C C C
*/
	// int n;
	// cin>>n;
	// int i=1;
	// char ch='A';
	
	// while(i<=n){
	// 	int j=1;
		
	// 	while(j<=n){
	// 		cout<<ch<<" ";			
	// 		j++;
	// 	}
	// 	ch+=1;
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=3
	A B C
	D E F
	G H I
*/
	// int n;
	// cin>>n;
	// int i=1;
	// char ch='A';
	
	// while(i<=n){
	// 	int j=1;		
	// 	while(j<=n){
	// 		cout<<ch<<" ";
	// 		ch+=1;			
	// 		j++;
	// 	}
		
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=3
	A
	B B
	C C C
*/
	// int n;
	// cin>>n;
	// int i=1;
	// char ch='A';
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=i){
	// 		cout<<ch<<" ";
	// 		j++;
	// 	}
	// 	ch++;
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4
	A
	B C
	D E F
	G H I J
*/
	// int n;
	// cin>>n;
	// int i=1;
	// char ch='A';
	// while(i<=n){
	// 	int j=1;
	// 	while(j<=i){
	// 		cout<<ch<<" ";
	// 		j++;
	// 		ch++;
	// 	}
		
	// 	cout<<endl;
	// 	i++;
	// }

/*	print - for n=4
	A
	B C
	C D E
	D E F G
*/

	// int n;
	// cin>>n;
	// int i=0;
	
	// while(i<n){
	// 	int j=0;	
	// 	char ch='A'+i;
	// 	while(j<=i){			
	// 		cout<<ch<<" ";
	// 		j++;
	// 		ch++;			
	// 	}
		
	// 	i++;				
	// 	cout<<endl;
	// }

/* print-
	D
	C D
	B C D
	A B C D
*/
	// int n;
	// cin>>n;
	// int i=0;
	// while(i<=n){
	// 	int j=1;
	// 	char ch='A'+n-i;
	// 	while(j<=i){

	// 		cout<<ch<<" ";
	// 		ch++;
	// 		j++;
	// 	}
	// 	i++;
	// 	cout<<endl;
	// }

/*	print- for n=3 H/W easy way
	A B C
	B C D
	C D E
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=1;
	// 	char ch='A'+i-1;
	// 	while(j<=n){
	// 		cout<<ch<<" ";
	// 		j++;
	// 		ch++;
	// 	}
	// 	i++;
	// 	cout<<endl;
	// }

/*	print- for n=4
	   *
	  **
	 ***
	****
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int space=n-i;
	// 	while(space){
	// 		cout<<" ";
	// 		space--;
	// 	}
	// 	int j=1;
	// 	while(j<=i){
	// 		cout<<"*";
	// 		j++;
	// 	}
	// 	cout<<endl;
	// 	i++;

	// }

/*	print- for n=4
	****
	***
	**
	*
*/
	// int n;
	// cin>>n;
	
	// while(n--){
	// 	int j=n+1;
	// 	while(j--){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }
/* print- for n=4
	****
	 ***
	  **
	   *
*/
	// int n;
	// cin>>n;
	// int i=0;
	// while(i<n){
		
	// 	int space=i;
	// 	while(space--){
	// 		cout<<" ";
	// 	}
	// 	int j=n-i;
	// 	while(j--){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- forn n=4 H/W
	1111
	 222
	  33
	   4
*/
	// int  n;
	// cin>>n;
	// int i=0;
	// int count=1;
	// while(i<n){
	// 	int j=0;
	// 	while(j<i){
	// 		cout<<" ";
	// 		j++;
	// 	}
	// 	int k=0;
	// 	while(k<n-i){
	// 		cout<<count;
	// 		k++;
	// 	}
	// 	cout<<endl;
	// 	count++;
	// 	i++;
	// }
/*Without using count*/
	// int n;
	// cin>>n;
	// int i=0;
	// while(i<n){
	// 	int j=0;
	// 	while(j<i){
	// 		cout<<" ";
	// 		j++;
	// 	}
	// 	int k=0;
	// 	while(k<n-i){
	// 		cout<<i+1;
	// 		k++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4 H/W
	   1
	  22
	 333
	4444
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=n-i;
	// 	while(j--){
	// 		cout<<" ";
	// 	}
	// 	int k=0;
	// 	while(k<i){
	// 		cout<<i;
	// 		k++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/* print- for n=4 H/W
	1234
	 234
	  34
	   4
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	int j=1;
	// 	while(j<i){
	// 		cout<<" ";
	// 		j++;
	// 	}
	// 	int k=i;
	// 	while(k<=n){
	// 		cout<<k;
	// 		k++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }

/*	print- for n=4 H/W
	   1
	  23
	 456
	78910
*/
	// int n;
	// cin>>n;
	// int i=1;
	// int count=1;
	// while(i<=n){
	// 	int j=n-i;
	// 	while(j--){
	// 		cout<<" ";
	// 	}
	// 	int k=0;
	// 	while(k<i){
	// 		cout<<count;
	// 		count++;			
	// 		k++;
	// 	}
	// 	i++;
	// 	cout<<endl;
	// }

/*	print- for n=4
	   1
	  121
	 12321
	1234321
*/
	// int n;
	// cin>>n;
	// int i=1;
	// while(i<=n){
	// 	// int j=1;
	// 	// while(j<=n-i){
	// 	// 	cout<<" ";
	// 	// 	j++;
	// 	// }
	// 	// int k=1;
	// 	// while(k<=i){
	// 	// 	cout<<k;
	// 	// 	k++;
	// 	// }
	// 	// int l=1;
	// 	// int m=i-1;
	// 	// while(l<i){
	// 	// 	cout<<m;
	// 	// 	m--; 
	// 	// 	l++;
	// 	// }
	// 	// cout<<endl;
	// 	// i++;
	/*less use of variables*/
	// 	int space=n-i;
	// 	while(space){
	// 		cout<<" ";
	// 		space-=1;
	// 	}
	// 	int k=1;
	// 	while(k<=i){
	// 		cout<<k;
	// 		k++;
	// 	}
	// 	int j=i-1;
	// 	while(j){
	// 		cout<<j;
	// 		j-=1;
	// 	}
	// 	cout<<endl;
	// 	i++;

	// }

/*	Print- for n=5
	1234554321
	1234**4321
	123****321
	12******21
	1********1
*/
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n-i+1){
			cout<<j;
			j+=1;
		}
		int star=(i-1)*2;
		while(star){
			cout<<"*";
			star-=1;
		}
		int k=n-i+1;
		while(k){
			cout<<k;
			k-=1;
		}
		cout<<endl;
		i++;
	}
  
	return 0;
}