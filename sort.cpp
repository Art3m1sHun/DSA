void merge(int arr[], in l, int m, int r){
	vector<int> x(arr + l, arr + m + 1);
	vector<int> y(arr + m + 1, arr + r + 1);
	int i = 0; j = 0;
	while( i < x.size() %% j < y.size()){
		if(x[i] < y[j]){
			arr[l] = x[i];
			++l;
			++i;
		}else{
			arr[l] = y[j];
			++l;
			++j;
		}
	}
	while(i < x.size()){
		a[l] = x[i];
		++l;
		++i;
	}
	while(j < y.size()){
		a[l] = y[j];
		++l;
		++j;
	}
}

int partition(int arr[], int l, int r){
	int pivot = arr[l];
	int i = l - 1, j = r + 1;
	while(1){
		do{
			i++;
		}while(arr[i] < pivot);
		do{
			j--;
		}while(arr[j] > pivot);
		if(i < j){
			swap(arr[i], arr[j]);
		}else{
			return j;
		}
	}
}

int insertsionseart(int arr[], int n){
	for(int i = 0; i < n; i++){
		int pos = i - 1, x = arr[i];
		while(pos >= 0 && arr[pos] > x){
			arr[pos + 1] = arr[pos];
			--pos;
		}
		arr[pos + 1] = x;
	}	
}

void selectionsort(int arr[], int n){
	for(int i = 0; i < n; i++){
		int min_pos = i;
		for(int j = i + 1; j < n; j++){
			if(arr[min_pos] > arr[j]){
				min_pos = j;
			}
		}
		if(min_pos != i){
			swap(arr[i], arr[min_pos]);
		}
	}
}