/*
 *program: ideal.cpp
 *Danny Nurakhmad
 *19.61.0158
 *19-BCI-01
 */

#include <iostream>

using namespace std;

int main()
{
	float a, h, i;
	char g, l;
	
	hoho :
	system("cls");
	
	cout<<"=================================="<<endl;
	cout<<"[                                ]"<<endl;
	cout<<"[     Ideal Weight Calculator    ]"<<endl;
	cout<<"[                                ]"<<endl;
	cout<<"=================================="<<endl;
	cout<<"\n";

	cout<<">Age		:       years old<\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin>>a;
	cout<<"\n";

	if(a>=2 && a<=10)
	{
		cout<<">Gender(M/F)	:                <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin>>g;
		cout<<"\n";
		cout<<"=================================="<<endl;
		cout<<"\n";

		if(g=='M' || g=='m')
		{
			i = ((a*2)+8);
			cout<<">Ideal Weight	:       Kg       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i<<endl;
		}
		
		else if (g=='F' || g=='f')
		{
			i = ((a*2)+8);
			cout<<">Ideal Weight	:       Kg       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i<<endl;
		}

		cout<<"\n";
		cout<<"##################################"<<endl;
		cout<<"\n\n";
	}
	
	else if(a>=11 && a<=29)
	{
		cout<<">Gender(M/F)	:                <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin>>g;
		cout<<"\n";

		cout<<">Height		:       Cm       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin>>h;
		cout<<"\n";
		cout<<"=================================="<<endl;
		cout<<"\n";

		if(g=='M' || g=='m')
		{
			i = ((h-100)-(0.1*(h-100)));
			cout<<">Ideal Weight	:       Kg       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i<<endl;
		}
		
		else if(g=='F' || g=='f')
		{
			i = ((h-100)-(0.15*(h-100)));
			cout<<">Ideal Weight	:       Kg       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i<<endl;
		}

		cout<<"\n";
		cout<<"##################################"<<endl;
		cout<<"\n\n";
	}
	
	else if(a>=30 && a<=80)
	{
		cout<<">Gender(M/F)	:                <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin>>g;
		cout<<"\n";

		cout<<">Height		:       Cm       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cin>>h;
		cout<<"\n";
		cout<<"=================================="<<endl;
		cout<<"\n";

		if(g=='M' || g=='m')
		{
			i = h-100;
			cout<<">Ideal Weight	:       Kg       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i<<endl;
		}
		
		else if(g=='F' || g=='f')
		{
			i = h-100;
			cout<<">Ideal Weight	:       Kg       <\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i<<endl;
		}

		cout<<"\n";
		cout<<"##################################"<<endl;
		cout<<"\n\n";
	}
	
	cout<<"Again?"<<endl;
	cout<<"\n";
	cout<<"(Y/y) to YES"<<endl;
	cout<<"(Enter any letter) to CANCEL"<<endl;
	cout<<"\n";
	cin>>l;
	
	if(l=='Y' || l=='y')
	{
		goto hoho;
	}

	else
	{
		return 0;
	}
	
}