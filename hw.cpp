// Counting setBits

#include <iostream>
using namespace std;

int setBits(int a, int b){
    int count =0;
    while (a!=0 || b!=0){
        int t = a&1;
        int s = b&1;
        if(t == 1){
            count = count + 1;
            cout<<t<<"  "<<count<<endl;

        }
        if(s == 1){
            count = count + 1;
            cout<<s<<"  "<<count<<endl;
        }
        a = a>>1;
        b = b>>1;
    }
    return count;
}

int main(){
    cout<<"Tell me the first number "<<endl;
    int a;
    cin>>a;
    cout<<"tell me the second number "<<endl;
    int b;
    cin>>b;
    
    int setbit = setBits(a,b);
    cout<<"the setbit of given number is "<<setbit;
    
return 0;
}