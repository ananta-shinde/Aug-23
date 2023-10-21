#include<stdio.h>

class Base{
    public:
    // method overloading
    virtual void demo()
    {
        printf("this is a sinple demo text\n");
    }
    void demo(int value)
    {
        printf("this is a  demo text with value =%d\n",value);
    }
    void demo(int value1,int value2)
    {
        printf("this is a  demo text with value =%d\n",value1+value2);
    }
    void demo(char* value)
    {
        printf("this is a  demo text with value =%s\n",value);
    }
};

class derived : public Base{
    public:
    // method overriding
      void demo()
    {
        printf("this is a simple demo text from derived\n");
    }
};

int main(int argc, char const *argv[])
{
    Base b;
    b.demo(20,30);
    Base *ptr;
    
    derived d;
    derived *ptr1;
    // ptr1 = &b;
    ptr = &d;
    ptr1 = &d;
    ptr->demo();
    d.demo();
    return 0;
}
