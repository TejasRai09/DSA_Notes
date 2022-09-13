 #include <iostream>
 #include <stack>
 using namespace std;
 
 int main(){

    stack<string> s;
    s.push("love");
    s.push("hate");
    s.push("lust");
    s.push("envy");

    cout<<"Top element is "<<s.top()<<endl;
    s.pop();
    cout<<"Top element is "<<s.top()<<endl;
    cout<<"size is "<<s.size()<<endl;


    
 return 0;
 }