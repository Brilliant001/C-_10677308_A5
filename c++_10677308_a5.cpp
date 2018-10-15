#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string name;
	int ID;
	int age;
	string gender;
	int score;
	char grade;
	
	float marks, sum=0, sum1=0, average=0;
	for (int i=1; i<=5; i++)
{
	cout <<i<<":Enter name =\t"<<endl;
	cin>>name;
	
	cout <<i<<":Enter ID number =\t"<<endl;
	cin>>ID;
	
	cout<<i<<":Enter your age =\t"<<endl;
	cin>>age;
	
	cout<<i<<":Enter your gender =\t" <<endl;
	cin>>gender;
	
	cout<<i<<":enter your score =\t"<<endl;
	cin>>score;
	
	cout<<i<<":enter your grade =\t"<<endl;
	cin>>grade;
	
	sum= sum + score;
	sum1= sum + age;	
}
average = sum/5;
cout<<"average is =\t"<<average<<endl;

age = sum1/5;
cout <<"average age is =\t"<<age<<endl;

return 0;
}



