#include<iostream>
using namespace std;
class Student
{
	int Roll[100],marks[100];
	char status[100];
	int n;
	public:
		void Accept();
		void Display();
		void minmax();
		void Absent();
		void Average();
		void mostscore();
};
void Student::Accept()
{
	
	cout<<"Enter how many Students you have \n";
	cin>>n;
	cout<<"Enter Student Details \n";
	for(int i=0;i<n;i++)
	{
		Roll[i]=i+1;
		cout<<"Enter the attandance of Roll no "<<Roll[i]<<"(P/A)\n";
		cin>>status[i];
		if(status[i]=='p')
		{
			cout<<"Enter marks \n";
			cin>>marks[i];
		}
		else
		{
			marks[i]=-1;
		}
	}
}

void Student::Display()
{
	for(int i=0;i<n;i++)
	{
		cout<<"Roll no="<<Roll[i]<<"\t"<<"marks ="<<marks[i]<<"\t"<<"Status ="<<status[i]<<endl;
		
	}
}


void Student::Average()
{
	int total=0;
	float avg;
	for(int i=0;i<n;i++)
	{
		total=total+marks[i];
	}
	
	cout<<"Total marks of Students are ="<<total<<endl;
	
	avg=total/n;
	
	cout<<"Avrage of Students are = "<<avg<<endl;
	
}

void Student::minmax()
{
	int min=99,max=0;
	
	for(int i=0;i<n;i++)
	{
		if(marks[i]>max)
		{
			if(marks[i]!=-1)
			{
				max=marks[i];
			}
			
		}
		
	}
	cout<<"maximum marks in class ="<<max<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(marks[i]<min)
		{
			if(marks[i]!=-1)
			{
				min=marks[i];
			}
			
		}
	}
	cout<<"minimum marks of class ="<<min<<endl;
	
}

void Student::Absent()
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(status[i]=='a')
		{
			count++;
			cout<<"Absent Roll No's Are ="<<Roll[i]<<endl;
		}
	}
	cout<<"Total Students Absent are ="<<count<<endl;
}

void Student::mostscore()
{	
 int m=0,k=0;
 int arr[10];
 for(int i=0;i<10;i++)
 {
 	arr[i]=0;
 }
 
 for(int i=0;i<n;i++)
 {
 	int temp=marks[i]/10;
 	arr[temp]++;
 }
 for(int i=0;i<10;i++)
 {
 	if(arr[i]>m)
 	{
 		m=arr[i];
 		k=i;
	 }
  } 
  cout<<"marks Scored by most of Students :"<<k*10<<"-"<<(k*10)+10;
}


int main()
{
	Student s1;
	s1.Accept();
	s1.Display();
	s1.Average();
	s1.minmax();
	s1.Absent();
	s1.mostscore();
	return 0;
}
