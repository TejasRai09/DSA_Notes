#include <iostream>
using namespace std;


void update(int **p2){
    // p2 = p2+1;
    // kuch change hoga?

    // *p2 = *p2+1;
     // kuch change hoga?

     **p2 = **p2 + 1;
      // kuch change hoga?

}

int main(){

    int i = 5;
    int *p = &i;
    int** p2 =&p;
    
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
    cout<<endl<<endl;

   
    cout<<"sab shi chl rha hai "<<endl;

    cout<<"printing p"<<p<<endl;
    cout<<"printing address of p "<<&p<<endl;
    cout<<"printing p2 "<<p2<<endl;
    cout<<"printing value at p2"<<*p2<<endl;
    cout<<"printing value of value  at p2 "<<**p2<<endl;
    

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;
    
 
return 0;
}