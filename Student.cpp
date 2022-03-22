#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int id,char stdname[]) {
  studentId=id;
  strcpy(name,stdname);
}

// Display StudentId and Name
void Student::display() {
  std::cout<<studentId<<endl;
  std::cout<<name;
 }
