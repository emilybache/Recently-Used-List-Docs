#include "recently_used_list.h"
#include <stdio.h>

int main()
{
    // Let cache can hold 4 pages 
    Queue* q = createQueue(4);

    // Let 10 different pages can be requested (pages to be 
    // referenced are numbered from 0 to 9
    // begin-snippet: create-data-length-10
    Hash* hash = createHash(10);
    // end-snippet

    // Let us refer pages 1, 2, 3, 1, 4, 5
    //  begin-snippet: lookup-pages
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 2);
    LookupPage(q, hash, 3);
    LookupPage(q, hash, 1);
    LookupPage(q, hash, 4);
    LookupPage(q, hash, 5);
    // end-snippet

    // Let us print cache frames after the above referenced pages 
    printf("%d ", q->front->pageNumber);
    printf("%d ", q->front->next->pageNumber);
    printf("%d ", q->front->next->next->pageNumber);
    printf("%d ", q->front->next->next->next->pageNumber);

    return 0;
} 