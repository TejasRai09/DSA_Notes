#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Tejas");
    q.push("Rai");
    q.push("yoo");

    cout<<"front element is "<<q.front()<<endl;
    q.pop();
    cout<<"front element is "<<q.front()<<endl;
    
return 0;
}