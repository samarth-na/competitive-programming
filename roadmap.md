Here’s a chronological roadmap. It’s built so you never face a topic that requires something you haven’t seen yet. Start from the top, work down, one small bite per day.

---

### Phase 1 – The Bedrock (Data Structures)
These are the nouns of DSA. Learn how they work under the hood, implement each one from scratch at least once, then solve 2‑3 easy problems per structure to lock it in.

1. **Arrays & Strings (basic operations)**  
   *Iteration, insertion, deletion, 2‑pointer basics, sliding window intuition.*  
   → Already familiar ground; jump straight to Two‑Pointer / Sliding Window patterns after a quick review.

2. **Linked Lists**  
   *Singly and doubly linked, traversal, insertion, deletion, reversal, cycle detection (Floyd’s).*

3. **Stacks & Queues**  
   *LIFO/FIFO, array vs linked list implementation, applications (parentheses matching, evaluating expressions, BFS queue).*

4. **Hash Tables / Maps**  
   *Hash function idea, collisions, usage for fast lookups. No need to implement, just know time complexity and when to use.*

5. **Recursion (as a tool, not a separate data structure)**  
   *Base case, call stack, recursion tree, simple problems (factorial, Fibonacci, reverse a string).*  
   → You must be comfortable here before trees and graphs.

---

### Phase 2 – Hierarchical Data & First Algorithms
Now you layer on more complex structures.

6. **Trees (Binary Trees & BSTs)**  
   *Terminology, traversals: inorder, preorder, postorder (recursive + iterative), level‑order (BFS).*  
   *Binary Search Tree: insert, search, delete basics.*

7. **Heaps / Priority Queues**  
   *Min‑heap / max‑heap concept, heapify, insertion, extraction. Use library implementations but know how they work.*

8. **Graphs**  
   *Representations (adjacency list/matrix), BFS, DFS, detecting cycles (undirected/directed), connected components.*  
   *Start with DFS/BFS traversal templates.*

---

### Phase 3 – Algorithmic Patterns (the Blind 75 core)
This is where you build your recognition library. For each pattern, study the template, then practice on 2‑4 problems.

9. **Two Pointers**  
   *Pair sum, removing duplicates, partitioning arrays.*

10. **Sliding Window**  
    *Fixed vs variable size, max/min subarray problems.*

11. **Binary Search (extended)**  
    *You know the basics; now learn variations: search in rotated array, find first/last occurrence, binary search on answer.*

12. **Backtracking**  
    *Subsets, permutations, combinations, N‑Queens. Learn the “choose‑explore‑unchoose” skeleton.*

13. **Dynamic Programming**  
    *Start with memoization (top‑down) on classic problems: Fibonacci, climbing stairs, house robber.*  
    *Then tabulation (bottom‑up). Learn 1D DP, then 2D DP.*  
    *Crucial patterns: knapsack, unbounded knapsack, longest common subsequence, palindrome substrings.*  
    *This is the biggest mental shift – give it extra time.*

14. **Greedy**  
    *Activity selection, interval scheduling, jump game. Understand when greedy works vs DP.*

---

### Phase 4 – The Final Polishing Tools
Some Blind 75 problems pull from these; they can be learned in parallel after Phase 3.

15. **Tries (Prefix Trees)**  
    *Insert, search, startsWith – used for autocomplete, word search II.*

16. **Union‑Find (Disjoint Set)**  
    *Find with path compression, union by rank. Used for connected components and Kruskal’s algorithm.*

17. **Intervals**  
    *Merge intervals, insert interval, meeting rooms – really a specialized array pattern, but worth isolating.*

18. **Bit Manipulation**  
    *Basic operations (AND, OR, XOR, shifts), counting bits, single number problems.*  
    *Lightweight; do a few problems and move on.*

---

### How to use this list without quitting on Day 3
- Open your Neovim, create a file `dsa_roadmap.md` and paste this list as checkboxes.
- Each day, pick the next unchecked item. Spend your **25‑minute session** either:
  - Studying the concept (video / article) and implementing it from scratch, **or**
  - Solving one problem that uses it (if stuck, peek at solutions after 15 min).
- Tick the box **only after you’ve done one problem** that uses the topic (not just read about it).
- By the time your list is fully checked, the Blind 75 will feel like a curated practice ground rather than a wall of impossible tasks.

You already have the discipline. You just needed the map. Now you have one.
