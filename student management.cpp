#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
int choice;
cout<<"how many students do you want to enter:";
cin>>choice;
if(total==0)
{	
total=total+choice;
for(int i=0;i<choice;i++)
{
 cout<<"\nenter data of students:"<<i+1<<endl<<endl;
 cout<<"enter name:";
 cin>>arr1[i];
 cout<<"enter rollno:";
 cin>>arr2[i];
 cout<<"enter course:";
 cin>>arr3[i];
 cout<<"enter class:";
 cin>>arr4[i];
 cout<<"enter contect:";
 cin>>arr5[i];	
}
}
else{for(int i=total;i<total+choice;i++)
{
 cout<<"\nenter data of students:"<<i+1<<endl<<endl;
 cout<<"enter name:";
 cin>>arr1[i];
 cout<<"enter rollno:";
 cin>>arr2[i];
 cout<<"enter course:";
 cin>>arr3[i];
 cout<<"enter class:";
 cin>>arr4[i];
 cout<<"enter contect:";
 cin>>arr5[i];	
}
total=total+choice;	
}
}

void show()
{
for(int i=0;i<total;i++)
{
	cout<<"data of student:"<<i+1<<endl<<endl;
	cout<<"name:"<<arr1[i]<<endl;
	cout<<"roll no:"<<arr2[i]<<endl;
	cout<<"course:"<<arr3[i]<<endl;
	cout<<"class:"<<arr4[i]<<endl;
	cout<<"contect:"<<arr5[i]<<endl;
	}	
}
void search()
{
	string rollno;
cout<<"enter roll no of student which you want to search:";	
cin>>rollno;
for(int i=0;i<total;i++){
	if(rollno==arr2[i]){
		cout<<"data of student:"<<i+1<<endl<<endl;
	cout<<"name:"<<arr1[i]<<endl;
	cout<<"roll no:"<<arr2[i]<<endl;
	cout<<"course:"<<arr3[i]<<endl;
	cout<<"class:"<<arr4[i]<<endl;
	cout<<"contect:"<<arr5[i]<<endl;
	}
}
}
void update()
{
	string rollno;
cout<<"enter roll no of student which you want to search:";	
cin>>rollno;
for(int i=0;i<total;i++){
	if(rollno==arr2[i]){
		cout<<"previous data:"<<endl<<endl;
		cout<<"data of student:"<<i+1<<endl<<endl;
	cout<<"name:"<<arr1[i]<<endl;
	cout<<"roll no:"<<arr2[i]<<endl;
	cout<<"course:"<<arr3[i]<<endl;
	cout<<"class:"<<arr4[i]<<endl;
	cout<<"contect:"<<arr5[i]<<endl;
	cout<<"\nenter new data"<<endl;
	cout<<"enter name"<<endl;
	cin>>arr1[i];
	cout<<"enter rollno"<<endl;
	cin>>arr2[i];
	cout<<"enter course"<<endl;
	cin>>arr3[i];
	cout<<"enetr subject"<<endl;
	cin>>arr4[i];
	cout<<"enter contect"<<endl;
	cin>>arr5[i];
}
}	
}
void deleterecord()
{
int a;
cout<<"press 1 to delete full record"<<endl;
cout<<"press 2 to delete specific record"<<endl;
cin>>a;
if(a==1)
{
	total=0;
	cout<<"all record is deleted"<<endl;
	}
	else(a==2)
	{
	string rollno;
	cout<<"enter rollno which you want to delete"<<endl;
	cin>>rollno;
	for(int i=0;i<total;i++)	
	{
		if(rollno==arr2[i]){
			for(j=i;j<total;j++){
				arr1[j]=arr1[j+1];
				arr2[j]=arr2[j+1];
				arr3[j]=arr3[j+1];
				arr4[j]=arr4[j+1];
				arr5[j]=arr5[j+1];
			}
			total--;
			cout<<"your required record is deleted..!"<<endl;
		}
	}
		}	

}
int main()
{
	int value;
	while(true)
	{
	 cout<<"press 1 to enter data"<<endl;
	 cout<<"press 2 to show data"<<endl;
	 cout<<"press 3 to search data"<<endl;
	 cout<<"press 4 to update data"<<endl;
	 cout<<"press 5 to delete data"<<endl;
	 cout<<"press 6 to exit"<<endl;
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
			default:
			cout<<"invalid input"<<endl;
			break;
			
	 }
}
}