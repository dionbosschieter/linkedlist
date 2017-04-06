# linkedlist

```c
struct linkedlist {
    node *firstitem;
} typedef linkedlist;

struct node {
    int number;
    node *next;
};
```

Usage
-----
Compile with: ```gcc linkedlist.c -o linkedlist```

Run with: ```./linkedlist```

```bash
adding 10
inserting as first 10
adding 30
30 is bigger than 10
adding 2
inserting 2 before 10
adding 19
19 is bigger than 2
19 is bigger than 10
inserting 19 before 30
adding 5
5 is bigger than 2
inserting 5 before 10
adding 50
50 is bigger than 2
50 is bigger than 5
50 is bigger than 10
50 is bigger than 19
50 is bigger than 30
adding 20
20 is bigger than 2
20 is bigger than 5
20 is bigger than 10
20 is bigger than 19
inserting 20 before 30
adding 1
inserting 1 before 2
1 2 5 10 19 20 30 50
```
