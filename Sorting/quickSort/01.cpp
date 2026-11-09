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
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}
swap(A[l],A[j]);
return j;
}
void quickSort(int A[], int l, int h){
if(l<h){
    int j=Partition(A,l,h);
    quickSort(A,l,j-1);
    quickSort(A,j+1,h);
}
}
int main(){
int A[]={9, 4, 2, 11, 5, 8, 16, 18, 6};
int n=sizeof(A)/sizeof(A[0]);
quickSort(A, 0, n-1);
cout<<"Sorted Array: "<<endl;
for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
}
cout<<endl;
}
