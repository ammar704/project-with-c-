
//Ammar Shatnawi
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

//////////////////////////////////////// my classes
class add{
	
	public:
		int id;
		string name;
};
class doacti:add{
	public:
		char varchar;
	string varstring;
	string varupdate;
	private : 
	string stringcount1;
	string stringcount2;
	
};
 class view{
	public:
		int x;
		void viewclass ( string x)
		{
			cout<<
"	03:55	Fin	Atl. Madrid  vs  Bayer Leverkusen 1 - 0	"
 "Shakhtar Donetsk D. Zagreb  2 - 2	/n"
 " Club Brugge KV     Paris SG  0 - 1  "	
 " Galatasaray   vs  Real Madrid 0 - 1 "	
 " Juventus    vs Lokomotiv Moscow 0 - 1	 "
" Manchester City  vs  Atalanta  2 - 1	 "  
"  Olympiacos Piraeus  vs  Bayern Munich  1 - 1 "	
 "Tottenham  vs FK Crvena zvezda  0-0"<<endl;
		}	
};
////////////////////////////////////////////////////// my funcs
string leage(string team)
{
	string s;
	
	string spinshteams[] ={"realmadried" , "barcelona","valencia"};
	string englishteams[] ={"man united" , "leverpool","arcenal"};
	string italianteams[] ={"aci milan" , "juventus","roma"};
	 for(int i=0;i<3;i++)
	 {
	 	if(team== spinshteams[i] )
	      	s="spinshteams ";
	 	if(team== englishteams[i] )
	 		s="englishteams ";
	 	if(team== italianteams[i] )
	 		s="italianteams ";

	 }
	 
	return s;
	/*
	
		switch(s){
				case 1:(s== real madried || s==barcelona || s== valencia)
					
			
		}
		*/
}
int main() {
	
	view viewobj;
			
			cout<<"--------------------------------soccer result live-------------------------"<<endl<<
"	03:55	Fin	Atl. Madrid  vs  Bayer Leverkusen 1 - 0	"

 "Shakhtar Donetsk D. Zagreb  2 - 2	/n"
 " Club Brugge KV     Paris SG  0 - 1  "	
 " Galatasaray   vs  Real Madrid 0 - 1 "	
 " Juventus    vs Lokomotiv Moscow 0 - 1	 "
" Manchester City  vs  Atalanta  2 - 1	 "  
"  Olympiacos Piraeus  vs  Bayern Munich  1 - 1 "	
	
 "Tottenham  vs FK Crvena zvezda  0-0"<<endl;
		
		
	
	
	add addobj;
	int counter=1;
	int index=0;
	string followingteams[5];
	while(counter !=0)
	{
			cout<<"please choose your team!and start follow:)"<<endl;
	cin>>addobj.name;
	
	addobj.id=1;
	
	string teamleage =leage(addobj.name);
	cout<<teamleage<<endl;
	
	cout<<"start following "<<addobj.name<<"playing in "<<teamleage<<endl;
	
	followingteams[index++]=addobj.name;
	//+"  playing in :"+teamleage;
	
	int score[10]={1,2,3,4,5,6,7,8,9,0};
	string spinishteams []={"Athletic Bilbao" ,"Atletico Madrid" ,"Celta Vigo", "Deportivo",  "Barcelona", "Getafe", "Granada", "Levante", "Malaga", "Osasuna", "Rayo", "Betis", "Real Madrid",  "Mallorca", "Sociedad", "Valladollid",  "Zaragoza", "Sevilla",  "Gijon", "Valencia", "Villarreal"};
//	int teams[10]={1,2,3,4,5,6,7,8,9,0};
	
	for(int i=0;i<20;i++)
	{
		int score1=rand() % 9 + 0;
		int score2=rand() % 9 + 0;
		int x=rand() % 20+0;
		cout<< addobj.name<< "  "<<score1<<"         "<<score2<<"  " <<spinishteams[x] <<endl;
		
	}
	cout<<"press 1 to add another team, or press 0 to exit"<<endl;
	cin>>counter;
	}
     cout<<"no results to desplay"<<endl;
	
	cout<<"your following team(s):"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<followingteams[i]<<endl;
	}
	
	int z=0;
	char varchar;
	string varstring;
	string varupdate;
	string stringcount1;
	string stringcount2;
	cout<<"if you like to delete or update one or more from your following list teams please press 1:"<<endl;
	cin>>z;
	while(z==1)
	{
		
		cout<<"for delete following team press d , u for update and 0 to exit: "<<endl;
		cin>>varchar;
		if (varchar=='d')
		{
			z=0;
			cout<<"please enter the name of the team:"<<endl;
			cin>>varstring;
			
			for(int i=0;i<5;i++)
			{
			//	stringcount1=followingteams[i];
				
				if(varstring== followingteams[i])
				{
					for(int j=i;j<5;j++)
					{
						followingteams[j]=followingteams[j+1];
						
					}
					
				}
				
				
				
			}
		}
			
		if (varchar=='u')
		{
				cout<<"please enter the name of the team that you want to change:"<<endl;
				cin>>varstring;
				cout<<"please enter the name of the team:"<<endl;
				cin>>varupdate;
					for(int i=0;i<5;i++)
			{
			//	stringcount1=followingteams[i];
				
				if(varstring== followingteams[i])
				{
					
					followingteams[i]=varupdate;
				}
				
				
				
			}
				
		}
		
				cout<<"your following team(s):"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<followingteams[i]<<endl;
	}
		
		
	}

	
	system("pause");
	return 0;
}




