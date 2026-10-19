function pivotIndex(params) {
    for (let i = 0; i < params.length; i++) {
        let leftadd = 0;
        for (let j = 0; j < i; j++) {
            leftadd += params[j];
        }

        let rightadd = 0;
        for (let j = i + 1; j < params.length; j++) {
            rightadd += params[j];
        }

        if (leftadd === rightadd) {
            return i;
        }
    }
    return -1;
}
