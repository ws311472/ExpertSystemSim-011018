#include "pch.h"
#include <iostream>
#include <cstdlib>
#include "conio.h"
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	string sPonyBreed[11] = { "Shetland", "Eriskay", "Highland", "Fell", "Dales", "Welsh Mountain", "Welsh Cob", "Exmoor", "Dartmoor", "New Forest", "Connemara" };
	string sHorseBreed[] = { "Clydesdale", "Shire", "Cleveland Bay", "Thoroughbred", "Hackney", "Suffollk Punch", "" };
	string sColour[9] = { "bay", "black", "grey", "chestnut", "palomino", "piebald", "skewbald", "roan", "dun" };
	float iHeightPony[17] = { 8, 10, 11, 11.1, 11.2, 11.3, 12, 12.1, 12.2, 12.3, 13, 13.1, 13.2, 13.3, 14, 14.1, 14.2 };
	float iHeightHorse[14] = { 14.3, 15, 15.1, 15.2, 15.3, 16, 16.1, 16.2, 16.3, 17, 17.1, 17.2, 17.3, 18 };
	string sCountry[4] = { "wales", "england", "scotland", "ireland" };
	string sSport[2] = { "racing", "driving" };
	string sN = "", sNs = "no", sHorPon = "", sHorseStore = "horse", sPonyStore = "pony", sCountryi = "", sColouri = "";

	cout << "NATIVE HORSE & PONY IDENTIFICATION SYSTEM" << endl;

	cout << "Do you know what breed you are looking for?" << endl;
	cin >> sN;

	if (sN != sNs)
	{
		cout << "If you already know the answer then why are you here?" << endl;
	}
	else {

		cout << "Good. Please answer the following questions: " << endl;
	}

	cout << "Is it a horse or a pony you are looking for? " << endl;

	cin >> sHorPon;

	if (sHorPon == sHorseStore) {

		cout << "A horse? Cool. " << endl;
		cout << "Where is the horse from? England, Scotland, Wales or Ireland?" << endl;
		cin >> sCountryi;
		if (sCountryi == sCountry[0]) {
			cout << "Darn. Perhaps your horse isn't a native breed because there aren't any UK native irish horses in our database. Sorry :(" << endl;
		}
		else if (sCountryi == sCountry[1]) {
			cout << "England! That narrows it down a bit. Great! " << endl;
			cout << "What colour is the horse you're thinking of?" << endl;
			cin >> sColouri;
			if (sColouri == sColour[3]) {
				cout << "Okay. Is it a heavy horse?" << endl;
				cin >> sN;
				if (sN != sNs) {
					cout << "Awesome! Then the horse you're looking for is a SUFFOLK PUNCH!" << endl;
					cout << "The Suffolk Punch is an English breed of Draught horse. \n The breed takes the first part of its name from the county of Suffolk in East Anglia, and the name 'Punch' from its solid appearance and strength. Suffolk Punches generally stand between 16.1hh and 17.2hh. \n They are ALWAYS chestnut in colour. \n The Suffolk Punch is still currently on the endangered breeds list, but interest in the breed is slowly growing.";
				}
				else if (sColouri == sColour[0] || sColouri == sColour[1] || sColouri == sColour[2]) {
					cout << "Okay. Is it a heavy horse?" << endl;
					cin >> sN;
				}
				if (sN != sNs) {
					cout << "Fab! Then the horse you're looking for is a SHIRE!" << endl;
					cout << "Shire horses can only be solid Bay, Grey or Black according to the shire horse stud book for the UK. \n In America, they do allow Shire horses to be chestnut as well. \n Shires stand at a minimum of 16hh for mares, 16.2hh for geldings and 17hh for stallions, but they can reach over 18hh! Shires were used for mostly farm work, but now they are used mostly for demonstrations e.g. log pulling, driving and showing.";
				}
				else if (sN == sNs) {
					cout << "Is the breed you're thinking of known for racing or driving?" << endl;
					cin >> sN;
					if (sN == sNs) {
						cout << "Then the breed you must be thinking of is a CLEVELAND BAY!" << endl;
						cout << "" << endl;
					}
					else {

					}
				}

			}


		}
	}
	else if (sCountryi == sCountry[2]) {
		cout << "Scotland! That can only mean one thing... The horse you are looking for is a CLYDESDALE!" << endl;
		cout << "The Clydesdale is a lavishly feathered farm horse developed in Clyde Valley in the 18th century by crossing draught mares with Flemish stallions, \n which was so successful that, at one stage there were some 140,000 horses in that area! \n Clydesdales stand between 16hh and 18hh and are usually bay in colour but can be black, grey and chesntnut also. " << endl;
	}
	else if (sCountryi == sCountry[3]) {
		cout << "Darn. Perhaps your horse isn't a native breed because there aren't any UK native irish horses in our database. Sorry :(" << endl;
	}
	else if (sHorPon == sPonyStore) {

}
else {
	cout << "Are you sure you have the right horse or pony? Perhaps try again." << endl;
}

getchar();

/*for (auto breed : sHorseBreed) {
	cout << breed << std::endl;
}*/



return 0;
}

