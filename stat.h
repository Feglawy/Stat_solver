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


	// returns the median and it is the value that centers the data
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

	// returns the vector of sorted data
	vector <dl> get_data_sorted() {
		return Data;
	}

	// the sum of all data 
	dl get_sum() {
		dl sum = 0;
		for (auto q : Data) {
			sum += q;
		}
		return sum;
	}

	// the biggest value minus the least one 
	dl get_range() {
		dl range = Data.back() - Data.front();
		return range;
	}

	// the average of data
	dl get_mean() {
		dl mean = get_sum() / Data.size();
		return mean;
	}

	// returns the vector of the repeated values in the data
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

	// returns the standerd deviation 
	// st_d is the square root of variance
	// variance if the sum of all values - mean -> ((xi - mean)^2)/n 
	dl get_standerd_deviation(bool pop = false) {
		dl variance = 0;
		dl mean = get_mean();
		for (auto q : Data) {
			variance += pow((q - mean), 2);
		}
		if (!pop && Data.size() > 1) {
			variance /= Data.size() - 1;
		}
		else if (pop && Data.size() > 1) {
			variance /= Data.size();
		}
		else {
			return 0;
		}
		return sqrt(variance);
	}

	// q1 is the median of the first half of the data
	//maybe there is a better way 
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

	// q2 is the median of the data
	dl get_Q2() {
		if (Data.size() == 1) { return 0; }
		return get_median();
	}

	// q3 is the median of the second half of the data
	//maybe there is a better way 
	dl get_Q3() {
		vector < dl > upper_half;
		int size = Data.size();
		if (size == 1) { return 0; }
		if (size % 2 == 0) {
			for (int i = (size) / 2; i < size; i++) {
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

	// the difference between the upper
	// quartile(Q1) and the lower quartile(Q3).
	dl get_iqr() {
		return get_Q3() - get_Q1();
	}

	// the lower bound of the data 
	// any value of the data below it is an outlier
	dl get_lb() {
		return get_Q1() - 1.5 * get_iqr();
	}

	//the upper bound of the data
	// any value if the data above it is an outlier
	dl get_ub() {
		return get_Q3() + 1.5 * get_iqr();
	}


	//#of classes = 2 ^ k > size of the sample
	int get_num_classes() {
		return log2(Data.size()) + 1 ;
	}

	//class width is the round up to the range over #of classes
	int get_class_width() {
		return ceil(get_range() / (float)get_num_classes());
	}

	//returns a map to get the freq  string -> is the class range , int -> is the freq;
	map <float, int> get_map_of_freq() {
		map <float, int> freq;

		for (auto q : Data) {
			freq[q]++;
		}
		return freq;
	}

	
	vector <pair <string, int>> get_map_of_class_freq() {
		map <float, int> frequancy = get_map_of_freq();
		vector <pair <string, int>> ans;
		int width = get_class_width();

		float begin = frequancy.begin()->first;
		float end = frequancy.begin()->first + width;

		
		string str = change_to_string(begin, end);
		ans.push_back(make_pair(str, 0));
		if (width == 0)	return ans;

		for (auto q : frequancy) {
			while (q.first >= end) {
				begin += width;
				end += width;

				string str = change_to_string(begin, end);
				ans.push_back(make_pair(str , 0));
			}
		
			ans.back().second += q.second;
		}

		return ans;
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

	private:
		string change_to_string(float x, float y) {
			stringstream ss, ss2;
			ss << fixed << setprecision(2) << x;
			ss2 << fixed << setprecision(2) << y;
			string strBegin = ss.str();
			string strEnd = ss2.str();

			string str = strBegin + " -> " + strEnd;
			return str;
		}

};
