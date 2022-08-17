#include <iostream>
#include <math.h>
#include <unordered_map>
#include <string>
#include <fstream>
#include <streambuf>
#include <vector>

#define offset 64

int triangle(int n) {
    return (n*(n+1))/2;
}

int inv_triangle(int tn) {
    return (sqrt(8*tn + 1)-1)/2;
}

int is_triangle_number(int n) {
    return n == triangle(inv_triangle(n));
}

std::vector<std::string> split(std::string& s, char d) {
    std::vector<std::string> output;
    std::string buff;
    for (char& c: s) {
        if (c == d) {
            output.push_back(buff);
            buff.clear();
        } else {
            buff += c;
        }
    }
    if (!buff.empty()) {
        output.push_back(buff);
    }
    return output;
}

int evaluate_word(std::string word) {
    word = word.substr(1,word.size()-2);
    int output = 0;
    for(char c: word) {output+=(int)(c-offset);}
    return output;
}

int main() {
    int count = 0;
    std::ifstream t("p042_words.txt");
    std::string content((std::istreambuf_iterator<char>(t)),std::istreambuf_iterator<char>());
    auto words = split(content,',');
    
    for(auto word: words) {
        if (is_triangle_number(evaluate_word(word))) {count++;}
    }
    std::cout<<count<<std::endl;
}
