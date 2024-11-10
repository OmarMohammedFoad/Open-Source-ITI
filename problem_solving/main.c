#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle)
{
    for (int i = 0; i < haystack.length(); i++)
    {
        if (haystack.substr(i, needle.length()) == needle)
            return i;
    }
    return -1;
}
int main()
{
    int x = strStr("mississippi", "issip");
    printf("%d\n", x);
    return 0;
}
