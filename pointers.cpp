#include <iostream>
using namespace std;

// int main(){

//     int num = 5;
//     cout<<num<<endl;

//     // adress of operator - &

//     cout<<"Adress of num is "<<&num<<endl;

//     int *p = & num;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;  

//     double d = 1.23;
//     double *p2 = &d;
//     cout<<p2<<endl;

//     cout<<" size of integer is "<<sizeof(num)<<endl;  
//     cout<<" size of pointer is "<<sizeof(p)<<endl; 


//     cout<<" size of double is "<<sizeof(d)<<endl;  
//     cout<<" size of pointer is "<<sizeof(p2)<<endl;  
// return 0;
// }

int main(){
      
    //   pointer to int is created and pointing to some garbage address
    // int *p ;

    // cout<< *p <<endl;

    // int i = 0;
    // int *q = &i;
    // int *p = 0;
    // p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;

    int num = 5;
    int a = num;
    // a++;
    int *p = &num;
    (*p)++;

    cout<<num<<endl;
    cout<<a<<endl;
    cout<<*p<<endl;

// // copying a pointer
//     int *q = p;
//     cout<<p<<" - "<<q<<endl;
//     cout<<*p<<" - "<<*q<<endl;


//     // important concept
    int i = 90;
    int *t = &i;
    cout<<  t <<endl;
    cout<<  (*t)++ <<endl;
    cout<<  *t <<endl;
    cout<<  *t <<endl;
    cout<<  i <<endl;

    t = t+1;
    cout<<*t<<endl;
    cout<<t<<endl;
    


}