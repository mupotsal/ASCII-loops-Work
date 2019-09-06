/* ASCII art with functions and loops
by <username(s)> FIXME!!

Based on Burmashave ads https://en.wikipedia.org/wiki/Burma-Shave
and ASCII sign found at https://www.asciiart.eu/miscellaneous/signs */
#include <iostream>
#include <string>
using namespace std;

void loopchar(char whatchar, int num) {
	/** prints num copies of whatchar */
	// Testing
	for (int i = 0; i < num; i++) {
		cout << whatchar;
	}
}


void makesign(string nexttext) {
	/** makes ASCII sign using nexttext */

	///*int nexttextlen = nexttext.length();

	//cout << " ______";
	//loopchar('_', nexttextlen);
	//cout << "______ " << endl;

	//cout << "/";
	//loopchar(' ', nexttextlen + 12);
	//cout << "\\" << endl;


	//cout << "|      ";
	//cout << nexttext;
	//cout << "      |" << endl;

	//cout << "|      ";
	//loopchar('_', nexttextlen);
	//cout << "      |" << endl;

	//cout << "\\______";
	//loopchar('_', nexttextlen);
	//cout << "______/" << endl;

	//cout << "      !  !" << endl;
	//cout << "      !  !" << endl;
	//cout << "      L_ !" << endl;
	//cout << "     / _)!" << endl;
	//cout << "    / /__L" << endl;
	//cout << " __/ (____)" << endl;
	//cout << "     (____)" << endl;
	//cout << " __  (____)" << endl;
	//cout << "   \\_(____)" << endl;
	//cout << "      !  !" << endl;
	//cout << "      !  !" << endl;
	//cout << "      \\__/" << endl;




	cout << "	 ___________________   ___________________    "<< endl;
     cout << "	. - /|  78   ~~**~~\ / ~~**~~79 | \ - .
		 cout << "	 ___________________   ___________________    " << endl;
	 cout << "	||||                 :                    |||| "<< endl;
	 cout << "	||||   Dorothy asked : The Scarecrow      |||| " << endl;
	 cout << "	||||   the Scarecrow : answered Some     |||| " << endl;
	 cout << "	||||   How can you  :   people without   |||| " << endl;
	 cout << "  ||||   talk if you   :  brains do an      |||| " << endl;
	 cout << "	||||   haven't got   :   awful lot        |||| " << endl;
	 cout << "  ||||   a brain ?    :   of talking.     |||| " << endl;
	 cout << "  ||||   She looked at : She replied,       ||||" << endl;
	 cout << "	||||   him puzzled. : That's true.      ||||" << endl;
	 cout << "  |||| : ||||" << endl;
	 cout << "  ||||  The Wizard Of Oz : boba@wwa.com    ||||" << endl;
	 cout << "	||||___________________ : ___________________||||" << endl;
	 cout << "	|| /= ================== = \ : /= ================== = \ ||" << endl;
	 cout << "	`---------------------~___~--------------------''" <<endl;












	return;
}

int main() {
	char stopme;
	string word;

	cout << "\nWelcome to the road sign art project!\n" << endl;

	cout << "\nPlease enter next word  (or endnow): " << endl;
	cin >> word;

	while (word != "endnow") {
		makesign(word);
		cout << "\nPlease enter next word (or endnow): " << endl;
		cin >> word;
	}

	cout << "\nThanks for reading!" << endl;
	cin >> stopme;
	return 0;
}
