#include <string>
using std::string;

class JanGoOConverter {
public:
	JanGoOConverter() {}

	// convert char to int i.e., '1' -> 1
	int char_to_int(char c) { return int(c - '0'); }

	// convert int to char i.e., 1 -> '1'
	char int_to_char(int i) { return int(i + '0'); }

	// convert string to int i.e., "12" -> 12
	int str_to_int(string str) {
		int integer = 0;
		for (int i = 0, j = str.length() - 1; i < str.length() - 1; i++, j--)
			integer += char_to_int(str[i]) * pow(10, j);
		return integer + char_to_int(str[str.length() - 1]);
	}

	// convert int to string i.e., 12 -> "12"
	string int_to_str(int integer) { return to_string(integer); }

	~JanGoOConverter() {}
};
