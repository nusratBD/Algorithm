#include<iostream>
using namespace std;
void BinarySearch(int A[], int l, int r, int item){
int mid=(l+r)/2;
if(A[mid]==item){
    cout<<"Item found at "<<mid<<"'th index"<<endl;
    return;
}
if(l>r){
    cout<<"Item not found."<<endl;
    return;
}
if(A[mid]>item){
    r=mid-1;
    BinarySearch(A,l,r,item);
}
else{
    l=mid+1;
    BinarySearch(A,l,r,item);
}
}
int main(){
int A[]={10,20,30,40,50,60,70,80};
int n=sizeof(A)/sizeof(A[0]);
BinarySearch(A,0,n-1,5);
}
