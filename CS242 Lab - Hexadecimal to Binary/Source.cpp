#include <iostream>
#include <string>
using namespace std;

int main() {
	//declarations
	string hexInput;
	string binaryOutput;
	string textHex;
	int hexInputLength;

	//get user input
	cout << "Enter a series of hexadecimal digits: ";
	cin >> hexInput;
	hexInputLength = hexInput.length() - 1;
	
	//calculations
	int i = hexInputLength;
	while (i >= 0) {
		textHex = hexInput.substr(i, 1); //pos, length;
		if (textHex == "0")
			binaryOutput = "0000" + binaryOutput;
		else if (textHex == "1")
			binaryOutput = "0001" + binaryOutput;
		else if (textHex == "2")
			binaryOutput = "0010" + binaryOutput;
		else if (textHex == "3")
			binaryOutput = "0011" + binaryOutput;
		else if (textHex == "4")
			binaryOutput = "0100" + binaryOutput;
		else if (textHex == "5")
			binaryOutput = "0101" + binaryOutput;
		else if (textHex == "6")
			binaryOutput = "0110" + binaryOutput;
		else if (textHex == "7")
			binaryOutput = "0111" + binaryOutput;
		else if (textHex == "8")
			binaryOutput = "1000" + binaryOutput;
		else if (textHex == "9")
			binaryOutput = "1001" + binaryOutput;
		else if (textHex == "A" || textHex == "a")
			binaryOutput = "1010" + binaryOutput;
		else if (textHex == "B" || textHex == "b")
			binaryOutput = "1011" + binaryOutput;
		else if (textHex == "C" || textHex == "c")
			binaryOutput = "1100" + binaryOutput;
		else if (textHex == "D" || textHex == "d")
			binaryOutput = "1101" + binaryOutput;
		else if (textHex == "E" || textHex == "e")
			binaryOutput = "1110" + binaryOutput;
		else if (textHex == "F" || textHex == "f")
			binaryOutput = "1111" + binaryOutput;
		
		i--;
	}

	//output
	cout << "Binary equivalent: " << binaryOutput << endl;

	return 0;
}