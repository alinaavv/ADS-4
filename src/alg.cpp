// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
    }
  Ъ
return count;
}
int countPairs2(int *arr, int len, int value) {
  int count = 0;
  int left = 0;
  int right = len - 1;
  while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == value) {
      count++;
      left++;
      right--;
  } else if (sum < value) {
    left++;
  } else {
    right--;
  }
}
return count;
}
int countPairs3(int *arr, int len, int value) {
  int count = 0;
for (int i = 0; i < len; i++) {
int j = binaryS(arr, i + 1, len - 1, value - arr[i]);
if (j != -1) {
count++;
}
}
return count;
}
int binaryS(int *arr, int left, int right, int key) {
  while (left <= right) {
  int mid = left + (right - left) / 2;
    if (arr[mid] == key) 
      return mid;
    else if (arr[mid] < key) 
      left = mid + 1;
    else 
      right = mid - 1;
  }
return -1;
}
