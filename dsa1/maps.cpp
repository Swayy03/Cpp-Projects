/*
//using maps, create an English -Swahili dictionary
#include <iostream>
#include <map>
//map operations include insert(),erase(), clear(),count(), .first, .second, empty(), size(), begin(), end()
using namespace std;

int main(){

    map<string, string> dict;


    dict.insert(pair<string, string>("two","mbili"));
    dict.insert(pair<string, string>("one","moja"));
    dict.insert(pair<string, string>("four","nne"));
    dict.insert(pair<string, string>("three","tatu"));



    for(auto pair:dict){
        cout<<pair.first<<": "<<pair.second<<endl;
    }




    return 0;
}
*/
