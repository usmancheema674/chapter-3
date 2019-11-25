#include <string>
#include <iostream>
class GradeBook {
 private:
    std::string courseName;
    std::string instructorName;

 public:
    GradeBook(const std::string &, const std::string &);

    // SETTERS
    void setCourseName(const std::string &);
    void setInstructorName(const std::string &);

    // GETTERS
    std::string getCourseName();
    std::string getInstructorName();

    void displayMessage();
};
// Constructor
GradeBook::GradeBook(const std::string &name, const std::string &instructor) {
    setCourseName(name);
    setInstructorName(instructor);
}
// SETTERS
void GradeBook::setCourseName(const std::string &name) { courseName = name; }
void GradeBook::setInstructorName(const std::string &instructor) { instructorName = instructor; }

// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
std::string GradeBook::getInstructorName() { return instructorName; }

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for: " << getCourseName() << "!\n"
              << "This course is presented by: " << getInstructorName()
              << std::endl;
}
int main(int argc, const char *argv[]) {
    GradeBook gradeBook1("This is a course", "The Instructor");

    gradeBook1.displayMessage();

    return 0;
}
