#include <stdio.h>

// Hàm tìm số lớn nhất trong mảng
int timMax(int arr[], int n) {
    int max = arr[0];  // Giả sử phần tử đầu tiên là lớn nhất

    // Duyệt mảng và tìm số lớn nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Cập nhật giá trị max nếu tìm thấy phần tử lớn hơn
        }
    }

    return max;
}

int main() {
    int n;

    // Nhập số lượng phần tử trong mảng
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử vào mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tìm số lớn nhất và in kết quả
    int max = timMax(arr, n);
    printf("Số lớn nhất trong mảng là: %d\n", max);

    return 0;
}