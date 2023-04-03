#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
		Bitwise operator:-
			AND -> &
			OR  -> |
			NOT -> ~
			XOR -> ^
	*/
	// int a=4;
	// int b=6;
	// cout<<"a&b = "<<(a&b)<<endl;
	// cout<<"a|b = "<<(a|b)<<endl;
	// cout<<"~a = "<<~a<<endl;
	// cout<<"~b = "<<~b<<endl;
	// cout<<"a^b = "<<(a^b)<<endl;

/*	1 -> set bit
		Left shift:-
			5(number)<<1(number of bits to be shifted)
						<----(shift)
				000000000...101 = 5	
				shifting one bit to left
				00000000...1010	= 10
			e.g -> 3<<2
					<----(shift 2 bits)
				0000000...011 = 3
				shifting two bits to left
				00000...01100 = 12

						OR
			Simply we can say that when we left shift 
			we are multiplying number with 2
			(mostly aplicable to small numbers) 
	-------------------------------------------------------------
		Right shift:-
			5(number)>>2(number of bits to be shifted)
					(shift to bits)----->
					000000...101 = 5
					shifting two bits to right
					000000..001 = 1

					OR
			Simply we can say that when we right shift 
			we are Dividing number with 2
			
*/

	// cout<<(17>>1)<<endl;
	// cout<<(17>>2)<<endl;
	// cout<<(19<<1)<<endl;
	// cout<<(21<<2)<<endl;


/*
		Increment/Decrement operator
		Inc->
		i++ -> Post increment(use first increment later)
		++i -> Pre increment(increment first use later)

		Dec->
		i-- -> Post decrement(use first decrement later)
		--i -> Pre decrement (decrement first use later)

*/
	// int a=2,i=3;
	// cout<<a+(i++)<<endl;
	// cout<<a+(++i)<<endl;
	// cout<<a+(--i)<<endl;
	// cout<<a+(i--)<<endl;

/*	5 Questions  */
	// int a,b=1;
	// a=10;
	// if(++a)
	// 	cout<<b;
	// else
	// 	cout<<++b;
	
	// int a=1,b=2;
	// if(a-- >0 || ++b>2)
	// 	cout<<"Inside stage 1"<<endl;
	// else
	// 	cout<<"Inside stage 2"<<endl;
	// cout<<a<<" "<<b;

	// int num=3;
	// cout<<(25*(++num));


	int a=1;
	int b=a++;
	int c=++a;
	cout<<b;
	cout<<c;

	
	

	return 0;	
}
