//Polymorphism => exist in multiple form
//Two types of polymorphism exist => 1) Compile-Time Polymorphism   2) Runtime Polymorphism

//1) Compile-Time Polymorphism (Static Polymorphism) => can be achived by => 1) Function Overloading   2) Operator Overloading
//Function Overloading => using multiple funtions with same name by giving different input(By changing input arguments)
//Operator Overloading => C++ has the ability to provide the operators with a special meaning for a data type, this ablity is known as operator overloading.
/* List of operators that can be overloaded in C++: 
  +  -  *  /  %  ^  &  |  ~  !  ,  =  <  >  <=  >=  ++  --  <<  >>  ==  !=  &&  ||  
  +=  -=   /=  %=  ^=  &=  |=  *=  <<=  >>=  []  ()  ->  ->*  new  new[]  delete[]   
  
  List of operators that cannot be overloaded in C++: 
  ::  .  .*  ?:  */


//2) Runtime Polymorphism (Dynamic Polymorphism) => Function Overriding 
/*Function Overriding / Method Overriding => is a feature that allows you to redefine the parent class method in child class based on
                         its requirement. In other words, whatever methods the parent class has by default are available in the child
                         class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child
                         class is allowed to redefine that method based on its requirement. This process is called method overriding.*/
/*Rules for Method Overriding : 
1) The method of the parent class and the method of the child must have the same name.
2) The method of the parent class and the method of the child class must have the same parameters.
3) It is possible through inheritance only.*/
