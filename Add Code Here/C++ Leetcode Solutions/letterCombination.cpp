class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return {};

        std::string phone_map[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        std::vector<std::string> combinations = {""};

        for (char digit : digits) {
            std::vector<std::string> new_combinations;
            for (std::string combination : combinations) {
                for (char letter : phone_map[digit - '2']) {
                    new_combinations.push_back(combination + letter);
                }
            }
            combinations = new_combinations;
        }

        return combinations;
    }
};
