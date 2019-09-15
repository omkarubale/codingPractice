class Solution {
public:
	string longestWord(vector<string>& words) {
		set<string> s;
		string res = "";
		for (auto word : words) s.insert(word); // Fill Set
		for (auto word : words) {
			if (word.size() > res.size() || (word.size() == res.size() && lexicographical_compare(word.begin(), word.end(), res.begin(), res.end()))) {
				string temp = "";
				bool isOk = true;
				for (auto c : word) {
					temp += c;
					if (temp.size() == word.size()) break;
					if (!s.count(temp)) {
						isOk = false;
						break;
					}
				}
				if (isOk) res = word;
			}
		}
		return res;
	}
};