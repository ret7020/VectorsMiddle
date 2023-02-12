#include "middle_list.h"

long long itc_len(string str) {
    long long kol = 0;
    for (int i = 0; str[i] != '\0'; ++i) kol++;
    return kol;
}

