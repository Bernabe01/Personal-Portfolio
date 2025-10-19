#include "twosComplement.h"
#include <iostream>

twosComplement::twosComplement(int32_t number) : number(number) {}

uint32_t twosComplement::maskBits(unsigned bits) const {
    if (bits >= 32) return ~0u;
    else return (1u << bits) - 1u;
}

void twosComplement::convertBinary(uint32_t val, unsigned bits) const {
    for (int i = static_cast<int>(bits) - 1; i >= 0; --i)
        std::cout << ((val >> i) & 1u);
}

int32_t twosComplement::getTwosComplement() const {
    return ~number + 1;
}

uint32_t twosComplement::getTwosBits(unsigned bits) const {
    uint32_t mask = maskBits(bits);
    return static_cast<uint32_t>(getTwosComplement()) & mask;
}

void twosComplement::showBinary(unsigned bits) const {
    uint32_t mask = maskBits(bits);
    uint32_t pattern = static_cast<uint32_t>(number) & mask;
    convertBinary(pattern, bits);
    std::cout << '\n';
}

void twosComplement::showTwosBinary(unsigned bits) const {
    uint32_t pattern = getTwosBits(bits);
    convertBinary(pattern, bits);
    std::cout << '\n';
}
