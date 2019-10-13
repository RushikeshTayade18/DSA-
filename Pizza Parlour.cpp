#include<iostream>
#define max 10
using namespace std;
typedef struct order
{
	int quantity[10];
	int rate[10];
	int item[10];
	int cnt;
	int cust_id;
	int Bill;
}order;

class parlour
{
    int front,rear;
    char ch;
    order p[max];
	
    public:
    parlour()
    {
        front=-1;
        rear=-1;
    }
    
    int isfull();
    int isempty();
    void placeorder();
    void display();
    
};
    
int parlour::isfull()
    {
        if(front==rear+1||rear==max-1)
        return 1;
        else
        return 0;
    }
int parlour::isempty()
    {
        if(rear==-1)
        return 1;
        else
        return 0;
    }
void parlour::placeorder()
    {
			int cid;
			char size;
		    int i=0;
    
        cout<<"............WELCOME TO PIZZA CORNER..............\n";
        cout<<"                     MENU                   \n";
        cout<<" Choice                       Regular Medium Large\n";
        cout<<"REGULAR PIZZAS________________  85/-   190/-  300/-\n";
        cout<<"1.Margherita\n";
        cout<<"2.Triple cheese\n";
        cout<<"EXOTICS_________________________130/-  280/-  375/-\n";
        cout<<"3.Corn Exotica\n";
        cout<<"4.Wood cutter\n";
        cout<<"5.Peperoni\n";
        cout<<"6.Mexicana\n";
        cout<<"SPECIALS________________________175/-  300/-  400/-\n";
        cout<<"7.Smoked Mozarella\n";
        cout<<"8.Greek Seseme\n";
        cout<<"9.Hawaiin\n";
        cout<<"10.Veggie Senorita\n";
        cout<<"11.Vegetaraiana\n";
        cout<<"For placing order : \n";

	cout<<"Enter Cust_id";
	cin>>cid;
	  
        if(isfull())
        {
        cout<<"Sorry....First come first serve offer ended!!!\n";
        }
        else if(isempty())
        {
            front=0;
            rear=0;
            p[rear].cust_id=cid;
        }
        else if(rear==max-1)
        {
            rear=0;
            p[rear].cust_id=cid;
          
        }
        else
        {
            rear++;
            p[rear].cust_id=cid;
            
        }
do
{
		cout<<"enter Pizza id";
		cin>>p[rear].item[i];
		
		cout<<"Enter size";
		cin>>size;
		
		if(size=='r')
		p[rear].rate[i]=100;
		cout<<"Enter quantity";
		cin>>p[rear].quantity[i];
		
		i++;
		cout<<"more pizza";
		cin>>ch;
}
while(ch=='y');

p[rear].Bill=0;

for(int j=0;j<i;j++)
{
		p[rear].Bill= p[rear].Bill + (p[rear].quantity[j]*p[rear].rate[j]);
}

p[rear].cnt=i;


}
   
void parlour::display()
{
	for(int i=front;i<=rear;i=(i+1)%max)
		{
				cout<<"Customer Id is = ";
	       		 cout<<p[i].cust_id;
	       		 cout<<"\n";
       		 
				for (int j=0;j<p[i].cnt;j++)
					{ 
								cout<<"Items are =";
								cout<< p[i].item[j];
								cout<<"\n";
								cout<<"Quentity are = ";
								cout<<  p[i].quantity[j];
								cout<<"\n";
					}
		
		cout<<"Bill of Customer =";
	 	cout<<p[i].Bill;
 	
    	cout<<"\n";  
    	}
}
int main()
{
    parlour p1;int i=0;
    int ch;
    do
	{
    	cout<<"1.placeorder\n";
		cout<<"2.Display\n";
    	cout<<"Enter choice : ";
    	cin>>ch;
    	switch(ch)
    	{
    	case 1:
    		p1.placeorder();
    		break;
    	case 2:
    		p1.display();
    		break;
    	}
	i++;
    	
    }
	while(i<10);

    return 0;
}
