#pragma once
#include <bits/stdc++.h>

#define fast_cio    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef long long ll;
typedef double long dl;

using namespace std;

class Stat {

public:
	vector <dl> Data;

	Stat(vector <dl> data) {
		Data = data;
		sort(Data.begin(), Data.end());
	}
	
	dl get_median()       {
		dl median;
		int size = Data.size();
		if (Data.size() % 2 == 0) {
			median = (Data[(size / 2) - 1] + Data[(size / 2)]) / 2;
		}
		else {
			median = Data[ ( (size + 1) / 2 ) - 1];
		}

		return median;
	}
	vector <dl> get_data_sorted() {
		return Data;
	}

	dl get_sum() {
		dl sum = 0;
		for (auto q : Data) {
			sum += q;
		}
		return sum;
	}

	dl get_range() {
		dl range = Data.back() - Data.front();
		return range;
	}

	dl get_mean() {
		dl mean = get_sum() / Data.size();
		return mean;
	}

	vector <dl> get_mode() {
		map <dl, dl> map_mode;
		vector <dl> mode;

		for (auto l : Data) {
			map_mode[l]++;
		}

		for (auto q : map_mode) {
			if (q.second > 1) {
				mode.push_back(q.first);
			}
		}
		return mode;
	}

	dl get_standerd_deviation() {
		dl variance = 0;
		dl mean = get_mean();
		for (auto q : Data) {
			variance += pow((q - mean), 2);
		}
		if (Data.size() == 1) variance /= Data.size();
		else variance /= Data.size() - 1;
		return sqrt(variance);
	}

	dl get_Q1() {
		vector < dl > lower_half;
		int size = Data.size();
		if (size == 1) { return 0; }
		if (size % 2 == 0) {
			for (int i = 0; i <= ((size - 1) / 2); i++) {
				lower_half.push_back(Data[i]);
			}
		}
		else {
			for (int i = 0; i < (size - 1) / 2; i++) {
				lower_half.push_back(Data[i]);
			}
		}

		return Stat(lower_half).get_median();
	}

	dl get_Q2() {
		if (Data.size() == 1) { return 0; }
		return get_median();
	}

	dl get_Q3() {
		vector < dl > upper_half;
		int size = Data.size();
		if (size == 1) { return 0; }
		if (size % 2 == 0) {
			for (int i = (size - 1) / 2; i < size; i++) {
				upper_half.push_back(Data[i]);
			}
		}
		else {
			for (int i = ((size) / 2) + 1; i < size; i++) {
				upper_half.push_back(Data[i]);
			}
		}

		return Stat(upper_half).get_median();
	}

	dl get_iqr() {
		return get_Q3() - get_Q1();
	}

	dl get_lb() {
		return get_Q1() - 1.5 * get_iqr();
	}

	dl get_ub() {
		return get_Q3() + 1.5 * get_iqr();
	}

	void check_skewed() {
		if (get_mean() > get_Q2()) 
			cout << "Postive skewed" << endl;

		else if (get_mean() < get_Q2())
			cout << "Negative skewed" << endl;

		else 
			cout << "symetric" << endl;

		return;
	}

	void show_mode() {
		map <dl, dl> mode;
		bool z = true;

		for (auto l : Data) {
			mode[l]++;
		}

		for (auto x : mode) {
			if (x.second > 1) {
				cout << x.first << " ";
				z = false;
			}
		}cout << endl;

		if (z) cout << "No modes" << endl;
	}

	void show_data_sorted() {

		for (dl i : Data) {
			cout << i << " ";
		}cout << endl;

	}

	void get_box_plot_info() {

		dl Q1, Q2, Q3, iqr;
		dl lower_bound, upper_bound;

		Q1 = get_Q1();
		Q2 = get_Q2();
		Q3 = get_Q3();

		cout << "Q1 = " << Q1 << endl;
		cout << "Q2 = " << Q2 << endl;
		cout << "Q3 = " << Q3 << endl;

		iqr = get_iqr();
		cout << "Interquartile Range = " << iqr << endl;

		lower_bound = get_lb();
		upper_bound = get_ub();

		cout << "lower bound = " << lower_bound << endl;
		cout << "upper bound = " << upper_bound << endl;

		check_skewed();
	}

	

};
