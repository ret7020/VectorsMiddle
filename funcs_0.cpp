#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
	vector<char> output;
	for (int i = 0; i < str.size(); ++i) output.push_back(str[i]);
	return output;
}
