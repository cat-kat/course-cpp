#include "Student.h"

void Student::readData(std::string code, char *name, int innings, int notout, int runs) {
    if (code.size() != 4) {
        std::cout << "Incorrect student code ";
        return;
    }

    mCode = code;

    for (int i = 0; i < NAME_MAX_LEN; i++) {
        mName[i] = name[i];
        if (name[i] == '\0') {
            break;
        }
    }

    mInnings = innings;
    mNotout = notout;
    mRuns = runs;

    calcAvg();
}

void Student::displayData() const {
    std::cout << "Student code: " << mCode << std::endl;
    std::cout << "Name: " << mName << std::endl;
    std::cout << "Innings: " << mInnings << std::endl;
    std::cout << "Notout: " << mNotout << std::endl;
    std::cout << "Runs: " << mRuns << std::endl;
    std::cout << "Batavg: " << mBatavg << std::endl;

}

void Student::calcAvg() {
    if ((mInnings - mNotout) != 0) {
        mBatavg = (float) mRuns / (float) (mInnings - mNotout);
    } else mBatavg = 0;
}

Student::Student() : mInnings(0), mNotout(0), mRuns(0), mBatavg(0),
                     mName({'\0'}), mCode("0000") {}