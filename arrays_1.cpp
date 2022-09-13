#include <iostream>
using namespace std;


void printArray(int arr[],int size){
    int t=size;
    cout<<"printing the array"<<endl;
    
    for (int i = 0; i < t; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){

//     // // declare
//     // int number[15];

//     // // accesing a array
//     // cout<<number[4]<<endl;
//     // // cout<<number[200]<<endl;

//     // // initializing array
//     // int second[3]={5,7,11};
//     // cout<<second[2]<<endl;

//     // int third[15]={2,7};
    
//     // int n = 15;
//     // cout<<"printing the array"<<endl;
//     // // print the array
//     // // for (int i = 0; i < n; i++)
//     // // {
//     // //     cout<<third[i]<<endl;
//     // // }

//     // // int t=10;
//     // // int fourth[10]={0};
//     // // for (int i = 0; i < t; i++)
//     // // {
//     // //     cout<<fourth[i]<<endl;
//     // // }

    
//     // // initiallizing all elements with 1 is not possible with below code
//     // int t=10;
//     // int fifth[10]={1};
//     // for (int i = 0; i < t; i++)
//     // {
//     //     cout<<fifth[i]<<endl;
//     // }

    
    
    
//     // cout<<"Everything is fine"<<endl;
    

    int third[15]={2,7};
    printArray(third, 15);
//     // int sizeOfthird = sizeof(third)/sizeof(int);
//     // cout<<sizeOfthird<<endl;


//     // int fourth[10]={0};
//     // printArray(fourth, 10);
//     // int sizeOfFourth = sizeof(fourth)/sizeof(int);
//     // cout<<sizeOfFourth<<endl;



//     char ch[5]={'a','b','c','d','e'};
//     cout<<ch[3]<<endl;

//     // it will not work cause it is an char array not integer
//     // printArray(ch,5);

//     for (int i = 0; i < 5; i++)
//     {
//         cout<<ch[i]<<endl;
//     }
    



//     cout<<"Everything is fine"<<endl;


return 0;
}

void Array(int arr[],int size,int n){
    int t=size;
    // cout<<"printing the array"<<endl;
    
    for (int i = 0; i < t; i++)
    {
        arr[i] += n;
    }
}

// int main(){

//     int arr[10]={0};
//     cout<<"Enter the number "<<endl;
//     int n;
//     cin>>n;
//     // int Arr[10] = {0};
//     Array(arr,10,n); 
//     printArray(arr,10);
    


// }