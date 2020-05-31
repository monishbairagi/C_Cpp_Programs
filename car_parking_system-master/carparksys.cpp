#include<iostream>
#include<string.h>
using namespace std;
struct node{int is_in=0,token_no; char name[30],vehicle_id[10];}info[100]; int n;

void enter() //IT CREATES A SPACE FOR A VEHICLE & INPUT ALL INFORMATION
{int i; 
 cout<<"****************************************************************************\n";
 for(i=0;i<n;i++)
 {if(info[i].is_in==0){
                      info[i].is_in=1;
					  cout<<"\nEnter Your Name: ";  gets(info[i].name); gets(info[i].name);
                      cout<<"Enter Your Vehicle Id: "; gets(info[i].vehicle_id);
                      cout<<"Your Token No. is: "<<info[i].token_no<<endl;
					  break;
					  }
 }
 if(i==n) cout<<"\nNo Spaces Left.\n";
 cout<<"****************************************************************************\n";
}

void xit() //IT RELEASE A SPCACE 
{int i,t;
 cout<<"****************************************************************************\n"; 
 cout<<"\nEnter Your Token No.: "; cin>>t;
 for(i=0;i<n;i++){ if(info[i].token_no==t){ info[i].is_in=0;break; } }
 if(i==n) cout<<"WRONG INPUT!\n";
 cout<<"****************************************************************************\n";
}

void disp() //IT PRINTS ALL OCCUPIED SPACES INFORMATIONS
{cout<<"****************************************************************************\n";
 for(int i=0;i<n;i++)
  {if(info[i].is_in==1){ cout<<"\nTOKEN NO.: "<<info[i].token_no<<endl;
                         cout<<"NAME: "<<info[i].name<<endl;
                         cout<<"VECHILE ID: "<<info[i].vehicle_id<<endl<<endl;;
					    }
  }
 cout<<"****************************************************************************\n";
}

int main()
{int val; cout<<"Enter Total no. of Parking Spaces: "; cin>>n;
 for(int i=0;i<n;i++){ info[i].token_no=i+1; }
  while(val!=444)
  {
    cout<<"\nOptions:-\n1.Enter\n2.Exit\n3.Display\nEnter Your Choice: "; cin>>val;
    switch(val)
    {case 1:enter(); break;
     case 2:xit(); break;
     case 3:disp();break;
     default:cout<<"Wrong input!\n";
    } 
   cout<<"****************************************************************************\n";
  }
 cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
return 0;
}
