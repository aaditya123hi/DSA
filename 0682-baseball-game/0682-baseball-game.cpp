
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;

        for (const string& op : operations) {
            if (op == "C") {
                if (!scores.empty()) {
                    scores.pop_back();
                }
            }
            else if (op == "D") {
                if (!scores.empty()) {
                    scores.push_back(2 * scores.back());
                }
            }
            else if (op == "+") {
                if (scores.size() >= 2) {
                    int n = scores.size();
                    scores.push_back(scores[n - 1] + scores[n - 2]);
                }
            }
            else {
                scores.push_back(stoi(op));
            }
        }

        int total_sum = 0;

        for (int score : scores) {
            total_sum += score;
        }

        return total_sum;
    }
};
