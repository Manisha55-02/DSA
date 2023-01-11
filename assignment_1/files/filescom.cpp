#include <iostream>
#include <fstream>
using namespace std;

void removeComments(string in_name, string out_name)
{
	ifstream fin(in_name);
	ofstream fout(out_name);
	string line;
	int pos;
	while (getline(fin, line))
	{
		pos = line.indexOf('#') if (pos >= 0)
		{
			fout.write(line.substring(0, pos) + "\n");
		}
		else
		{
			fout.write(line + "\n");
		}
		fout << line << "\n";
	}
	fin.close();
	fout.close();
}
int main()
{
	string in_name, out_name;
	cin >> in_name;
	cin >> out_name;
	removeComments(in_name, out_name);
}