#include <iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p = p+1;
    // cout<<"inside function"<<p<<endl;
    *p=*p+1;
    
}

int getSum(int *arr,int n){
    cout<<"size is "<<sizeof(arr)<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
   return sum; 
}

int main(){

    int value  = 5;
    int *p = &value;
    
    
    // 0
    print(p);
   
    cout<<"before updatation "<<p<<endl;
    update(p);
    cout<<"after updatation "<<p<<endl;

    cout<<"before updatation "<<*p<<endl;
    update(p);
    cout<<"after updatation "<<*p<<endl;


    int arr[6] = {1,2,3,4,5,6};

    cout<<"sum is "<<getSum(arr+3,3)<<endl;
    
return 0;
}