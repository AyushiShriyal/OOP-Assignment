#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"Enter a number";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0){
            c++;
        break;

    }
    }

if(c>0)
    cout<<"Not prime";
else
    cout<<"Prime";
return 0;
}
