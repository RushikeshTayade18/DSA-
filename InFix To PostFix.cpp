#include<iostream>
#include<string.h>
using namespace std;
class Abc
{
	char stack[20],post[20]="",exp[20]="";
	int stack2[10];
	int top=-1;
	int j=0;
	public:
		
		void Accept();
		bool isEmpty();
		bool isFull();
		void push(char ele);
		char pop();
		int SetPre(char ch);
		void Postfix();
		
		int pop_int();
		void push_int(int a);
		void Evaluation();
		
};

void Abc::Accept()
{
	
	cout<<"Enter infix Expression \n";
	cin>>exp;
	
}

bool Abc::isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}

bool Abc::isFull()
{
	if(top==19)
	return 1;
	else
	return 0;
	
}
void Abc::push(char ele)
{
	if(!isFull())
	{
		top++;
		stack[top]=ele;
	}
}
char Abc::pop()
{
	if(!isEmpty())
	{
		char temp=stack[top];
		top--;
		return temp;
	}
	else
	{
		cout<<"Stack is Empty \n";
	}
}


int Abc::SetPre(char ch)
{
	if(ch=='+'||ch=='-')
	 return 1;
	 else if(ch=='*'||ch=='/')
	 return 2;
	 else
	 return 0;
}


void Abc::Postfix()
{
	int i=0;
	char temp;
	while(exp[i]!='\0')
	{
		if(exp[i]=='{'||exp[i]=='('||exp[i]=='[')
		{
			push(exp[i]);
		}
		else if(exp[i]=='}'||exp[i]==')'||exp[i]==']')
		{
						if(exp[i]=='}')
						{
							while(stack[top]!='{')
							{
								post[j++]=pop();
							}
						}
						
						if(exp[i]==')')
						{
							while(stack[top]!='(')
							{
								post[j++]=pop();
							}
						}
						if(exp[i]==']')
						{
							while(stack[top]!='[')
							{
								post[j++]=pop();
							}
						}
						temp=pop();
		}
		else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/')
		{
			if(SetPre(stack[top])>=SetPre(exp[i]))
			{
				post[j++]=pop();
				push(exp[i]);
			}
			else
			{
				push(exp[i]);
			}
		}
		else
		{
			post[j++]=exp[i];
		}
		i++;
		
	}
	
	
	if(stack[top]!='\0')
	{
		while(stack[top]!='\0')
		{
			post[j++]=pop();
		}
	}
	
	post[j]='\0';
	cout<<"your post fix Expression is =\n";
	for(int i=0;post[i]!='\0';i++)
	{
		cout<<post[i];
	}
	
}

int Abc::pop_int()
{
	return stack2  [top--];
	
}
void Abc::push_int(int a)
{
	stack2[++top]=a;
}

void Abc::Evaluation()
{
	int i=0;
	int op1=0,op2=0;
	while(post[i]!='\0')
	{
		if(post[i]=='+')
		{
			op2=pop_int();
			op1=pop_int();
			
			push_int(op1+op2);
			
		}
		else if(post[i]=='-')
		{
			op2=pop_int();
			op1=pop_int();
			push_int(op1-op2);
		}
		else if(post[i]=='*')
		{
			op2=pop_int();
			op1=pop_int();
			push_int(op1*op2);
		}
		else if(post[i]=='/')
		{
			op2=pop_int();
			op1=pop_int();
			push_int(op1/op2);
		}
		else
		{
			push_int((int)post[i]-48);
		}
		
		i++;
	}
	cout<<endl<<"Expression is = \n"<<pop_int();
}


int main()
{
	Abc a1;
	a1.Accept();
	a1.Postfix();
	a1.Evaluation();
	
	return 0;
	
	
}
