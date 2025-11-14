#ifndef LONG_LONG_H
#define LONG_LONG_H

#include <string>

class Longlong {
    long h;
    unsigned long l;
public:
    Longlong();
    Longlong(long high, unsigned long low);
    Longlong(const Longlong& other);

    void Init(long high = 0, unsigned long low = 0);
    void Read();
    void Display() const;
    std::string toString() const;

    Longlong operator+(const Longlong& o) const;
    Longlong operator-(const Longlong& o) const;
    Longlong operator*(const Longlong& o) const;
    bool operator==(const Longlong& o) const;

    Longlong add(const Longlong& o) const;
    Longlong sub(const Longlong& o) const;
    Longlong mul(const Longlong& o) const;
    bool equ(const Longlong& o) const;

    bool greater(const Longlong& o) const;
    bool less(const Longlong& o) const;
};

#endif