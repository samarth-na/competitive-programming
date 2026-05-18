function search(nums: number[], target: number): number {
	if (nums.length === 0) {
		return -1;
	}
	let low = nums[0];
	let high = nums.length - 1;
	if (low > high) {
		return -1;
	}
	const mid = Math.floor(low + (high - low) / 2);
	if (nums[mid] === target) {
		return mid;
	} else if (target > nums[mid]) {
		console.log(nums.slice(mid + 1, high));
		return search(nums.slice(mid + 1, high), target);
	} else {
		console.log(nums.slice(low, mid - 1));
		return search(nums.slice(low, mid - 1), target);
	}
}
search([-1, 0, 3, 5, 9, 12], 2);
