#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sortArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

int main(){
    int arr[] = {1,4,2,6,3,8,5,10};
    int n =8;
    sortArray(arr,n);
    printArray(arr,n);
}