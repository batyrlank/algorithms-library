// Найти максимальный элемент, при котором выполняется a[i] <= x

int find_lower(vector<int> &a, int x){ // max i : a[i] <= x
	int l = -1; // a[l] <= x
	int r = (int)a.size(); // a[r] > x
	while(r > l + 1){
		int m = (l + r) / 2;
		if(a[m] <= x){
			l = m;
		}
		else{
			r = m;
		}
	}
	return l;
}
