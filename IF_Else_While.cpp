#include<iostream>
using namespace std;
int main()
{
    // int a;
    // cin>>a;
    // // cout<<"value of n is "<<n<<endl;
    // if(a>0)
    // {
    //     cout<<"A is postive"<<endl;
    // }
    // else{
    //     cout<<"A is negative";
    // }

    // int a,b;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b"<<endl;
    // cin>>b;
    // // cout<<"value of and b is "<<a<<" "<<b<<endl;
    // if(a>b)
    // {
    //   cout<<"A is greater";
    // }
    // else{
    //     cout<<"B is greater";
    // }

    // int a;
    // cout<<"Enter the number"<<endl;
    // cin>>a;
    // if(a>0)
    // {
    //     cout<<"A is positive.";
    // }
    // else if(a<0)
    // {
    //     cout<<"A is negative.";
    // }
    // else{
    //     cout<<"A is 0";
    // }

    // char ch;
    // cout<<"Tell me the character ";
    // cin>>ch;
    // if('z'>=ch && ch>='a')
    // {
    //     cout<<"Lower case";
    // }
    // else if('Z'>=ch && ch>='A')
    // {
    //     cout<<"Upper case";
    // }
    // else{
    //     cout<<"It is not alphabet";
    // }


    // int n;
    // cout<<"Tell me the number"<<endl;
    // cin>>n;
    // int i = 1;
    // while(i<=n)
    // {
    //     cout<<i<<endl;
    //     i=i+1;
    // }

    // int n,i,sum;
    // cout<<"tell me the number "<<endl;
    // cin>>n;
    // i = 1;
    // sum = 0;
    // while(i<=n)
    // {
    //     sum = sum + i;
    //     i = i+1;
    
    // }
    // cout<<sum;

    // int n,i;
    // cout<<"Tell me the number"<<endl;
    // cin>>n;
    // i = 2;
    // while(i<=n)
    // {
    //    int a = n%i;
    //    i = i+1;
    //    if(a == 0 && i != n){
    //     cout<<"It is not a prime number";
    //     i=n+1;
    //    }
    //    else if(n%i==0 && i == n)
    //    {
    //     cout<<"It is a prime number";
    //     i=n+1;
    //    }
    // }

    // while(i<n)
    // {
    //     if(n%i == 0){
    //         cout<<"Not Prime";
    //     }
    //     i=i+1;
    // }



    // int n;
    // cout<<"tell me the pattern you want to print"<<endl;
    // cin>>n;

    // int i = 1;
    // while(i<=n)
    // {
    //  int j = 1;
    //  while(j<=n)
    //  {
    //     cout<<"*";
    //     j=j+1;
    //  }
    //  cout<<endl;
    //  i = i+1;
    // }

    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



}