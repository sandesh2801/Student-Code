#include <iostream>
#include "student.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	student s1;
	cout<<"Total Marks :"<<s1.calTotalMarks()<<endl;
	cout<<"Pecentage"<<s1.percentage();
	return 0;
}
