// Primitives are copied by value
let a = 5;
let b = a;
b = 10;
console.log(a); // 5 (unchanged)

// Objects are assigned by reference
let nodeA = { data: 1, next: null };
let nodeB = nodeA; // nodeB points to the SAME object as nodeA
nodeB.data = 99;
console.log(nodeA.data); // 99 (changed!)
nodeA.data = 1;
console.log(nodeB.data);

////////////////////////////////////
