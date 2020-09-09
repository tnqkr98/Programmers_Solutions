//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool prime[1000001] = { 0 }; // 0 : prime, 1:not
//
//int solution(int n) {
//	int answer = 0;
//	for (int i = 2; i <= n; i++) {
//		if (prime[i] == 0)
//			for (int j = i + i; j <= n; j += i)
//				prime[j] = 1;
//	}
//	for (int i = 2; i <= n; i++)
//		if (prime[i] == 0)
//			answer++;
//	return answer;
//}