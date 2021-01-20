---
layout: default
parent: Recently Used List
title: Getting Started
nav_order: 1
---
# Getting Started - Tutorial

First steps using this fantastic awesome functionality. Follow this guide.

## Using the Recently Used List to keep track of frequently accessed items

In this tutorial we will see how to use a RecentlyUsedList in a DNS lookup class, to keep track of which ip addresses 
are being looked up most frequently.

We begin with a DnsLookup class that has two methods for storing and retrieving ip addresses:

TODO: code snippet

We would like to extend it to also keep track of which DNS names have been accessed recently. We want to add a function `cachedKeys` that will return a list of DNS names in the order of which 
were most recently accessed. For the implementation we can use a RecentlyUsedList.

The first thing you need to do is include the relevant .h file:

TODO: code snippet 

TODO: the rest of the tutorial


