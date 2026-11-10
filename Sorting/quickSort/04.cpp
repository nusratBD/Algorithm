#include<iostream>
using namespace std;
int Partition(int A[], int l, int h){
int i=l;
int j=h;
int pivot=A[l];
while(i<j){
    while(i<h && A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        swap(A[i], A[j]);
    }
}
swap(A[l], A[j]);
return j;
}
void quickSort(int A[], int l, int h){
if(l<h){
    int j=Partition(A, l, h);
    quickSort(A,l,j-1);
    quickSort(A,j+1,h);
}
}
int main(){
int A[]={8,15,12,3,6,7,18,9};
int n=sizeof(A)/sizeof(A[0]);
quickSort(A,0,n-1);
for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
}
cout<<endl;
}
