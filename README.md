<h1> push_swap - Because swap_push isn't as natural</h1>
</br>

push_swap is a program that sorts numbers in ascending order into a stack (A) with the help of only 1 extra stack (B).
</br>
</br>
<img width="500" height="300" align="right" src="https://github.com/DevGhali/push_swap/assets/113459534/1d8cd1a8-a1af-4417-8638-7bf8cef35f39"/>


In this project there are certain rules and prerequities as well as limitaions :
</br>
</br>
* Usage of stacks is limited to only 2 stacks - A & B.
* At the beginning of the program :
  * The stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.
  * The stack b is empty.
* The goal is to sort in ascending order numbers into stack a.
* The goal can be achieved using the following operations :
  
| Operation | Instruciton                     | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a & swap b                     | `sa` and `sb` at the same time                         |
| `pa`  | push a                              | moves the first element at the top of b and puts it at the top of a |
| `pb`  | push b                              | moves the first element at the top of a and puts it at the top of b |
| `ra`  | rotate a                            | shifts up all elements of stack a by 1 - The first element becomes the last one   |
| `rb`  | rotate b                            | shifts up all elements of stack b by 1 - The first element becomes the last one   |
| `rr`  | rotate a & rotate b                 | `ra` and `rb` at the same time                         |
| `rra` | reverse rotate a                    | shifts down all elements of stack a by 1 - The last element becomes the first one |
| `rrb` | reverse rotate b                    | shifts down all elements of stack b by 1 - The last element becomes the first one |
| `rrr` | reverse rotate a & reverse rotate b | `rra` and `rrb` at the same time                       |


## Concepts introduced in this project 🔮

- [Structs in c](https://www.scaler.com/topics/c/structures-c/) - Whats a struct and how do we declare one.
</br>

- [Linked Lists](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/tutorial/#:~:text=In%20C%20language%2C%20a%20linked,address%20of%20the%20next%20node.) - a linked list is used to store elements like an array but each element of the list is in the form of a node and all nodes are connected one to another, think of it as a train and how the trailers are connected with each other.
  
<img width="1000" height="250" align="center" src="https://github.com/DevGhali/push_swap/assets/113459534/05240a82-58b4-40ce-9979-91987a1f6c86"/>
</br>
</br>

- [Sorting Algorithms](https://www.programiz.com/dsa/sorting-algorithm) - in order to sort.... in our example an array of numbers we need a sorting algorithm, there are a lot to choose from + they differ from each other in functionality, 'Space Complexity' and 'Time Complexity' which is the most important aspect of this project.

## Radix Sort - Algorithm used for sorting 🔮
Radix sort is a sorting algorithm that sorts the elements by first grouping the individual digits of the same place value. Then, sort the elements according to their increasing/decreasing order.

- [More info on the radix sorting algorithm](https://www.programiz.com/dsa/radix-sort)


## Usage and execution of the program
> compile using the Makefile :

```bash
make all
```
> run the program with random integers : 
```bash
./push_swap 5 10 300 2154 15 9 3 964
```
> integers can also be put inside quotes : 
```bash
./push_swap "5 10 300 2154 15 9 3 964"
```
> run the program with the checker program to check if the sorting was successful and in the correct order : 
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```
