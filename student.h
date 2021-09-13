#ifndef STUDENT_H_
#define STUDENT_H_




class Student
{
public:
	Student(string stu_name, int stu_age)
	{
		name = stu_name;
		age = stu_age;
		course = "";
		grade = 'F';
	}
	~Student()
	{
		// cout << "Destructor called for " << name << endl;
	}

	string get_name() { return name; }
	int get_age() { return age; }
	string get_course() { return course; }
	double get_gpa() { return GPA; }
	void Student_info(); // displays student name and age
	void Student_gradeinfo(); // displays student name, age and GPA
	void set_name(string stu_name) { name = stu_name; }
	void set_age(int stu_age) { age = stu_age; }
	char get_classgrade(string course);
	void add_course_grade(string classname, char stu_grade)
	{
		course_list.push_back(classname);
		grade_list.push_back(stu_grade);
	}
	vector <string> course_list; // list of course;
	vector <char> grade_list; // list of grade for each course
	double compute_gpa();


private:
	string name; // name of student
	int age; // age of student
	char grade; // grade student made (A~F)
	string course; // name of course taken
	double GPA; // grading pointa average of student
	// vector <string> course_list; // list of course;
	// vector <char> grade_list; // list of grade for each course
};





#endif
