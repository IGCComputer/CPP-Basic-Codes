#include<iostream>
using namespace std;

class Student
{
	private:
		int rollno;		//Variable - Data Member
		char name[20];
		float fees;	
	public:
		void setStudent()  //Function - Member Function
		{
			cout<<"\nEnter the RollNo:";
			cin>>rollno;
			cout<<"\nEnter the Name:";
			cin>>name;
			cout<<"\nEnter the Fees:";
			cin>>fees;
		}
		void getStudent()
		{
			cout<<"\nRollNo="<<rollno;
			cout<<"\nName="<<name;
			cout<<"\nFees="<<fees;
		}
};
int main()
{
	Student S;
	S.setStudent();
	S.getStudent();
	return 0;
}
