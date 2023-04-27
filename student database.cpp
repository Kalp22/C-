#include <iostream>

class student{
    private:
    int roll,marks;
    char name[20];
    public:
    void set_data(int r,int m,char *n){
        roll=r;
        marks=m;
        *name=*n;
    }
    int getPercent(){
        return marks*100/100;
    }
};

int main() {
    int number
    std::cout<<"Number of Students in your Class?\n";
    std::cin>>number;
    student st[number];
    int i;
    float avg=0.0000;
    for(i=0;i<number;i++){
        int mark;
        int roll;
        char nam[20];
        std::cin>>nam;
        std::cin>>roll;
        std::cin>>mark;
        st[i].set_data(roll,mark,nam);
        std::cout<<"\n"<<st[i].getPercent();
        avg=avg+mark;
    }
    std::cout<<"\nAverage is"<<avg/70;
    return 0;
}
