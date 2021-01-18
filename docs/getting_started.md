---
layout: default
parent: Recently Used List
title: Getting Started
nav_order: 1
---
# Getting Started - Tutorial

First steps using this fantastic awesome functionality. Follow this guide.

## Using the Recently Used List as a cache

Create a Recently Used List that can hold 4 items

<!-- snippet: create-queue -->
<a id='snippet-create-queue'></a>
```cpp
Queue* q = createQueue(4);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/test/tutorial.cpp#L12-L14' title='File snippet `create-queue` was extracted from'>snippet source</a> | <a href='#snippet-create-queue' title='Navigate to start of snippet `create-queue`'>anchor</a></sup>
<!-- endSnippet -->

The underlying data has considerably more elements - say 10

<!-- snippet: create-data-length-10 -->
<a id='snippet-create-data-length-10'></a>
```cpp
Hash* hash = createHash(10);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/test/tutorial.cpp#L16-L18' title='File snippet `create-data-length-10` was extracted from'>snippet source</a> | <a href='#snippet-create-data-length-10' title='Navigate to start of snippet `create-data-length-10`'>anchor</a></sup>
<!-- endSnippet -->

When you look up pages in the hash, for example with order 1, 2, 3, 1, 4, 5 

<!-- snippet: lookup-pages -->
<a id='snippet-lookup-pages'></a>
```cpp
LookupPage(q, hash, 1);
LookupPage(q, hash, 2);
LookupPage(q, hash, 3);
LookupPage(q, hash, 1);
LookupPage(q, hash, 4);
LookupPage(q, hash, 5);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/test/tutorial.cpp#L20-L27' title='File snippet `lookup-pages` was extracted from'>snippet source</a> | <a href='#snippet-lookup-pages' title='Navigate to start of snippet `lookup-pages`'>anchor</a></sup>
<!-- endSnippet -->

The queue will store the pages in recently-used order, which in this case is:

    5 4 1 3 
    
You can query the order of pages using currentPageOrder which populates the 
array you give it in the second argument: 

<!-- snippet: show-currentPageOrder -->
<a id='snippet-show-currentpageorder'></a>
```cpp
int pageOrder[] = {0, 0, 0, 0};
currentPageOrder(q, pageOrder, 4);
```
<sup><a href='https://github.com/emilybache/Recently-Used-List-Docs/blob/main/test/tutorial.cpp#L55-L58' title='File snippet `show-currentpageorder` was extracted from'>snippet source</a> | <a href='#snippet-show-currentpageorder' title='Navigate to start of snippet `show-currentpageorder`'>anchor</a></sup>
<!-- endSnippet -->

todo: show the alternative way to get the order using next()
