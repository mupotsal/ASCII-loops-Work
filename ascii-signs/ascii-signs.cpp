/* ASCII art with functions and loops
by <Liberty Mupotsa(s)> FIXME!!  

Based on Burmashave ads https://en.wikipedia.org/wiki/Burma-Shave
and ASCII sign found at https://www.asciiart.eu/miscellaneous/signs */
// Credit to https://asciiart.website/index.php?art=objects/books

#include <iostream>
#include <string>
using namespace std;
int pagenum = 0; // Initializes page number


void loopchar(char whatchar, int num) {
	/** prints num copies of whatchar */
	for (int i = 0; i<num; i++) {
		cout << whatchar;
	}
}


void makediarypage(string nexttext, int pagenum) {

	int y = nexttext.length();
	if (y < 17);    // My diary can accommodate up to 17 characters before it gets deformed.
	for (int i = 0; i < 17 - y; i++) {
		nexttext.push_back(' '); // this will create extra characters to avoid deformations.
	}
	
	cout << "This is page" << pagenum << endl;
	cout << "	 _______________________    ___________________    " << endl;	
	cout << "	 _______________________    ___________________    " << endl;
	cout << "	||||                   \\   /                 "<< pagenum << " |||| " << endl;
	cout << "	||||MY one word/page DIARY: AT THE AGE OF 10   |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||"<<"This is page"<<pagenum<<"         :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||" <<nexttext<<  "     :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;
	cout << "	||||                      :                    |||| " << endl;	
	cout << "	||||_____________________ : ___________________||||" << endl;
	cout << "	|| /= =============+====\\  /= ================== = \ ||" << endl;
	cout << "	`---------------------~  \\/    ~--------------------''" << endl;
	// Credit to https://asciiart.website/index.php?art=objects/books
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
		makediarypage(word,pagenum);
		cout << "\nPlease enter next word (or endnow): " << endl;		
		cin >> word;
	}

	cout << "\nThanks for reading!" << endl;
	cin >> stopme;
	return 0; 

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
}
