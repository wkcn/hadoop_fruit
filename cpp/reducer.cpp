//#include <mirai>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
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
	map<string, set<string> > data;
	string line;
	cin >> line;
	while (!cin.eof()){
		vector<string> nf;
		split(line, ':', nf);
		if (nf.size() < 2){
			cin >> line;
			continue;
		}
		string fruit = nf[0];
		vector<string> names;
		split(nf[1], ',', names);
		for (string &name : names){
			data[fruit].insert(name);
		}
		cin >> line;
	}
	for (const auto &p : data){
		cout << p.first << ':';
		bool first = true;
		for (const string &name : p.second){
			if (!first)cout << ',';
			first = false;
			cout << name;
		}
		cout << endl;
	}
	return 0;
}
