#include <cmath>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <iterator>
#include <iomanip>
#include <fstream>
using namespace std;

	string find(map<string, string> a, string s1) 
	{
		string s3;
		string s2=a[s1];
		if (s2.empty())
		for (auto elem:a)
		{
			if (elem.second == s1) s3 = elem.first;
		}
		else s3 = s2;
		return s3;
	}


	int main() {
		int n;
		map<string, string> a;
		ifstream in;
		in.open("test.txt");
		in >> n;
		for (int i = 0; i < n; i++)
		{
			string s1, s2;
			in >> s1 >> s2;
			a.emplace(s1, s2);

		}
		string word;
		in >> word;
		cout << find(a, word);

	}
