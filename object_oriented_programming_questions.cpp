/*Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.*/

// #include<iostream>
// #include<cstring>

// using namespace std;

// class Person{
//     //data members
//     private:
//     string name;
//     int age;
//     string country;

//     public:
//     Person(string name="abc", int age=0, string country="xyz");

//     //Accessor methods
//     string getName(){return name;}
//     int getAge(){return age;}
//     string getCountry(){return country;}

//     //Mutator methods
//     void setName(string name);
//     void setAge(int age);
//     void setCountry(string country);

//     friend ostream & operator<<(ostream &out, Person &p);

// };

// Person::Person(string name, int age, string country){
//     this->name=name;
//     this->age=age;
//     this->country=country;
// }

// void Person::setName(string name){
//     this->name=name;
// }

// void Person::setAge(int age){
//     this->age=age;
// }

// void Person::setCountry(string country){
//     this->country=country;
// }

// ostream & operator<<(ostream &out, Person &p){
//     out<<"Name: "<<p.name<<endl;
//     out<<"Age: "<<p.age<<endl;
//     out<<"Country: "<<p.country<<endl;

//     return out;
// }

// int main(){
//     Person p("Hamilton", 38, "Monaco");
//     cout<<p;
//     return 0;
// }


/*Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.*/

// #include<iostream>

// using namespace std;

// class Car{
//     //data members
//     private:
//     string company;
//     string model;
//     int year;

//     //member functions
//     public:
//     Car(string company="abc", string model="xyz",int year=0);
//     //accessor methods
//     string getCompany(){return company;}
//     string getModel(){return model;}
//     int getYear(){return year;}

//     //mutator methods
//     void setCompany(string company);
//     void setModel(string model);
//     void setYear(int year);
//     friend ostream & operator<<(ostream &out, Car &c);
// };

// int main(){
//     Car c("Toyota","Innova",2009);
//     cout<<c;
//     return 0;
// }

// Car::Car(string company, string model,int year){
//     this->company=company;
//     this->model=model;
//     this->year=year;
// }

// void Car::setCompany(string company){
//     this->company=company;
// }

// void Car::setModel(string model){
//     this->model=model;
// }

// void Car::setYear(int year){
//     this->year=year;
// }

// ostream & operator<<(ostream &out, Car &c){
//     out<<"Company: "<<c.company<<endl;
//     out<<"Model: "<<c.model<<endl;
//     out<<"Year: "<<c.year<<endl;

//     return out;
// }

/*Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.*/

// #include<iostream>

// using namespace std;

// class BankAccount{
//     //data members
//     private:
//     int account_number;
//     float balance=0;

//     //member functions
//     public:
//     BankAccount(float balance=0);
//     float getBalance(){return balance;}
//     void Deposit(float amt);
//     void Withdraw(float amt);
//     friend ostream & operator<<(ostream &out, BankAccount &b);
// };

// int main(){
//     BankAccount b(5000);
//     cout<<b;
//     b.Deposit(700);
//     cout<<b;
//     b.Withdraw(1000);
//     cout<<b;
    
//     return 0;
// }

// BankAccount::BankAccount(float balance){
//     this->account_number=453646356;
//     this->balance=balance;
// }

// void BankAccount::Deposit(float amt){
//     this->balance += amt;
// }

// void BankAccount::Withdraw(float amt){
//     this->balance -= amt;
// }

// ostream & operator<<(ostream &out, BankAccount &b){
//     out<<"Balance: "<<b.balance<<endl;
//     return out;
// }


/*Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/

// #include<iostream>

// using namespace std;

// class Triangle{
//     //data members
//     private:
//     float side1, side2, side3;

//     //member functions
//     public:
//     Triangle(float a=0, float b=0, float c=0);
//     float getSide1(){return side1;}
//     float getSide2(){return side2;}
//     float getSide3(){return side3;}
//     void setSide1(float s);
//     void setSide2(float s);
//     void setSide3(float s);
//     string isEquilateral();
//     string isIsosceles();
//     string isScalene();
// };

// int main(){
//     Triangle t(3,2,4);
//     cout<<t.isScalene();
//     return 0;
// }

// Triangle::Triangle(float a, float b, float c){
//     this->side1=a;
//     this->side2=b;
//     this->side3=c;
// }

// void Triangle::setSide1(float s){
//     this->side1=s;
// }
// void Triangle::setSide2(float s){
//     this->side2=s;
// }
// void Triangle::setSide3(float s){
//     this->side3=s;
// }

// string Triangle::isEquilateral(){
//     return (side1==side2 && side2==side3)?"Yes":"No";
// }
// string Triangle::isIsosceles(){ 
//     return ((side1==side2 || side2==side3 || side3==side1) && (side1!=side2 || side2!=side3 || side3!=side1))?"Yes":"No";        
// }
// string Triangle::isScalene(){
//     return (side1!=side2 && side2!=side3)?"Yes":"No";
// }


/*Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.*/


// #include <iostream>
// #include <cstring>

// using namespace std;

// class Employee {
//     // Data members
//     private:
//     std::string EmpName;
//     int EmpId;
//     double salary;

//     public:
//     // Constructor
//     Employee(const std::string EmpName, const int EmpId, double salary);

//     // Member functions
//     void CalculateSalary(float performance_rating);
//     void setSalary(double salary);
//     int getEmpId() const {
//         return EmpId;
//     }

//     std::string getEmpName() const {
//         return EmpName;
//     }

//     double getEmpSalary() const {
//         return salary;
//     }

//     // Friend function to overload the << operator for displaying Employee details
//     friend ostream & operator<<(ostream &, Employee &e);
// };

// int main() {
//     string name;
//     int id;
//     double salary;
//     float rating;

//     // Input Employee details from the user
//     cout << "Enter the employee name." << endl;
//     cin >> name;
//     cout << "Enter the employee id." << endl;
//     cin >> id;
//     cout << "Enter salary." << endl;
//     cin >> salary;

//     // Create an Employee object with the provided details
//     Employee e1(name, id, salary);

//     // Display Employee details
//     cout << e1;

//     // Calculate and update salary based on performance rating
//     cout << "Enter rating." << endl;
//     cin >> rating;
//     e1.CalculateSalary(rating);

//     // Display updated Employee details
//     cout << e1;

//     return 0;
// }

// Employee::Employee(const std::string name, const int id, double salary) {
//     // Initialize Employee object's data members in the constructor
//     this->EmpName = name;
//     this->EmpId = id;
//     this->salary = salary;
// }

// void Employee::CalculateSalary(float performance_rating) {
//     // Calculate salary based on performance rating
//     if (performance_rating >= 0.0 && performance_rating <= 1.5) {
//         this->salary = this->salary + this->salary * performance_rating;
//     } else {
//         cout << "Invalid performance rating" << endl;
//     }
// }

// void Employee::setSalary(double salary) {
//     // Set the salary of the Employee
//     this->salary = salary;
// }

// ostream & operator<<(ostream &out, Employee &e) {
//     // Overloaded << operator to display Employee details
//     out << endl << "***Employee Records***" << endl;
//     out << "Employee Name: " << e.EmpName << endl;
//     out << "Employee Id: " << e.EmpId << endl;
//     out << "Employee Salary: " << e.salary << endl;

//     return out;
// }



/*Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.*/


#include<iostream>

class Date{
    //data members
    private:
    int day,month,year;

    //member functions
    public:
    Date(int d=0, int m=0, int y=0):day(d),month(m),year(y){}
    
    //mutator methods
    void setDate(int d, int m, int y);
    int getDay() const{
        return day;
    }

    int getMonth() const{
        return month;
    }

    int getYear() const{
        return year;
    }

    bool isLeapYear() const{
        if(year%4==0){
            if(year%100){
                if(year%400)
                    return true;
                else 
                    return false;
            }
            else 
                return true;
        }
        else
            return false;
    }

    bool isValidDate() const {
        if(month<1 || month>12)
            return false;
        
        if(day<1 || day>31)
            return false;

        if((month==4 || month==6 || month==9 || month==11 )&&day>30)
            return false;

        if(month==2){

        }
    }
};

int main(){
    int day, year, month;
    std::cout<<"Enter the year"<<std::endl;
    std::cin>>year;
    std::cout<<"Enter the month"<<std::endl;
    std::cin>>month;
    std::cout<<"Enter the day"<<std::endl;
    std::cin>>day;
    return 0;
}

void Date::setDate(int d, int m, int y){
    this->day=d;
    this->month=m;
    this->year=y;
}



