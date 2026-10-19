// [
/** biome-ignore-all lint/style/useConst: <explanation> */
//   [1, 3, 5, 7],
//   [10, 11, 16, 20],
//   [23, 30, 34, 60]
// ]
//
/**
 * biome-ignore-all lint/correctness/noUnusedVariables: generated file
 */
// deno-lint-ignore-file no-unused-vars

function _binarySearch(arr: number[][], target: number): boolean {
	const rows = arr.length;
	const cols = arr[0].length;

	let left = 0;
	let right = rows * cols - 1;

	while (left <= right) {
		const mid = Math.floor((left + right) / 2);
		const row = Math.floor(mid / cols);
		const col = mid % cols;
	}

	return false;
}

function lienarSearch(arr: number[][], target: number): number {}
