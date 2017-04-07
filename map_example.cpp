#include <iostream>
#include <map>

typedef std::map<char, char> BasePairMap;

int main()
{
    BasePairMap m;
    m['A'] = 'T';
    m['T'] = 'A';
    m['C'] = 'G';
    m['G'] = 'C';

    std::cout << "A:" << m['A'] << std::endl;
    std::cout << "T:" << m['T'] << std::endl;
    std::cout << "C:" << m['C'] << std::endl;
    std::cout << "G:" << m['G'] << std::endl;

    return 0;
}