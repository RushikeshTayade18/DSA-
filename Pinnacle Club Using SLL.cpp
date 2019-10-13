#include<iostream>
using namespace std;
struct node
{
	int pnr;
	char name[20];
	node *next;
};
class Pinnacle
{
	node *head,*head1;
	
	public:
		Pinnacle()
		{
			head=NULL;
			head1=NULL;
		}
		void Create_First();
		void Create_Second();
		void Delete();
		void Count();
		void Display_First();
		void Display_Second();
		void Concati();
		void Reverse();
		
	
};

void Pinnacle::Create_First()
{
	node *nn,*cn;
	nn=new node;
	cout<<"Enter the PNR no of Student \n";
	cin>>nn->pnr;
	cout<<"Enter the name of Student \n";
	cin>>nn->name;
	
	nn->next=NULL;
	
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		cn=head;
		if(head!=NULL)
		{
			while(cn->next!=NULL)
			{
				cn=cn->next;
			}
			cn->next=nn;
			
		}
	}
	
}

void Pinnacle::Create_Second()
{
	node *nn,*cn;
	nn=new node;
	cout<<"Enter the PNR no of Student \n";
	cin>>nn->pnr;
	cout<<"Enter the name of Student \n";
	cin>>nn->name;
	
	nn->next=NULL;
	
	if(head1==NULL)
	{
		head1=nn;
	}
	else
	{
		cn=head1;
		if(head1!=NULL)
		{
			while(cn->next!=NULL)
			{
				cn=cn->next;
			}
			cn->next=nn;
			
		}
	}
	
}

void Pinnacle::Delete()
{
	node *cn;
	cn=head;
		
	if(head==NULL)
	{
		cout<<"No Member in the Club\n";
	}
	int pos;
	cout<<"Enter the Location to Delete a Member\n";
	cin>>pos;
	if(pos==1)
	{
		cout<<"You have been Deleted a pressident of Club\n";
		head=head->next;
	}
    else
    {
    	for(int i=1;i<pos-1;i++)
    	{
    		cn=cn->next;
		}
		cn->next=cn->next->next;
		
	}
	
}

void Pinnacle::Display_First()
{
	node *cn;
	cn=head;
	while(cn!=NULL)
	{
		cout<<cn->pnr<<"\t";
		cn=cn->next;
	}
}

void Pinnacle::Display_Second()
{
	node *cn;
	cn=head1;
	while(cn!=NULL)
	{
		cout<<cn->pnr<<"\t";
		cn=cn->next;
	}
}

void Pinnacle::Count()
{
	node *cn;
	cn=head;
	int count=0;
	while(cn!=NULL)
	{
		count++;
		cn=cn->next;
	}
	cout<<endl<<"Total Members of Pinnacle Club are = \n"<<count;
}

void Pinnacle::Concati()
{
	node *cn;
	cn=head;
	
	while(cn->next!=NULL)
	{
		cn=cn->next;
	}
	cn->next=head1;
     
}


int main()
{
	Pinnacle p1;
	char a;
	int ch;
	do
	{
		cout<<"1.Create First Linked List\n";
		cout<<"2. Display First Linked List \n";
		cout<<"3. Count No of Member \n";
		cout<<"4. Delete \n";
		cout<<"5.Create Linked Second list\n";
		cout<<"6.Concatination of Both Linked \n";
		cout<<"7. Display Second Lnked list \n";
		cout<<"Enter Your choise \n";
		cin>>ch;
		switch(ch)
		{
		case 1:
					p1.Create_First();
		break;
				
		case 2:
					p1.Display_First();	
		break;
				
		case 3:
					p1.Count();
		break;
				
		case 4:
					p1.Delete();	
		break;
		
		case 5:
					p1.Create_Second();
			    
		break;
		case 6:
				p1.Concati();
				break;
		case 7:
		    p1.Display_Second();
			break;		
		default :
			cout<<endl<<"Wrong Input\n";
		
		}
		cout<<endl<<"Do you want to contineu \n";
		cin>>a;
	}
	while(a=='Y'||a=='y');

	return 0;
}
