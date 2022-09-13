#include <iostream>
using namespace std;
#include<array>;

int main(){
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index is "<<a.at(2)<<endl;

    cout<<"First elemet is "<<a.front()<<endl;
    cout<<"Last element is "<<a.back()<<endl;

    cout<<"Empty or not "<<a.empty()<<endl;


}