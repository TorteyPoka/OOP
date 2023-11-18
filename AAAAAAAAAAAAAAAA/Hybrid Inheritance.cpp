#include<iostream>

using namespace std;

class A
{
public:
    virtual void display()=0;
    int a;
    void get_a(int x)
    {
        a=x;
    }
}; 

class B:public A
{
    public:
    int b;
    void get_b(int y)
    {
        cout<<a;
        b=y;
    }
};
class E
{
    public:
    int e;
    void get_e(int y)
    {
        e=y;
    }
    void display()
    {
        cout<<"e="<<e<<endl;
    }
};

class C: public B
{
    public:
    int c;
    void get_c(int z)
    {
        cout<<a;
        c=z;
    }
    void display()
    {
        cout<<"c="<<c<<endl;
    }
};

class D: public C, public E
{
public:
    int d;
    void get_d(int w)
    {
        d=w;
    }
    void display()
    {
        cout<<"d="<<d<<endl;
    }
};

int main()
{
    D obj;
    obj.get_a(10);
    obj.get_b(20);
    obj.get_c(30);
    obj.get_d(40);
    obj.get_e(50);
    obj.display();
    return 0;
}
