#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include <iostream>
#include <fstream>
#include "defines.h"

struct datarecord
{
    int builder;
    int sector;
    char typeStr[MAX_COMMAND_LENGTH];
};

class dataprovider
{
public:
    dataprovider(const char* filename);
    dataprovider(const dataprovider& other) = delete;
    const dataprovider& operator=(const dataprovider& other) = delete;
    ~dataprovider();

    // Returns the number of builders as specified in the datafile.
    int getNumBuilders();

    // Returns the next data record from the datafile.
    datarecord getNextDataRecord();

    // Returns true if there are more data records, false otherwise.
    bool hasMoreData();

private:

    char* mFilename;
    datarecord* mAllData;
    int mNumBuilders;
    int mCurrentRecord;
    int mNumRecords;

    void readAllData();
};

#endif
