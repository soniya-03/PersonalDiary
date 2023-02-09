#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20];
int total=0;
class abc
{
	public:
		char pass[20];                     
		void get()
		
		{
			cout<<"\n\t\n\n\n\t \nLogin";
			cout<<"\n \t\t\t\t\t\n Enter Password:";
			cin>>pass;
		}
		
};

void enter(){




		int ch=0;

			cout<<"\t\nHow many records do u want to enter?"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Data of incident "<<i+1<<endl<<endl;

				cout<<"Enter name:  ";

				cin>>arr1[i];

				cout<<"Enter place: ";

				cin>>arr2[i];

				cout<<"Enter duration:  ";

				cin>>arr3[i];

				cout<<"Enter month: ";

				cin>>arr4[i];

				cout<<"Enter contact:  ";

				cin>>arr5[i];
				
				cout<<"Enter the incident:  ";
				cin>>arr6[i];

				

			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Data of incident "<<i+1<<endl<<endl;

				cout<<"Enter name :";

				cin>>arr1[i];

				cout<<"Enter  place: ";

				cin>>arr2[i];

				cout<<"Enter duration: ";

				cin>>arr3[i];

				cout<<"Enter month : ";

				cin>>arr4[i];

				cout<<"Enter contact: ";

				cin>>arr5[i];
				
				cout<<"Enter the incident: ";
				cin>>arr6[i];
			}

			total=ch+total;

			}

	

}

void show()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of incident happended: "<<i+1<<endl<<endl;

	    		cout<<"Name : "<<arr1[i]<<endl;

	    		cout<<"Place: "<<arr2[i]<<endl;

	    		cout<<"Duration:  "<<arr3[i]<<endl;

	    		cout<<"Month: "<<arr4[i]<<endl;

	    		cout<<"Contact:  "<<arr5[i]<<endl;
				
				cout<<"Incident :"<<arr6[i]<<endl;
				
	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string place;

				cout<<"Enter the place of incident :"<<endl;

				cin>>place;

				for(int i=0;i<total;i++)
				{

					if(place==arr2[i])

					{

						cout<<"Name: "<<arr1[i]<<endl;

	    	        	cout<<"Place:"<<arr2[i]<<endl;

	    		        cout<<"Duration: "<<arr3[i]<<endl;

	    		        cout<<"Month :"<<arr4[i]<<endl;

	    	        	cout<<"Contact: "<<arr5[i]<<endl;
						
						cout<<" Incident: "<<arr6[i]<<endl;
					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string place;

				cout<<"Enter the place of incident which you want to update: "<<endl;

				cin>>place;

					for(int i=0;i<total;i++)

				{

					if(place==arr2[i])

					{

						cout<<"\nPrevious incident: "<<endl<<endl;

						cout<<"New incident "<<i+1<<endl;

						cout<<"Name:  "<<arr1[i]<<endl;

	    	        	cout<<"Place:"<<arr2[i]<<endl;

	    		        cout<<"Duration: "<<arr3[i]<<endl;

	    		        cout<<" Month: "<<arr4[i]<<endl;

	    	        	cout<<"Contact :"<<arr5[i]<<endl;
	    	        	
						cout<<" Incident"<<arr6[i]<<endl;
						
	    	        	cout<<"\nEnter new data: "<<endl<<endl;

							cout<<"Enter name:  ";

				            cin>>arr1[i];

				            cout<<"Enter place :";

				            cin>>arr2[i];

			             	cout<<"Enter Duration : ";

				            cin>>arr3[i];

				            cout<<"Enter Month :";

				            cin>>arr4[i];

				            cout<<"Enter contact: ";

				            cin>>arr5[i];
							
							
							cout<<"Enter the incident";
							cin>>arr6[i];
					}

				}

			}

		}



void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string place;

				cout<<"Enter the place of incident which you wanted to delete"<<endl;

				cin>>place;

				for(int i=0;i<total;i++)

				{

					if(place==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];
						
						arr6[j]=arr6[j+1];				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"Invalid input";

			}

}

}

int main()

{

	int value;
	
	cout<<"\n\t\t\t\t\t\t Personal diary management \t";
	abc aa;
	aa.get();
	
	while(true)

	{
	
	cout<<"\n\tPress 1 to enter data"<<endl;

	cout<<"\n\tPress 2 to show data"<<endl;

	cout<<"\n\tPress 3 to search data"<<endl;

	cout<<"\n\tPress 4 to update data"<<endl;

	cout<<"\n\tPress 5 to delete data"<<endl;

	cout<<"\n\tPress 6 to exit"<<endl;
	cout<<"\n\tEnter your choice:";
	cin>>value;
	
	
	
	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}
}







