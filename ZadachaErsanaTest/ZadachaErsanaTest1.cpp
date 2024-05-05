#include <iostream>
#include <vector>

using namespace std;

int main() {
	int triangle_base = 8;
	vector<char> triangle(triangle_base * triangle_base, '*');
	for (int i = 0; i < triangle.size(); i++) {
		if (i % triangle_base == triangle_base - 1) {
			cout << (i - (i / triangle_base * triangle_base) < i / triangle_base + 1 ? triangle[i] : ' ') << endl;
		}
		else {
			cout << (i - (i / triangle_base * triangle_base) < i / triangle_base + 1 ? triangle[i] : ' ') << ' ';
		}
	}
	return 0;
}