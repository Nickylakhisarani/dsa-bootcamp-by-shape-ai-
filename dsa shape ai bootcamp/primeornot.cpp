#include<iostream>
using namespace std;

bool prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}

int main()
{
    int num,primeornot;
    cout << "Enter a number :";
    cin >> num;
    prime_or_not = prime(num);

    if(primeornot)
    {
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }

    
}
