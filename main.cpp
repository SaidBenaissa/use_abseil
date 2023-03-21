#include <iostream>
#include "absl/strings/str_cat.h"

int main() {
    std::string str1 = " Saïd";
    std::string str2 = " Benaissa";
    std::string message = absl::StrCat(str1, " ", str2, "!");
    std::cout << message << std::endl;
    return 0;
}
