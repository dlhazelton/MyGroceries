#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;
  int itemlist = 0;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
        string item;
        cout<<"What item? ";
        cin.ignore();
        getline(cin,item);
        list.push_back(item);
        itemlist++;
    }
  }while( input != 'q' && input != 'Q' );

  if( itemlist == 0 )
  {
    cout<<"\nThere are no items on the list.";
  }
  else
  {
    cout<<"\nThere are "<<itemlist<<" items on the list.";
  }

  return 0;
}
