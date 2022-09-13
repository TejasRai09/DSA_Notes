#include <iostream>
using namespace std;

int score = 15;

void a(int i){
    cout<<score<<" in a"<<endl;
    score++;
  cout<<i<<endl;
//   b(i);
}

void b(int& i){
   cout<<i<<endl;
   cout<<"inside b "<<score<<endl;
}

#define PI 3.14
int main(){

    // int r = 5;
    // // double pie = 3.14;
    // double area = PI * r*r;
    // cout<<"AREA is "<<area<<endl;

    int i = 5;
    a(i);
    b(i);
    cout<<"inside main function "<<score<<endl;
    {
        int i = 2;
        cout<<i<<endl;
    }
cout<<i<<endl;
    
return 0;
}

// inline functions

// void func(int a,int b){
//     a++;
//     b++;
//     cout<<a<<" "<<b<<endl;
// }
// inline int getMax(int& a , int& b){
//      return (a>b) ? a:b;
// }

// int main(){
//     int a = 1,b=2;
//     int ans = 0;
// //     func(a,b);
// //     cout<<a<<" "<<b<<endl;

//      if(a>b){
//         ans = a;
//      }
//      else{
//         ans = b;
//      }

//      ans = getMax(a,b);
//      cout<<ans<<endl;
//      a = a+2;
//      b = b+1;
//     ans = getMax(a,b);
//      cout<<ans<<endl;
// }

// DEFAULT ARGUMENTS

// void print(int arr[],int n=5,int start = 0){
//     for (int i = start; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }


// int main(){

//     int arr[5]={1,4,7,9,18};
//     print(arr);
// }