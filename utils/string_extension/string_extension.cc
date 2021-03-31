#include "string_extension.hh"

void replaceAll(std::string &str, std::string oldStr, std::string newStr)
{
    std::string::iterator pos = str.begin();
    while (pos != str.end() && (str.end() - pos) >= oldStr.size())
    {
        int index = std::distance(str.begin(), pos);
        if (str.compare(index, oldStr.size(), oldStr) == 0)
        {
            pos = str.erase(pos, pos + oldStr.size());
            pos = str.insert(pos, newStr.begin(), newStr.end());
            pos += newStr.size();
        }
        else
        {
            pos++;
        }
    }
}
