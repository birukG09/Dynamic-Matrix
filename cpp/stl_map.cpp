#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ageMap;
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    for (const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
