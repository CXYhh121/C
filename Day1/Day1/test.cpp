#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Deletestr(string& s1, string& s2)
{
	vector<int> hashtable(0);
	hashtable.resize(256);
	for (size_t i = 0; i < s2.size(); ++i)
	{
		hashtable[s2[i] - 'A'] = 1;
	}

	size_t i = 0;
	for (i = 0; i < s1.size() - 1; ++i)
	{
		if (hashtable[i] == 1)
			s1.erase(i);
			//s1[i] = s1[i++];
	}
	s1[i] = '\0';
	return s1;
}

int main()
{
	string s1("They are students.");
	string s2("aeiou");
	string str = Deletestr(s1, s2);
	cout << str << endl;
	return 0;
}