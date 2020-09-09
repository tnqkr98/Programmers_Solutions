#include <string>
#include <vector>
using namespace std;
int solution(vector<string> lines) {
	int answer = 0;
	int tr[1001][2] = { 0 };
	for (int i = 0; i < lines.size(); i++) {
		tr[i][1] = 1000000000;
		tr[i][1] += stoi(lines[i].substr(11, 2)) * 10000000;
		tr[i][1] += stoi(lines[i].substr(14, 2)) * 100000;
		tr[i][1] += stoi(lines[i].substr(17, 2)) * 1000;
		tr[i][1] += stoi(lines[i].substr(20, 3));
		string tmp = lines[i].substr(24);
		tmp.pop_back();
		double tnum = stod(tmp)*1000;
		tr[i][0] = (int)tnum;
		tr[i][0] = tr[i][1] - tr[i][0];

		string num = to_string(tr[i][0]);
		if (num[1] == '9') num = "1000000000";
		else {
			if (num[3] == '9') num[3] = '5';
			if (num[5] == '9') num[5] = '5';
		}
		tr[i][0] = stoi(num);
	}


	return answer;
}

int main() {
	vector<string> s;

	s.push_back("2016-09-15 20:59:57.421 0.351s");
	s.push_back("2016-09-15 20:59:58.233 1.181s");
	s.push_back("2016-09-15 20:59:58.299 0.8s");
	s.push_back("2016-09-15 20:59:58.688 1.041s");
	s.push_back("2016-09-15 20:59:59.591 1.412s");
	s.push_back("2016-09-15 21:00:00.464 1.466s");
	s.push_back("2016-09-15 21:00:00.741 1.581s");
	s.push_back("2016-09-15 21:00:00.748 2.31s");
	s.push_back("2016-09-15 21:00:00.966 0.381s");
	s.push_back("2016-09-15 21:00:02.066 2.62s");
	solution(s);

	return 0;
}