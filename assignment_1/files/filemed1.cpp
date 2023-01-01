#include <iostream>
#include <fstream>
using namespace std;

void findmissingComments(string in_name) {
	ifstream fin(in_name);
	string line,fname;
	string prev=" ";
	int lineNum=0;
	while(getline(fin, line)) {
        if(line.startsWith("def")&& prev[0]!='#'){
			++lineNum
			 fname=line.substring(4,line.indexOf('('));
			cout<<(fname+":"+lineNum);
		}
		if(line.length()==0){
			prev=" ";
		}
		else prev=line;

		
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name;
	cin >> in_name;
findmissingComments(in_name);
}