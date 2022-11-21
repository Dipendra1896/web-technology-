#include<iostream>
using namespace std;
struct Student
{
    char name[20];
    int roll_no;
    float fee,marks;
}st;
main()
{
    cout<<"enter name,roll no,fee and marks of a student"<<endl;
    cin>>st.name>>st.roll_no>>st.fee>>st.marks;
    cout<<"The name,roll no,fee amd marks of a student are"<<endl;
    cout<<"st.name"<<endl;
    cout<<"st.roll no"<<endl;
    cout<<"st.fee"<<endl;
    cout<<"st.marks"<<endl;

}