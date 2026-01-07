#include<bits/stdc++.h>
using namespace std;
class student{
    int roll, mark;
    char name[80];
public:
    static int objCount;
    student(){
        objCount++;
    }
    void setData(int roll, int mark, char *name){
        this->roll=roll;
        this->mark=mark;
        strcpy(this->name,name);
    }
    void display(){
        cout<<"NAME : "<<name<<endl;
        cout<<"ROLL NUMBER : "<<roll<<endl;
        cout<<"MARK : "<<mark<<endl<<endl;
    }
};
int student::objCount;
int main(){
    cout<<"Total no of students : "<<student::objCount<<endl;
    student a;
    a.setData(311,86,"Aditya");
    a.display();
    student b,c;
    b.setData(304,89,"Ashwin");
    b.display();
    c.display();
    cout<<"Total no of students : "<<student::objCount<<endl;

}