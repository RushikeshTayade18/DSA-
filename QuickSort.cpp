#include<iostream>
using namespace std;
class Quick
{
	public:
	void quickSort(int arr[],int low,int high) 
	{ 
		    if (low<high) 
		    { 
		        int pi=partition(arr,low,high); 
		        quickSort(arr,low,pi-1); 
		        quickSort(arr,pi+1,high); 
		    } 
	} 
	
	int partition (int arr[],int low,int high) 
		{ 
					int temp;
				    int pivot = arr[high]; 
				    int i = (low-1); 
				  
				    for(int j=low;j<=high-1;j++) 
				    {
					
				        if (arr[j] <= pivot) 
				        { 
				            i++; 
				           temp=arr[j];
				           arr[j]=arr[i];
				           arr[i]=temp;
				        } 
				    } 
				   temp=arr[high];
				   arr[high]=arr[i+1];
				   arr[i+1]=temp;
				   
				    return (i + 1); 
		} 
		
		void Top_five(int arr[],int n)
		{
			cout<<"Top five Numbers Are as follow ";
			{
				for(int i=n-1;i>=n-5;i--)
				{
					cout<<arr[i];
				}
			}
		}
};

int main()
{	
	Quick q1;
	int n,arr[20];
	cout<<"Enter elements \n";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	q1.quickSort(arr,0,n-1);
	
	cout<<"Sorted Elements Are \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
		
	q1.Top_five(arr,n);	
	return 0;
}



