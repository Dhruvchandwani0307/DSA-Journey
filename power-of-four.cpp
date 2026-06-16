#include<iostream>
using namespace std;
bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }

        while(n>0){
            if(n%4==0){
                n=n/4;
                if(n==1){
                    return true;
                }
            }
            else{
                return false;
            }
        }
       return false;// agar loop khtm and 1 nhi aaya so it will return nothing since result will be false as 1 didnt came therefore outside loop we kept return false 
    }
    int main(){
        int n;
        cin>>n;
        cout<<isPowerOfFour(n); // cout used to call because its not a void function usme use nhi hota cout // for true it will return 1 for false 0
    }