//lecture 9pt3
/*#include<iostream>
using namespace std;
void printstuff()
{
	cout<<"writing my first function";  // there are no parameters
	
}
int sum(int a, int b)
{
int c;

c= a+b;
return c;
}
int main()
{
	int a,b;
	int add_sum;

	a=3;
	b=5;
	
add_sum = sum(a,b);
	
	cout<<add_sum;
	
	return 0;
}*/

//lecture 9 pt4
#include<iostream>
using namespace std;
int sum(int a, int b) // i have declared that a function called sum exi
{
	int c;
	
	a=10;
	b=11;
	c = a+b;
	return c;
	
}
int main()
{
	int a,b;
	a=3;
	b=5;
	int c;
	cout<<a<<b<<endl; // these values are  before i call the function"sum"
	c = sum(a,b);
	// int sum(int a, int b) //int a---> a, int b -----> b
	cout<<c<<endl;
	cout<<a<<b<<endl; // these values of a,b are after i call the function
	
	
	return 0;

int sum(int a, int b);
{


	return a+b;
}

}