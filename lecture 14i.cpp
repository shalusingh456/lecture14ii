/*#include<iostream>
using namespace std;
void swap(int*x, int*y) //a,b are different
{
	int c;  //x and y are the ointer s to a, b ---> they store the address of a and b
	c= *x;   // to get a,b from x and y we need difference the pointer 
	*x = *y;
	*y = c;
	 
	 cout<<"The swapping is complete"<<endl;
	     
}
int main()
{
	int a,b;
	a=3;
	b=4;
	swap(&a,&b);
	cout<<"The value of a and b after the swap are :"<<a<<" "<<b;
	return 0;
	}*/
	
	
	//Arrarpassing
	
	#include<iostream>
	using namespace std;
	int main()
	{
	int a[10];
	
	cout<<"values for comparioson : "<<endl;
	
	
	cout<<"the value of a      is "<<a<<endl;
	cout<<"the value of address a[0] is "<<&a[0]<<endl;
	cout<<"the value of address a[1] is "<<&a[1]<<endl;
	   return 0 ;	
	}