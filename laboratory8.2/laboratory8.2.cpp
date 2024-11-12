#include <iostream>
#include <string>

using namespace std;

void replace(string& s)
{
	size_t pos1 = 0;
	size_t pos3 = 0;

	while ((pos1 = s.find('(', pos1)) != -1)
	{
		size_t pos2 = s.find(')', pos1);

		if (s.find('(', pos1 + 1) != string::npos && s.find(')', pos1 + 1) != -1)
		{
			cout << "Error!" << endl;
			return;
		}
			s.erase(pos1, pos2 - pos1 + 1);
	}

}

int main()
{
	string str;

	cout << "Enter string:" << endl;

	getline(cin, str);

	replace(str);

	cout << "Modified string:" << str << endl;

	return 0;
}