#include <iostream>
#include <string>
#include <vector>


using namespace std;




void Student::Student_info()
{
	cout << get_name() << ", " << get_age() << ", " << get_gpa() << endl;
}

void Student::get_classgrade(string course)
{
	int j = -1;
	if (course_list.size() != 0)
	{
		for (unsigned int i = 0; i < course_list.size(); i++)
		{
			if (course == course_list[i])
			{
				j = i;
			}
		}
		char grade = grade_list[j];
		if (j == -1)
			cout << name << " has not taken " << course << " yet" << endl;
		else
			cout << name << " has made " << grade << " on " << course << endl;
	}
	else
		get_course();
}

void Student::get_course()
{
	if (course_list.size() == 0)
	{
		cout << name << " has not taken any class yet" << endl;
	}
	else
	{
		for (unsigned int i = 0; i < course_list.size(); i++)
		{
			cout << course_list[i] << endl;
		}
	}
}

int Student::get_check(string classname)
{
	int check = 0;
	if (course_list.size() != 0)
	{
		for (unsigned int i = 0; i < course_list.size(); i++)
		{
			if (classname == course_list[i])
			{
				check = 1;
				return check;
			}
		}
	}
	return check;
}

void Student::compute_gpa()
{
	int total = 0;
	for (unsigned int i = 0; i < grade_list.size(); i++)
	{
		if (grade_list[i] == 'A')
			total += 4;
		else if (grade_list[i] == 'B')
			total += 3;
		else if (grade_list[i] == 'C')
			total += 2;
		else if (grade_list[i] == 'D')
			total += 1;
		else
			total += 0;
	}
	GPA = total / grade_list.size();
}
