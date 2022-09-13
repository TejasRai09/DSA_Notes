#include<iostream>
using namespace std;
// int main(){
//         int n;
//         cout<<"Tell me the number"<<endl;
//         cin>>n;
//         int i=1;
//         while(i<=n)
//         {
//             int j=1;
//             while(j<=n)
//             {
//                 cout<<n+1-j;
//                 j=j+1;
//             }
//             cout<<endl;
//             i=i+1;
//         }
// }

// int main()
// {
//   cout<<"tell me the number"<<endl;
//   int n;
//   cin>>n;
//   int i =0;
//   while(i<n*n)
//   {
//     int j=1;
//     while(j<=n)
//     {
//         cout<<j+i<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+n;
//   }  
// }

// int main()
// {
//    cout<<"tell me the number"<<endl;
//    int n;
//    cin>>n;
//    int i = 1;
//    while(i<=n)
//    {
//     int j=1;
//     while(j<=i)
//     {
//         cout<<"*"<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    } 
// }

// int main()
// {
//    cout<<"tell me the number"<<endl;
//    int n;
//    cin>>n;
//    int i = 1;
//    while(i<=n)
//    {
//     int j=1;
//     while(j<=i)
//     {
//         cout<<j<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    } 
// }

// int main()
// {
//    cout<<"tell me the number"<<endl;
//    int n;
//    cin>>n;
//    int i = 1;
//    int count = 1;
//    while(i<=n)
//    {
//     int j=1;
//     while(j<=i)
//     {
//         cout<<count<<" ";
//         j=j+1;
//         count = count + 1;
//     }
//     cout<<endl;
//     i=i+1;
//    } 
// }

// int main()
// {
//    cout<<"tell me the number"<<endl;
//    int n;
//    cin>>n;
//    int i = 1;
//    while(i<=n)
//    {
//     int j=0;
//     while(j<i)
//     {
//         cout<<j+i<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    } 
// }

// int main()
// {
//     cout<<"Tell me the number"<<endl;
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<i-j+1<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// int main()
// {
//   cout<<"Tell me the number";
//   int n;
//   cin>>n;
//   int i =1;
//   while(i<=n)
//   {
//     int j = 1;
//     while(j<=n)
//     {
//       char ch = 'A'+i-1;
//       cout<<ch<<" ";
//       j=j+1;
//     }
//     cout<<endl;
//     i = i+1;
//   }
     
// }

// int main()
// {
//   cout<<"Tell me the number";
//   int n;
//   cin>>n;
//   int i =1;
//   while(i<=n)
//   {
//     int j=1;
//     while(j<=n)
//     {
//       char ch = 'A'+j+i-2;
//       cout<<ch<<" ";
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// int main()
// {
//   cout<<"tell me the number";
//   int n;
//   cin>>n;
//   int i =1;
//   while(i<=n)
//   {
//     int j = 1;
//     while(j<=i)
//     {
//       char ch = 'A'+i-1;
//       cout<<ch;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// int main()
// {
//   cout<<"tell me the number"<<endl;
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n)
//   {
//     int j=1;
//     while(j<=i)
//     {
//       char ch = 'A'+n-i+j-1;
//       cout<<ch<<" ";
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// int main()
// {
//   cout<<"tell me the number"<<endl;
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n)
//   {
//     int j=1;
//     while(j<=i-1)
//     {
//       cout<<" ";
//       j=j+1;
//     }
//     int z=1;
//     while(z<=n-i+1)
//     {
//       cout<<"*";
//       z=z+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

int main()
{
  cout<<"Tell me the number"<<endl;
  int n;
  cin>>n;
  int i = 1;
  while(i<=n)
  {
    int j=1;
    while(j<=n-i)
    {
      cout<<" ";
      j=j+1;
    }
    int z = 1;
    while(z<=i)
    {
      cout<<z;
      z=z+1;
    }
    int t =1;
    while(t<=i-1)
    {
      cout<<i-t;
      t=t+1;
    }
    // int x = 1;
    // while(x<=n-i)
    // {
    //   cout<<" ";
    //   x=x+1;
    // }
    
    cout<<endl;
    i=i+1;
  }
}