//1) Compile-Time Polymorphism => can be achived by => 1) Function Overloading   2) Operator Overloading
/*Operator Overloading => C++ has the ability to provide the operators with a special meaning for a data type,
this ablity is known as operator overloading.*/

/* List of operators that can be overloaded in C++: 
  +  -  *  /  %  ^  &  |  ~  !  ,  =  <  >  <=  >=  ++  --  <<  >>  ==  !=  &&  ||  
  +=  -=   /=  %=  ^=  &=  |=  *=  <<=  >>=  []  ()  ->  ->*  new  new[]  delete[]   
  
  List of operators that cannot be overloaded in C++: 
  ::  .  .*  ?:  */
#include<iostream>
using namespace std;
class A {
    public:
    int a;
    int b;
    int add(){
        return a + b;
    }

    void operator+(A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Output : " << value2 - value1 <<endl;
        //cout<<"Hello"<<endl; //if we comment out the above 3 lines only then output will be "Hello"
        //so we can say "obj1 + obj2;" it is type of function call 
    }
    void operator() (){
        cout<<"I am bracket"<<endl;
    }
};

int main(){
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;//it is basically a function call //here we use '+' operator but we actually subtract them this is called operator overloading
    obj1();
}
