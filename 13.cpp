#include<iostream>

using namespace std;

int main ()

{
    int i ,j,k;
    for(i=;i>=1;i++)
    {
        for(k=1 ;k<=i-1;k++)
        {
            cout<<"  ";
        }
        for(j=i;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

