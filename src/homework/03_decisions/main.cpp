//write include statements
#include "decisions.h"
#include <iostream>

using std::cout; using std::cin;
using std::cout; using std::cin;
int grade;
int letter_Grade;


int main() 
{
	cout<<"What number grade did you recieve? ";
	cin>>grade; 
	int letter_Grade = get_letter_grade_using_if(grade);
	cout<<letter_Grade;
	cout<<"Let's try again, what grade did you recieve?";
	cin>>grade;
	int letter_Grade = get_letter_grade_using_switch(grade);
	cout<<letter_Grade;
}