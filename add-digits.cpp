//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
//Example 1:

//Input: num = 38
//Output: 2
//Explanation: The process is
//38 --> 3 + 8 --> 11
//11 --> 1 + 1 --> 2 
//Since 2 has only one digit, return it.

#include <iostream>
using namespace std;
 int addDigits(int num) {
        while(num>=10){// since to sum till number is a double digit no
            int sum = 0;// since we have to reset sum after every iteration of outer loop as we want sum of digits of last double digit number and that we want to store in sum
          while(num>0){ // since when digit finishes eg)for 1st itr 38 will be used directly for second itr int n = 38/10=3.8=3 since int in third itr int n = 3/10=0.3=0  sic=nce int ignores decimal part and n was of int type
            sum= sum+num%10;
            num = num/10;
          }
       num = sum; // returns sum of digit of last double digit number  
        }
        return num;
    }
    int main(){
        int num;
        cin>>num;
        cout<<"sum of digits of last doube digit number is:";
        cout<<addDigits(num);
    }