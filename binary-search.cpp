int binary_search(int arr[], int n, int x) {
    int left = 0, right = n - 1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            return mid;
        } 
        else if (arr[mid] > x) {
            right = mid - 1;
        } 
        else if (arr[mid] < x) {
            left = mid + 1;
        }
    }
}
