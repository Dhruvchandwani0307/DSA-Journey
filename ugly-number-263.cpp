//An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
//Given an integer n, return true if n is an ugly number.
#include<iostream>
using namespace std;// using bool because answer is in yes or no ya toh ugly number hoga ya nhi value print nhi jrni want ans in true or false
bool isUgly(int n) { // if a number can be repeatedly divide by 2 or 3 or 5 and can be reduced to 1 on repeated division of number its ugly number means 2,3 and 5 m se ho uss number ke factor eg) 6 = 2*3 its ugly , 30=2*3*5 its ugly , 14 = 2*7 since 7 is not from 2,3,5 therfore not ugly since 14 cant be reduced to 1 after 1st division 14/2=7
        while(n>1){ // since stop at 1 no further division required
            if(n%2==0){
                n=n/2;
            }
            else if(n%3==0){
                n=n/3;
            }
            else if(n%5==0){
                n=n/5;
            }
            else{
                return false; // when no factor out of 2,3&5
            }
        }
        if(n==1){
            return true;//is ugly number , BOOL m we write logic for return true and false ya kisi ek ka likhdo agar true nhi hoga toh false automatically ho jayega toh kisi ek ke liye conditon define krdo and dusra wala else m aa jayega
        }
        else{
            return false;
        }  
    }
 int main(){
    int n;
    cin>>n;
    if(isUgly(n)){// if ke andar function define krdiya if function stores true value if will execute if stores false so if will not  execute
        cout<< n<<":"<<"is ugly number"; // agar if true hold krega this logic will execute
    }
    else{
        cout<<"not an ugly number";
    }
 }