// https://leetcode.com/problems/divide-two-integers/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor==-1)  return INT_MAX;

        // for cases where if we are getting neg in final ans, will check if our final value will be negative
        bool sign = (dividend < 0) ^ (divisor < 0);

        // changing datatype for calculation if we have +INT_MIN then we cant store it in "int"

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        long long ans = 0;

        // now we will check for the condition if (divisor * 2^k <= dividend)
        
        while(a>=b){
            long long temp = b;
            long long multiple = 1;

            while((temp<<1)<=a){    // here we are multiplying the divisor by 2 and checking if it's samller than dvd
                temp<<=1;
                multiple<<=1;
            }

            a -= temp;  // when we find the num just smaller than mul then we substract
            ans += multiple;
        }

        // we check sign and put it accdly

        if(sign)    ans = -ans;

        return (int)ans;
    }
};
int main(){
    return 0;
}