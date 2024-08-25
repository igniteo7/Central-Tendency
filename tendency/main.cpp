#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

double findMean()
{
	int n;
	int arr[20];
	cout << "Enter no of elements" << endl;
	cin >> n;
	cout << "Enter elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	return (double)sum / (double)n;
}

double findMedian()
{
	int n;
	int arr[20];
	cout << "Enter no of elements" << endl;
	cin >> n;
	cout << "Enter elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	std::sort(arr, arr + n);


	if (n % 2 != 0)
		return (double)arr[n / 2];

	return (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}

int findMode()
{
	int n;
	int arr[20];
	cout << "Enter no of elements" << endl;
	cin >> n;
	cout << "Enter elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int maxcount = 0;
	int element_having_max_freq;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}

		if (count > maxcount) {
			maxcount = count;
			element_having_max_freq = arr[i];
		}
	}

	return element_having_max_freq;
}

double findGM()
{
	int n;
	int arr[20];
	cout << "Enter no of elements" << endl;
	cin >> n;
	cout << "Enter elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += log(arr[i]);
	}
	sum /= n;
	double GM = exp(sum);
	return GM;
}

double findHM()
{
	int n;
	int arr[20];
	cout << "Enter no of elements" << endl;
	cin >> n;
	cout << "Enter elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (float)1 / arr[i];
	}
	double HM = n / sum;
	return HM;
}


int main()
{
	//int arr[] = { 85,70,10,75,500,8,42,250,40,36 };
	//int n = sizeof(arr) / sizeof(arr[0]);
	int ch;
	cout << "1. Arithmetic Mean" << endl;
	cout << "2. Median" << endl;
	cout << "3. Mode" << endl;
	cout << "4. Geometric Mean" << endl;
	cout << "5. Harmonic Mean" << endl;
	cout << "Enter choice" << endl;
	cin >> ch;
	switch (ch) {
	case 1:
	{
		double Arithmetic_mean = findMean();
		cout << "Arithmetic mean = " << Arithmetic_mean;
		break;

	}
	case 2:
	{
		double Median = findMedian();
		cout << "Median = " << Median;
		break;
	}
	case 3:
	{
		double Mode = findMode();
		cout << "Mode = " << Mode;
		break;
	}
	case 4:
	{
		double Geometric_mean = findGM();
		cout << "Geometric mean = " << Geometric_mean << endl;
		break;
	}
	case 5:
	{
		double Harmonic_mean = findHM();
		cout << "Harmonic mean = " << Harmonic_mean << endl;
		break;
	}

	default: {
		cout << "Invalid choice" << endl;
		break;
	}
	}
}
