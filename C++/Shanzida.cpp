#include<iostream>
#include<string.h>
using namespace std;

class animal
{
    protected:
    char name[10];
    int age;


    public:
    void print()
    {
        cout << "The name is " << name << " and age is " << age <<endl;
    }
};
class zebra : public animal
{
    public:
   void set_here (char x, int y)
    {
        name[10] = x;
        age = y;   
    }
};
// class dolphine : public animal
// {
//      public:
//     dolphine(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
// };
int main()
{
    zebra z;

    char n[10] = "aaa" ;

    z.set_here(n[10], 4);
    
    z.print();
    // dolphine d("dol", 4);
    // d.print();

    return 0;
};