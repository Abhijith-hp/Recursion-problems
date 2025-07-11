#include<iostream.h>

using namespace std;

int fabnoci(int n){
    if(n<=1) return n;

    return fabnoci(n-1)+fabnoci(n-2);
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
   cout<<fabnoci(n);
}