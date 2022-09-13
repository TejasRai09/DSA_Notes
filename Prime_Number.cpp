#include <iostream>
using namespace std;

int main(){
    cout<<"Tell me the number"<<endl;
    int n;
    cin>>n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            cout<<"It is not a prime number";
            isPrime = 0;
            break;
        }
        
    }
    if(isPrime == 1)
    {
        cout<<"is a prime number"<<endl;
    }


    for (int i = 0; i < 5; i++)
    {
        cout<<"hey"<<endl;
        cout<<"hii"<<endl;
        continue;
        cout<<"reply"<<endl;
    }
    
    

}