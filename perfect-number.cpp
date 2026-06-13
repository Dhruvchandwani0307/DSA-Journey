// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

//Given an integer n, return true if n is a perfect number, otherwise return false.

 

//Example 1:

//Input: num = 28
//Output: true
//Explanation: 28 = 1 + 2 + 4 + 7 + 14 //agar inka sum that is divisors ka equal to num itself aa jaye so its a perfect number
//1, 2, 4, 7, and 14 are all divisors of 28.


#include<iostream>
using namespace std;

bool checkPerfectNumber(int num) {
        int sum = 0;
        int i = 1;
        while(i<num){
            if(num%i==0){
                sum = sum+i;
            }
            i++;
        }
        if(sum==num){
            return true;
        }
        else{
            return false;
        }
        
    }
    int main(){
        int n;
        cin>>n;
        if(checkPerfectNumber(n)){ // if will execute only when function holds true since i have kept function result inside if
            cout<<n<<": is a perfect number";
        }

        else{
            cout<<"not a perfect number";
        }
    }