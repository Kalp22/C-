#include<iostream>
#include<string.h>
using namespace std;

class Student{
    int roll;
    string name;
    int marks;
    public:
        Student(int rol, string n, int mark){
            roll = rol;
            for(int i=0; i<n.length(); i++){
                name[i] = n[i];
            }
            marks = mark;
        }
        Student(){}
        ~Student(){
            cout << "Student Destroyed" << endl;
        }
        string get_name(){
            return name;
        }
        int get_roll(){
            return roll;
        }
        int get_marks(){
            return marks;
        }
        static float avg_marks(Student stu[]){
            float avg=0;
            for(int j=0; j<5; j++){
                int mar = stu[j].get_marks();
                avg = avg + mar;
            }
            return avg/5;
        }
};

int main(){
    int size = 5;
    Student stud[size];
    for(int i=0; i<5; i++){
        int rol,mark;
        string nam;
        cout << "Enter details of Student " << i+1 << ":" << endl;
        cout << "Name:";
        cin >> nam;
        cout << endl << "Roll no.:";
        cin >> rol;
        cout << endl << "Marks:";
        cin >> mark;
        stud[i] = Student(rol,nam,mark);
    }
    cout << endl << "Average Marks of Students are:" << Student::avg_marks(stud) << endl;
    return 0;
}
