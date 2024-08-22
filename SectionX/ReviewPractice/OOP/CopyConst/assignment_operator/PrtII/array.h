#ifndef _Array_h
#define _Array_h

#include <vector>

class ARRAY
{
private:
    std::vector<int>data;

public:
    ARRAY();

    ARRAY(const ARRAY& source);

    ARRAY& operator=(const ARRAY& source);

    ~ARRAY();

    void printData();
    void setData(int index, int value);
};
#endif