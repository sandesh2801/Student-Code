#include "student.h"
#include <string>
using namespace std;


int student::getId(){
	return studid;
}
int student::getMarks1(){
	return marks1;
}
int student::getMarks2(){
	return marks2;
}
int student::getMarks3(){
	return marks3;
}
string student::getName(){
	return name;
}


void student::setId(int id){
	studid=id;
}
void  student::setMarks1(int m){
	marks1=m;
}
void  student::setMarks2(int m){
     marks2=m;
}
void  student::setMarks3(int m){
	marks3=m;
}
void  student::setName(string n){
	name=n;
}

int student::calTotalMarks(){
  return	student::getMarks1()+student::getMarks2()+student::getMarks3();
}

double student::percentage(){
 return (student::getMarks1()+student::getMarks2()+student::getMarks3())/3;
}
student::student()
{
	studid=10;
	name="Sandesh";
	marks1=90;
	marks2=80;
	marks3=90;
	
}

student::~student()
{
}
