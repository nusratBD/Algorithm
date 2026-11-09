#include<iostream>
using namespace std;
int main()
{
    int A[]= {5,2,7,3,10,4};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0; i<n; i++)
    {
        cout<<"Iteration-"<<i+1<<endl;
        int key=A[i];
        int j=i-1;
        while(j>=0 && A[j]>key)
        {
             A[j+1]=A[j];
             for(int i=0; i<n; i++){
                cout<<A[i]<<" ";
             }
             cout<<endl;
             j--;
        }
        A[j+1]=key;
        for(int i=0; i<n; i++){
                cout<<A[i]<<" ";
             }
             cout<<endl;
    }

    cout<<endl;
    cout<<endl;
}
