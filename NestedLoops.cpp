#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  int marks;
	int n,y;
	cout<<"Enter number of initially estimated students"<<endl;
	cin>>n;
	vector<int>record(n);
	cout<<"Enter actual number of students"<<endl;
	cin>>y;
	if (y<=n)
	{
		cout<<endl;
		for(int i=0;i<y;i++)
		{
			int marks;
			cout<<"Enter marks of student "<<i+1<<endl;
			cin>>record[i];
		}
		cout<<endl;
		cout<<"---------Marklist of Students------------"<<endl;
		//Printing marklist
		for(int i=0;i<n;i++)
		{
			cout<<"Marks of student "<<i+1<<" is "<<record[i]<<endl;
		}
	}
	else
	{
		int x=y-n;
		for (int i=0;i<y;i++)
		{
			cout<<"Enter marks of student "<<i+1<<":";
			cin>>marks;
			for(int i=n;i<y;i++)
      {
        record.push_back(marks);
      }
		}
		//New mark list
		cout<<endl;
		cout<<"---------Marklist of Students------------"<<endl;
		for(int i=0;i<y;i++)
		{
			cout<<"Marks of student "<<i+1<<" is: "<<record.at(i)<<endl;;
		}
	return 0;
	}

}
