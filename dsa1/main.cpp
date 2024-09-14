#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main()
{
    set <int> myset;
    for(int i=0; i<10;i++){
        myset.insert(i);
    }
    for(auto it= myset.begin();it!= myset.end(); it++){
        cout<<*it<<endl;
    }
    /*
    int months;
    cout<<"Enter the number of months you have saved: ";
    cin>>months;

    float total = 0;

    float monthsArray[months];

    for(int i=0;i<months;i++){
        cout<<"Enter the amount for month "<<i+1<<": ";
        cin>>monthsArray[i];
        total+=monthsArray[i];
    }
    float average = total/months;
    float inTwoYears = average*24;
    cout<<"Total"<<":"<<total<<endl;
    cout<<"Average"<<":"<<average<<endl;
    cout<<"inTwoYears"<<":"<<inTwoYears<<endl;
    */


    return 0;
}

