//Lecture 10
#include<iostream>
using namespace std;

void printHi()
{
	cout << "Hi" << endl;
}

int sum(int a, int b)
{
	int c;
	 c = a + b; // a+b will result 10 therefore, the value of c over here is 10
	a=500;
	return c;
}

int main()
{
	printHi();  //First calling the printHi function
	int a,b;
	int c;
	

	 a = 4;
	 b = 6;
	 c = 75;  // the value of c over here in the function is 75
	 
	 int d;
	 d = sum(a, b);
//	cout << "The sum is equal to " << d <<" "<< "The value of a is"<<a; // the value of a should turn out to be 500
cout<<"The value of c is "<<c<<" "<<endl;
	return 0;
}

//lecture 10 pt6
#include<iostream>
using namespace std;

void printHi()
{
	cout << "Hi" << endl;
}

int sum(int a, int b)
{
	int c;
	 c = a + b; // a+b will result 10 therefore, the value of c over here is 10
	a=500;
	//cout<<"The value of c is"<<c<<endl;
	
	return c;
}

//void swap (int a, int b)

    void swap(int &a, int &b)
    
    // by including the keyword & After the name of the datatype and before the variable name we are able to change the actual prenthesis
    
    
{
	
	int c;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b;
	return;
}
	int fun(int &a, int &b)
	{
		a=99999;
		b=99999;
	cout<<"The values of a and b after swapping outside the fun function are: "<<a<<" "<<b;
	
	int main()
	{
	
	printHi();  //First calling the printHi function
	int a,b;
	int c;
	

	 a = 4;
	 b = 6;
	 c = 75;  // the value of c over here in the function is 75
	 
	 int d;
	 d = sum(a, b);
//	cout << "The sum is equal to " << d <<" "<< "The value of a is"<<a; // the value of a should turn out to be 500
cout<<"The value of c is "<<c<<" "<<endl;
	return 0;
}