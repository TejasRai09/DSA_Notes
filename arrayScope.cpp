#include <iostream>
using namespace std;

void update(int arr[],int n){

    cout<<"Inside the fuction"<<endl;

    // updating array's first element
    arr[0] = 120;
    arr[1] = 130;
    int sum = 0;

    for (int  i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
        sum = sum + arr[i];
    } 
    cout<<endl;
    cout<<sum<<endl;


    cout<<"Going back to main function"<<endl;

}
int main(){

    int arr[3] = {1,2,3};

    update(arr, 3);

    for (int  i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}