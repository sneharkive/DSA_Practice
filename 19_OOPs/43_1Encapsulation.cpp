//Encapsulation => Wrapping up Data Member & Function
//              => Information Hiding/Data Hiding
//in class if there are data members & functions both present then we achive encapsulationc through class
//Full Encapsulation Class :- all the data member in class should be private
//Advantage of Encapsulation :- 1) Data Hiding -> security increase
//                              2) if we want we can make class - "Read Only" (By not making any setter)
//                              3) Code Reuseability
//                              4) Help to do Unit Testing
#include<iostream>
using namespace std;
class ninja { //it is Full Encapsulation Class
    private: //since all the data member in this class is private
    string name = "kakashi";
    char rank;
    int age;
    public:
    string getName(){
        return this->name;
    }
    char getRank(){
        return this->rank;
    }
    int getAge(){
        return this->age;
    }
//we make it read only class since we didn't make any setter here
};
int main(){
    ninja jonin;
    cout<<jonin.getName()<<endl; //already give some value 
    cout<<jonin.getAge()<<endl; //no value is given so garbage value is stored here
}