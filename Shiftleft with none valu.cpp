#include<bits/stdc++.h>
using namespace std;
void printlist(int *A, int n){
for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        //cout<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }
    cout<<endl;
}
void shiftleft(int *A ,int n,int k)
{
    for(int j=0;j<k;j++)
   {
     for(int i=0;i<n;i++)
     {
         A[i]=A[i+1];
     }
}
for(int i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
}
int main()
{
    int a[5] = {10,20,30,40,50};
    printlist(a,5);
    shiftleft(a,5,2);

    return 0;
}
