#include<iostream>
using namespace std;
class Number
{
    public:
    int a,b,sum;
    void add()
    {
        cout<<"enter two numbers"<<endl;
        cin>>a>>b;
        sum=a+b;
        cout<<"sum is:"<<sum<<endl;
    }
};
main()
{
    Number ob;
    ob.add();
}