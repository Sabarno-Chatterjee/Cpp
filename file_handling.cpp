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


// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     ifstream infile;
//     infile.open("new.txt");
//     if(!infile)
//         cout<<"file does not exist"<<endl;
//     string str1, str2;
//     infile>>str1;
//     infile>>str2;

//     cout<<str1<<endl;
//     cout<<str2<<endl;

//     if(infile.eof())
//         cout<<"End of file reached";

//     infile.close();
//     return 0;
// }


// Writing objects into a file

// #include<iostream>
// #include<fstream>

// using namespace std;

// class Student{
//     public:
//     //data members
//     string name;
//     int roll;
//     string branch;

//     //member functions
//     Student(){}
//     Student(string name, int roll, string branch){
//         this->name=name;
//         this->roll=roll;
//         this->branch=branch;
//     }

//     friend ofstream & operator<<(ofstream &outfile, Student &s);
// };

// ofstream & operator<<(ofstream &outfile, Student &s){
//     outfile<<s.name<<endl;
//     outfile<<s.roll<<endl;
//     outfile<<s.branch<<endl;

//     return outfile;
// }

// int main(){
//     Student s;
//     s.name="Ron";
//     s.roll=5;
//     s.branch="Potion";

//     ofstream outfile("new.txt", ios::trunc);
//     outfile<<s;

//     outfile.close();

//     return 0;
// }


//Reading objects from a file

// #include<iostream>
// #include<fstream>

// using namespace std;

// class Student{
//     public:
//     //data members

//     int roll;
//     string name;
//     string branch;
// };

// int main(){
//     Student s;

//     ifstream infile;
//     infile.open("new.txt");

//     if(!infile)                                 
//         cout<<"File does not exist"<<endl;     
//     infile>>s.name;
//     infile>>s.roll;
//     infile>>s.branch;

//     cout<<s.name<<endl;
//     cout<<s.roll<<endl;
//     cout<<s.branch<<endl;

//     if(infile.eof())
//         cout<<"End of file"<<endl;

//     return 0;
// }


//Reading objects from a file

#include<iostream>
#include<fstream>

using namespace std;

class Student{
    public:
    //data members

    int roll;        // Student's roll number
    string name;     // Student's name
    string branch;   // Student's branch

    //member functions

    // Default constructor
    Student(){};

    // Parameterized constructor to initialize student data
    Student(string name, int roll, string branch){
        this->name = name;
        this->roll = roll;
        this->branch = branch;
    }

    // Overloaded extraction operator to read student data from a file
    friend ifstream & operator>>(ifstream &infile, Student &s);

    // Overloaded insertion operator to display student data
    friend ostream & operator<<(ostream &out, Student &s);
};

// Overloaded extraction operator definition
ifstream & operator>>(ifstream &infile, Student &s){
    infile >> s.name;
    infile >> s.roll;
    infile >> s.branch;
    return infile;
}

// Overloaded insertion operator definition
ostream & operator<<(ostream &out, Student &s){
    out << "Name: " << s.name << endl;
    out << "Roll No: " << s.roll << endl;
    out << "Branch: " << s.branch << endl;
    return out;
}

int main(){
    Student s;

    ifstream infile;
    infile.open("new.txt");

    // Check if the file exists and can be opened
    if(!infile)                                 
        cout << "File does not exist" << endl;     

    // Read student data from the file
    infile >> s;

    // Display the student data
    cout << s;

    // Check if the end of the file has been reached
    if(infile.eof())
        cout << "End of file" << endl;

    return 0;
}

    