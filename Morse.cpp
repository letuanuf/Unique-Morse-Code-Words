#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> transform;
    cout << words.size()<< endl;
    for(int i = 0; i < words.size(); i++)
        for(int j = 0; j < words[i].size(); j++)
        {
            int a = words[i][j];
            transform[i].insert(morse[a]);
        }
    return transform.size();
}
int main() {
    vector<string> data = {"gin","zen","gin","msg"};
    int a = uniqueMorseRepresentations(data);
    cout << a;
    return 0;
}
