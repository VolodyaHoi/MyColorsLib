/*    MyColors lib example using
      Author: VolodyaHoi (At0m)
      Team: Atomic Threat Team    */

#include "MyColors.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Fore colors example: FCOLOR | CODE" << endl;
    cout << " " << endl;
    cout << f_blackC + "BLACK | f_blackC" + s_clear << endl;
    cout << f_redC + "RED | f_redC" + s_clear << endl;
    cout << f_greenC + "GREEN | f_greenC" + s_clear << endl;
    cout << f_yellowC + "YELLOW | f_yellowC" + s_clear << endl;
    cout << f_blueC + "BLUE | f_blueC" + s_clear << endl;
    cout << f_purpleC + "PURPLE | f_purpleC" + s_clear << endl;
    cout << f_aquaC + "AQUA | f_aquaC" + s_clear << endl;
    cout << f_whiteC + "WHITE | f_whiteC" + s_clear << endl;
    cout << " " << endl;
    cout << s_clear + "Back colors example: BCOLOR | CODE" << endl;
    cout << " " << endl;
    cout << b_blackC + "BLACK | b_blackC" + s_clear << endl;
    cout << b_redC + "RED | b_redC"  + s_clear << endl;
    cout << b_greenC + "GREEN | b_greenC" + s_clear << endl;
    cout << b_yellowC + "YELLOW | b_yellowC" + s_clear << endl;
    cout << b_blueC + "BLUE | b_blueC" + s_clear << endl;
    cout << b_purpleC + "PURPLE | b_purpleC" + s_clear << endl;
    cout << b_aquaC + "AQUA | b_aquaC" + s_clear<< endl;
    cout << b_whiteC + "WHITE | b_whiteC" + s_clear<< endl;
    cout << " " << endl;
    cout << s_clear + "Custom color use: custom_color(r, g, b, place)" << endl;
    cout << "r, g, b: color" << endl;
    cout << "place: 0 - foreground, 1 - background" << endl;
    cout << " " << endl;
    cout << "Formating styles example: FORMAT | CODE" << endl;
    cout << " " << endl;
    cout << s_bold + "BOLD | s_bold" + s_clear<< endl;
    cout << s_pale + "PALE | s_pale" + s_clear<< endl;
    cout << s_italics + "ITALICS | s_italics" + s_clear << endl;
    cout << s_underlined + "UNDERLINE | s_underlined" + s_clear<< endl;
    cout << s_flashing + "FLASH | s_flashing" + s_clear<< endl;
    cout << s_hidden + "HIDDEN | s_hidden" + s_clear << "<= hidden text (HIDDEN | s_hidden)" << endl;
    cout << s_crossed + "CROSSED | s_crossed" + s_clear << endl;
    cout << s_doubleUL + "DOUBLE UNDERLINE | s_doubleUL" + s_clear << endl;
    cout << s_framed + "FRAMED | s_framed" + s_clear << endl;
    cout << s_surrounded + "SURROUNDED | s_surrounded" + s_clear << endl;
    cout << s_crossedOut + "CROSSED OUT | s_crossedOut" + s_clear << endl;
    cout << " " << endl;
    cout << "For clear formating use: s_clear" << endl;
	return 0;
}