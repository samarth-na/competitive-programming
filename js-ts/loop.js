function removeDuplicates(nums) {
	for (let i = 2; i < nums.length; i++) {
		if (nums[i] === nums[i - 2]) {
			nums.splice(i, 1);
			i--;
		}
	}
	return nums.length;
}
function solve(nums, i) {
	if (1 >= nums.length) {
		return nums;
	}

	if (nums[i] === nums[i - 2]) {
		const newNums = [...nums.slice(0, i), ...nums.slice(i + 1)];
		return solve(newNums, i);
	}
	return solve(nums, ++i);
}

function _rmdup(nums) {
	solve(nums, 2);
}
const ans = removeDuplicates([0, 0, 0, 0, 0]);

console.log(ans);
