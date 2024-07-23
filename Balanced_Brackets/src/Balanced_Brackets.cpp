#include "Balanced_Brackets.h"
#include <stack>
#include <unordered_map>
#include <unordered_set>

bool checkBracketsBalanced(const std::string& input)
{
    std::unordered_map<char, char> openedBrackets = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
    std::unordered_set<char> closedBrackets = {')', ']', '}'};
    std::stack<char> s;
    for (auto c:input)
    {
        if (openedBrackets.find(c) != openedBrackets.end())
            s.push(openedBrackets[c]);
        else if (closedBrackets.find(c) != closedBrackets.end())
        {
            if (s.empty() || (s.top() != c))
                return false;
            s.pop();
        }
    }

    return s.empty();
}