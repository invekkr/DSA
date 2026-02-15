#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int x){
    string bin = "";

    while(x){
        bin.push_back('0' + (x&1));
        x>>=1;
    }
    reverse(bin.begin(),bin.end());
    cout<<bin<<endl;
    return bin;
}

int binToDecimal(string str){
    int num = 0;

    for(char c : str){
        num = (num<<1) + (c - '0');
    }
    return num;
}
int main(){
    int x;
    cin>>x;
    int a = binToDecimal(decimalToBinary(x));
    cout<<a<<endl;
    return 0;
}