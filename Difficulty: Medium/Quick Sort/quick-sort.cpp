class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low < high){
            int pt = partition(arr, low, high);

            quickSort(arr, low, pt - 1);
            quickSort(arr, pt + 1, high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int pivot = arr[low];
        int i = low+1;
        int j = high;
        
        while(true){
            while(i <= j && arr[i] <= pivot) i++;
            while(arr[j] > pivot) j--;

            if(i >=j) break;
            swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }
};