/*
#include <iostream>
#include <list>
using namespace std;

class Employee{
private:
    string name;
    int age;
    string title;
public:
   string getName(){
    return name;
   }
   string setName(string nameset){
    name = nameset;
   }

   int getAge(){
    return age;
   }
   int setAge(int ageset){
    age = ageset;
   }

   string getTitle(){
    return title;
   }
   string setTitle(string titleset){
    title = titleset;
   }

   string introduceYourself(){
    cout<< "Hello, my name is "<<name<<" and I am a "<<age<<" year old "<<title<<endl;
   }



    Employee(string Name, int Age, string Title){
     name = Name;
     age = Age;
     title = Title;
    }

};

class YoutubeChannel{
    public:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;


};


int main()
{
    YoutubeChannel ytchannel1;
    ytchannel1.Name = "LogiTech";
    ytchannel1.OwnerName = "Moturi";
    ytchannel1.SubscriberCount = 240;
    ytchannel1.PublishedVideoTitles= {"Gaming for beginners", "Interesting things to buy on Jumia", "What's up gamers"};
    int videoSize = sizeof(ytchannel1.PublishedVideoTitles)/8;

    cout<<102%10<<endl;

    return 0;
}
*/
