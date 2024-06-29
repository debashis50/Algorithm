#include<bits/stdc++.h>
using namespace std;
void shiftleft(int *A ,int n,int k)
{
    for(int j=0;j<k;j++)
   {
       for(int i=0;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
   }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
        //cout<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }
}
int main()
{
    int a[5] = {10,20,30,40,50};
    shiftleft(a,5,2);

    return 0;
}
