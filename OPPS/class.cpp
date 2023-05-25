#include <iostream>
using namespace std;

class Animal
{
    private:
    int weight;
    public:
    //constructor 
    Animal(){
        cout << "The constructor is called " << endl;
    }
    int age;
    string name;

    // behavior functions 
    void eat(){
        cout << "eating" << endl;
    }
    void sleep(){
        cout << "Sleeping" << endl;
    }
    int getWeight(){
        return weight;
    }
    void setWegiht(int w){
        weight = w;
    }
};
int main()
{
    // cout << sizeof(Animal) << endl;
    // Object Creation 
    // 1 Static allocation 
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "LION";
    // cout << ramesh.age << endl;
    // cout << ramesh.name << endl;
    // ramesh.eat();
    // ramesh.sleep();
    // ramesh.setWegiht(120);
    // cout << ramesh.getWeight() << endl;
    
    Animal * suresh = new Animal;
    Animal * suraj = new Animal;
    suresh -> age = 16 ;
    suresh -> eat();
    suresh -> sleep();
    // 2.Dynamic allocation 
    return 0;
}