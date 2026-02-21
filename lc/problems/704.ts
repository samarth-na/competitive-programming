function plusOne(nums: number[]) {
    const lastIndex = nums.length - 1;

    if (nums[lastIndex] === 9) {
        for (let i = lastIndex; i >= 0; i--) {
            if (nums[i] === 9) {
                nums[i] = 0;
                if (i === 0) {
                    nums[i] = 1;
                    nums.push(0);
                }
            } else {
                nums[i]++;
                break;
            }
            console.log(nums);
        }
    } else {
        console.log("hello", nums[lastIndex]);
        nums[lastIndex]++;
    }
    return nums;
}

// deno-lint-ignore prefer-const
let ans = plusOne([9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9]);
console.log(ans);
