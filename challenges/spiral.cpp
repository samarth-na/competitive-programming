#include <iostream>
#include <vector>
using namespace std;
int main() {
	int r, c;
	cin >> r >> c;
	vector<vector<int>> mat(r, vector<int>(c));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> mat[i][j];
		}
	}
	int left = 0, right = c - 1, top = 0, bottom = r - 1;
	while (left <= right && top <= bottom) {
		for (int i = left; i <= right; i++) {
			cout << mat[top][i] << " ";
		}
		top++;
		for (int i = top; i <= bottom; i++) {
			cout << mat[i][right] << " ";
		}
		right--;
		for (int i = right; i >= left; i--) {
			cout << mat[bottom][i] << " ";
		}
		bottom--;
		for (int i = bottom; i >= top; i--) {
			cout << mat[i][left] << " ";
		}
		left++;
	}
	return 0;
}
