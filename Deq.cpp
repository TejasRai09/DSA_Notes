#include <iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    for (int i:d){
        cout<<i<<" ";
    }
    // d.pop_front();
    // cout<<endl;
    // for (int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"Print first elemet idex "<<d.at(1);
    cout<<"Print first elemet  "<<d.front();
    cout<<"Print last elemet  "<<d.back();

    cout<<"Empty or not "<<d.empty()<<endl;
return 0;
}