/*NOTES : STL
containers, algorithm, iterators

Containers : are obj that hold other obj.
* vector- dynamic arr
* deque- double ended queue
* list- linear list
(sequence containers)

(associative containers)
* map

Alogrithm : act on containers
* initialisation
* sorting 
* searching

Iterator : are obj that are use to cycle through the contents of a container
* random access
* bidirectional
* forward
* input (not retrive, forward only)
* output (not store, forward only)
* reverse

VECTOR+++++++++++++++++++++++++++++++++++
v.size() 
toupper(v[i])

LIST+++++++++++++++++++++++++++++++++++++
template <class T, class allocator= allocator<T>> class List
* end() fn points to last+1 index
* push_back()
* push_front()
* l.sort()
* l.merge(l2);

MAPS+++++++++++++++++++++++
unique keys* are maped with values*
* duplicate keys are not allowed
* value is retrived by its key
* m.insert()
* p = m.find(ch) //ch is key
* p->second or (*p).second //p is iterator

&&&&&&&&&&&&&&&&&&&&&&&__ALGORITHM_&&&&&&&&&&&
* count(v.begin(),v.end(),fname)
* count_if(v.begin(),v.end(),constant)
* remove_copy (v.begin(),v.end(),v2.begin(),' ');
* replace_copy (v.begin(), v.end(), v2.begin(), ' ');
*/

//strcpy(str,a); //str=a
//bool operator< (name a, name b){
//return stmcmp (a.get(),b.get()) < 0 ; }

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
using namespace std;
int main(){
   cout<<"a\\na";
}
/*COUNT ALGORITHM
bool divby3(int i){
   if(i%3==0) return true;
   return false;
}

int main(){
   int i=0;
   vector<int> v = {2,3,4,3,2,2};
   i=count_if(v.begin(),v.end(),divby3);
   cout<<i<<endl;
   int j= count(v.begin(),v.end(),2);
   cout<<j<<endl;
}*/
/*MAP
int main(){
   map<char,int> m;
   int i;
   for(i=0; i<26; i++){
      m.insert(pair<char,int> ('A'+i,65+i));
   }
   //m.insert(make_pair( (char)('A'+i),65+i) );
   char ch;
   cout<<"Enter key: "; cin>>ch;
   map<char,int>:: iterator p;
   p=m.find(ch);
   if(p!=m.end())
      cout<<"ASCII : "<< (*p).second;
   else
      cout<<"not found\n";
}*/
/*LIST
int main(){
   list<int>l,m;
   int i;
   for(i=0; i<10; i+=2){
      l.push_back(i);
   }
   for(i=10; i<21;i+=2){
      m.push_back(i);
   }

   list<int>:: iterator p;
   for(p=l.begin(); p!=l.end(); p++){
      cout<<*p<<" ";
   }cout<<endl;
   for(p=m.begin(); p!=m.end(); p++){
      cout<<*p<<" ";
   }cout<<endl;

   l.merge(m);
   for(p=l.begin(); p!=l.end(); p++){
      cout<<*p<<" ";
   }cout<<endl;
   // int i;
   // for(i=0; i<10; i++){
   //    l.push_back(i);
   // }
   
   // cout<<l.size()<<endl;
   // list<int>::iterator p=l.begin();
   // while(p!=l.end()){
   //    cout<<*p<<" ";
   //    p++;
   // }cout<<endl;

   // p=l.begin();
   // while(p!= l.end()){
   //    *p = *p+100;
   //    p++;
   // }
   // for(p=l.begin(); p!=l.end(); p++){
   //    cout<<*p<<" ";
   // }cout<<endl;
}
*/
/*VECTOR
class DailyTemp{
   int temp;
public:
   DailyTemp(){
      temp=0;
   }
   DailyTemp(int x){
      temp=x;
   }
   DailyTemp &operator =(int x){
      temp=x;
      return *this;
   }
   double get_temp(){
      return temp;
   }
};
bool operator < (DailyTemp a, DailyTemp b){
   return a.get_temp() < b.get_temp();
}
bool operator == (DailyTemp a, DailyTemp b){
   return a.get_temp() == b.get_temp();
}

int main(){
//accessing through iterator
int k=0; while(k--){
   vector<char> v(10);
      vector<char>::iterator p;
   p=v.begin();
   int i=0;
   while(p!=v.end()){
      *p=i+'a';
      p++; i++;
   }

   p=v.begin();
   while(p!=v.end()){
      cout<<*p<<" ";
      p++;
   }cout<<endl;
}

//storing class object
k=1; while(k--){
   vector<DailyTemp> v;
   int i;
   for(i=0; i<7; i++){
      v.push_back(DailyTemp(60+rand()%30));
   }
   for(i=0; i<v.size(); i++){
      cout<<v[i].get_temp()<<" ";
   } cout<<endl;

   for(i=0; i<v.size();i++){
      v[i]=(v[i].get_temp() - 32) * 5 / 9 ;
   }
   for(i=0; i<v.size(); i++){
      cout<<v[i].get_temp()<<" ";
   } cout<<endl;
}
}
*/