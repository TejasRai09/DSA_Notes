#include <iostream>

using namespace std;

bool palindrome(char name[],int size){
    int s = 0;
    int e = size - 1;
    while(s<=e){
        if(name[s] != name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[]){
    int count = 0;
    for (int i = 0;name[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}
char reverseString(char name[]){
    int count = getLength(name);
    for (int i = count-1; i >= 0; i--)
    {
        cout<<name[i];
    }
    cout<<endl;
    
}

void reverse(char[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        // swap(name[s++],name[e--]);
    }
}
int main(){

    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    // name[2] = '\0';
    // cout<< name <<endl;
    cout<<"Your name is "<<endl;
    cout<<name<<endl;
    int n = getLength(name);
    
    cout<<"The length of the array is "<<getLength(name)<<"."<<endl;
   cout<<"Reverse of your name is ";
   reverseString(name);
//    cout<<"Again the reverse is "<<reverse(name,getLength(name));
  cout<<"It is a palindrone "<<palindrome(name,n);
    
return 0;
}