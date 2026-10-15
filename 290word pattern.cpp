class Solution {

public:

bool wordPattern(string pattern, string s) {

map<char, string> m;

unordered_set<string> seen;

int i = 0;

for (char c : pattern) {

// No word left to match this character

if (i >= s.length()) return false;

auto result = findWord(s, i);

string word = result.first;

i = result.second;

auto it = m.find(c);

if (it != m.end()) {

if (it->second != word)

return false;

} else {

if (seen.count(word))

return false;

m[c] = word;

seen.insert(word);

}

}

// Check for extra words

if (i < s.length()) return false;

return true;

}

pair<string, int> findWord(string s, int i) {

string word = "";

int j = i;

while (j < s.length() && s[j] != ' ') {

word += s[j];

j++;

}

if (j < s.length())

j++; // Skip the space

return {word, j};

}

};
