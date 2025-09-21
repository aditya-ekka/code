#include<bits/stdc++.h>
using namespace std;
class c{
    static int resource;
public:
    int get_resource();
    void free_resource(){
        resource=0;
    }
};
int c::resource;
int c::get_resource(){
    if(resource){
        return 0;
    }else{
        resource=1;
        return 1;
    }
}
int main(){
    c ob1,ob2;
    if(ob1.get_resource()){
        cout<<"Obj1 has resource\n";
    }
    if(!ob2.get_resource()){
        cout<<"Obj2 denied resource\n";
    }
    ob1.free_resource();
    if(ob2.get_resource()){
        cout<<"Obj2 get resource\n";
    }
    if(ob1.get_resource()){
        cout<<"Obj1 has resource\n";
    }
}