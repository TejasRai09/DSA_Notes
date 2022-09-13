#include <iostream>
using namespace std;

// int power(int x, int y){
//     if(x==0){
//         return 1;
//     }
//     int ans = y * power(x-1,y);
//     return ans;
// }

int power(int x, int y){
    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }
    int ans = power(x,y/2);
    if(y%2==0){
        return ans*ans;
    }
    else{
        return x*ans*ans;
    }
}

bool palindrome(string& str,int i,int j){
    if(i>j){
        return -1;
    }
    if(str[i]!=str[j]){
        return false;
    }
    i++;
    j--;
    palindrome(str,i,j);
    return true;
}
void reverse(string& str,int i, int j){

    cout<<"call received for "<<str<<endl;
    // base case
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

        // recursive call
        reverse(str,i, j);
    }


int main(){

    string name = "sunrise";
    reverse(name,0, name.length()-1);
    cout<<name<<endl;
    if(palindrome(name,0,name.length()-1)){
        cout<<"hanji hai"<<endl;
    }
    else{
        cout<<"naji, na hai"<<endl;
    }

    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    
return 0;
}