#include <iostream>
#include <string>
using namespace std;



int main() {

    string s = "dvdfghjuymn";
    int answ = 0;
    int g_count =01;
    int cnt = 0;
    int start_pos = 0;
    int end_pos = s.size();
    char sym;

    for (int q = 0; q<s.size(); q++) {
        for (int all_count = start_pos; all_count < s.size(); all_count++) {

            char first_sym = s[start_pos];
            for (int i = start_pos + 1; i < end_pos; i++) {

                if (first_sym == s[i]) break;
                cnt++;
            }
            cout << "SYM - " << first_sym << " CNT - " << cnt << endl;
            if (cnt != 0) g_count++;
            if (cnt == 0 && g_count > answ) {
                answ = g_count;
                g_count = 0;
            }
            start_pos++;
            end_pos = start_pos + cnt;
            cnt = 0;
            if (end_pos == start_pos && end_pos < s.size()) end_pos = s.size();
        }
        start_pos = q;
    }
    cout << "G = " << answ << endl;
    return 0;
}
