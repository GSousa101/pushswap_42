<h1 align="center">Push_swap </h1>

<div align="center">🤔A project with the objective to sort numbers, limited by type of moviments and using 2 stacks.</div>

![](https://github.com/GSousa101/pushswap_42/blob/main/sort.gif)

---

## 🏁 Introduction
The main objective of this project is to implement a sorting algorithm between two stacks that could use the least amount of stack operations (described below), and those movements need to be printed to the standard output.

The stack A receive a random amount of number and it must be sorted from its lowest element at the top to the biggest at bottom, while stack B must be empty at the end of the program.


The operations (or movements) is of 4 categories: `Swap`, `Push`, `rotate` and `reverse rotate`:
+ **sa** : Swap the firts 2 elements at the top of stack A.
+ **sb** : Swap the firts 2 elements at the top of stack B.
+ **ss** : Execute both __sa__ and __sb__.
+ **pa** : Take the first element at the top of stack B and put it the top of stack A.
+ **pb** : Take the first element at the top of stack A and put it the top of stack B.
+ **ra** : The first element of stack A becomes the last one of itself.
+ **rb** : The first element of stack B becomes the last one of itself.
+ **rr** : Execute both __ra__ and __rb__.
+ **rra** : The last element of stack A becomes the first one of itself.
+ **rrb** : The last element of stack B becomes the first one of itself.
+ **rrr** : Execute both __rra__ and __rrb__.
---

## 🔀 The algorithm

The algorith is dividide in 3 mains parts:

### Check the input

As the random value to be sorted comes from the user, it needs to be verified if it's possible, following the project rules, to be sorted.
The rules are: it needs to be an interger and shall not have duplicate numbers.

### Receiving the numbers

At this part of the program, it will get all the input and transform it in node of our stacks. Then, it will index all of them, with this it will be easier for our program to treat with negative numbers.

### Sort

Finally we will get to the sorting itself. The program will choose between using a small sort to values up to 5, or using radix-sort to greater quantity of numbers.

![](https://github.com/GSousa101/pushswap_42/blob/main/gifde5.gif)


![](https://github.com/GSousa101/pushswap_42/blob/main/gifde100.gif)

---

## 📚 Links and References

[Youtube video](https://youtu.be/kPRA0W1kECg) - 15 Sorting algorithms.

[Project](https://github.com/o-reo/push_swap_visualizer) of visualizer to see the stacks ordering.

[Youtube Vídeo](https://www.youtube.com/watch?v=ujb2CIWE8zY&feature=youtu.be) - Why is radix sort so fast?

---

## 👨🏻‍💻 Author

Gustavo F Sousa
- Github: [@GSousa101](https://github.com/GSousa101)
- Linkedin: [@gustavo-sousa-dt](https://www.linkedin.com/in/gustavo-sousa-dt/)

Give a ⭐ if this project has helped you!
