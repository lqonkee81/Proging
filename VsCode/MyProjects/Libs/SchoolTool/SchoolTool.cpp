#include "SchoolTool.h"
#include <string>
#include <iostream>

bool SchoolTool(string Str, string Find)
{
    int StrSize = Str.length();
    int FindSize = Find.length();

    bool Result = false;

    for (int i = 0; i < StrSize; ++i)
    {
        for (int j = 0; j < FindSize; ++j)
        {
            if (Str[i] == Find[j])
            {
                Result = true;

                if (j == FindSize)
                    return true;
            }
            else
                Result = false;
        }
    }

    return Result;
}
