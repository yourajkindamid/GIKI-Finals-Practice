#include <iostream>
using namespace std;
class ali{
    string s = "uv";
    public:
    int a=10000000;
    ali(){
        cout<<"ali"<<endl;
    }
    ~ali(){
        cout<<"wjdjwdjwd"<<endl;
    }

};

ali* obj( const ali  ki,const ali kai)  {
   
    ali aaaa;
    aaaa.a=ki.a+kai.a;

   
    
    return new ali();
    
   
}
int main(){
    ali ka;
    ali kai;
    ali aaaa;
    aaaa=*obj(ka,kai);
    cout<<aaaa.a << endl;
    ali *na[]={nullptr};
    na[0]=new ali();
    *na[0]= aaaa;
    cout<<na[0]->a;
    cout << endl;
    cout << sizeof(*na[0]) << endl << sizeof(na[0]) << endl << sizeof(aaaa);
    return 0;
}