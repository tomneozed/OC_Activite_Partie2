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
				
		case 2:
			cout << "C'est l'histoire d'un punk dans un bus, (Entrez e pour continuer)" << endl;
			cin >> reponse;
			cout << "le bus s'arrête, une none entre dedans et s'assoit à côté de lui, (Entrez e pour continuer)" << endl;
			cin >> reponse;
			cout << "le punk la trouve vraiment belle et ne peut s'empêcher de lui demander un rancard pour 'batifoler', " << endl;
			cin >> reponse;
			cout << "la none, choquée s'enfuit du bus, le punk est alors désemparé, " << endl;
			cin >> reponse;
			cout << "il demande de l'aide au chauffeur de bus, " << endl;
			cin >> reponse;
			cout << "celui-ci lui répond qu'il connaît très bien cette none et ses habitudes, il lui dit : " << endl;
			cin >> reponse;
			cout << "'La nuit, elle va au cimetière pour prier en paix, tu n'as qu'à te déguiser en Dieu et elle fera tout ce que tu lui demandes !'" << endl;
			cin >> reponse;
			cout << "c'est ainsi que le punk se déguise en Dieu pour attendre la none au cimetière, " << endl;
			cin >> reponse;
			cout << "il se cache derrière une tombe et attend patiemment... 00h00 ... 01h00 ... 02h00 ! la voilà !" << endl;
			cin >> reponse;
			cout << "le punk sort de sa cachette et dit : 'Je suis Dieu et de ce fait tu vas faire tout ce que je dit !'" << endl;
			cin >> reponse;
			cout << "la none acquiesce et se prosterne. Le punk lui dit alors : 'Nous devons faire l'amour !' " << endl;
			cin >> reponse;
			cout << "la none répond alors 'D'accord mais par derrière car sinon je ne serais plus vierge !' " << endl;
			cin >> reponse;
			cout << "le punk accepte et ils commencent à forniquer..." << endl;
			cin >> reponse;
			cout << "..." << endl;
			cin >> reponse;
			cout << "..." << endl;
			cin >> reponse;
			cout << "quand ils eurent fini, le punk retira on déguisement et dit : " << endl;
			cin >> reponse;
			cout << "'AHAH je t'ai bien eu je ne suis pas Dieu, je suis le punk !' La none se retourna, " << endl;
			cin >> reponse;
			cout << "enleva sa toge et lui dit : 'AHAH je t'ai bien eu je suis ne pas la none mais le chauffeur de bus !" << endl;   
			cin >> reponse;
			break;
	}
	}while(choix != 3);
}
