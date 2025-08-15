//Inheritance :- Taking properties from one class to another class rather than writing those same 
//properties multiple times we can just write those properties once then inherite it to other classes
//create child class =>    class  nameOfChildClass : mode nameOfParentClass
#include<iostream>
using namespace std;
class Human{ //Parent Class / Super Class / Base Class for class Male & class Female
    public:
    int weight;
    int age;
    private:
    int height; 
    public:
    int getWeight(){
        return this->weight;
    }
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
    void setAge(int a){
        this->age = a;
    }

};
class Male: public Human{ //Sub-Class / Child Class
//          Mode   => here Mode is Public
    public:
    string name;

    void sleep(){
        cout<<"Create this function to know function call occurs or not"<<endl;
    }
};
class Female: protected Human {//Sub-Class / Child Class
//             Mode   => here Mode is Protected
//so all the properties that are public/protected(if exist) in Human will be protected and the private properties can't be accessible
//properties with protected access modifier can be access in the class and its sub-class
//it cannot be access anywhere else (including main function)
//so to access those properties we need to create getter & setter
    public:
    int getWeight(){
        return this->weight;
    }
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
    void setAge(int a){
        this->age = a;
    }
    /*int getHeight(){
        return this->height; //we can't access "height" since it is private in Human class
    }*/
//since Private data member of super/parent class can't be inherited


    int size;
    void random(){
        cout<<"Create this function to know function call occurs or not"<<endl;
    }
};
int main(){
    Male guy; //create an object under Male class
    cout<<guy.age<<endl;
    cout<<guy.weight<<endl;
    cout<<guy.name<<endl;
//above we can see we can access all the public properties that 
//Human class has & we can also access Male class's own properties "name"


    //cout<<guy.height<<endl; //can't access it since it is private in Human class //check line 73 to understand it
//Private data member of super/parent class can't be inherited


    guy.setWeight(80);
    guy.setAge(30);
    guy.name = "Guy Sense";
    cout<<guy.age<<endl;
    cout<<guy.weight<<endl;
    cout<<guy.name<<endl;

    guy.sleep();

    cout<<endl<<"Female: "<<endl;
    Female Tsunde;
    cout<<Tsunde.getAge()<<endl;
    cout<<Tsunde.getWeight()<<endl;
}

/*Base/Parent class member        Mode->                Mode->                  Mode-> 
  access specifier                Public                Protected               Private  

 
1.    Public                      Public                Protected               Private
2.    Protected                   Protected             Protected               Private
3.    Private                     Not accessible        Not accessible          Not accessible
*/
/*Here properties in Human Class except "height" is Public =>so  Base/Parent class member(except "height") access specifier is -> Public
Male class Mode is also Public
so case 1. will apply here. For all the properties(except "height") we inherent from Human Class will be Public
*/
/*Property "height" in Human Class is Private =>so  Base/Parent class member "height" access specifier is -> Private
Now even if Male class Mode is Public or private or protected
case 3. will apply here. All the properties we inherent from Human Class will be Not Accessible
That's why we can't access height in above line 48
 */

//So Private data member of super/parent class can't be inherited

/* Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t be 
accessed outside of its class. But child class can access it(protected properties). But for Private access modifier
even child class can't access it*/