#include <string>
#include <fstream>
#include <regex>
#include <iostream>

using namespace std;

string dec_digit ("[0-9]");
string hex_digit (dec_digit + "|[a-f]|[A-F]");
string exponent ("p|P");
string suff ("(f|F|l|L)?");
string sign ("(\\+|-)?");
string hexa ("(" + hex_digit + ")+"); 
string hex_floating_point ("^(0x|0X)(" + hexa + "|" + hexa + "." + hexa + "|." + hexa + ")(" + exponent + ")(" + sign + ")(" + dec_digit +")(" + suff + ")$");

regex re(hex_floating_point);

int main(int argc, char **argv){
    ifstream fs;
    string line;

    fs.open(argv[1]);

    //cout << hex_floating_point << endl;
    while(getline(fs,line)){
        if (regex_match(line, re))
            cout << "Matched: " << line << endl;
        else    
            cout << "Not Matched: "<< line << endl;
    }

    return 0;
}


