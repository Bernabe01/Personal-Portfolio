#pragma once
#include <cstdint>

using namespace std;

class twosComplement {
private:
    int32_t number;
    uint32_t maskBits(unsigned bits) const;
    void convertBinary(uint32_t val, unsigned bits) const;

public:
    twosComplement(int32_t number);
    int32_t  getTwosComplement() const;
    uint32_t getTwosBits(unsigned bits) const;
    void showBinary(unsigned bits) const;
    void showTwosBinary(unsigned bits) const;
};
