using namespace std;
#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<cstring>
#include<ctime>
int main()
{	
	
	char name[5][35]={	
						"Animesh Seemendra",
						"004-ISH Hostel",
						"JSS Academy of Technical Education",
						"C-20/1 Sector 62",
						"Noida"
					};
	for(int i=0;i<5;i++)
	{
		for(int j=0;name[i][j]!='\0';j++)
			{
				cout<<name[i][j];
				Sleep(100);
				if(name[i][j]!=' ')
				Beep(523,150);
			}
		cout<<endl;
	}
	cout<<endl<<"Press Enter to view the C.V of Animesh Seemendra";
	cin.ignore();
	cout<<endl;
	char menu[8][30]={
							"1. Career Objective",
							"2. Educational Qualification",
							"3. Achievements",
							"4. Certificates",
							"5. Technical know how",
							"6. Skills",
							"7. Other Interest",
							"8. Personal details"
					};
	menu:
	for(int i=0;i<8;i++)
	{
		for(int j=0;menu[i][j]!='\0';j++)
			{
				cout<<menu[i][j];
			}
		Sleep(300);
		cout<<"\n";
	}
	int choice;
	cout<<"Enter Your Choice :";
	cin>>choice;
	char career[200]="To work for an organization which provides me the opportunity to improve my  skills and knowledge to growth, which could help me in achieving my future goals  along with the organization objective.";
	char blank[68]="------------------------------------------------------------------";
	char education[12][50]={"* B.Tech in Information Technology" ,
							"  (Expected graduation: Summer 2020)",
							"* Higher Secondary",
							"  Cathedral Senior Secondary School",
							"  Lucknow",
							"  Year- 2015",
							"  Percentage-87%",
							"* Matriculation",
							"  Cathedral Senior Secondary School",
							"  Lucknow",
							"  Year- 2013",	
							"  C.G.P.A- 9.2",
						};
	char achi[23][70]={
						"* All India Rank: 92",
						"Silver Certificate",
						"Technothlon - IIT Guwahati",
						"2013",
"* 1st Prize",
"CathXperia Science Exibition",
"Project- Cycle Generator",
"Category- Physics",
"Cathedral Senior Secondary School",
"2013",
"* International Rank : 2,555",
"International Olympiad of Science",
"2013",
"* Olympiad Rank: 806",
"International Olympiad of Mathematics",
"2013",
"* Olympiad Rank: 2,741",
"Class Rank: 02",
"International Olympiad of Mathematics",
"2010",
"* Merit List",
"State Level U C MAS Abacus and Mental Arithmetic Competition-UCMAS",
"2009",
};
char cer[9][50]={"* Visharad in Tabla",
"Bhatkhande Music Institute University",
"Lucknow",

"* Level eight",
"UCMAS",

"* Ingenious Scientist",
"Regional Science City",
"Lucknow",
"2011",
};
char tech[12][70]={               "->Knowledge", 
"* C++",
"* C",
"* HTML5",
"* CSS",
"* Javascript",
"* Basics of Android development NDK.",
"* Microsoft office",
"* Microsoft movie maker",
"->Profiles:",
"* Github  : https://github.com/animeshseemendra",
"* Linkdin : https://in.linkedin.com/in/animesh-seemendra-469708127",

};
char skill[11][50]={             "->Technical",
"* Competitive Programming",
"* Algorithms",
"* Video editing",
"* Presentation",
"->Others",
"* Leadership",
"* Event management",
"* Creative thinking",
"* Public speaking",
"* Hindi poem writing",
};
char other[150]={"Computer gaming | Cooking | Traveling | Reading | Cricket | Table Tennis | Basketball | Science Fiction Movies |  "};
char per[4][100]={"Date of Birth 	     : 	29th June 1997",
"Gender	    	     :	Male",
"Permanent Address: 568 kha 401 Geetapalli, Alambagh" ,
			         "Lucknow",
};
	puts(blank);
	switch(choice)
		{
			case 1: cout<<endl<<"Career Objective"<<endl;
					for(int j=0;career[j]!='\0';j++)
						{
							cout<<career[j];
							Sleep(50);
						}
					cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
			case 2: cout<<endl<<"Enducational Qualification"<<endl;
					for(int i=0;i<12;i++)
						{	
							if(education[i][0]=='*')
								{
									cout<<endl<<endl;
								}
							for(int j=0;education[i][j]!='\0';j++)
								{
									cout<<education[i][j];
									Sleep(35);
								}
							cout<<endl;
						}
					cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
				case 3: cout<<endl<<"Achievements"<<endl;
					for(int i=0;i<23;i++)
						{	
							if(achi[i][0]=='*')
								{
									cout<<endl<<endl;
								}
							for(int j=0;achi[i][j]!='\0';j++)
								{
									cout<<achi[i][j];
									Sleep(60);
									Beep(550,80);
								}
							cout<<endl;
						}
					cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
				case 4:cout<<endl<<"Certificates"<<endl;
					for(int i=0;i<9;i++)
						{	
							if(cer[i][0]=='*')
								{
									cout<<endl<<endl;
								}
							for(int j=0;cer[i][j]!='\0';j++)
								{
									cout<<cer[i][j];
									Sleep(60);
									Beep(550,70);
								}
							cout<<endl;
						}
					cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
				case 5:cout<<endl<<"Technical know how"<<endl;
					for(int i=0;i<12;i++)
						{	
							if(tech[i][0]=='-')
								{
									cout<<endl<<endl;
								}
							for(int j=0;tech[i][j]!='\0';j++)
								{
									cout<<tech[i][j];
									Sleep(60);
								}
							cout<<endl;
						}
					cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
				case 6:cout<<endl<<"Skills"<<endl;
					for(int i=0;i<11;i++)
						{	
							if(skill[i][0]=='-')
								{
									cout<<endl<<endl;
								}
							for(int j=0;skill[i][j]!='\0';j++)
								{
									cout<<skill[i][j];
									Sleep(60);
								}
							cout<<endl;
						}
					cout<<endl<<"Press enter to continue "<<endl;
					cin.ignore();
					puts(blank);
					goto menu;
				case 7:cout<<endl<<"Other Interests"<<endl;
							for(int j=0;other[j]!='\0';j++)
								{
									cout<<other[j];
									Sleep(60);
								}
						cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
				case 8:cout<<endl<<"Personal Information"<<endl;
					for(int i=0;i<4;i++)
						{	
							if(per[i][0]=='*')
								{
									cout<<endl<<endl;
								}
							for(int j=0;per[i][j]!='\0';j++)
								{
									cout<<per[i][j];
									Sleep(60);
								}
							cout<<endl;
						}
					cout<<endl<<"Press enter to continue "<<endl;	
					cin.ignore();
					puts(blank);
					goto menu;
				default:
						cout<<"Thank You";
						cout<<endl<<"Animesh Seemendra"<<endl;
						puts(blank);
						cin.ignore();
						break;
					
		}
	return 0;
}
