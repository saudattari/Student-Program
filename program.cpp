#include <iostream>
#include <string>
#include<vector>
using namespace std;


class StudentDetails{
    private:
        vector<int> marks;
        int GradeLevel;
        string FirstName,MiddleName, LastName,SectionName;
        float AvgGrades ;
    public:

    StudentDetails(){
        GradeLevel = 0;
        FirstName = MiddleName = LastName = SectionName = "";
        AvgGrades = 0.0;
    }

    void GETNAME(){
    cout<<"Enter First Name: ";
    cin>>FirstName;
    cout<<"Enter Middle Name: ";
    cin>>MiddleName;
    cout<<"Enter Last Name: ";
    cin>>LastName;
}

    void GETGRC(){
    cout<<"Enter Grade Level: ";
    cin>>GradeLevel;
    cout<<"Enter Section Name: ";
    cin>>SectionName;
}

    void GETGRADES(){
    int i = 0;
    cout<<"Enter Grades in Filipino: ";
    cin>>i;
    marks.push_back(i);
    cout<<"Enter Grades in English: ";
    cin>>i;
    marks.push_back(i);
    cout<<"Enter Grades in Science: ";
    cin>>i;
    marks.push_back(i);
    cout<<"Enter Grades in Maths: ";
    cin>>i;
    marks.push_back(i);
}

    void COMPGRADES(){
    for(int i=0; i<marks.capacity(); i++){
        AvgGrades += marks[i];
    }
}
    string GradesLetter(int mark) {
        if (mark >= 70 && mark < 75)
            return "Failed";
        else if (mark >= 75 && mark < 80)
            return "Needs Improvement";
        else if (mark >= 80 && mark < 85)
            return "Satisfactory";
        else if (mark >= 85 && mark < 90)
            return "Very Satisfactory";
        else if (mark >= 90 && mark <= 100)
            return "Outstanding";
        else
            return "Invalid";
    }

    void DISPLAY(){
    cout<<"---OUTPUT---"<<endl;
    cout<<"=========================================================================================\n";
    cout<<"Name             : "<<FirstName<<" "<<MiddleName<<" "<<LastName<<endl;
    cout<<"Grade and Section: "<<GradeLevel<<"-"<<SectionName<<endl;
    cout<<"=========================================================================================\n";
    cout<<"Subjects\t\t:\t\tNUMBER GRADE\t\t:\t\tLetter Grade\n";
    cout<<"=========================================================================================\n";
    cout<<"FILIPINO\t\t__\t\t\t"<<marks[0]<<"\t\t__\t\t\t"<<GradesLetter(marks[0])<<endl;
    cout<<"ENGLISH\t\t\t__\t\t\t"<<marks[1]<<"\t\t__\t\t\t"<<GradesLetter(marks[1])<<endl;
    cout<<"SCIENCE\t\t\t__\t\t\t"<<marks[2]<<"\t\t__\t\t\t"<<GradesLetter(marks[2])<<endl;
    cout<<"MATHS  \t\t\t__\t\t\t"<<marks[3]<<"\t\t__\t\t\t"<<GradesLetter(marks[3])<<endl<<endl;
    cout<<"=========================================================================================\n";
    cout<<"Average\t\t__\t\t"<<AvgGrades<<"\t\t__\t\t"<<GradesLetter(AvgGrades)<<endl;
    cout<<"=========================================================================================\n";
}

};

int main(){
    StudentDetails obj;
    char ch;
    do {
        obj.GETNAME();
        obj.GETGRC();
        obj.GETGRADES();
        obj.COMPGRADES();
        obj.DISPLAY();
        cout<<"\n";
        cout<<"Try Again? Y or N? ";
        cin>>ch;

    }while(ch == 'Y');


}