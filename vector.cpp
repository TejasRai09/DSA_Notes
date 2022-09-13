#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    vector<int> a(5,1);

    vector<int> last(a);
    cout<<"print a "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }

    cout<<"Size ->"<<v.capacity();
    

    v.push_back(1);
    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;
    cout<<"First element is"<<v.front()<<endl;
    cout<<"last element is"<<v.back()<<endl;

    cout<<"Elemet at second index is "<<v.at(2)<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
       for(int i:v){
        cout<<i<<" "<<endl;
       }

       cout<<"before clear size "<<v.size()<<endl;
       v.clear();
       cout<<"after clear size "<<v.size()<<endl;




}