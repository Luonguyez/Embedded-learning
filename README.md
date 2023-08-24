# Embedded_interview_T8
Knowledge and practice in Embedded of Embedded Interview August .

## PROGRAMMING C

<details>

<summary>C basic</summary>

### Sử dụng thư viện #include <stdint.h>
- Một số kiểu dữ liệu thông dụng:

	| Name | Type | Range | 
  	|:-------:|:--------:|:--------:|
  	|int8|1 byte signed|-128 to 127|
	|uint8_t |1 byte unsgined|0 to 255|
	|int16_t |2 bytes signed|-32768 to 32767|
    |uint16_t|2 byte unsigned|0 to 65535|
    |int32_t |4 byte unsigned|-2147483648 to 2147483647|
    |uint32_t|4 bytes unsigned|0 to 4294967295|
    |int64_t |8 bytes signed|-9223372036854775808 to 9223372036854775807|
    |uint64_t|8 bytes unsigned|0 to 18446744073709551615|



### Sử dụng Typedef
- Typedef được sử dụng để cung cấp kiểu cho một tên mới.

 `typedef unsigned char BYTE;`
- Sau khi gán typedef, `BYTE` có thể được sử dụng như là viết tắt cho `unsigned char`

`BYTE b1, b2;`

#### Ví dụ:
```c
#include <stdio.h>
typedef float typefloat;
int main(){
    typefloat a = 10.3; 
    printf("a=%f\n", a); // a=10.3
    return 0;
}
```
### Sử dụng function
- Dùng để tạo ra các chương trình con, khi sử dụng ta chỉ cần gọi function() vào hàm main();

#### Ví dụ:
```c
#include <stdio.h>
void tich(int a, int b){  //Đây là hàm tich()
    printf("Tich %d va %d la %d",a, b, a*b);
}
int tong(int c, int d){ //Hàm này có kiểu trả về là int
    return c+d;
}
int main(){
    tich(2,3); // tich 2 va 3 la 6
    printf("Tong c va d la %d",tong(4,5)); //Tong c va d la 9
    return 0;
}
```
### Vòng lặp for
- Vòng lặp for là cấu trúc điều khiển lặp được dùng để thực hiện một lệnh hay một khối lệnh với số lần lặp được xác định
```c
    for(khởi tạo giá trị biến lặp; điều kiện lặp; cập nhật biến lặp){
        //Các lệnh cần lặp
    }
```
#### Ví dụ:
```c
#include<stdio.h>

int main(){
    for(int i = 0; i<3; i++){
        printf("%d ", i); // 0 1 2.
    };
    return 0;
}
```
### Lệnh Break
- Lệnh break là điều kiện dùng để thoát lệnh chương trình trong một vòng lặp.
#### Ví dụ:
```c
#include <stdio.h>
int main(){
    uint8_t i = 0;
    for(;;i++)
    {
        if(i>4)break;
        printf("%d ", i); //0 1 2 3 4.
    }
    return 0;
}
```
### Lệnh continue
- Lệnh continue hoạt động giống câu lệnh break. Thay vì buộc kết thúc vòng lặp, nó buộc trở về kiểm tra điều kiện để thực hiện vòng lặp tiếp theo và bỏ qua các lệnh bên trong vòn lặp hiện tại sau lệnh continue.
#### Ví dụ:
```c
#include<stdio.h>

int main(){
    for(int i = 0; i < 5; i++){
        if(i==2) continue;
        printf("%d ", i); // 0 1 3 4
    }
    return 0;
}
```
### Vòng lặp While
- Vòng lặp while được sử dụng để lặp một phần của chương trình một vài lần. Nếu số lần lặp không được xác định trước thì vòng lặp lặp while được khuyến khích sử dụng trong trường hợp này.
#### Ví dụ
```c
#include <stdio.h>
int main(){
    int i = 0;
    while (i<10>){
        printf("i: %d ", i);  // 0 1 2 3 4 5 6 7 8 9
        i++;
    }
    return 0;
}
```
### Vòng lặp Do-While
- Vòng lặp Do-While sẽ chạy chương trình trong do {} trước bất kể điều kiện đúng hay sai. Sau khi chạy chương trình xong sẽ kiểm tra điều kiện while().
#### Ví dụ:
```c
#include <stdio.h>
int main(){
    int i = 0;
    do{
        printf("i = %d ", i); // 0 1 2 3 4
        i++;
    }while(i<5);
}
```
### Mệnh đề If_Else.
- Mệnh đề If-else được sử dụng để kiểm tra một biểu thức điều kiện nào đó có đúng hay không, nếu đúng thì thực thi những câu lệnh bên trong khối lệnh if và ngược lại nếu sai thì nó sẽ bỏ qua những câu lệnh đó.
1. Mệnh đề if
```c
 if (condition) {  
  // khối
   lệnh này được thực thi nếu condition = true
}
```
#### Ví dụ
```c
#include <stdio.h>
int main () {
   int num = 10;
        if (num % 2 == 0) {
            printf("num la so chan."); //num la so chan
        }   
   return 0;
}
```
2. Mệnh đề if-else
```c
if (condition) {  
  // khối lệnh này được thực thi nếu condition = true
} else {
  // khối lệnh này được thực thi nếu condition = false
}
```
#### Ví dụ:
```c
#include <stdio.h>
int main() {
    int num = 11;
    if (num % 2 == 0) {
        printf("num la so chan.");
    } else {
        printf("num la so le.");   //num la so le
    }
    return 0;
}
```
### Enum và Swich-Case
- Switch-Case tương tự if-else và khi sử dụng switch-case cho hiệu năng tốt hơn.
```c
switch (expression)
​{
   case constant1:
     // statements
     break;
   case constant2:
     // statements
     break;
   .
   .
   .
   default:
     // default statements
}
```
- Enum là kiểu dữ liệu cố định, chỉ cho phép biến nhận số số giá trị nhất định nào đó. Các giá trị enum có thể coi là một hằng số. Việc sử dụng enum giúp đảm bảo giá trị các biến chỉ nhận các giá trị mong đợi.
```c
enum enum_name{constant1, constant2, constant3, .......};
```
#### Ví dụ về sự kết hợp giữa enum và switch case.
```c
#include <stdio.h>
typedef enum{
    Thu2,
    Thu3,
    Thu4,
    Thu5,
    Thu6,
    Thu7,
    CN
}Thu;
int main(){
    Thu thu = Thu2;
    switch(thu){
    case Thu2;
        printf("Thu 2\n");
        break;
    case Thu3;
        printf("Thu 3\n");
        break;    
    case Thu4;
        printf("Thu 4\n");
        break;
    case Thu5;
        printf("Thu 5\n");
        break;
    case Thu6;
        printf("Thu 6\n");
        break;
    case Thu7;
        printf("Thu 7\n");
        break; 
    case CN;
        printf("CN\n");
        break;                      
    }
    return 0;
}
```
</details>
<details>

<summary>Pointer</summary>

- là biến dùng để trỏ đến địa chỉ của một biến khác chứa giá trị của biến đó.
- Bộ nhớ RAM chứa rất nhiều ô nhớ, mỗi ô nhớ có kích thước 1 byte.
- Mỗi ô nhớ có địa chỉ duy nhất và địa chỉ này được đánh số từ 0 trở đi. Nếu CPU 32 bit thì có 2^32 địa chỉ có thể đánh cho các ô nhớ trong RAM.

![pointer](https://gochocit.com/wp-content/uploads/2021/09/dia-chi-don-vi-nho-duoc-danh-dia-chi.png)

Khi khai báo biến, trình biên dịch dành riêng một vùng nhớ với địa chỉ duy nhất để lưu biến. Trình biên dịch có nhiệm vụ liên kết địa chỉ ô nhớ đó với tên biến. Khi gọi tên biến, nó sẽ truy xuất tự động đến ô nhớ đã liên kết với tên biến để lấy dữ liệu. 

![pointer](https://khuenguyencreator.com/wp-content/uploads/2021/09/con-tro-pointer.jpg)



### Cú pháp con trỏ.
`Kiểu_dữ_liệu* tên_con_trỏ`
#### Ví dụ:
- `int *ptr; // Con trỏ kiểu số nguyên`
- `float *ptr; // Con trỏ kiểu số thực`
- `void *ptr; // Con trỏ không có kiểu dữ liệu trả về` 
- `int *ptr[]; // Con trỏ kiểu mảng có kiểu số nguyên`
- `void *ptr[]; // Con trỏ kiểu mảng không có kiểu dữ liệu trả về`

### Lưu ý khi sử dụng con trỏ.
#### Kiểu dữ liệu của biến chứa giá trị khi ta tạo một con trỏ thì con trỏ đó cũng phải giống kiểu dữ liệu của biến đó.

#### Ví dụ:
```c
int a = 10; // a là biến có kiểu dữ liệu số nguyên
char b = 'c' // y là biến có kiểu dữ liệu ký tự
int *ptr = &a; // ptr là con trỏ trỏ đến địa chỉ biến a và con trỏ phải là con trỏ kiểu dữ liệu số nguyên nên chương trình đúng.
float *ptrr = &b // ptrr là con trỏ trỏ đến địa chỉ biến b nhưng mà con trỏ có kiểu dữ liệu khác kiểu dữ liệu biến b nên chương trình sai.
```
### Kích thước con trỏ
#### Ví dụ khai báo con trỏ:
```c
char *p1;
int *p2;
float *p3;
double *p4;
```
Kích thước này của các biến con trỏ phụ thuộc vào môi trường hệ thống máy tính:
- Môi trường MS-DOS 16 bit: 2 bytes
- Môi trường Windows 32 bit: 4 bytes
- Môi trường Windows 64 bit: 8 bytes
#### Chương trình xem kích thước con trỏ
```c
#include <stdio.h>

int main() {
	char *p1;
	int *p2;
	float *p3;
	double *p4;
	printf("Size of char type pointer: %lu\n bytes",sizeof(char *));   // 8 bytes
    printf("Size of int type pointer: %lu\n bytes",sizeof(int *));     // 8 bytes
    printf("Size of float type pointer: %lu\n bytes",sizeof(float *)); // 8 bytes
    printf("Size of double type pointer: %lu\n bytes",sizeof(double *));// 8 bytes
	return 0;
}
```
### Con trỏ NULL

Con trỏ NULL là con trỏ có địa chỉ 0x00 đây là con trỏ ứng dụng rất nhiều vào các dự án thực tế vì tính ổn định và dễ kiểm soát chương trình và khi các biến con trỏ mà ta không sử dụng thì nên gán NULL.

#### Ví dụ:
```c
int *ptr; // đây là con trỏ chưa khởi tạo và trỏ đến một địa chỉ bất kì.
int *ptrr = NULL; // đây là con trỏ có giá trị 0x00.
int *ptrrr = null; // là sai, null phải viết hoa 
```
### Pointer to Pointer

Là một con trỏ trỏ đến địa chỉ của một con trỏ khác. Sử dụng rất nhiều vào các bài toán Linker list.
![pointer](https://khuenguyencreator.com/wp-content/uploads/2021/09/con-tro-cap-2-2.jpg)

#### Ví dụ:
```c
 int a = 20;
 int *ptr = &a;
 int **ptp = &ptr;
 printf("Gia tri của a la: %d\n", *ptr); // a = 20
 printf("Dia chi của a la: %d\n", ptr); // Địa chỉ a la: 0061FF18 
 printf("Gia tri cua a la: %d\n", **ptp); // a = 20
 printf("Dia chi cua a la: %d\n", ptp); // Địa chỉ a: 0061FF14
```

### Con trỏ hàm
- Con trỏ hàm dùng để trỏ đến địa chỉ của các hàm.
- Cú pháp: `kiểu trả về(*tên con trỏ)(intput-parameter)`
#### Ví dụ:
```c
#include <stdio.h>
int tong (int a, int b){
    printf("Tong %d va %d la: %d", a, b, a+b);
    return a+b;
}
float tich(float a, float b){
    return a*b;
}
int main(){
    int(*ptr)(int,int); // Con trỏ hàm
    ptr = &tong;
    ptr(2,5); //Tong 2 va 5 la 7
    float(*ptrTich)(float,float) = &tich;
    printf("Tich la: %d\n", ptrTich(3,3)); //Tich la: 9
    return 0;
}
```
### Sử dụng con trỏ hàm như một Input Parameter
```c
#include<stdio.h>
void tong (int a, int b){
    printf("Tong %d va %d la: %d",a ,b, a+b);
}
void tinhtoan(void(*ptrTinhToan)(int,int), int a, int b){
    printf("Tinh toan\n");
    ptrTinhToan(a,b);
}
int main(){
    tinhtoan(&tong, 3, 4); //Tong 3 va 4 la: 7
    return 0;
}
```
### Sử dụng con trỏ hàm trong một mảng
```c
#include<stdio.h>
void tong (int a, int b){
    printf("Tong %d va %d la: %d",a ,b, a+b);
}
void hieu (int a, int b){
    printf("Hieu %d va %d la: %d", a, b, a-b);
}
int main(){
    
    void *ptr[]={&tong, &hieu};
    ((void(*)(int ,int))ptr[0])(2,3); // Tong 2 va 3 la 5
    ((void(*)(int ,int))ptr[1])(5,2); // Hieu 5 va 2 la 3
    return 0;
}
```

</details>

<details>

<summary>Memory partition</summary>

|          Stack          |
| :---------------------: |
|            ↓            |
|            ↑            |
|          Heap           |
| Bss(Uninitialized data) |
| Data(Initialized data)  |
|          Text           |

##### Text:
- Quyền truy cập chỉ Read và nó chưa lệnh để thực thi nên tránh sửa đổi instruction.
- Chứa khai báo hằng số trong chương trình (.rodata)
##### Ví dụ
```c
#include <stdio.h>
const int i = 10;  // Biến i được lưu ở phân vùng text, chỉ đọc và không thể thay đổi giá trị
int main(){
    printf("i = %d\n, i");
    return 0;
}
```
##### Data:
- Quyền truy cập là read-write.
- Chứa biến toàn cục or biến static với giá trị khởi tạo khác không.
- Được giải phóng khi kết thúc chương trình. 
##### Ví dụ
```c
#include <stdio.h>
int a = 10;        // biến toàn cục, giá trị khởi tạo khác 0, được lưu ở phân vùng DATA
static int b = 20; //static toàn cục, được lưu ở phân vùng DATA
void test(){
    static int c = 30; //Static cục bộ(tức là nằm trong hàm), được lưu ở phân vùng DATA
}
int main(){
    printf("%d\n%d", a, b);
    test();
    //Khi thoát chương trình thì các biến này sẽ bị thu hồi lại.
    return 0;
}
```
##### Bss
- Quyền truy cập là read-write.
- Chứa biến toàn cục or biến static với giá trị khởi tạo bằng không or không khởi tạo.
- Được giải phóng khi kết thúc chương trình.
##### Ví dụ
```c
#include <stdio.h>
    int a = 0;    //Khởi tạo bằng 0 -> BSS
    static int b; //Static toàn cục không khởi tạo -> BSS
void test(){
    static int c; //Static cục bộ không khởi tạo -> BSS
}
int main(){
    printf("%d\n%d\n", a, b);
    test();
    return 0;
}
```
##### Stack
- Quyền truy cập là read-write.
- Được sử dụng cấp phát cho biến local, input parameter của hàm,…
- Sẽ được giải phóng khi ra khỏi block code/hàm
##### Ví dụ
```c
#include <stdio.h>
void tong(int a, int b){        //int a, int b: InputParameter. Được lưu ở phân vùng Stack
    int c;                      //int c: Biến cục bộ. Được lưu ở phân vùng stack
    c=a+b;
    printf("Tong a va b: %d\n", a+b);
    printf("dia chi a: %p\n", &a);
    printf("dia chi b: %p\n", &b);
    printf("dia chi c: %p\n", &c);
}
int main(){
    tong(5, 6); // Khởi tạo int a = 5, int b = 6, int c và có các địa chỉ tương ứng
    tong(2, 5); // Thu hồi địa chỉ các biến a,b,c của phép tính tong(5,6) và khởi tạo lại sử dụng lại các địa chỉ đó.
    return 0;
}
```
##### Heap
- Quyền truy cập là read-write.
- Được sử dụng để cấp phát bộ nhớ động như: Malloc, Calloc, …
- Sẽ được giải phóng khi gọi hàm free,…
##### Ví dụ
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    uint16_t *ptr = (uint16_t *)malloc(sizeof(uint16_t)*5); //Cần 5 ô nhớ và uint16_t -> 2 byte/1 ô nhớ. Vậy malloc cần 5x2 = 10 byte.
    for(int i = 0; i < 5; i++){
        ptr[i] = 2*i;
    }
    for(int i = 0; i < 5; i++){
        printf("i = %d\n", ptr[i]);
    }
    ptr =(uint16_t *)realloc(ptr, sizeof(uint16_t)*7); //Thay đổi 5 ô nhớ thành 7 ô nhớ bằng realloc
    for(int i = 0; i < 7; i++){
        ptr[i] = 2*i;
    }
    for(int i = 0; i < 7; i++){
        printf("i = %d\n", ptr[i]);
    }
    free(ptr); //Thu hồi vùng nhớ
    return 0;
}
```
### Sự khác nhau giữa bộ nhớ Heap và bộ nhớ Stack
- Bộ nhớ Heap và bộ nhớ Stack bản chất đều cùng là vùng nhớ được tạo ra và lưu trữ trong RAM khi chương trình được thực thi.
- Bộ nhớ Stack được dùng để lưu trữ các biến cục bộ trong hàm, tham số truyền vào... Truy cập vào bộ nhớ này rất nhanh và được thực thi khi chương trình được biên dịch.
- Vùng nhớ Stack được quản lý bởi hệ điều hành, dữ liệu được lưu trong Stack sẽ tự động hủy khi hàm thực hiện xong công việc của mình.
- Bộ nhớ Heap được dùng để lưu trữ vùng nhớ cho những biến con trỏ được cấp phát động bởi các hàm malloc - calloc - realloc (trong C). 
- Nếu liên tục cấp phát vùng nhớ mà không giải phóng thì sẽ bị lỗi tràn vùng nhớ Heap (Heap overflow).
#### Kích thước vùng nhớ.

- Stack: kích thước của bộ nhớ Stack là cố định, tùy thuộc vào từng hệ điều hành, ví dụ hệ điều hành Windows là 1 MB, hệ điều hành Linux là 8 MB (lưu ý là con số có thể khác tùy thuộc vào kiến trúc hệ điều hành của bạn).
- Heap: kích thước của bộ nhớ Heap là không cố định, có thể tăng giảm do đó đáp ứng được nhu cầu lưu trữ dữ liệu của chương trình.

#### Đặc điểm vùng nhớ.

- Stack: vùng nhớ Stack được quản lý bởi hệ điều hành, dữ liệu được lưu trong Stack sẽ tự động hủy khi hàm thực hiện xong công việc của mình.
- Heap: Vùng nhớ Heap được quản lý bởi lập trình viên (trong C hoặc C++), dữ liệu trong Heap sẽ không bị hủy khi hàm thực hiện xong, điều đó có nghĩa bạn phải tự tay hủy vùng nhớ bằng câu lệnh free (trong C), và delete hoặc delete [] (trong C++), nếu không sẽ xảy ra hiện tượng rò rỉ bộ nhớ. 
- Lưu ý: việc tự động dọn vùng nhớ còn tùy thuộc vào trình biên dịch trung gian.

#### Vấn đề lỗi xảy ra đối với vùng nhớ

- Stack: bởi vì bộ nhớ Stack cố định nên nếu chương trình bạn sử dụng quá nhiều bộ nhớ vượt quá khả năng lưu trữ của Stack chắc chắn sẽ xảy ra tình trạng tràn bộ nhớ Stack (Stack overflow), các trường hợp xảy ra như bạn khởi tạo quá nhiều biến cục bộ, hàm đệ quy vô hạn,...

```c
int foo(int x){
    printf("De quy khong gioi han\n");
    return foo(x);
}
```
- Heap: Nếu bạn liên tục cấp phát vùng nhớ mà không giải phóng thì sẽ bị lỗi tràn vùng nhớ Heap (Heap overflow). Nếu bạn khởi tạo một vùng nhớ quá lớn mà vùng nhớ Heap không thể lưu trữ một lần được sẽ bị lỗi khởi tạo vùng nhớ Heap thất bại.

```c
int *A = (int *)malloc(18446744073709551615);
```
</details>

<details>

<summary>Variable</summary>

- Một biến trong C là tên của vị trí bộ nhớ. Nó được sử dụng để lưu trữ dữ liệu. Giá trị của nó có thể được thay đổi và nó có thể được sử dụng lại nhiều lần. Mỗi biến trong C có một loại dữ liệu cụ thể, xác định kích thước của bộ nhớ của biến; phạm vi các giá trị có thể được lưu trữ trong bộ nhớ đó.Tên của một biến có thể bao gồm các chữ cái, chữ số và ký tự gạch dưới

## Cách khai báo cú pháp sử dụng biến

`kiểu_dữ_liệu tên_biến = giá_trị;`

##### Ví dụ:

- Biến số nguyên : `int a = 10;`
- Biến số thực (dấu chấm động có độ chính xác đơn)   : `float a = 10.3;`
- Biến số thực (dấu chấm động độ chính xác kép): `double a = 1.2345;`
- Biến ký tự     : `char a = 'abc';`
- Biến boolean   : `int True = 1;`
- Biến mảng : `int a[]= {2, 6, 4, 8, 10};`
- Biến con trỏ : `int *ptr = NULL;`

## Cách hoạt động biến Static
### Đối với static cục bộ.
- Được lưu ở phần vùng DATA nếu có khởi tạo giá trị hoặc phân vùng BSS nếu không khởi tạo giá trị và sẽ tồn tại hết vòng đời của chương trình.
- Vẫn giữ nguyên giá trị và không bị thu hồi vùng nhớ.
##### Ví dụ:
```c
#include <stdio.h>
void test(){
    static int a = 1;  //0xc1. 
    printf("a = %d\n", a);
    a++;
}
int main(){
    test();  // 1
    test();  // 2. Vì là static nên sẽ không lấy lại giá trị ban đầu mà sẽ thực hiện lệnh tiếp theo.
}
```
### Đối với static toàn cục
- Static toàn cục chỉ được sử dụng trong file.c chứa nó mà thôi, không thể truy cập sang các file.c khác trong 1 folder.
### Extern
- Trong C, khi 1 biến đi sau từ khóa “extern”  có nghĩa là:
- Nó là tham chiếu của một biến,hàm cùng tên nào đó, đã được định nghĩa bên ngoài. Nó chỉ khai báo chứ không định nghĩa ( cấp phát bộ nhớ cho biến ).
Biến được tham chiếu phải được khai báo ở cấp độ cao nhất (toàn cục), và có thể nằm trong một file
- Cú pháp: extern <kiểu dữ liệu> <Tên Biến>;
##### Ví dụ:
- trong File chứa:
`main.c`
```c
#include <stdio.h>

extern void test(); //extern sử dụng để lấy dữ liệu từ file test.c

extern int a;// Lỗi vì không thể lấy biến a từ test.c do static toàn cục.Nếu trong test.c thay static int a = 1 thành int a = 1 thì chương trình đúng.

int main(){
    test(); // a = 1
    a = 10  // a = 10
    test(); // a = 11
    return 0;
}
```
`test.c`
```c
#include <stdio.h>

static int a = 1; //Static toàn cục -> DATA
//int a=1;
void test(){
    printf("a=%d\n", a); 
    a++;
}
```
### Biến register
- Biến register được sử dụng để tối ưu tốc độ xử lý chương trình, khi khai báo biến này thì nó sẽ thực thi sang bộ xử lý trung tâm ALU, sau khi ALU tính toán xong sẽ trả kết quả về cho Register.
  ![](https://khuenguyencreator.com/wp-content/uploads/2021/09/register-.jpg)
#### Ví dụ:
```c
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double test;
    register int i; // time: 1.256000
    int i;          // time: 7.634000
    start = clock()
    for (i = 0; i < 0xFFFFFFFF; i++);
    end = clock();
    test = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("time: %f\n", test);
    return 0;
}
```
### Biến Volatile
- Biến volatile được sử dụng khi chương trình có sự lặp lại và khi có volatile hệ thống vi điều khiển sẽ không tối ưu phần này.
#### Ví dụ:
```c
#include <stdio.h>
void A(){
}
void B(){
}
int main()
{
    while(1){
        volatile int var = 1; //Không được phép tối ưu.
        A();             
        B();
    }
    return 0;
}
```
Trong lập trình nhúng, chúng ta hay gặp đoạn code khi ta khai báo 1 biến đếm count, mỗi khi bấm nút xảy ra ngắt ngoài, chúng ta tăng biến đếm count. Tuy nhiên, khi chúng ta bật tính năng tối ưu code của compiler, nó sẽ hiểu rằng các biến như vậy dường như không thay đổi giá trị bởi phần mềm nên compiler có xu hướng loại bỏ biến count để có thể tối ưu kích cỡ file code chạy được sinh ra.

### Struct
- Struct là kiểu dữ liệu do người dùng tự định nghĩa. Dữ liệu của các thành viên của struct được lưu trữ ở những vùng nhớ khác nhau. Do đó kích thước của 1 struct tối thiểu bằng kích thước các thành viên cộng lại tại vì còn phụ thuộc vào bộ nhớ đệm (struct padding).
- Đối với kiến trúc 32 bit sẽ quét 4 bytes, 64 bit sẽ quét 8 bytes.
```c
struct structureName 
{
    dataType member1;
    dataType member2;
    ...
};
```
#### Ví dụ:
```c
#include <stdio.h>
typedef struct{
    int x;
    int y;
}toado;
int main(){
    toado M ={10, 12}; // điểm M có tọa độ x là 10 y là 12
    toado M ={.x=10}; // M(10,0)
    toado M ={.y=12}; // M(0,12)
    return 0;
}
```
#### Áp dụng Struct trong quản lý bộ nhớ
```c
#include <stdio.h>
#include <stdint.h>
typedef struct{
    uint16_t x[10]; //4x2+4x2+2x2+ 4byte
    uint8_t  y[5];  //1+ 1x4 + 3byte bộ nhớ đệm
    uint32_t z[8];  //1x4+2x4+2x4+2x4
}use;
int main(){
    printf("size: %lu\n",sizeof(use)); // 60
    return 0;
}
```
### Union
- Union là cũng tương tự struct, là kiểu dữ liệu do người dùng định nghĩa, nhưng có sự khác nhau.Union sẽ lấy dữ liệu các thành viên sẽ dùng chung 1 vùng nhớ. Kích thước của union được tính là kích thước lớn nhất của kiểu dữ liệu trong union. Việc thay đổi nội dung của 1 thành viên sẽ dẫn đến thay đổi nội dung của các thành viên khác.
```c
union structureName 
{
    dataType member1;
    dataType member2;
    ...
};
```
#### Áp dụng Union trong quản lý bộ nhớ
```c
#include <stdio.h>
#include <stdint.h>
typedef union{
    uint8_t var1;        
    uint16_t var2[10];   
    uint64_t var3[20];   
}typeUnion;
int main(){
    printf("size: %lu\n",sizeof(typeUnion)); // size: 160.
    return 0;
}
```
### Kết hợp Struct và Union trong việc truy xuất Data
```c
#include <stdio.h>
#include <stdint.h>

typedef union
{
    struct
    {
        uint8_t ID[2];
        uint8_t Data[3];
        uint8_t checkSum[1];
    }object;
    uint8_t array[6];
}dataFrame;


int main(int argc, char const* argv[])
{

    dataFrame test;

    test.object.ID[0] = 0x01;
    test.object.ID[1] = 0x02;

    test.object.Data[0] = 0x10;
    test.object.Data[1] = 0xA2;
    test.object.Data[2] = 0xB4;

    test.object.checkSum[0] = 0xF2;

    return 0;
}
```
</details>

<details>

<summary>Compiler</summary>

Quy trình dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao (NNBC) (C/C++, Pascal, Java, C#…) sang ngôn ngữ đích (ngôn ngữ máy) để máy tính có thể hiểu và thực thi. Ngôn ngữ lập trình C là một ngôn ngữ dạng biên dịch. Chương trình được viết bằng C muốn chạy được trên máy tính phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:

- Giai đoàn tiền xử lý (Pre-processor)
- Giai đoạn dịch NNBC sang Asembly (Compiler)
- Giai đoạn dịch asembly sang ngôn ngữ máy (Asember)
- Giai đoạn liên kết (Linker)

![Compiler](https://khuenguyencreator.com/wp-content/uploads/2021/09/GCC_CompilationProcess.jpg)

1. Giai đoạn tiền xử lý – Preprocessor
- Nhận mã nguồn
- Xóa bỏ tất cả chú thích, comments của chương trình
- Chỉ thị tiền xử lý (bắt đầu bằng #) cũng được xử lý

Ví dụ: chỉ thị #include cho phép ghép thêm mã chương trình của một tệp tiêu để vào mã nguồn cần dịch. Các hằng số được định nghĩa bằng #define sẽ được thay thế bằng giá trị cụ thể tại mỗi nơi sử dụng trong chương trình.

2. Công đoạn dịch Ngôn Ngữ Bậc Cao sang Assembly.
- Phân tích cú pháp (syntax) của mã nguồn NNBC
- Chuyển chúng sang dạng mã Assembly là một ngôn ngữ bậc thấp (hợp ngữ) gần với tập lệnh của bộ vi xử lý.

3. Công đoạn dịch Assembly.
- Dich chương trình => Sang mã máy 0 và 1
- Một tệp mã máy (.obj) sinh ra trong hệ thống sau đó.

4. Giai đoạn Linker

- Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn (file .c hoặc file thư viện .lib) được liên kết lại với nhau để tạo thành chương trình đích duy nhất
- Mã máy của các hàm thư viện gọi trong chương trình cũng được đưa vào chương trình cuối trong giai đoạn này.
- Chính vì vậy mà các lỗi liên quan đến việc gọi hàm hay sử dụng biến tổng thể mà không tồn tại sẽ bị phát hiện. Kể cả lỗi viết chương trình chính không có hàm main() cũng được phát hiện trong liên kết.
- Kết thúc quá trình tất cả các đối tượng được liên kết lại với nhau thành một chương trình có thể thực thi được (executable hay .exe) thống nhất.


</details>

<details>

<summary>Macro-Inline-Function</summary>

1. Macro 
-  Được xử lý bởi preprocessor
- Thay thế đoạn code được khai báo macro vào bất cứ chỗ nào xuất hiện macro đó
#### Ví dụ:
```c
 #define SUM(a,b) (a+b)
```
- Preprocessor khi gặp bất kỳ lời gọi SUM(first+last) nào thì thay ngay bằng 
(first+last).

2. Inline
- Được xử lý bởi compiler
- Được khai báo với từ khóa inline
- Khi compiler thấy bất kỳ chỗ nào xuất hiện inline function, nó sẽ thay thế chỗ đó 
bởi định nghĩa của hàm đã được compile tương ứng. –> Phần được thay thế không 
phải code mà là đoạn code đã được compile.

3.  Hàm bình thường
- Khi thấy hàm được gọi, compiler sẽ phải lưu con trỏ chương trình PC hiện tại vào 
stack; chuyển PC tới hàm được gọi, thực hiện hàm đó xong và lấy kết quả trả về; 
sau đó quay lại vị trí ban đầu trong stack trước khi gọi hàm và tiếp tục thực hiện 
chương trình.
- Như có thể thấy, các này khiến chương trình tốn thời gian hơn là chỉ cần thay thế 
đoạn code đã được compile (cách của inline function).

4. So sánh
- Macro đơn giản là chỉ thay thế đoạn code macro vào chỗ được gọi trước khi được 
biên dịch
- Inline thay thế đoạn mã code đã được biên dịch vào chỗ được gọi
- Hàm bình thường phải tạo một function call, lưu địa chỉ trước khi gọi hàm vào 
stack sau đó mới thực hiện hàm và sau cùng là quay trở về địa chỉ trên stack trước 
khi gọi hàm và thực hiện tiếp chương trình
- Macro khiến code trở nên dài hơn rất nhiều so với bình thường nhưng thời gian 
chạy nhanh.
- Hàm inline cũng khiến code dài hơn, tuy nhiên nó làm giảm thời gian chạy chương 
trình
- Hàm bình thường sẽ phải gọi function call nên tốn thời gian hơn inline function 
nhưng code ngắn gọn hơn.

</details>

<details>
 <summary>BitWise Operation </summary>

 ![Bitwise Operation](https://making.vn/assets/files/2020-08-09/1596979116-624034-image.png)

- AND (Biểu thức AND): Ký hiệu: `&`.

  ```c
  unsigned int a = 5;  // 0101
  unsigned int b = 3;  // 0011
  unsigned int result = a & b;  // 0001
  ```
- OR (Biểu thức OR): Ký hiệu: `|`.
 
  ```c
  unsigned int a = 5;  // 0101
  unsigned int b = 3;  // 0011
  unsigned int result = a | b;  // 0111
  ```
- XOR (Biểu thức XOR): Ký hiệu: `^`.
 
  ```c
  unsigned int a = 5;  // 0101
  unsigned int b = 3;  // 0011
  unsigned int result = a ^ b;  // 0110
  ```
- NOT (Biểu thức NOT): Ký hiệu: `~`, thực hiện phép NOT bit, đảo ngược tất cả các bit của số.

  ```c
  unsigned int a = 5;  // 0101
  unsigned int result = ~a;  // 1010 (đảo ngược các bit)
  ```
- Left Shift (Dịch trái): Ký hiệu: `<<`.
  ```c
  unsigned int a = 5;  // 0101
  unsigned int result = a << 2;  // 010100 (dịch trái 2 vị trí)
  ```
- Right Shift (Dịch phải): Ký hiệu: `>>`.
  ```c
  unsigned int a = 5;  // 0101
  unsigned int result = a >> 2;  // 0001 (dịch phải 2 vị trí)
  ```
- Left Shift và Assign (Dịch trái và gán): Ký hiệu: `<<=`, dịch trái các bit của số `a` đi `b` vị trí và gán lại giá trị cho `a`.
  `a <<= b;`
- Right Shift và Assign (Dịch phải và gán): Ký hiệu: `>>=`, dịch phải các bit của số `a` đi `b` vị trí và gán lại giá trị cho `a`.
  `a >>= b;`
- Bitwise AND và Assign (AND bit và gán): Ký hiệu: `&=`, thực hiện phép AND bit trên từng cặp bit của hai số và gán lại giá trị cho `a`.
  `a &= b;`
- Bitwise OR và Assign (OR bit và gán): Ký hiệu: `|=`, thực hiện phép OR bit trên từng cặp bit của hai số và gán lại giá trị cho `a`.
  `a |= b;`
- Bitwise XOR và Assign (XOR bit và gán): Ký hiệu: `^=`, thực hiện phép XOR bit trên từng cặp bit của hai số và gán lại giá trị cho `a`.
`a ^= b;`

</details>


## PROGRAMMING OOP in C++ 

<details>

<summary>Class and Object</summary>
