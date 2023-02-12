#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
	vector<char> output;
	for (int i = 0; i < str.size(); ++i) output.push_back(str[i]);
	return output;
}

string itc_join(vector <char> lst, string sep){
    string n = "";
    if (lst.size() > 0){
        for(long long i = 0; i < lst.size() - 1; ++i){
            n += lst[i];
            n += sep;
        }
        n += lst[lst.size()-1];
    }
    return n;
}

string itc_rmstrspc(string str){
    string n = "";
    for(long long i = 0; i < itc_len(str); ++i) if (str[i] != 32) n += str[i];
    return n;
}


string itc_rmstrchar(string str, string less){

}
