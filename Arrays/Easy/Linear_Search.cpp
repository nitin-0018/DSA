/* Program to find out the first occurance of given element in an array */

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int k, int size){
for(int i=0;i<size;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1, 4, 5, 2, 6, 7};
    int size=sizeof arr/sizeof arr[0];
    int k=0;
    cin>>k;

    int result=linearSearch(arr, k, size);
    cout<<"First Occurance is : "<<result;
    
}