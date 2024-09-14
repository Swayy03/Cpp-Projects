/*
#include <iostream>
#include <list> //list operations include front(), back(), push_front(), push_back(), insert(), pop_front(), pop_back(), size(), begin(), end(), sort()
#include <stack> //stack operations include push(),pop(),empty(), top(), size();
using namespace std;

bool is_palindrome_number(int x);

int main(){
    if(is_palindrome_number(1211)){
        cout<<"True!!"<<endl;
    }
    else{
        cout<<"Not true"<<endl;
    }
    return 0;
}

bool is_palindrome_number(int x){
    int digit;
    int number = x;
    int sum= 0;
    int n=10;
    int m=1000;
    int mod =n/10;
    stack<int> digits;
    while(x>0){
        digit = x%n;
        digits.push(digit/(n/10));
        x = x-digit;
        n*=10;
    }
    n=1;
    while(!digits.empty()){
        sum = sum+(digits.top()*n);
        n*=10;
        digits.pop();
    }
    cout<<number<<": "<<sum<<"\n";
    if(number == sum){
        return true;
    }
    else{
        return false;
    }


}
*/
