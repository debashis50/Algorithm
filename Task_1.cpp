#include<bits/stdc++.h>
using namespace std;
void printlist(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
        //cout<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }
}
int main()
{
    int a[5] = {10,20,30,40,50};
    printlist(a,5);

    return 0;
}
