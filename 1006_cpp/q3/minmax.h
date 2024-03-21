void getMinMax(int* arr, int len, int& min, int& max){
    for (int i=0; i<len; i++){
        if (arr[i]<min) min=arr[i];
        if (arr[i]>max) max=arr[i];
    }
}