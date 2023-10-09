// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     ofstream outfile("new.txt",ios::trunc); // or ios::app to append
//     outfile<<"Will this work?"<<endl;
//     outfile<<"I guess it will"<<endl;

//     outfile.close();


//     return 0;
// }


#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream infile;
    infile.open("new.txt");  // Open the file "new.txt" for reading

    if(!infile) {
        cout << "File does not exist" << endl; // Check if the file exists and can be opened
        return 1;  // Exit the program if the file doesn't exist
    }

    string str1, str2;

    // Read two strings from the file
    infile >> str1;
    infile >> str2;

    // Display the two strings
    cout << str1 << endl;
    cout << str2 << endl;

    // Check if the end of the file has been reached
    if(infile.eof())
        cout << "End of file reached";

    infile.close();  // Close the file

    return 0;
}



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
//     Student(){}  // Default constructor

//     // Parameterized constructor to initialize student data
//     Student(string name, int roll, string branch){
//         this->name = name;
//         this->roll = roll;
//         this->branch = branch;
//     }

//     // Friend function to overload the insertion operator for writing data to a file
//     friend ofstream & operator<<(ofstream &outfile, Student &s);
// };

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

//     // Default constructor
//     Student(){};

//     // Parameterized constructor to initialize student data
//     Student(string name, int roll, string branch){
//         this->name = name;
//         this->roll = roll;
//         this->branch = branch;
//     }

//     // Overloaded extraction operator to read student data from a file
//     friend ifstream & operator>>(ifstream &infile, Student &s);

//     // Overloaded insertion operator to display student data
//     friend ostream & operator<<(ostream &out, Student &s);
// };

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

    