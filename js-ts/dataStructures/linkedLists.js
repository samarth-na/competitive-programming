function createNode(data) {
    const node = { data: data, next: null };
    return node;
}
function append(head, data) {
    if (head == null) {
        head = createNode(data);
        console.log('new head', head);
    }
    let current = head;
    while (current.next != null) {
        current = current.next;
    }
    current.next = createNode(data);
}
const head = { data: 1, next: null };

append(head, 2);
append(head, 3);
append(head, 4);
append(head, 5);
append(head, 6);

function printList(head) {
    while (head.next != null) {
        console.log(head.data, '-');
        head = head.next;
    }
    console.log(head.data, '-');
}
// or
function printListRec(head) {
    if (head.next == null) {
        console.log(head.data, '~');
        return;
    }
    console.log(head.data, '~');
    return printListRec(head.next);
}

printList(head);
append(head, 7);
printListRec(head);

head.next = null;

console.log(head);

let emptyList = null;
append(emptyList, 1);
console.log(emptyList);
