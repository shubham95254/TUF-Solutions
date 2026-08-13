class Solution{
public:
    int wordLadderLength(string startWord, string targetWord,
                         vector<string> &wordList) {
                            //initialise and fill q and set
                            unordered_set<string> uset;
                            queue<pair<string, int>> q;
                            for(int i=0; i<wordList.size(); i++) {
                                uset.insert(wordList[i]);
                            }
                            //base cases
                            if(targetWord==startWord) return 1;
                            if(uset.find(targetWord)==uset.end()) return 0;


                            q.push({startWord, 1});
                            uset.erase(startWord);
                            while(!q.empty()) {
                                string oldWord=q.front().first;
                                int lvl = q.front().second;
                                q.pop();

                                for(int i=0; i<oldWord.size(); i++){
                                    for(int j=0; j<26; j++) {
                                        //form newWord
                                        string newWord = oldWord;
                                        newWord[i] = (char)((int)'a'+ j);

                                        if(newWord==oldWord) continue;
                                        if(newWord==targetWord) return (lvl+1);
                                        if(uset.find(newWord)!=uset.end()){
                                            uset.erase(newWord);
                                            q.push({newWord, lvl+1});
                                        }
                                    }
                                }
                            }
                            return 0;
    }
};