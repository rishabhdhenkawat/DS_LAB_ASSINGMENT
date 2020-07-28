#include<iostream>
using namespace std;
void swap(float *a1,float *a2);
class Records
{
	public:
		int RollNo;
		char Name[10];
		float CGPI;
		
		float EnterRecord(int i)
		{
			cout<<i+1<<" Enter the student name : ";
			cin>>Name;
			cout<<"  Enter the Roll No : ";
			cin>>RollNo;
			cout<<"  Enter the CGPI : ";
			cin>>CGPI;
			cout<<endl<<endl;
			return CGPI;
		}
};
int main()
{
	cout<<"STUDENTS RECORDS"<<endl<<endl;
	Records rec[6];
	int j=1;
	float arr[5],k;
	for(int i=0;i<5;i++)
	{
		arr[i]=rec[i].EnterRecord(i);
	}
	cout<<endl<<"----------------------------------------------------------------------"<<endl;
	cout<<endl<<"Enter the passing CGPI (K Value) : ";
	cin>>k;
	cout<<endl<<"Record of Passing Students : "<<endl<<endl;
	cout<<"S.NO \t\t\tRollNo \t\t\tName\t\t\tCGPI"<<endl; 
	for(int i=0;i<5;i++)
	{
		if(k<arr[i])
		{
			cout<<j<<"\t\t\t"<<rec[i].RollNo<<"\t\t\t"<<rec[i].Name<<"\t\t\t"<<rec[i].CGPI<<endl;
			j++;
		}
	}
	cout<<"Enter the record Kth position"<<endl;
	if(k>5)
	{
		rec[5].EnterRecord(0);
	}
	else
	{
		int pos,length;
		pos=k;
		length=sizeof(rec[pos-1].Name)/sizeof(char);
		for(int i=0;i<length;i++)
		{
			rec[5].Name[i]=rec[pos-1].Name[i];
		}
		rec[5].RollNo=rec[pos-1].RollNo;
		rec[5].CGPI=rec[pos-1].CGPI;
		rec[pos-1].EnterRecord(pos-1);
	}
	j=1;
	cout<<"S.NO \t\t\tRollNo \t\t\tName\t\t\tCGPI"<<endl; 
	for(int i=0;i<6;i++)
	{
		cout<<j<<"\t\t\t"<<rec[i].RollNo<<"\t\t\t"<<rec[i].Name<<"\t\t\t"<<rec[i].CGPI<<endl;
		j++;
	}
}
