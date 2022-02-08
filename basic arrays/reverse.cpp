#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int a[]={4,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a,n);//array name gives base address
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
   
}
