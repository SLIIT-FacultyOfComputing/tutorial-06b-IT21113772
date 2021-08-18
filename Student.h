#include <string>

class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters

  private:
    int studentId{};
    std::string name{};
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration

  public:
    void assignDetails(int pStudentId, std::string pname);
    void display();
};
