#include<iostream>
using namespace std;

void showmenu();
int addition(float,float);
int main()
{
  float x,y;
  int choice;
  do{
      showmenu();
      cin>>choice;
    switch(choice){
        case 1:
            cout<<"enter the numbers"<<endl;
            cin>>x>>y;
            cout<<"the result is="<<addition(x,y)<<endl;
          break;   
        }
    
    }while(choice!=5);
    return 0;
}

  void showmenu()
{
    cout<<"menu"<<endl;
    cout<<"1: Addition"<<endl;
    cout<<"5: Exit"<<endl;
    cout<<"Enter your choice"<<endl;
}

int addition(float x,float y)
{
  return (x+y);
}