# AISD-lab-2

  Linked list FIFO

Implement a linked list. Every element of the list should contain a key of type int (signed integer), and some pointers that are required by your linked list implementation.
Your program should support the following operations:
i - insert a new element to the end of your list,
d - delete an element from the beginning of your list,
s - search for an element of the list with a given key, and return its index or -1 if the element was not found (if there are multiple elements with the same key, the smallest of the indices should be returned),
q - deallocate memory and quit the program.
The first element (head) of your list should be interpreted as an element on position 0, the second element is on position 1, etc.

  Input

Any number of lines, and each line contains one of the commands:
i <key>
d
s <key>
q
Where:
i, d, s, q are identifiers of the operation,
<key> is the key of an element (value of type int to be stored in the element).
You can assume that q will be always the last operation.
  
  Output

For every s operation the index of a found element is printed (or -1 if it was not found). If there are multiple elements with the same key, the smallest of the indexes should be printed. Values should be separated by the new line character (std::endl or \n).
