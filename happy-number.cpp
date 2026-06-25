    #include<iostream>
    using namespace std;
    bool isHappy(int n) {

        // har unhappy number 4 tk jaata toh isliye not equal to 4 tk chalai and for this return false
        while (n != 1 && n != 4) {

            int sum = 0;

            while (n != 0) {
                int digit = n % 10;
                sum = sum + digit * digit;
                n = n / 10;
            }

            n = sum;
        }

        if (n == 1) {
            return true;
        }

        return false;
    }
    int main(){
        int n;
        cin>>n;
        if(isHappy(n)){
            cout<<"its a happy number";
        }

        else{
            cout<<"not a happy number";
        }
    }