#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class student
{
	private:
		int studid;
		string name;
		int marks1;
		int marks2;
		int marks3;
	public:
		student();
		int getId();
		int getMarks1();
		int getMarks3();
		int getMarks2();
		void setId(int id);
		void setMarks1(int m);
		void setMarks2(int m);
		void setMarks3(int m);
		void setName(string n);
		
		string getName();
		int calTotalMarks();
		double percentage();
		~student();
	protected:
};

#endif
