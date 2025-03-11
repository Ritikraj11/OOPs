#include<iostream>
#include<string>
using namespace std;

class teacher {
    //Now we have to declare the properties/ atributes
    private:
        double salary;
    public:
    string name;
    string dept;
    string subject;
    

    // Now we will define the method 
    void changeDept(string newdept){
        dept = newdept;
    }

    // Accessing the private member by special functions
    // setter --> To set the value the private member
    void setSalary (double s){
        salary = s;
    }
    // getter -->Special function to access the priavte members
    double getSalary(){
        return salary;
    }
};



// int main(){
//     teacher t1,t2,t3,t4;
//     t1.name= "Ritik";
//     t1.dept = "CSE";
//     // t1.salary = 110000; // can't access salary because it is in private class
//     // cout << t1.name<<endl ;
//     t1.setSalary(400000);
//     // cout << t1.getSalary();

//     return 0;
// } 




            // There are four pillers of Object oriented programming

            // 1. Encapsulation --> Encapsulation is Wrapping of of data & member functions
                                    // in a single unit called class
                            
                            
                // Concept of Data hiding //

                        class Account {
                            private:
                            double accountBalance; // This is the Data hiding concept
                                                   // these data are not accessible anymore.
                            string password;

                            public:
                            string userName ;
                            string accountId;
                        };


                        // Constructor Call

                        class studennt{
                            public: 
                            studennt(){ // Constructor Made by programmer.
                                cout << "You Called me!"<<endl; 
                                dept = "CSE";
                            };
                            string name;
                            double regNo;
                            string dept;
                        };
                        // NOTE:- If a programmer does not make its own costructor then compiler automatically create a constructor 
                        int main(){
                            studennt s1; // Constructor call
                            // cout << s1.dept;
                        }
                            // Properties of Constructor 
                            // 1.Name Same as class
                            // 2.constructor does not have a return type 
                            // 3.Only called once (automatically) ,at Object creation .
                            // 4.Memory allocation happens when costructor is called .

            // 2.Abstraction    --> 
            // 3.Inheritance 
            // 4.Polymorphism
