#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    string name, grade;
    double unit, gradeNum, unitSum(0), average(0);

    for (int i = 0; i < 20 ;i++){
        cin >> name;
        cin >> unit;
        cin >> grade;

        if(grade.compare("P")==0)
            continue;
        else if(grade.compare("A+")==0)
            gradeNum = 4.5;
        else if(grade.compare("A0")==0)
            gradeNum = 4.0;
        else if(grade.compare("B+")==0)
            gradeNum = 3.5;
        else if(grade.compare("B0")==0)
            gradeNum = 3.0;
        else if(grade.compare("C+")==0)
            gradeNum = 2.5;
        else if(grade.compare("C0")==0)
            gradeNum = 2.0;
        else if(grade.compare("D+")==0)
            gradeNum = 1.5;
        else if(grade.compare("D0")==0)
            gradeNum = 1.0;
        else if(grade.compare("F")==0){
            gradeNum = 0.0;
        }

        unitSum += unit;
        average += unit * gradeNum;
    }

    cout << average / unitSum << endl;

    return 0;
}