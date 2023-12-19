/* 
#include<iostream>
#include<string.h>
using namespace std;
class voter{
    private:
    int votingcount;

    public:
    string name;
    int age;



    //Setter
    void votingcountsetter(int votingcount){
        this->votingcount=votingcount;
    }

    //Getter
    int votingcountgetter(){
        return votingcount;
    }

    //Function
    void printer(){
        cout<<endl<<"[ "<<"Name : "<<name;
        cout<<", Age : "<<age;
        cout<<", Voting count : "<<votingcount<<" ]"<<endl;
    }


    //Constructor
    // voter(){
    //     cout<<endl<<"I am CONSTRUCTOR"<<endl<<endl;
    // }

    //Parameterized constructor

    voter(string name,int age){
        this->name=name;
        this->age=age;
    } 
};
void once(voter &x){
    char name[21];
    int age,votingcount;
    cout<<"Enter name age votingcount "<<endl;
    cin>>name>>age>>votingcount;
    x.name=name;
    x.age=age;
    x.votingcountsetter(votingcount);
}
int main(){

    //Static
    // voter a("harry",34);
    voter a;

    once(a);

    //Dynamic
    voter *b=new voter;

    once(*b);

    //Calling a setter
    // a.votingcountsetter(24);

    

    //Calling a class function
    a.printer();
    (*b).printer();

    //Copy constructor
    (*b)=a;

    a.printer();
    (*b).printer();
} */

#include<iostream>
using namespace std;

class organism{
    public:
    void basics(){
        cout<<"Reproduction and fooding"<<endl;
    }
};
//Inheriting
class tree:public organism{
    public:
    void movement(){
        cout<<"Not moves"<<endl;
    }

    void production(){
        cout<<"Produces seeds"<<endl;
    }

};
class human{
    public:
    void movement(){
        cout<<"Movement"<<endl;
    }
    protected:
    void benifit(){
        cout<<"Non-benifit"<<endl;
    }
};

class flower: public tree,private human{
    public:
    void production(){
        cout<<"Smelling agents"<<endl;
    }
       
};

int main(){
    tree mango;
    mango.basics();
    mango.movement();

    flower juhi;
    juhi.production();
    juhi.tree::production();
    
}