class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> p{p1, p2, p3, p4};
        sort(p.begin(), p.end(), [](const vector<int> &lhs, vector<int> &rhs) {
            return lhs[0] == rhs[0] ? lhs[1] < rhs[1] : lhs[0] < rhs[0];
        });
        int len0 = dist(p[0], p[1]), len1 = dist(p[1], p[3]), len2 = dist(p[3], p[2]), len3 = dist(p[2], p[0]);
        return len0 == len1 && len1 == len2 && len2 == len3
               && len0 != 0 && dist(p[0], p[3]) == dist(p[1], p[2]);
    }
private:
    double dist(vector<int> &p1, vector<int> &p2) {
        return (p2[1] - p1[1]) * (p2[1] - p1[1]) + (p2[0] - p1[0]) * (p2[0] - p1[0]);
    }
};
