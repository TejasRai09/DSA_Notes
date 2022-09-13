#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

bool binarySearch(int arr[],int s,int e,int k){
     
     print(arr,s,e);
     if(s>e){
        return false;

     }
     int mid = s + (e-s)/2;
     cout<<"value of mid is "<<arr[mid]<<endl;

     if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
      
     }
     else if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
      
     }
     else{
        return true;
     }
}

int main(){
    int arr[6]={2,4,6,10,14,18};
    int size = 6;
    int key = 2;

    if(binarySearch(arr,0,5,77)){
        cout<<"Yes i am here"<<endl;
    }
    else{
        cout<<"No i am not here"<<endl;
    }

return 0;
}