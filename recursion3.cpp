#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sorted(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        
    }
    
}

void print(int arr[],int size){
    cout<<"Size of array is "<<size<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

bool found(int arr[],int size, int key){
    print(arr,size);
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool ans = found(arr + 1,size-1,key);
        return ans;
    }
    return false;
}

int sum(int arr[],int size){
    if(size == 1){
        return arr[size-1];
    }
    int ans = arr[0] + sum(arr+1,size-1);
    return ans;
}

bool isSorted(int arr[],int size){

    // base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainigPart = isSorted(arr+1,size-1);
        return remainigPart;
    }
}

int main(){

    // int arr[11] = {1,2,3,4,5,6,6,6,6,6,7};
    int arr[11] = {2,4,1,5,3,6,7,9,8,10,14};
    int size = 11;

    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;

    }
    else{
        cout<<"not sorted"<<endl;
    }
    cout<<"The sum is "<<sum(arr,11)<<endl;;
    if(found(arr,11,6)){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    sorted(arr,11);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
return 0;
}