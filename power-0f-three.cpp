//Given an integer n, return true if it is a power of three. Otherwise, return false.
//An integer n is a power of three, if there exists an integer x such that n == 3x.
#include<iostream>
using namespace std;
bool isPowerOfThree(int n) { // continuous divide krne pr 3 se ya jiski power check krni ki n uss k ki power hai ya nhi pehle toh n must be positive secondly must be divisible by k or here k=3 and if divisible so after continuous divison must retrun 1 that proves it as power of three
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;// since 3^0=1; therefore 1 is power of 3 made separate condition because from below logic it was missing this condition
        }
        while(n>0){
            if(n%3==0){
                n=n/3;
                if(n==1){
                    return true;
                }
             }
              else{
                return false;// if not divisible by 3
              }
            }
       return false;// if whole while got executed and we got no answer example our n became 0 on continuous division eg n=n/3 if n=2 from prev so , n=2/3=0.66 since n is of int datatype therefore it dosent store fractional and will return n=0 and further while will not execute therefore on further exeecution loop ends and function will store return false outside loop 
    }

    int main(){
        int n;
        cin>>n;
        cout<<isPowerOfThree(n); // cout used to call because its not a void function usme use nhi hota cout // for true it will return 1 for false 0
    }