#pragma once

#include <iostream>
#include <string>

class Student {
public:
    Student();
    void readData(std::string code, char* name, int innings, int notout, int invoke);
    void displayData() const;

private:

    static const int NAME_MAX_LEN = 20;
    std::string mCode;
    char mName[NAME_MAX_LEN];
    int mInnings, mNotout, mRuns;
    float mBatavg;

    void calcAvg();
};
