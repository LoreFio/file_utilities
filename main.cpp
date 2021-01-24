#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void)
{
unordered_map<string,string> map;
map.insert("ciao","asddsa");
map.insert("cito","ahddsa");
map.insert("ceao","asgdsa");
map.insert("eeeo","aeeesa");
map.insert("eiae","asdeee");
for (const auto& str_pair : map)
	std::cout <<  str_pair.first << " (in source) will be substituted with " << str_pair.second << std::endl;
		
return 0;
}
