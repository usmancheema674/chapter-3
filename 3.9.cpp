#include <iostream>

#include <string>

class GradeBook{

    private:

        std::string courseName;

    public:

        GradeBook(std::string name){

            setCourseName(name); 

        }

        // SETTERS

        void setCourseName(std::string name){

            courseName = name;

        }

        // GETTERS

        std::string getCourseName(){

            return courseName;

        }

        // display a welcome message to the GradeBook user

        void displayMessage(){

            std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;

        }

};

// function main begins program execution

int main(int argc, const char *argv[]){

    GradeBook gradeBook1("CS101 Introduction to C++ Programming");

    GradeBook gradeBook2("CS102 Data Structures in C++");

    // display initial value of courseName for each GradeBook

    std::cout << "gradeBook1 created for course: " << gradeBook1.getCourseName();

    std::cout << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << std::endl;

    return 0;

}
