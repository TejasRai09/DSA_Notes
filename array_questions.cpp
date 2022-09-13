#include <iostream>
using namespace std;

// reverse(int arr)

int main(){
     int arr[8] = {1,2,3,4,5,6,7,4 };
     int n = 8;
     int i = 0;
     cout<<"kya scene"<<endl;
        while(i<n){
            int count = 1;
            int j = 0;
            while(j<n){
                if(arr[i]==arr[j]){
                    count+=1;
                    // cout<<arr[i]<<" ";
                    // cout<<count<<" "<<endl;
                    
                }
                j++;
            }
            if(count==3){
                cout<<arr[i]<<endl;
                cout<<i<<endl;
            }
            i++;
        }
}
