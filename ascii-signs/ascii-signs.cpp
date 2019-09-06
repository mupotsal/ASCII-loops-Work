/* ASCII art with functions and loops
by <username(s)> FIXME!!  

Based on Burmashave ads https://en.wikipedia.org/wiki/Burma-Shave
and ASCII sign found at https://www.asciiart.eu/miscellaneous/signs */

#include <iostream>
#include <string>
using namespace std;
int pagenum = 0; 

void loopchar(char whatchar, int num) {
	/** prints num copies of whatchar */
	// Testing
	for (int i = 0; i<num; i++) {
		cout << whatchar;
	}
}


void makesign(string nexttext, int pagenum) {
	/** makes ASCII sign using nexttext */

	///*int nexttextlen = nexttext.length();

	//cout << " ______";
	//loopchar('_', nexttextlen);
	//cout << "______ " << endl;

	//cout << "/";
	//loopchar(' ', nexttextlen+12);
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
	//cout << "      \\__/" << endl;*/
	cout << "This is page" << pagenum << endl;
	cout << "	 ___________________   ___________________    " << endl;	
	cout << "	 __________________   ___________________    " << endl;
	cout << "	||||               \\ : /                 "<< pagenum << " |||| " << endl;
	cout << "	||||   MY DIARY      : AT THE AGE OF 10   |||| " << endl;
	cout << "	||||" << nexttext << "  :                 |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;
	cout << "	||||                 :                    |||| " << endl;	
	cout << "	||||________________ : ___________________||||" << endl;
	cout << "	|| /= =============\ : /= ================== = \ ||" << endl;
	cout << "	`---------------------~___~--------------------''" << endl;
	return;
}

int main(){
	char stopme;
	string word;	
	cout << "\n We are going to write our diary!\n" << endl;

	cout << "\nPlease enter the next word in your diary word  (or endnow): " << endl;
	cin >> word;		

	while (word != "endnow") {
		pagenum += 1;
		makesign(word,pagenum);
		cout << "\nPlease enter next word (or endnow): " << endl;		
		cin >> word;
	}

	cout << "\nThanks for reading!" << endl;
	cin >> stopme;
	return 0; 
}
