#include<iostream>
using namespace std;
int main(){
int A[]={9,13,15,11,2};
int n=sizeof(A)/sizeof(A[0]);
for(int i=0; i<n; i++){
    int min=i;
    for(int j=i+1; j<n; j++){
        if(A[j]<A[min]){
            min=j;
        }
    }
    swap(A[i], A[min]);
}
for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
}
cout<<endl;
}
