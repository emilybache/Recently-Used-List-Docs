
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

    // begin-snippet: create-data-length-10
    Hash* hash = createHash(10);
    // end-snippet

    //  begin-snippet: lookup-pages
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 2);
    LookupPage(q, hash, 3);
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 4);
    LookupPage(q, hash, 5);
    // end-snippet

    // begin-snippet: show-currentPageOrder
    int pageOrder[] = {0, 0, 0, 0};
    currentPageOrder(q, pageOrder, 4);
    // end-snippet

    unsigned int expected[] = {5, 4, 1, 3};
    for (int i = 0; i < 4 ; i ++)
    {
        EXPECT_EQ(expected[i], pageOrder[i]);
    }
}

TEST(TutorialExample, UsageNext)
{
    Queue* q = createQueue(4);
    Hash* hash = createHash(10);
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 2);
    LookupPage(q, hash, 3);
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 4);
    LookupPage(q, hash, 5);

    // begin-snippet: show-cache-order-next
    unsigned int pageOrder[] = {0, 0, 0, 0};
    pageOrder[0] = q->front->pageNumber;
    pageOrder[1] = q->front->next->pageNumber;
    pageOrder[2] = q->front->next->next->pageNumber;
    pageOrder[3] = q->front->next->next->next->pageNumber;
    // end-snippet

    int expected[] = {5, 4, 1, 3};
    for (int i = 0; i < 4 ; i ++)
    {
        EXPECT_EQ(expected[i], pageOrder[i]);
    }
}