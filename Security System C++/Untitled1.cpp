#include<iostream>

// this header file is used to read and write the file simultaneously.
#include<fstream>
using namespace std;
int main()
{
	int t=0;
	string p,i,p1,p2,pass;
	while(t!=3)
	{
		cout<<"1.Create New Password\n2.Show data\n3.Quit"<<endl;
		cout<<"Enter the choice:";
		cin>>t;
		switch(t)
		{
			case 1:
				{
					ifstream read("password.txt");
					cout<<"Enter your old password:";
					cin>>i;
					while(read>>p)
					{
						
						if(i==p)
						{
							read.close();
							ofstream write("password.txt");
							cout<<"Enter your new password:";
							cin>>p1;
							cout<<"Confirm your new password:";
							cin>>p2;
							if(p1==p2)
							{
								write<<p1;
								cout<<"Congrats! password change successfully"<<endl<<endl;
							}
							write.close();
							break;
						}
						else
						{
							cout<<"Please, enter valid password."<<endl<<endl;
						}
					}
					break;
				}
			case 2:
				{
					ifstream read("password.txt");
					cout<<"Please enter a password:";
					cin>>pass;
					while(read>>p)
					{
							
						if(pass==p)
						{
							cout<<"Congrats! Access granted"<<endl<<endl;
							break;
						}
						else
						{
							cout<<"Sorry! Password is wrong"<<endl;
						}
					}
					read.close();
					break;
				}
			case 3:
				{
					break;
				}
			default:
				cout<<"Enter a valid choice";
		}
	}
	return 0;
}
