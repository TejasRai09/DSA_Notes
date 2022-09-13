#include <iostream>
using namespace std;
/*
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}
// ye bad practice hai

int* fun(int n){
    int* ptr = &n;
    return ptr;
}
*/
void update(int& n){
    n++;
}

int main(){

    /*int i = 5;
    int& j = i;
    cout<<&i<<endl;
    cout<<&j<<endl;
    cout<<i++<<endl;
    cout<<++j<<endl;
    */

   int n = 5;

   cout<<"Before "<<n<<endl;
   update(n);
   cout<<"After "<<n<<endl;

   cout<<func(n);
return 0;
}