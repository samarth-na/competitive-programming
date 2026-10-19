let Node = {
    data: null,
    next: null,
};

let head = null;

function insertAtBeginning(data) {
    let newNode = new Node();
    newNode.data = data;
    newNode.next = head;
    head = newNode;
}
