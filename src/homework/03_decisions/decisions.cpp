//write include statement for decisions header
#include "decisions.h"




//Write code for function(s) code here

int get_letter_grade_using_if(int grade) {
    char letter_Grade;
    if (grade <= 100 && grade >= 90){
        char letter_Grade = 'A';
        return letter_Grade;
    }   else if (grade>80){
            char letter_Grade = 'B';
            return letter_Grade;
    }   else if (grade>70){
            char letter_Grade = 'C';
            return letter_Grade;
    }   else if (grade>60){
            char letter_Grade = 'D';
            return letter_Grade;
    }   else {
        char letter_Grade = 'F';
        return letter_Grade;
    };
    return letter_Grade;  
}

int get_letter_grade_using_switch(int grade) {
    char letter_Grade;
    int new_Grade = grade /10;
    switch (new_Grade) {
    case 9:
        letter_Grade = 'A';
        return letter_Grade;
        break;
    case 8:
        letter_Grade = 'B';
        return letter_Grade;
        break;
    case 7:
        letter_Grade = 'C';
        return letter_Grade;
        break;
    case 6:
        letter_Grade = 'D';
        return letter_Grade;
        break;
    default:
        letter_Grade = 'F';
        return letter_Grade;
        break;
    }
}