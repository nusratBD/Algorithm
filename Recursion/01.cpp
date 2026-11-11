#include<iostream>
using namespace std;
void sum(int n){
if(n>5){
    /*
    প্রথমে Recursion1 10 থেকে 6 পর্যন্ত stack এ যাবে।
    Then যখন stack থেকে function গুলো execute হওয়া
    শুরু হবে ঠিক তখনই Recursion2 stack এ যাওয়া শুরু হবে।
    */
    //Recursion 1
    sum(n-1);
    cout<<"First recursion: "<<n<<endl;
    //Recursion 2
    sum(n-1);
    cout<<"Second recursion: "<<n<<endl;
}
}
int main(){
    sum(10);
}
