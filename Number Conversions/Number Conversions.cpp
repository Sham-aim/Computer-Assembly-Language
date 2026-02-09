#include<iostream>
#include<vector>
#include<string>
#include <cmath>
using namespace std;

string covert_to_binary(int n) {
	if (n <= 0) {
		return"0";
	}
	else {
		int i = 0;
		int count = 0;
		vector<int> arr;
		string result = "";
		while (n != 0) {
			i = n % 2;
			n = n / 2;
			arr.push_back(i);
			count++;
		}
		for (int p = count - 1; p >= 0; p--) {
			result += to_string(arr[p]);
		}
		return result;
	}
}
int convertbinary_to_decimal(int n) {
	string a = to_string(n);
	int len = a.length();
	int sum = 0;
	int count = 0;
	for (int i = len - 1; i >= 0; i--) {
		sum += (a[i] - '0') * pow(2, count);
		count++;
	}
	return sum;
}
string convert_to_hexadecimal(int n) {
	if (n <= 0) {
		return "0";
	}
	else {
		int i = 0;
		int count = 0;
		vector<int> arr;
		string result = "";
		while (n != 0) {
			i = n % 16;
			n = n / 16;
			arr.push_back(i);
			count++;
		}
		for (int p = count - 1; p >= 0; p--) {
			switch (arr[p]) {
			case 10:
				result += "A"; 
				break;
			case 11:
				result += "B";
				break;
			case 12:
				result += "C"; 
				break;
			case 13:
				result += "D"; 
				break;
			case 14:
				result += "E"; 
				break;
			case 15:
				result += "F"; 
				break;
			default:
				result += to_string(arr[p]);
			}
		}

		return result;
	}
}
int converthexadecimal_to_decimal(string a) {
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
	return sum;

}
string converthexatobinary(string b) {
	int dec = converthexadecimal_to_decimal(b);
	string final = covert_to_binary(dec);
	return final;

}

string convertbinarytohexa(int b) {
	int dec = convertbinary_to_decimal(b);
	string result=convert_to_hexadecimal(dec);
	return result;
	
}

int main() {
	
	convertbinarytohexa(100001);

}
