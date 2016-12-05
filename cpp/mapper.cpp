//#include <mirai>
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void split(string str, char d, vector<string> &res){
	res.clear();
	string buf;
	for (char c:str){
		if (c == d){
			if (!buf.empty()){
				res.push_back(buf);
				buf.clear();
			}
		}else{
			buf += c;
		}
	}
	if (!buf.empty())
		res.push_back(buf);
}

int main(){
	string line;
	cin >> line;
	while (!cin.eof()){
		vector<string> nf;
		split(line, ':', nf);
		if (nf.size() < 2){
			cin >> line;
			continue;
		}
		string name = nf[0];
		vector<string> fruits;
		split(nf[1], ',', fruits);
		for (string &fruit : fruits){
			cout << fruit << ':' << name << endl;
		}
		cin >> line;
	}
	return 0;
}
