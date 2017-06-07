#include <string>
#include <iostream>

using namespace std;

int main()
{
	int choix = 0 ;

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
	
	}while(choix != 3);
}
