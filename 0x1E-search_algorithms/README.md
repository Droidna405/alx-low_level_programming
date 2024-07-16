# Search Algorithms

## Overview

This repository contains implementations of various search algorithms in C. Each algorithm is designed to efficiently search for a target value within a data structure. The primary focus is on understanding the basic principles of search algorithms and how to implement them in a clear and efficient manner.

## Linear Search Algorithm

### Description

The linear search algorithm is one of the simplest search algorithms. It works by sequentially checking each element in the array until the target value is found or the end of the array is reached. This algorithm is straightforward but can be inefficient for large datasets.

### Prototype

```c
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
```c