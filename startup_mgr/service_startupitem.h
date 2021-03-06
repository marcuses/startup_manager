#pragma once
#include "istartupitem.h"
class CServiceStartupItem : public IStartupItem
{
public:
    CServiceStartupItem(void);
    ~CServiceStartupItem(void);
    BOOL Init();
    BOOL UnInit();

public:
    BOOL Add(void* p);
    BOOL Delete(void* p);
    BOOL Query(std::vector<ResultData* >& resultDataVec);
};

