/*      MyColors lib 
    Author: VolodyaHoi (At0m)
    Team: Atomic Threat Team    */

// Using in code: f_colorC + "Text!"

/* Example:
    #include "MyColors.h"
    *code*
    cout << f_redC + "RED TEXT!" << endl;
*/

// Clear formatting: s_clear

#include <iostream>

using namespace std;

// default foreground colors:
string f_blackC = "\033[30m",
    f_redC = "\033[31m",
    f_greenC = "\033[32m",
    f_yellowC = "\033[33m",
    f_blueC = "\033[34m",
    f_purpleC = "\033[35m",
    f_aquaC = "\033[36m",
    f_whiteC = "\033[37m";
    // f_colorC = "ANSI_CODE";

// default background colros:
string b_blackC = "\033[40m",
    b_redC = "\033[41m",
    b_greenC = "\033[42m",
    b_yellowC = "\033[43m",
    b_blueC = "\033[44m",
    b_purpleC = "\033[45m",
    b_aquaC = "\033[46m",
    b_whiteC = "\033[47m";
    // b_colorC = "ANSI_CODE";

// default formatting styles:
string s_clear = "\033[0m",
    s_bold = "\033[1m",
    s_pale = "\033[2m",
    s_italics = "\033[3m",
    s_underlined = "\033[4m",
    s_flashing = "\033[5m",
    s_hidden = "\033[8m",
    s_crossed = "\033[9m",
    s_doubleUL = "\033[21m",
    s_framed = "\033[51m",
    s_surrounded = "\033[52m",
    s_crossedOut = "\033[53m";
    // s_format = "ANSI_CODE";

const string custom_color(int r, int g, int b, int place) // custom color (FG/BG)
{
    if ( place == 0 ) { // foreground
        string custom_color_g = "\033[38;2;" + to_string(r) + ";" + to_string(g) + ";" + to_string(b) + "m";
        return custom_color_g;
    } else if ( place == 1 ) { // background
        string custom_color_g = "\033[48;2;" + to_string(r) + ";" + to_string(g) + ";" + to_string(b) + "m";
        return custom_color_g;
    } else { // except
        string custom_color_g = "ERROR PLACE!";
        return custom_color_g;
    }
}