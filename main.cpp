#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>


using namespace std;

int MQuestion1(int yes)
{
	char answer;
	cout<<"Vopros 1"<<endl<<endl<<"Kilogramm orehov stoit 75 rublej."<<endl<<"Masha kupila 4 kg 400 g orehov."<<endl<<"Skol'ko rublej sdachi ona dolzhna poluchit' s 350 rublej?";
	cout<<endl<<endl<<"1. 10"<<endl<<"2. 20"<<endl<<"3. 30"<<endl<<"4. 40"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        if(answer=='1' || answer=='3' || answer=='4')
        {
        	break;
		}
		else if(answer=='2')
		{
			yes++;
			break;
		}
		else
		{
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
	}
	return yes;	
}

int MQuestion2(int yes)
{
	char answer;
	cout<<"Vopros 2"<<endl<<endl<<"ZHeleznodorozhnyj bilet dlya vzroslogo stoit 720 rublej."<<endl<<"Stoimost' bileta dlya shkol'nika sostavlyaet 50% ot stoimosti bileta dlya vzroslogo."<<endl<<"Gruppa sostoit iz 15 shkol'nikov i 2 vzroslyh."<<endl<<"Skol'ko rublej stoyat bilety na vsyu gruppu?";
	cout<<endl<<endl<<"1. 6760"<<endl<<"2. 7020"<<endl<<"3. 6940"<<endl<<"4. 6840"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        if(answer=='1' || answer=='2' || answer=='3')
        {
        	break;
		}
		else if(answer=='4')
		{
			yes++;
			break;
		}
		else
		{
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
	}
	return yes;
}

int MQuestion3(int yes)
{
	char answer;
	cout<<"Vopros 3"<<endl<<endl<<"V shkole francuzskij yazyk izuchayut 124 uchashchihsya, chto sostavlyaet 25% ot chisla vsekh uchashchihsya shkoly."<<endl<<"Skol'ko uchashchihsya v shkole?";
	cout<<endl<<endl<<"1. 372"<<endl<<"2. 434"<<endl<<"3. 496"<<endl<<"4. 620"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        if(answer=='1' || answer=='2' || answer=='4')
        {
        	break;
		}
		else if(answer=='3')
		{
			yes++;
			break;
			
		}
		else
		{
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
	}
    return yes;
}

int MQuestion4(int yes)
{
	char answer;
	cout<<"Vopros 4"<<endl<<endl<<"Tetrad' stoit 40 rublej."<<endl<<"Kakoe naibolshee chislo takih tetradej mozhno budet kupit' na 750 rublej posle ponizheniya ceny na 10%?";
	cout<<endl<<endl<<"1. 20"<<endl<<"2. 19"<<endl<<"3. 22"<<endl<<"4. 17"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        if(answer=='3' || answer=='2' || answer=='4')
        {
        	break;
		}
		else if(answer=='1')
		{
			yes++;
			break;
		}
		else
		{
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
	}	
	return yes;
}

int MQuestion5(int yes)
{
	char answer;
	cout<<"Vopros 5"<<endl<<endl<<"Cena na elektricheskij chajnik byla povyshena na 16% i sostavila 3480 rublej."<<endl<<"Skol'ko rublej stoil chajnik do povysheniya ceny?";
	cout<<endl<<endl<<"1. 3000"<<endl<<"2. 3080"<<endl<<"3. 3040"<<endl<<"4. 2960"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        if(answer=='3' || answer=='2' || answer=='4')
        {
        	break;
		}
		else if(answer=='1')
		{
		yes++;
		break;
		}
		else
		{
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
	}
	return yes;	
}

int MQuestion6(int yes)
{
	char answer;
	cout<<"Vopros 6"<<endl<<endl<<"Pachka slivochnogo masla stoit 60 rublej."<<endl<<"Pensioneram magazin delaet skidku 5%."<<endl<<"Skol'ko rublej zaplatit pensioner za pachku masla?";
	cout<<endl<<endl<<"1. 56"<<endl<<"2. 57.5"<<endl<<"3. 57"<<endl<<"4. 58"<<endl;
    for(;;)
	{
		cout<<endl<<endl<<"Vvedite otvet (cifru ot 1 do 4): ";
        cin>>answer;
        if(answer=='1' || answer=='2' || answer=='4')
        {
        	break;
		}
		else if(answer=='3')
		{
			yes++;
			break;
		}
		else
		{
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 4 zanovo!";
		}
	}
	return yes;
}

int Math(int yes)
{
   system("cls");
   yes = MQuestion1(yes);
   system("cls");
   yes = MQuestion2(yes);
   system("cls");
   yes = MQuestion3(yes);
   system("cls");
   yes = MQuestion4(yes);
   system("cls");
   yes = MQuestion5(yes);
   system("cls");
   yes = MQuestion6(yes);
   system("cls");
   return yes;
}



int main()
{
	int i, yes=0, x;
	char num='0';
	cout<<"Privet, predlagaem vam projti nash Qiuz!";
	cout<<endl<<endl<<"------------------------------------";
	cout<<endl<<"|   1. Matematicheskie zadachki     |";
	cout<<endl<<"|                                   |"<<endl<<"|   2. Udareniya v russkom yazyke   |";
	cout<<endl<<"------------------------------------";
    for(i=0; i<1; i++)
	{
		cout<<endl<<endl<<"Vyberite chislo ot 1 do 2: ";
        cin>>num;
        if(num=='1' || num=='2')
        {
        	if(num=='1')
        	{
        		x=Math(yes);
        		cout<<"-------------------------------------"<<endl<<"|       Pravil'nye otvety: "<<x<<"        |"<<endl<<"|                                   |"<<endl;
        		cout<<"|       Nepravil'nye otvety: "<<6-x<<"      |"<<endl<<"|                                   |";
        		if(x==1 || x==2)
        		{
        			cout<<endl<<"|       Vash uroven' znanij: "<<"Low"<<"    |"<<endl;
				}
				else if(x==3 || x==4)
				{
					cout<<endl<<"|       Vash uroven' znanij: "<<"Medium"<<" |"<<endl;
				}
				else
				{
					cout<<endl<<"|       Vash uroven' znanij: "<<"High"<<"   |"<<endl;
				}
				cout<<"-------------------------------------"<<endl;
        		cout<<endl<<"Vernut'sya v glavnoe menyu"<<endl<<endl<<"1. Da"<<endl<<"2. Net"<<endl;
        		for(i=0; i<1; i++)
	{
		cout<<endl<<"Vyberite chislo ot 1 do 2: ";
        cin>>num;
        if(num=='1' || num=='2')
        {
        	if(num=='1')
        	{
        		system("cls");
        		x=main();
			}
			else
			{
				system("cls");
				cout<<endl<<"Spasibo za prohozhdenie testa!"<<endl;
			}
		}
		else
		{
			i--;
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 2 zanovo!"<<endl;
		}
	}
			}
			else
			{
				
			}
		}
		else
		{
			i--;
			cout<<endl<<"Vy vveli nedopustimoe znachenie. Vvedite chislo ot 1 do 2 zanovo!";
		}
	}
 return 0;
}