#include <iostream>
using namespace std;

int main(){
    
    // phli memory block ka address
    // int arr[10] = {23,122,41,67};
    // cout<<"address of first memory block is "<<arr<<endl;
     
    // int *p = &arr[0];
    // cout<<"4th "<<p<<endl;
    
    
    // cout<<"address of first memory block is "<<*arr<<endl;
    // cout<<"fifth "<<*arr + 1<<endl;
    // cout<<"sixth  "<<*(arr + 1)<<endl;
    // cout<<"seventh  "<<*(arr) + 1<<endl;
    // cout<<"eigth "<<arr[2]<<endl;
    // cout<<"9th  "<<*(arr + 2)<<endl;
    

    // int i = 3;
    // cout<<i[arr]<<endl;


    // int temp[10] = {1,2,3};
    // cout<<"the size of temp is "<<sizeof(temp)<<endl;

    // int *p1  = &0[temp];
    // cout<<"the size of pointer is "<<sizeof(p1)<<endl;
    // cout<<"the size of value at pointer is "<<sizeof(*p1)<<endl;
    // cout<<"the size of value at pointer is "<<sizeof(&p1)<<endl;
    // cout<<"1st "<<sizeof(*temp)<<endl;
    // cout<<"2nd "<<sizeof(&temp)<<endl;





    // int a[20] = {1,2,3,4,5};
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<&a[0]<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

   // will give you an error
    //arr = arr + 1;

    int *ptr = &0[arr];
    ptr = ptr + 1;
    cout<<*ptr<<endl;
    ptr = ptr - 1;
    cout<<ptr<<endl;
    cout<<arr<<endl;
    

    


return 0;
}