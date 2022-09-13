#include <iostream>
using namespace std;

int factorial(int n){

    // base case
    if(n==0){
        return 1;
    }
    
//    cout<<n<<endl;
    return  n*factorial(n-1);
}

int power(int n){
    if(n==0){
        return 1;
    }
    int smaller = power(n-1);
    int bigger = 2*smaller;
    return bigger;
}
void print(int n){
    if(n==0){
        return;
    }
    
    

    // recursive relation
    cout<<n<<endl;
    print(n-1);
    // cout<<n<<endl;

}
int main(){

    int n;
    cin>>n;

    // int ans = factorial(n);
    // int ans = power(n);
    print(n);

    // cout<<ans<<endl;
    
return 0;
}
