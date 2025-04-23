# 👨‍🏫 C++ Object-Oriented Programming (OOP) Concepts

This document demonstrates the key **Object-Oriented Programming (OOP)** concepts in C++ using the `teacher` class. It covers:
- Encapsulation
- Abstraction
- Inheritance
- Polymorphism
- Constructors and Constructor Overloading

---

## 🧱 Encapsulation

Encapsulation is the wrapping of data and functions into a single unit, i.e., a class. It also involves **data hiding**, where internal object details are hidden from the outside world.

📦 **Example**:
```cpp
#include<iostream>
#include<string>
using namespace std;

class teacher {
private:
    double salary;
public:
    string name;
    string dept;
    string subject;

    void changeDept(string newdept){
        dept = newdept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    teacher t1;
    t1.name= "Ritik";
    t1.dept = "CSE";
    t1.setSalary(400000);
    // cout << t1.getSalary();
    return 0;
}
🏗️ Constructor
A constructor is a special method invoked automatically when an object is created. It has no return type and the same name as the class.

🧩 Properties of Constructors
Name same as the class.

No return type.

Called once automatically upon object creation.

Allocates memory for the object.

🧪 Non-Parameterized Constructor
cpp
Copy
Edit
#include<iostream>
#include<string>
using namespace std;

class Teacher {
public:
    Teacher(){
        salary = 50000;
    }
    int salary;
};

int main(){
    Teacher Anand_Kamal;
    cout << "Anand Kamal Salary is : " << Anand_Kamal.salary;
}
🎛️ Parameterized Constructor

#include<iostream>
#include<string>
using namespace std;

class teacher {
public:
    string name;
    string dept;
    int salary;

    teacher(string n, string dep, int sal){
        name = n;
        dept = dep;
        salary = sal;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Dept : " << dept << endl;
    }
};

int main(){
    teacher Shanu("Ritik", "CSE", 50000);
    Shanu.getInfo();
}
📝 Constructor Overloading: Having multiple constructors with different parameters in the same class.

