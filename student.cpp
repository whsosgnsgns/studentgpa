#include <iostream>
#include <string>
#include <vector>


using namespace std;




void Student::Student_info()
{
	cout << get_name() << ", " << get_age() << endl;
}

void Student::Student_gradeinfo()
{
	cout << get_name() << ", " << get_age() << ", " << get_grade() << endl;
}



char Student::get_classgrade(string course)
{
	int j = 0;
	for (unsigned int i = 0; i <= course_list.size(); i++)
	{
		if (course == course_list[i])
		{
			j = i;
		}
	}
	char grade = grade_list[j];
	return grade;
}

double Student::compute_gpa()
{
	
}
