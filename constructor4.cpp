#include<iostream>

#include<string.h>
using namespace std;
class emp
{
	public:
		long int eno,sal;
		char name[20];
	emp(long int eno,char ename[20],long int sal)
	{
		this->eno=eno;
		strcpy(this->ename,ename);
		this->sal=sal;
	}
	void display()
	{
		cout<<"\n Emp No="<<eno;
		cout<<"\n Emp Name="<<ename;
		cout<<"\n Emp Sal="<<sal;
	}
};
void main()
{
	long int eno,s;
	char ename[20];
	cout<<"Enter emp no name sal:";
	cin>>eno>>ename>>s;
	emp ob(eno,ename,s);
	ob.display();
}
