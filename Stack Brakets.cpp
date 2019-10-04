#include<iostream>
using namespace std;
class Braket
{
	char stack[20];
	int top;
	public:
		Braket()
		{
			top=-1;
		}
		bool isEmpty()
		{
			if(top==-1)
			return 1;
			else 
			return 0;
		}
		
		bool isFull()
		{
			if(top==19)
			return 1;
			else
			return 0;
		}
		void push(char ele)
		{
			if(!isFull())
			{
				top++;
				stack[top]=ele;
			}
		}
		char pop()
		{
			if(!isEmpty())
			{
				return stack[top--];
			}
		}
		
		void check(string s)
		{
		    int l=s.length();
		   int i=0;
		   while(i<l)
		   {
		   	     if(s[i]=='{'  ||  s[i]=='['   || s[i]=='(')
		   	   		 {
		   	     				push(s[i]);
				   	}
				else if(s[i]=='}'||  s[i]==']' || s[i]==')')
					{
							    if(stack[top]=='{'&&s[i]!='}' || stack[top]=='['&&s[i]!=']' || stack[top]=='('&&s[i]!=')')
								{
									cout<<"Invalid Expression\n";
									return;
								}
								pop();
								
							
					}
 				 i++;
	        }
	      
			cout<<"Expression is valid";
			
		}
		
		
		
};

int main()
{
	Braket s1;
	string str;
	char con;
	do
	{
	
	
	cout<<"Enter Expression\n";
	cin>>str;
	
	s1.check(str);
	
	
	 cout<<"Do you want to contineu";
	 cin>>con;
    }
    while(con=='y'||con=='Y');
	return 0;
}
