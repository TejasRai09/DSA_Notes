#include <iostream>
using namespace std;

int main(){

    char ch = '1';
    int num = 1;
    cout<<endl;

    switch( ch ){

        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
            //    break;
        case '1': switch(num){
            case 1: cout<<" value of num is "<<num<<endl;
                  break;
        }
               break;

        default:cout<<"It is a default case"<<endl;

    }
    cout<<endl;
    

}
    

// int main(){

//     int a,b;
//     cout<<"Enter the value of a "<<endl;
//     cin>>a;

//     cout<<"Enter the value of b "<<endl;
//     cin>>b;

//     char op;
//     cout<<"Enter the operation you want to perform"<<endl;
//     cin>>op;

//     switch(op){
//         case '+':{cout<<(a+b)<<endl;}
//                  break;

//         case '-':cout<<(a-b)<<endl;
//                  break;
//         case '*':cout<<(a*b)<<endl;
//                 break;
//         case '/':cout<<(a/b)<<endl;
//                 break;

//         case '%':cout<<(a%b)<<endl;
//                 break;        
//         default:cout<<"please enter a valid operation"<<endl;
//     }

// }





// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans*a;
//     }
    
//     return ans;
// }
// int main(){
//     // pow(a,b)

//     // int a,b;
//     // cin>>a>>b;

//     int ans = power();
//     int an = power();
//     int ab = power();
    
//     cout<<ans<<endl;
//     cout<<an<<endl;
//     cout<<ab<<endl;
 

// }




// 1 -> even
// 0 -> odd
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }

// }
// int main(){
//     int num;
//     cin>>num;
//     if(isEven(num)){
//         cout<<"Number is even"<<endl;

//     }
//     else{
//         cout<<"Number is odd"<<endl;
//     }
// }


// int nCr(int n, int r){
    
//     int n_factorial=1;
//     for (int i = 1; i <= n; i++)
//     {
//         n_factorial = n_factorial*i;

//     }
//     int r_factorial = 1;
//     for (int i = 1; i <= r; i++)
//     {
//         r_factorial = r_factorial*i;

//     }
//     int n_r_factorial = 1;
//     for (int i = 1; i <= n-r; i++)
//     {
//         n_r_factorial = n_r_factorial*i;

//     }
//     int factorial = (n_factorial)/((r_factorial)*(n_r_factorial));
//     return factorial;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int fac = nCr(a,b);
//     cout<<fac;
// }


// Function signature
// void printCounting(int n){
//     // Function body
//     for (int i = 1; i <=n; i++)
//     {
//         cout<<i<<endl;
//     }
//     return ;
// }
// int main(){
//     int n;
//     cin>>n;
//     // Function calling
//     printCounting(n);
// }



// bool isPrime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i==0){
//             return 0;
//         }
  
//     }
//     return 1;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime){
//         cout<<"it is a prime number";
//     }
//     else{
//         cout<<"Not a prime number";
//     }
// }