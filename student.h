#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include <vector>


class Student
{
public:
	Student(string stu_name, int stu_age)
	{
		name = stu_name;
		age = stu_age;
		gpa = 0.0;
	}
	
	Student(std::string stu_name)
	{
		name = stu_name;
		age = 18;
		GPA = 0.0;
	}
	
	~Student()
	{
	}

	std::string get_name() { return name; }
	int get_age() { return age; }
	void get_course();
	double get_gpa() { return GPA; }
	void Student_info(); // displays student name, age, and GPA
	void set_name(std::string stu_name) { name = stu_name; }
	void set_age(int stu_age) { age = stu_age; }
	void get_classgrade(std::string course);
	void add_course_grade(std::string classname, char stu_grade)
	{
		course_list.push_back(classname);
		grade_list.push_back(stu_grade);
	}
	std::vector <std::string> course_list; // list of course;
	std::vector <char> grade_list; // list of grade for each course
	void compute_gpa();


private:
	std::string name; // name of student
	int age; // age of student
	char grade; // grade student made (A~F)
	string course; // name of course taken
	double GPA; // grading pointa average of student
	// vector <string> course_list; // list of course;
	// vector <char> grade_list; // list of grade for each course
};


#endif
