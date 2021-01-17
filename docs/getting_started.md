---
layout: default
parent: Recently Used List
title: Getting Started
nav_order: 1
---
# Getting Started

First steps using this fantastic awesome functionality.

## Using the Recently Used List as a cache

Create a Recently Used List that can hold 4 items

<!-- snippet: create-queue-length-4 -->
<a id='snippet-create-queue-length-4'></a>
```cpp
int length = 4;
q = createQueue(length);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/test/unit_test.cpp#L40-L43' title='File snippet `create-queue-length-4` was extracted from'>snippet source</a> | <a href='#snippet-create-queue-length-4' title='Navigate to start of snippet `create-queue-length-4`'>anchor</a></sup>
<!-- endSnippet -->

The underlying data has considerably more elements - say 10

<!-- snippet: create-data-length-10 -->
<a id='snippet-create-data-length-10'></a>
```c
Hash* hash = createHash(10);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/src/main.c#L11-L13' title='File snippet `create-data-length-10` was extracted from'>snippet source</a> | <a href='#snippet-create-data-length-10' title='Navigate to start of snippet `create-data-length-10`'>anchor</a></sup>
<!-- endSnippet -->

When you look up pages in the hash, for example with order 1, 2, 3, 1, 4, 5 

<!-- snippet: lookup-pages -->
<a id='snippet-lookup-pages'></a>
```c
LookupPage(q, hash, 1);
LookupPage(q, hash, 2);
LookupPage(q, hash, 3);
LookupPage(q, hash, 1);
LookupPage(q, hash, 4);
LookupPage(q, hash, 5);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/src/main.c#L16-L23' title='File snippet `lookup-pages` was extracted from'>snippet source</a> | <a href='#snippet-lookup-pages' title='Navigate to start of snippet `lookup-pages`'>anchor</a></sup>
<!-- endSnippet -->

The queue will store the pages in recently-used order, which in this case is:

    5 4 1 3 
    
You can query the order of pages using currentPageOrder which populates the 
array you give it in the second argument: 

<!-- snippet: lookup-page-order -->
<a id='snippet-lookup-page-order'></a>
```cpp
int actual[] = {0, 0, 0, 0};
currentPageOrder(q, actual, length);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/test/unit_test.cpp#L49-L52' title='File snippet `lookup-page-order` was extracted from'>snippet source</a> | <a href='#snippet-lookup-page-order' title='Navigate to start of snippet `lookup-page-order`'>anchor</a></sup>
<!-- endSnippet -->

Otherwise you can always get the most recently used item with

    q->front
