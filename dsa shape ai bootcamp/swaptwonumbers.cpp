#include<iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
	cout<<"enter two numbers : ";
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<"after swapping a = "<<a<<" "<<"b = "<<b;
	
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
