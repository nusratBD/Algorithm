#include<iostream>
using namespace std;
int main()
{
    int A[]= {5,1,4,2,8};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0; i<n-1; i++)
    {
        cout<<"Iteration:"<<i+1<<endl;
        for(int j=0; j<n-i-1; j++)
        {
            if(A[j+1]<A[j])
            {
                swap(A[j], A[j+1]);
            }
            for(int i=0; i<n; i++)
            {
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
    }

    cout<<endl;
}
