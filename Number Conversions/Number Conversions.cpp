#include<iostream>
#include<vector>
#include<string>
#include <cmath>
using namespace std;

void covert_to_binary(int n) {
	if (n <= 0) {
		return;
	}
	else {
		int i = 0;
		int count = 0;
		vector<int> arr;
		while (n != 0) {
			i = n % 2;
			n = n / 2;
			arr.push_back(i);
			count++;
		}
		for (int p = count - 1; p >= 0; p--) {
			cout << arr[p];
		}
	}
}
void covert_to_octal(int n) {
	if (n <= 0) {
		return;
	}
	else {
		int i = 0;
		int count = 0;
		vector<int> arr;
		while (n != 0) {
			i = n % 8;
			n = n / 8;
			arr.push_back(i);
			count++;
		}
		for (int p = count - 1; p >= 0; p--) {
			cout << arr[p];
		}
	}
}
void convertbinary_to_decimal(int n) {
	string a = to_string(n);
	int len = a.length();
	int sum = 0;
	int count = 0;
	for (int i = len - 1; i >= 0; i--) {
		sum += (a[i] - '0') * pow(2, count);
		count++;
	}
	cout << sum;


}
void convertoctal_to_decimal(int n) {
	string a = to_string(n);
	int len = a.length();
	int sum = 0;
	int count = 0;
	for (int i = len - 1; i >= 0; i--) {
		sum += (a[i] - '0') * pow(8, count);
		count++;
	}
	cout << sum;


}

void convert_to_hexadecimal(int n) {
	if (n <= 0) {
		return;
	}
	else {
		int i = 0;
		int count = 0;
		vector<int> arr;
		while (n != 0) {
			i = n % 16;
			n = n / 16;
			arr.push_back(i);
			count++;
		}
		for (int p = count - 1; p >= 0; p--) {
			switch (arr[p]) {
			case 10:
				cout << "A";
				break;
			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			case 13:
				cout << "D";
				break;
			case 14:
				cout << "E";
				break;
			case 15:
				cout << "F";
				break;
			default:
				cout << arr[p];
			}
		}
	}
}
void converthexadecimal_to_decimal(string a) {
	int len = a.length();
	int sum = 0;
	int count = 0;
	for (int i = len - 1; i >= 0; i--) {
		switch (a[i]) {
		case 'A':
			sum += 10 * pow(16, count);
			count++;
			break;
		case 'B':
			sum += 11 * pow(16, count);
			count++;
			break;
		case 'C':
			sum += 12 * pow(16, count);
			count++;
			break;
		case 'D':
			sum += 13 * pow(16, count);
			count++;
			break;
		case 'E':
			sum += 14 * pow(16, count);
			count++;
			break;
		case 'F':
			sum += 15 * pow(16, count);
			count++;
			break;
		default:
			sum += (a[i] - '0') * pow(16, count);
			count++;
		}
	}
	cout << sum;

}
int main() {
	convert_to_hexadecimal(8);
	cout << endl;
}