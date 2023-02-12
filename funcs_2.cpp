#include "middle_list.h"

long long itc_len(string str) {
    long long cnt = 0;
    for (int i = 0; str[i] != '\0'; ++i) cnt++;
    return cnt;
}
int itc_max_lst(const vector <int> &lst){
    int max_num = -2147483648;
    if (lst.size() > 0) for(int i = 0; i < lst.size(); ++i) if (lst[i] > max_num) max_num = lst[i];
    return max_num;
}
int itc_min_lst(const vector <int> &lst){
    int min_num = 2147483647;
    if (lst.size() > 0) for(int i = 0; i < lst.size(); ++i) if (lst[i] < min_num) min_num = lst[i];
    return min_num;
}
