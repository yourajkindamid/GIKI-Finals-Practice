#include<iostream>
using namespace std;
class go;
class og{
    int a = 300;
    og(){
        cout<<"constructer ban gaya"<<endl;
    }
   
    public:

    //int a =300;
    friend class go;
    

};
class go : public og{
       public:
       
    //og  ag;
    void display(){
        cout<<"a :"<<a<<endl;
    }

    friend void ali(go &g) {};
};

void ali(go &g)
{
    cout << g.a;
}

int main(){
    go g;
    g.display();

   

    return 0;
}