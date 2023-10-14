// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     // Open the file "new.txt" for writing (ios::trunc will create a new file or overwrite an existing one)
//     ofstream outfile("new.txt", ios::trunc);

//     // Write the first line to the file
//     outfile << "Will this work?" << endl;

//     // Write the second line to the file
//     outfile << "I guess it will" << endl;

//     // Close the file
//     outfile.close();

//     return 0;
// }



// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     ifstream infile;
//     infile.open("new.txt");  // Open the file "new.txt" for reading

//     if(!infile) {
//         cout << "File does not exist" << endl; // Check if the file exists and can be opened
//         return 1;  // Exit the program if the file doesn't exist
//     }

//     string str1, str2;

//     // Read two strings from the file
//     infile >> str1;
//     infile >> str2;

//     // Display the two strings
//     cout << str1 << endl;
//     cout << str2 << endl;

//     // Check if the end of the file has been reached
//     if(infile.eof())
//         cout << "End of file reached";

//     infile.close();  // Close the file

//     return 0;
// }



// Writing objects into a file

// #include<iostream>
// #include<fstream>

// using namespace std;

// class Student{
// public:
//     // Data members
//     string name;
//     int roll;
//     string branch;

//     // Member functions

//     // Parameterized constructor to initialize student data
//     Student(string name="abc", int roll=0, string branch="xyz");

//     // Friend function to overload the insertion operator for writing data to a file
//     friend ofstream & operator<<(ofstream &outfile, Student &s);
// };

// Student::Student(string name, int roll, string branch)
// {
//         this->name = name;
//         this->roll = roll;
//         this->branch = branch;
// }

// // Overloaded insertion operator definition
// ofstream & operator<<(ofstream &outfile, Student &s){
//     outfile << s.name << endl;
//     outfile << s.roll << endl;
//     outfile << s.branch << endl;
//     return outfile;
// }

// int main(){
//     Student s;
//     s.name = "Ron";
//     s.roll = 5;
//     s.branch = "Potion";

//     // Open the file "new.txt" for writing, truncating (clearing) its contents if it exists
//     ofstream outfile("new.txt", ios::trunc);

//     // Write student data to the file using the overloaded operator
//     outfile << s;

//     // Close the file
//     outfile.close();

//     return 0;
// }



//Reading objects from a file

// #include<iostream>
// #include<fstream>

// using namespace std;

// class Student {
// public:
//     // Data members
//     int roll;
//     string name;
//     string branch;
// };

// int main() {
//     Student s;

//     ifstream infile;
//     infile.open("new.txt");  // Open the file "new.txt" for reading

//     if (!infile) {
//         cout << "File does not exist" << endl;
//         return 1;  // Exit the program if the file doesn't exist
//     }

//     // Read data from the file and store it in the Student object
//     infile >> s.name;
//     infile >> s.roll;
//     infile >> s.branch;

//     // Display the data read from the file
//     cout << "Name: " << s.name << endl;
//     cout << "Roll No: " << s.roll << endl;
//     cout << "Branch: " << s.branch << endl;

//     if (infile.eof()) {
//         cout << "End of file" << endl;
//     }

//     infile.close();  // Close the file

//     return 0;
// }



//Reading objects from a file

// #include<iostream>
// #include<fstream>

// using namespace std;

// class Student{
//     public:
//     //data members

//     int roll;        // Student's roll number
//     string name;     // Student's name
//     string branch;   // Student's branch

//     //member functions

//     // Parameterized constructor to initialize student data
//     Student(string name="abc", int roll=0, string branch="xyz");

//     // Overloaded extraction operator to read student data from a file
//     friend ifstream & operator>>(ifstream &infile, Student &s);

//     // Overloaded insertion operator to display student data
//     friend ostream & operator<<(ostream &out, Student &s);
// };

// Student::Student(string name, int roll, string branch){
//     this->name=name;
//     this->roll=roll;
//     this->branch=branch;
// }

// // Overloaded extraction operator definition
// ifstream & operator>>(ifstream &infile, Student &s){
//     infile >> s.name;
//     infile >> s.roll;
//     infile >> s.branch;
//     return infile;
// }

// // Overloaded insertion operator definition
// ostream & operator<<(ostream &out, Student &s){
//     out << "Name: " << s.name << endl;
//     out << "Roll No: " << s.roll << endl;
//     out << "Branch: " << s.branch << endl;
//     return out;
// }

// int main(){
//     Student s;

//     ifstream infile;
//     infile.open("new.txt");

//     // Check if the file exists and can be opened
//     if(!infile)                                 
//         cout << "File does not exist" << endl;     

//     // Read student data from the file
//     infile >> s;

//     // Display the student data
//     cout << s;

//     // Check if the end of the file has been reached
//     if(infile.eof())
//         cout << "End of file" << endl;
//       infile.close();   // Close the file
//     return 0;
// }

    
// File input, output

// C++ program to demonstrate file operations and class serialization

// #include <iostream>
// #include <fstream>
// #include <cstring>

// using namespace std;

// class Employee {
// public:
//     // Data members
//     int emp_id;
//     string name;
//     string department;

//     // Member functions
//     Employee(int id=0, string name="abc", string department="xyz");

//     // Friend functions for file operations
//     friend ofstream &operator<<(ofstream &outfile, Employee &e);
//     friend ifstream &operator>>(ifstream &infile, Employee &e);
//     friend ostream &operator<<(ostream &out, Employee &e);
// };

// // Parameterized constructor to initialize Employee object
// Employee::Employee(int id, string name, string department) {
//     this->emp_id = id;
//     this->name = name;
//     this->department = department;
// }

// // Friend function to write Employee object to a file
// ofstream &operator<<(ofstream &outfile, Employee &e) {
//     outfile << e.emp_id << endl;
//     outfile << e.name << endl;
//     outfile << e.department << endl;
//     return outfile;
// }

// // Friend function to read Employee object from a file
// ifstream &operator>>(ifstream &infile, Employee &e) {
//     infile >> e.emp_id;
//     infile >> e.name;
//     infile >> e.department;
//     return infile;
// }

// // Friend function to display Employee object
// ostream &operator<<(ostream &out, Employee &e) {
//     out << "Employee ID: " << e.emp_id << endl;
//     out << "Name: " << e.name << endl;
//     out << "Department: " << e.department << endl;
//     return out;
// }

// int main() {
//     int id;
//     string name, dept;

//     cout << "Enter the employee id, name, and department: ";
//     cin >> id >> name >> dept;

//     // Create and write an Employee object to a file
//     ofstream outfile("emp.txt", ios::trunc);
//     Employee e1(id, name, dept);
//     outfile << e1;
//     outfile.close();

//     // Read the Employee object from the file and display it
//     Employee e2;
//     ifstream infile;
//     infile.open("emp.txt");
    
//     if (!infile)
//         cout << "File does not exist" << endl;

//     infile >> e2;
//     cout << "Employee Details:" << endl;
//     cout << e2;

//     if (infile.eof())
//         infile.close();

//     return 0;
// }



/*Write a program to store and retrieve a list of item in a file using serialization
Class items should have:
1. name 
2. price
3. quantity*/

// #include<iostream>
// #include<fstream>
// #include<cstring>

// using namespace std;

// class Item{
// public:
//     // Data members
//     string name;
//     float price;
//     int quantity;

//     // Member functions
//     Item(string name = "abc", float price = 0, int quantity = 0); // Constructor
//     friend ofstream &operator<<(ofstream &outfile, Item &i);     // Friend function to write Item object to a file
//     friend ifstream &operator>>(ifstream &infile, Item &i);       // Friend function to read Item object from a file
//     friend ostream &operator<<(ostream &out, Item &i);            // Friend function to display Item object
// };

// // Constructor to initialize Item object
// Item::Item(string name, float price, int quantity){
//     this->name = name;
//     this->price = price;
//     this->quantity = quantity;
// }

// // Friend function to write Item object to a file
// ofstream &operator<<(ofstream &outfile, Item &i){
//     outfile << i.name << endl;
//     outfile << i.price << endl;
//     outfile << i.quantity << endl;
//     return outfile;
// }

// // Friend function to display Item object
// ostream &operator<<(ostream &out, Item &i){
//     out << "Name: " << i.name << endl;
//     out << "Price: " << i.price << endl;
//     out << "Quantity: " << i.quantity << endl;
//     return out;
// }

// // Friend function to read Item object from a file
// ifstream &operator>>(ifstream &infile, Item &i){
//     infile >> i.name;
//     infile >> i.price;
//     infile >> i.quantity;
//     return infile;
// }

// int main(){
//     int quantity, n;
//     string name;
//     float price;

//     cout << "Enter the number of items" << endl;
//     cin >> n;

//     Item *list[n]; // Array of pointers to Item objects

//     for(int i = 0; i < n; i++){
//         cout << "Enter the data for item " << i+1 << ":" << endl;
//         cin >> name;
//         cin >> price;
//         cin >> quantity;
//         list[i] = new Item(name, price, quantity); // Create and store Item objects
//     }

//     ofstream outfile("item.txt"); // Open the output file

//     for(int i = 0; i < n; i++){
//         outfile << *list[i]; // Write Item objects to the file
//     }

//     // Deallocate memory for each Item object
//     for(int i = 0; i < n; i++)
//         delete list[i];

//     delete []list; // Deallocate memory for the array of pointers
//     outfile.close(); // Close the output file

//     Item item;
//     ifstream infile;
//     infile.open("item.txt");
//     if(!infile)
//         cout << "File does not exist" << endl;

//     for(int i = 0; i < n; i++){
//         infile >> item; // Read Item objects from the file
//         cout << "Item " << i + 1 << ":" << endl;
//         cout << item << endl; // Display Item objects
//     }

//     if(infile.eof())
//         infile.close(); // Close the input file

//     return 0;
// }



/*Write a program to store and retrieve a list of item in a file using serialization and vector
Class items should have:
1. name 
2. price
3. quantity*/

// #include <iostream>
// #include <fstream>
// #include <cstring>
// #include <vector>

// using namespace std;

// class Item {
// public:
//     // Data members
//     string name;
//     float price;
//     int quantity;

//     // Member functions
//     Item(string name = "abc", float price = 0, int quantity = 0); // Constructor
//     friend ofstream &operator<<(ofstream &outfile, Item &i);     // Friend function to write Item object to a file
//     friend ifstream &operator>>(ifstream &infile, Item &i);       // Friend function to read Item object from a file
//     friend ostream &operator<<(ostream &out, Item &i);            // Friend function to display Item object
// };

// // Constructor to initialize Item object
// Item::Item(string name, float price, int quantity) {
//     this->name = name;
//     this->price = price;
//     this->quantity = quantity;
// }

// // Friend function to write Item object to a file
// ofstream &operator<<(ofstream &outfile, Item &i) {
//     outfile << i.name << endl;
//     outfile << i.price << endl;
//     outfile << i.quantity << endl;
//     return outfile;
// }

// // Friend function to display Item object
// ostream &operator<<(ostream &out, Item &i) {
//     out << "Name: " << i.name << endl;
//     out << "Price: " << i.price << endl;
//     out << "Quantity: " << i.quantity << endl;
//     return out;
// }

// // Friend function to read Item object from a file
// ifstream &operator>>(ifstream &infile, Item &i) {
//     infile >> i.name;
//     infile >> i.price;
//     infile >> i.quantity;
//     return infile;
// }

// int main() {
//     int quantity, n;
//     string name;
//     float price;

//     cout << "Enter the number of items" << endl;
//     cin >> n;

//     vector<Item*> list; // Create a vector to store pointers to Item objects

//     for (int i = 0; i < n; i++) {
//         cout << "Enter the data for item " << i + 1 << ":" << endl;
//         cin >> name;
//         cin >> price;
//         cin >> quantity;
//         list.push_back(new Item(name, price, quantity)); // Create and add Item objects to the vector
//     }

//     ofstream outfile("item.txt"); // Open the output file

//     for (vector<Item*>::iterator itr = list.begin(); itr != list.end(); itr++) {
//         outfile << **itr; // Write Item objects to the file
//     }

//     outfile.close(); // Close the output file

//     Item item;
//     ifstream infile;
//     infile.open("item.txt");
//     if (!infile)
//         cout << "File does not exist" << endl;

//     for (int i = 0; i < n; i++) {
//         infile >> item; // Read Item objects from the file
//         cout << "Item " << i + 1 << ":" << endl;
//         cout << item << endl; // Display Item objects
//     }

//     if (infile.eof())
//         infile.close(); // Close the input file

//     // Deallocate memory by deleting the Item objects
//     for (vector<Item*>::iterator itr = list.begin(); itr != list.end(); itr++) {
//         delete *itr;
//     }

//     return 0;
// }



/*Write a C++ program to create a new text file and write some text into it.*/


#include<iostream>
#include<fstream>
#include<cstring>

int main(){
    std::string text;
    std::cout<<"Enter some text"<<std::endl;
    std::getline(std::cin,text);
    
    std::ofstream outfile("file_handling.txt");
    outfile<<text;
    
    outfile.close();

    return 0;
}