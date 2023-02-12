#include "middle_list.h"

long long itc_len(string str) {
    long long cnt = 0;
    for (int i = 0; str[i] != '\0'; ++i) cnt++;
    return cnt;
}
int itc_max_lst(const vector <int> &lst){
    int max_num = -2147483647;
    if (lst.size() > 0) for(int i = 0; i < lst.size(); ++i) if (lst[i] > max_num) max_num = lst[i]; 
    if (lst.size() == 0) max_num = 0;
    return max_num;
}
int itc_min_lst(const vector <int> &lst){
    int min_num = 2147483647;
    if (lst.size() > 0) for(int i = 0; i < lst.size(); ++i) if (lst[i] < min_num) min_num = lst[i];
    if (lst.size() == 0) min_num = 0;
    return min_num;
}
void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus");
    vector <int> lst1, lst2, lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    cout << "Положительные:" << '\t' << '\t' << "Отрицательные:" << "\n";
    cout << "Количество чисел: " << lst3.size() << "," << '\t' << '\t' << "Количество чисел: " << lst1.size() << "\n";
    cout << "Максимальная цифра: " << itc_max_lst(lst3) << "," << '\t' << '\t' << "Максимальная цифра: " << itc_max_lst(lst1) << "," << "\n";
    cout << "Минимальная цифра: " << itc_min_lst(lst3) << "," << '\t' <<'\t' << "Минимальная цифра: " << itc_min_lst(lst1)<<"," << "\n";
    cout << "Сумма чисел: " << itc_sumlst(lst3) << "," << '\t' << '\t' << "Сумма чисел: "  << itc_sumlst(lst1) << "," << "\n";
    int sr_pos = 0;
    if (lst3.size() > 0) sr_pos = itc_sumlst(lst3) / lst3.size();
    int sr_neg = 0;
    if (lst1.size() > 0) sr_neg = itc_sumlst(lst1) / lst1.size();
    cout << "Среднее значение: " << sr_pos << "," << '\t' << '\t' << "Среднее значение: " << sr_neg << "," << "\n";
    cout << "\n";
    cout << "Количество нулей: " << lst2.size() << endl;
}
