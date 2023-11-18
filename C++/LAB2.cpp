@@ -1,136 +1,179 @@
#include <iostream>

using namespace std ;
//LECTURE 3

// scope resolution operator DONE 
// multiple Inheritance DONE 
// Multilevel Inheritance  DONE  AMBIGUITY PROBLEM
// Multilevel Inheritance  DONE  
// Protected  DONE 
// heirarchy inheritance DONE 

//LECTURE 4

// CONSTRUCTOR DESTRUCTOR 
//AMBIGUITY PROBLEM with inheritance
// Setter & GETTER 
// CONSTRUCTOR  

int x = 10 ;



class Employee {
public:
    string Designation ;
    int salary ; 

    Employee ()
    {
        cout << "Default Constructor is called - " << endl;

    }
    // void printInfo () {

    //     cout << "Name - " << "PRINTING EMPLOYEE" << endl;
        
    // }

private:
       string marritalStatus ; // Not inherited 

protected:
    int performanceBonus ;

public:
void setMarStatusBonus (string status, int bonus )
{
    marritalStatus = status;
    performanceBonus = bonus;

}


public:
    void printInfo () {

        cout << "Marital Status-->  "   << marritalStatus << endl;
        
    }



};

// public everyone 
// private own 
// 



class Animal {

    public: 
        string name ;
        int age ;



};

class Mammal : public Animal {
    public:
        bool warmBlood; // True or False
    private:
       string scientificName ;

    private:
        bool endangered ; // True or False
    
};



// SOLID

class Human : public Mammal{


 
public:
    void printInfo () {

    // void printInfo () {

    //     cout << "Name - " << name << endl;
        cout << "Name - " << "PRINTING HUMAN" << endl;
        
    // }
    }


};


// ??????? Performancebonus


/*
   Base Class Members    public derivation    private derivation   protected derivation                   
1. private members         not inherited        not inherited           not inherited
2. protected members       protected              private                  protected
3. public members          public                  private                  protected


*/



// -- TAssistant -- Employee + Human 

// Multiple Inheritance 
class TAssistant : public Employee, public Human{





// performanceBonus but Protected 

// Encapsulation & Abstraction (Getter & Setter Method)
public:
   void printInfo () {

cout << "GG" << endl;        
    }



};


int main () {
  
Employee employee1;
employee1.setMarStatusBonus("Married", 100);

employee1.printInfo();
// employee1.Name ="Hossain" ;

// employee1.printInfo(); 

TAssistant ta;
// TAssistant ta;

int x = 19;
// int x = 19;
// employee1.Designation;
:: x = 100 ; //gloab changed
//gloab changed

cout << :: x << endl ;
// cout << :: x << endl ;

// ta.name = "Hossain" ;
// ta.salary = 100000000;

// ta.printInfo();

Human hum;
// Human hum;

hum.warmBlood;
// hum.warmBlood;


// ta.printInfo();

return 0;
} 