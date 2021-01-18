
#include "ApprovalTests.hpp"
#include <gtest/gtest.h>

extern "C"
{
#include "recently_used_list.h"
}

TEST(TutorialExample, BasicUsage)
{
    // begin-snippet: create-queue
    Queue* q = createQueue(4);
    // end-snippet

    Hash* hash = createHash(10);
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 2);
    LookupPage(q, hash, 3);
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 4);
    LookupPage(q, hash, 5);
    int pageOrder[] = {0, 0, 0, 0};
    currentPageOrder(q, pageOrder, 4);

    unsigned int expected[] = {5, 4, 1, 3};
    for (int i = 0; i < 4 ; i ++)
    {
        EXPECT_EQ(expected[i], pageOrder[i]);
    }
}

