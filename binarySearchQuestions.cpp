#include <iostream>
using namespace std;

int leftOccurence(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(key == arr[mid]){

            ans = mid;
            end = mid -1;

        }
        else if(key>arr[mid]){

            start = mid + 1;

        }
        else{

            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;

}


int rightOccurence(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(key == arr[mid]){

            ans = mid;
            start = mid + 1;

        }
        else if(key>arr[mid]){

            start = mid + 1;

        }
        else{

            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;

}

int main(){

    int arr[10]={1,2,3,3,3,3,4,5,6,7};
    cout<<leftOccurence(arr,10,3)<<endl;
    cout<<rightOccurence(arr,10,3)<<endl;
    
return 0;
}

int maxLength(int arr[],int size)
{
    int start = 0;
    int end = size - 1;
    
}

// int getPivot(int arr[],int n){

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e){
//         if(arr[mid]>= arr[0]){
//             s= mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
    
// }

// int main(){
//     int arr[5] = {3,8,10,17,1};
//     cout<<"Pivot is "<<getPivot(arr,5);
// }




