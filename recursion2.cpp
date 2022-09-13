#include <iostream>
using namespace std;

int fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    
}

void reachHome(int src,int dest){
    cout<<src<<endl;
    cout<<dest<<endl;
    // base case
    if(src==dest){
        cout<<"phoch gya"<<endl;
        return;
    }
    // processing
    src++;
// copy of src will be passed?
    // recursive call
    reachHome(src,dest);
}

int main(){

    int dest = 10;
    int src = 1;

    reachHome(src,dest);
    
return 0;
}