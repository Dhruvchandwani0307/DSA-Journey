//Given an integer num, return the number of digits in num that divide num.

//An integer val divides nums if nums % val == 0.

 

#include<iostream>
using namespace std;
int countDigits(int num) {
        int n=num;
        int count = 0;

        while(n>0){
            int digit = n%10;
            if(digit !=0 && num%digit==0){ // since something divide by 0 is undefined and digit of number must divide whole number these kind of digits count we want
            count++;}
            n=n/10;}// to delete last digit in each iteration from number so that n%10 extracts each unique digit of number each time
             return count;
        }

int main(){
    int num = 1724; // 4 , 2 and 1 divides 1724 therefore count of these number that divide 1724 from 1,7,2,4 that is digits of this is 3
    cout<<countDigits(num);
}
