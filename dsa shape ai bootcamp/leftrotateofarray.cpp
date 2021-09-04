#include<iostream>
using namespace std;

int main()
{
    int n,i,j,rotation,temp;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout<<"enter the value of by which array is to be rotated :";
    cin>>rotation;
    cout << "enter elements of array:";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    while(rotation!= 0)
    {
         for(i=0;i<n;i++)
        {
            if(i==0)
            temp =arr[i];

            if(i<n-1)
            arr[i]=arr[i+1];

            if(i==n-1)
            arr[i]=temp;
        }
        rotation--;
    }
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
	}
	
	
} 
