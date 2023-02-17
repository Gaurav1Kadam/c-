#include<iostream>
using namespace std;
void create(int *a,int b){
    for(int i=0;i<b;i++){
        cin>>a[i];
    }
}
int largest(int *a,int b){
    int temp;
    for(int i=0;i<b-1;i++){
        if(a[i]<a[i+1]){
            temp=a[i+1];
        }
    }
    return temp;
}
int slargest(int *a,int b,int c){
    int temp;
    for(int i=0;i<b-1;i++){
        if(a[i]<c){
            
        }
    }
    return temp;
}
int main(){
    int test,i,n,L,sL;
    cin>>test;
    cin>>n;
    int arr[n];
    create(arr,n);
    L=largest(arr,n);
    sL=slargest(arr,n,L)
    do{ 
                



        i++;
    }while(i<test);



}