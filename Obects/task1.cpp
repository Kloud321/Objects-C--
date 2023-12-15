#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Constructor to initialize the object with given values
    Student(string firstName, string lastName, int years, string university, string spec) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->years = years;
        this->university = university;
        this->spec = spec;
    }

    // Setter for the first name
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    // Setter for the last name
    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    // Getter for the full name
    string getFullName() {
        return firstName + " " + lastName;
    }

    // Display information about the student
    void displayInfo() {
        cout << "Name: " << getFullName() << endl;
        cout << "Years: " << years << endl;
        cout << "University: " << university << endl;
        cout << "Specialization: " << spec << endl;
    }

private:
    string firstName;
    string lastName;
    int years;
    string university;
    string spec;
};

int main() {
    // Creating a Student object with initial values
    Student number1("John", "Doe", 3, "XYZ University", "Computer Science");

    // Displaying information about the student
    number1.displayInfo();

    // Changing the first name using the setter
    number1.setFirstName("Ivan");

    // Displaying updated information about the student
    number1.displayInfo();

    return 0;
}
