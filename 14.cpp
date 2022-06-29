#include<iostream>
using namespace std;

int main ()

{

    int i, j, k;
    for(i=5;i>=1;i--)
    {
        for(k=i-1;k>=1;k--)
        {
            cout<<" ";

        }
        for(j=i;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}


