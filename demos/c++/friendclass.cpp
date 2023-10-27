#include<stdio.h>

class Mainclass{
    int private_id;
    protected:
    int protected_id;

    Mainclass()
    {
        this->private_id = 100;
        this->protected_id = 200;
    }
    friend class FriendClass;
};

class ChildClass : Mainclass{
    
    public:
    int getId(){
       return this->protected_id;
    }
};

class FriendClass{
    public:
       int getId()
       {
          Mainclass m;
          return m.private_id;
       }
};


int main(int argc, char const *argv[])
{
    
    ChildClass child;
    printf("%d",child.getId());
    FriendClass fr;
   printf("%d",fr.getId());
    return 0;
}
