#include<bits/stdc++.h>
using namespace std;
void shiftleft(int A[] ,int n)
{
    for(int i=1;i<n;i++)
    {
        A[i-1]=A[i];
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
        //cout<<(A+i)<<" "<<*(A+i)<<" "<<A[i]<<endl;
    }
}
int main()
{
    int a[5] = {10,20,30,40,50};
    shiftleft(a,5);

    return 0;
}
