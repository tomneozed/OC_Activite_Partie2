#include <string>
#include <iostream>

using namespace std;

int main()
{
	int choix = 0 ;
	string reponse;

	cout << endl << endl<< "**************************************************************************" << endl;
	
	cout << "OpenClassroom GitHub - Partie 2 - Activité" << endl << endl;
			
	cout << "**************************************************************************" << endl;
	
	do
	{
	
	cout << endl << endl <<"--- Menu ---" << endl;
	cout << "1) Devinette " << endl;
	cout << "2) Blague " << endl;
	cout << "3) Quitter" << endl;
	
	cin >> choix;
	
	switch(choix)
	{
		case 1:
			cout << "Jésus marie Joseph, qui est le curé ?" << endl << endl;
			cin >> reponse;
			cout << endl;
			if (reponse == "Jesus" || reponse == "jesus" || reponse == "jésus" || reponse == "Jésus")
			{
				cout << "Correct ! Bien joué c'est Jésus qui marie Joseph" << endl;
			}else
			{
				cout << "Dommage c'est pas la bonne réponse!" << endl;
			}
			
			break;			
	}
	
	
	
	}while(choix != 3);
}
