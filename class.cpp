/* #include<iostream>
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

int main(){
    teacher t1,t2,t3,t4;
    t1.name= "Ritik";
    t1.dept = "CSE";
    t1.salary = 110000; // can't access salary because it is in private class
    cout << t1.name<<endl ;
    t1.setSalary(400000);
    cout << t1.getSalary();

    return 0;
} */




            // There are four pillers of Object oriented programming

            // 1. Encapsulation --> Encapsulation is Wrapping of of data & member functions
                                    // in a single unit called class
                            
                            
                // Concept of Data hiding //

                        /* class Account {
                            private:
                            double accountBalance; // This is the Data hiding concept
                                                   // these data are not accessible anymore.
                            string password;

                            public:
                            string userName ;
                            string accountId;
                        }; */


                        // Constructor Call

                                                               /* class student{
                                                                    public: 
                                                                    student(){ // Constructor Made by programmer.
                                                                        cout << "You Called me!"<<endl; 
                                                                        dept = "CSE";
                                                                    };
                                                                    string name;
                                                                    double regNo;
                                                                    string dept;
                                                                };
                                                                NOTE:- If a programmer does not make its own costructor then compiler automatically create a constructor 
                                                                int main()
                                                                {
                                                                    student s1; // Constructor call
                                                                    cout << s1.dept;
                                                                } */
                            // Properties of Constructor 
                            // 1.Name Same as class
                            // 2.constructor does not have a return type 
                            // 3.Only called once (automatically) ,at Object creation .
                            // 4.Memory allocation happens when costructor is called .
                // Types of Constructors :
                        // 1. Non - parameterized Constructor


                                                               /* #include<iostream>
                                                                #include<string>
                                                                using namespace std;

                                                                class Teacher {
                                                                    // Non - parameterised Constructor Example .
                                                                    public:
                                                                        Teacher(){
                                                                             salary=50000;
                                                                        }
                                                                    int salary;
                                                                };

                                                                int main(){
                                                                    Teacher Anand_Kamal;
                                                                    cout <<"Anand Kamal Salary is : " <<Anand_Kamal.salary;
                                                                } */


                        // 2. Parameterised Constructor

                                                            /*#include<iostream>
                                                            #include<string>
                                                            using namespace std;

                                                            class teacher {
                                                                public:
                                                                    string name;
                                                                    string dept;
                                                                    int salary;
                                                                    teacher(string n,string dep,int sal){
                                                                        name = n;
                                                                        dept = dep;
                                                                        salary = sal;
                                                                    }
                                                                    void getInfo(){
                                                                        cout << "Name : " << name;
                                                                        cout << "dept : " << dept;
                                                                    }
                                                            };

                                                            int main(){
                                                                teacher Shanu("Ritik", "CSE",50000);
                                                                Shanu.getInfo();
                                                            }*/
            // Note : If we make Multiple constructor in a single class , this phenomenon is known as Contructor Overloading.
            
                            // Concept of ""This"" Operator --> Symbol (this ->) used to classify the parameter

                                                            /*#include<iostream>
                                                            #include<string>
                                                            using namespace std;

                                                            class teacher {
                                                                public:
                                                                    string name;
                                                                    string dept;
                                                                    int salary;
                                                                    teacher(){
                                                                        cout << "Information of Teachers\n";
                                                                    }
                                                                    teacher(string name,string dept,int salary){
                                                                        this->name = name; // This type of declaration gives no result .
                                                                        this->dept = dept; // left dept is for object property and right one is for constructor.
                                                                        this->salary = salary;
                                                                    }
                                                                    void getInfo(){
                                                                        cout << "Name : " << name<<"\n";
                                                                        cout << "dept : " << dept<<"\n";
                                                                        cout << "Salary : "<<salary<<"\n";
                                                                    }
                                                            };
                                                            int main(){
                                                                teacher();
                                                                teacher Shanu("Ritik", "CSE",50000);
                                                                Shanu.getInfo();
                                                                teacher Sandeep("Sandeep","CSE",2000);
                                                                Sandeep.getInfo();
                                                            }*/
            //  NOTE : ""This"" is a special type of pointer which points to the current object for which the constructor is called.
// Important                        //  this->prop is same as *(this).props



                        // 3 . Copy Constructor--->  Special Constructor(default ) used to copy properties of one object into another.

                                                            // <code/>
                                                          /*     #include<iostream>
                                                                #include<string>
                                                                using namespace std;

                                                                class Teacher{
                                                                    public:
                                                                    string name ;
                                                                    string dept;
                                                                    int salary;

                                                                    Teacher(string name , string dept, int salary){
                                                                        this->name  = name;
                                                                        this->dept = dept;
                                                                        this->salary= salary;

                                                                    }

                                                                    // Custom copy constructor
                                                                    Teacher(Teacher &orgObj){
                                                                        cout <<"I am Custom Copy Cnstructor....\n";
                                                                        this->name=orgObj.name;
                                                                        this->dept=orgObj.dept;
                                                                        this->salary=orgObj.salary;

                                                                    }
                                                                    void getInfo(){
                                                                        cout << "Name : "<<name<<"\n";
                                                                        cout << "Dept : "<<dept<<"\n";
                                                                        cout << "Salary : "<<salary<<"\n";
                                                                    }

                                                                };
                                                                int main(){
                                                                    Teacher shanu("Ritik","CSE",5000000);
                                                                    // Teacher Ritik(shanu); // Default Copy constructor.
                                                                    Teacher Ritik(shanu); // Custom copy custructor
                                                                    Ritik.getInfo();
                                                                }
                                                                    */ 


                                              /*  types of copy that copy constructor made :
                                                    1. Shallow copy :--> A Shallow copy of an object copies all the members value from one object to another.
                                                    
                                                            eg.   <code />
                                                                   
                                                    #include<iostream>
                                                    #include<string.h>
                                                    using namespace std;

                                                    class student{
                                                        public:
                                                        string name;
                                                        float cgpa;

                                                        student(string name , float cgpa){
                                                            this ->name = name;
                                                            this ->cgpa = cgpa;
                                                        }
                                                        student(student &origianl)
                                                        {
                                                            this->name= origianl.name;
                                                            this->cgpa = origianl.cgpa;
                                                        }
                                                        void getInfo(){
                                                            cout<<"name : "<<name<<endl;
                                                            cout<<"cgpa : "<<cgpa<<endl;
                                                        }
                                                    };

                                                    int main(){
                                                        student shanu("Ritik",8.54);
                                                        student babu(shanu);
                                                        babu.getInfo();
                                                    }
                                        */ 

                               /*       Diadvantages of shallow copy costructor
                            --> Problem arises in shallow copy constructor when we use dynamic memory allocation or in simple words we say it pointer(*)
                            Let's discuss it with the help oof code
                            
                                    #include<iostream>
                                    #include<string.h>
                                    using namespace std;

                                    class student {
                                        public:
                                        string name ;
                                        float *cgpaptr;

                                        student(string name,float cgpa){
                                            this->name = name;
                                            cgpaptr = new float;
                                            *(this->cgpaptr) = cgpa;
                                        }

                                        student(student &obj){
                                            this->name = obj.name;
                                            this->cgpaptr =obj.cgpaptr;
                                        }
                                        void getInfo(){
                                            cout <<"name : "<<name<<endl;
                                            cout <<"name : "<<*cgpaptr<<endl;

                                        }
                                    };
                                    int main(){
                                        student shanu("Ritik", 8.64);
                                        student kala(shanu);
                                        
                                        *(kala.cgpaptr)=5.2;
                                        kala.getInfo();
                                        return 0;
                                    }

                                    Problem :---> Here kala ka cgpa effects shanu ka cgpa which we don't Want. */
            // 2.Abstraction    -->     
            // 3.Inheritance 
            // 4.Polymorphism
