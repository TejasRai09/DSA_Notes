#include <iostream>
using namespace std;


int maximum(int arr[][4],int row,int col,int max){
     int rowIndex = -1;
     for(int row = 0;row<3;row++){
        int add = 0;
      for(int col = 0;col<4;col++){
        add+=arr[row][col];
      }
      if(add > max){
        max = add;
        rowIndex = row;
      }
      
     }
     cout<<"The largest sum is "<<max<<endl;
     cout<<"the largest rowIndex is "<<rowIndex<<endl;
}

void sum(int arr[][4],int row,int col){
   
    for(int row = 0;row<3;row++){
        int add = 0;
      for(int col = 0;col<4;col++){
        add+=arr[row][col];
      }

      cout<<add;
      cout<<endl;
      }
}

void add(int arr[][4],int row,int col){
    for(int col = 0;col<4;col++){
        int add = 0;
      for(int row = 0;row<3;row++){
        add+=arr[row][col];
      }
      cout<<add;
      cout<<endl;
      }
}

bool isPresent(int arr[][4],int target,int row,int column){
      for(int row = 0;row<3;row++){
      for(int col = 0;col<4;col++){
        if(arr[row][col]==target){
            return 1;
        }
      }
      }
      return 0;
}

int main(){

    // create 2 d array
    int arr[3][4];
    // taking input row wise
    /*for (int i = 0; i < 3; i++)

     {
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j];
    }
    
    }*/

    // taking input column wise
    // for (int j = 0; j < 4; j++)

    //  {
    // for (int i= 0; i < 3; i++)
    // {
    //     cin>>arr[i][j];
    // }
    
    // }

    // print 
    // for (int i = 0; i < 3; i++)

    //  {
    // for (int j = 0; j < 4; j++)
    // {
    //     cout<<arr[i][j]<<" ";
    // }
    // cout<<endl;
    
    // }
    


    // int str[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int sh[3][4]= {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    // for (int i = 0; i < 3; i++)

    //  {
    // for (int j = 0; j < 4; j++)
    // {
    //     cout<<sh[i][j]<<" ";
    // }
    // cout<<endl;
    
    // }

    for (int i = 0; i < 3; i++)

     {
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j];
    }
    
    }

    for (int i = 0; i < 3; i++)

     {
    for (int j = 0; j < 4; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Enter the number to search"<<endl;
int target;
cin>>target;

if(isPresent(arr,target,3,4)){
    cout<<"Element found"<<endl;
}
else{
    cout<<"element not found"<<endl;
}

    
    
sum(arr,3,4);
add(arr,3,4);
maximum(arr,3,4,0);
    
    
    return 0;
}