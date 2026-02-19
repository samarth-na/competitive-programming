function pivotIndex(params) {
    // deno-lint-ignore no-unused-vars
    let leftadd = 0;
    for (let i = 0; i < params.length; i++) {
        console.log("l", leftadd);

        let rightadd = 0;
        for (let j = i + 1; j < params.length; j++) {
            rightadd += params[j];
        }
        console.log("r", rightadd);

        if (leftadd === rightadd) {
            return i;
        }
        leftadd += params[i];
    }
}
// deno-lint-ignore prefer-const
let ans = pivotIndex([1, 7, 3, 6, 5, 6]);
console.log("ans", ans);
