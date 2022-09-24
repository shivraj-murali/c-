#include<iostream>
#include<vector>
using namespace std;
int main ()
{
  int n,num=0;
  int temp;
  char c;
  vector<int> list {};
  while(true)
  {
    cout<<"Enter your choice: "<<endl;
    cout<<"P:Print Numbers "<<endl;
    cout<<"A:Add a new number "<<endl;
    cout<<"M:Display mean of the numbers "<<endl;
    cout<<"S:Display smallest number "<<endl;
    cout<<"L:Display largest number "<<endl;
    cout<<"Q:Quit "<<endl;

  cin>>c;
  if(c=='P'||c=='p')
  {
  for(int i=0;i<num;i++)
  {
    cout<<list.at(i)<<endl;
  }
  }
  else if (c=='A'||c=='a')
  {
    num++;
    cout<<"Enter the number to be added: ";
    cin>>n;
    cout<<"You added "<<n<<endl;

  }
  else if (c=='S'||c=='s')
  {
    for(int i=0;i<num;num++)
    {
      int temp=list.at(0);
      if(temp<list.at(i))
      {
        temp=list.at(i);
      }
      else
      {
        temp=temp;
      }
    }
    cout<<"Smallest element is: "<<temp<<endl;
  }
  else if(c=='L'||c=='l')
  {
    for(int i=0;i<num;num++)
    {
      int temp=list.at(0);
      if(temp>list.at(i))
      {
        temp=list.at(i);
      }
      else
      {
        temp=temp;
      }
      cout<<"Largest element is: "<<temp<<endl;
    }
  }
  else if (c=='Q' || c=='q')
  {
    return 0;
  }
  else
  {
    cout<<"Invalid choice"<<endl;
  }
}
  }
