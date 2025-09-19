#include <iostream>
using namespace std;

int wordGame(string oldword,int level){
    string newword;
    cout<<level+1<<"\tGuess a word starting from '"<<oldword[oldword.length()-1]<<"'\t:";
    cin>>newword;
    if(newword[0]==oldword[oldword.length()-1]){
        return wordGame(newword,++level);
    }else{
        return level;
    }
}
int main(){
    //word game
    //algorithm
    //formulae
    string word;
    cout<<"Enter your name : ";
    cin >> word;int level;
    level=wordGame(word,0); //function call
    cout<<"\n# WAS A GOOD GAME."<<endl;
    cout<<"YOUR LEVEL IS "<<level<<endl;
}