export default function bs_list(nums: number[], target: number) {
	let lo = 0;
	let hi = nums.length - 1;

	while (lo < hi) {
		const mid = Math.floor(lo + (hi - lo) / 2);
		const v = nums[mid];
		console.log(lo, hi, mid, v);
		if (v === target) {
			return true;
		}
		if (target < v) {
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	return false;
}
const ans = bs_list([1, 2, 3, 5, 5, 5, 6, 7, 9, 10], 4);

console.log(ans);
