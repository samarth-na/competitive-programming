import type { num } from "../types.ts";

export default function binIterative(arr: num[], target: num) {
	let left = 0;
	let right = arr.length - 1;

	console.log(`start`);

	while (left <= right) {
		const mid = Math.floor(left + (right - left) / 2);
		console.log(left, mid, right);

		if (arr[mid] === target) {
			console.log("its here ");
			return mid;
		} else if (target < arr[mid]) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	console.log(`its not in`);
	return -1;
}
