#include<iostream>
using namespace std;
int partition(int A[], int l, int h){
int pivot=A[l];
int i=l;
int j=h;
while(i<j){
    while(i<=h && A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        swap(A[i], A[j]);
    }
}
swap(A[l],A[j]);
return j;
}
void quickSort(int A[], int l, int h){
    if(l<h){
    int j=partition(A,l,h);
    quickSort(A,0,j-1);
    quickSort(A,j+1,h);
    }
};
int main(){
int A[]={9, 3 , 7, 11, 4, 13, 18, 5, 6};
int n=sizeof(A)/sizeof(A[0]);
quickSort(A, 0, n-1);
cout<<"Array after sorting: "<<endl;
for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
}
}
