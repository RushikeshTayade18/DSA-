#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char s1[20],s2[20];
	public:
		void length()
		{
			cout<<"Enter string to find the length \n";
			gets(s1);
			int i=0;
			while(s1[i]!='\0')
			{
				i++;
			}
			cout<<"The length of String ="<<i<<endl;
		}
		void copy()
		{
			cout<<"Enter first string \n";
			gets(s1);
			int i=0,j=0;
			while(s1[i]!='\0')
			{
				s2[j]=s1[i];
				i++;
				j++;
			}
			s2[i]='\0';
			cout<<"Second String Contetents ="<<s2<<endl;
		}
		void Concati()
		{
			cout<<"Enter first string  \n";
			gets(s1);
			cout<<"Enter second String \n";
			gets(s2);
			
			int l=strlen(s1);
			int j=0;
			while(s2[j]!='\0')
			{
				s1[l]=s2[j];
				l++;
				j++;
			}
			s1[l]='\0';
			cout<<"String after concatination ="<<s1<<endl;
		}
		void equal()
		{
			cout<<"Enter first string \n";
			gets(s1);
			cout<<"Enter second String \n";
			gets(s2);
			int i=0;
			
			while(s1[i]!='\0'&&s2[i]!='\0')
			{
			
						if(s1[i]==s2[i])
						{
							cout<<"Both string are Equal \n";
							break;
						}
						else if(s1[i]!=s2[i])
						{
							cout<<"both strings are not same \n";
							break;
						}
					
			}
		}
		void Reverce()
		{
			cout<<"Enter String to Reverce \n";
			gets(s1);
			int l=strlen(s1)-1;
			int i=0;
			char temp;
			while(i<l)
			{
				temp=s1[l];
				s1[l]=s1[i];
				s1[i]=temp;
				i++;
				l--;
			}
			cout<<"After reverce ="<<s1;
		}
		void Substring()
		{
				int k;
				int i,j;
				cout<<"Enter Any String \n";
				gets(s1);
				cout<<"Enter Sub String \n";
				gets(s2);
				
				int l=strlen(s2);
				
				for(i=0;s1[i+l-1];i++)
				{
					k=i;
					
					for(j=0;l-1;j++)
					{
						if(s1[k]!=s2[j])
						{
							break;
						}
						k++;
					}
						if(j==l)
					{
						cout<<"It is SubString \n";
						break;
					}
				
				}
					if(j!=l)
					{
						cout<<"It is not SubString\n";
							
							
					}	
						
		}
};
int main()
{
	String s1;
	s1.length();
	s1.Concati();
	s1.copy();
	s1.equal();
	s1.Reverce();
	s1.Substring();
	return 0;
}



