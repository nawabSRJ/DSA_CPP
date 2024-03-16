// todo - create a class and functions to take the data such as name class and course attended and store them in a file
#include <iostream>
#include<fstream>
using namespace std;

class Course
{
public:
    string name;
    string dept;
    string course;
    int fees;

    void getdata()
    {
        cout << "Enter Name : " << endl;
        getline(cin, name);

        cout << "Enter Dept : " << endl;
        getline(cin, dept);

        cout << "Enter Course : " << endl;
        getline(cin, course);

        cout << "Enter Fees : " << endl;
        cin>>fees;
    }

    int storedata(Course obj);
};

// syntax : return_type class_name::func_name() -> when func definition outside the class
int Course::storedata(Course obj)
{
    ofstream fout;
    fout.open("Records.txt", ios::app);
    int rec = 1;
    while(rec)
    {
        fout << obj.name << "  "<< obj.dept << "  " << obj.course << " " << obj.fees <<endl;
        rec--;  // write data only once
    }
}

int main()
{
    Course obj;
    obj.getdata();
    obj.storedata(obj);
    return 0;
}