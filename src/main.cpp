#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;
	const auto& n = s.length();

	auto s1 = int{ 0 };
	for (auto i = 0; i < n / 2; ++i) {
		s1 += s[i] - '0';
	}

	auto s2 = int{ 0 };
	for (auto i = n / 2; i < n; ++i) {
		s2 += s[i] - '0';
	}

	if (s1 == s2) {
		cout << "LUCKY";
	}
	else {
		cout << "READY";
	}

	return 0;
}