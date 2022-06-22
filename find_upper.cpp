//  выведите минимальный индекс элемента массива, не меньшего данного

int find_upper(vector<int> &a, int x){ // min i : a[i] >= x
	int l = -1; // a[l] < x
	int r = (int)a.size(); // a[r] >= x
	while(r > l + 1){
		int m = (l + r) / 2;
		if(a[m] <=x){
			l = m;
		}
		else{
			r = m;
		}
	}
	return r;
}
