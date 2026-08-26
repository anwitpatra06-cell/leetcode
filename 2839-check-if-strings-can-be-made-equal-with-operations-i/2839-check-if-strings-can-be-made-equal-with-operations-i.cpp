class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<char> st1;
        vector<char> st2;
        vector<char> stt1;
        vector<char> stt2;

        st1.push_back(s1[0]);
        st1.push_back(s1[2]);

        st2.push_back(s2[0]);
        st2.push_back(s2[2]);

        sort(st1.begin(), st1.end());
        sort(st2.begin(), st2.end());

        stt1.push_back(s1[1]);
        stt1.push_back(s1[3]);

        stt2.push_back(s2[1]);
        stt2.push_back(s2[3]);

        sort(stt1.begin(), stt1.end());
        sort(stt2.begin(), stt2.end());

        return st1 == st2 && stt1 == stt2;
    }
};