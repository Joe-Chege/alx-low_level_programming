# Search Algorithms Project

## Overview


This project, **0x1E. C - Search Algorithms**, is a part of our learning curriculum. The project focuses on search algorithms in the C programming language. Here are the details of the tasks:

### Tasks

1. **Linear search**
- Implement a function to search for a value in an array of integers using the Linear search algorithm.
- Prototype: `int linear_search(int *array, size_t size, int value);`
- Your function must return the first index where the value is located or -1 if the value is not present or if the array is NULL.
- Make sure to follow the provided guidelines and use the given example for testing.

2. **Binary search**
- Implement a function to search for a value in a sorted array of integers using the Binary search algorithm.
- Prototype: `int binary_search(int *array, size_t size, int value);`
- Your function must return the index where the value is located or -1 if the value is not present or if the array is NULL.
- Print the array being searched every time it changes.

3. **Big O #0**
- Determine the time complexity (worst case) of a linear search in an array of size n.

4. **Big O #1**
- Determine the space complexity (worst case) of an iterative linear search algorithm in an array of size n.

5. **Big O #2**
- Determine the time complexity (worst case) of a binary search in an array of size n.

6. **Big O #3**
- Determine the space complexity (worst case) of a binary search in an array of size n.

7. **Big O #4**
- Determine the space complexity of the given function/algorithm.
```c
int **allocate_map(int n, int m)
{
int **map;

map = malloc(sizeof(int *) * n);
for (size_t i = 0; i < n; i++)
{
map[i] = malloc(sizeof(int) * m);
}
return (map);
}
```

### Project Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with specific options.
- Code should follow the Betty style guidelines.
- Do not use global variables.
- No more than 5 functions per file.
- Use only the printf function of the standard library. Any other function calls like strdup, malloc, etc., are forbidden.
- Provide a README.md file at the root of the project folder.

### How to Test

Example usage for testing the implemented functions is provided in the project directory. You can compile and run the test files to validate your solutions.

### Copyright and Plagiarism

Remember, you are expected to come up with solutions for the tasks on your own. Plagiarism and any form of cheating are strictly forbidden and will result in removal from the program.

---

**Repository Information:**

- **GitHub Repository:** [alx-low_level_programming](github-repo-link)
- **Directory:** 0x1E-search_algorithms

© 2023 ALX. All rights reserved.
