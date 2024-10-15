# Advance-C
## BÀI 1 COMPILER
### Compiler
1.Compiler là một phần mềm nhận vào mã nguồn (source code) của một chương trình, thường viết bằng ngôn ngữ lập trình cấp cao (như C), và dịch nó thành mã máy hoặc bytecode mà máy tính hoặc máy ảo có thể thực thi
Tạo file.i
gcc -E main.c -o main.i
Quá trình tạo ra file.i gọi là tiền xử lý và nó thực hiện 4 công việc:
•	Copy toàn bộ những cái source của những file thêm vào
•	Xóa bỏ những comand
•	Thay thế vào những định nghĩa sử dụng define
•	Giữ nguyên những biến và hàm
2. Macro
a. Loại 1: 
Include: chỉ thị bào hàm tệp
Có 2 loại: 
•	Include<...>: được sử dụng cho thư viện được C++ viết sẵn.
•	Include”...”: tìm kiếm trong thư mục hiện tại file nào là file cần tìm sau đó nó sẽ copy toàn bộ source code. 
b. Loại 2
define: chỉ thị định nghĩa cho phép thay thế một chuỗi mã nguồn thành một chuỗi khác tránh được nhiều mã nguồn giống nhau giúp fix lỗi dễ hơn.
Ex:
•	#define merge(x, y)   x ## y
                 ## : dùng để nối hay chuỗi
•	#define CREATE_STRING(cmd)   printf(#end)
#: dùng để chuẩn hóa 1 đoạn văn bản lên thành chuỗi
### Variadic






## BÀI 1 Pointer
### Pointer
Là 1 biến chứa địa chỉ của 1 biến khác hay 1 hàm. Kích thước của con trỏ phụ thuộc vào kiến trúc máy tính và trình biên dịch. 
### Void Pointer
TThường dùng để trỏ để tới bất kỳ địa chỉ nào mà không cần biết tới kiểu dữ liệu của giá trị tại địa chỉ đó.
### Funtion Pointer
Biến giữ địa chỉ của hàm 
### Pointer to constant
Là cách định nghĩa một con trỏ không thể thay đổi giá trị tại địa chỉ mà nó trỏ đến thông qua dereference nhưng giá trị tại địa chỉ đó có thể thay đổi. Tại đại chỉ con trỏ hằng trỏ đến chỉ có thể đọc được giá trị không thể thay đổi Có thể trỏ đến nhều địa chỉ khác nhau
### Constant pointer
Định nghĩa một con trỏ mà giá trị nó trỏ đến (địa chỉ ) không thể thay đổi. Tức là khi con trỏ này được khởi tạo thì nó sẽ không thể trỏ tới địa chỉ khác.
### Pointer to pointer
Cho phép bạn lưu trữ địa chỉ của một con trỏ. Con trỏ đến con trỏ cung cấp một cấp bậc trỏ mới, cho phép bạn thay đổi giá trị của con trỏ gốc.
## BÀI 2: GOTO - SETJMP.H
### goto
 Là một lệnh điều khiển cho phép chuyển trực tiếp đến một nhãn (label) cụ thể trong chương trình. 
 Cú pháp của goto:
 goto label;
 ...
 label:
    // Code to execute
 ### setjmp.h   
 Thư viện setjmp.h cung cấp hai hàm: setjmp() và longjmp(), được sử dụng để quản lý luồng chương trình trong trường hợp ngoại lệ (exception handling).
 setjmp(jmp_buf env): Lưu trữ trạng thái của chương trình (bao gồm con trỏ ngăn xếp và các thanh ghi) tại vị trí gọi setjmp() và trả về giá trị 0 khi gọi 
 lần đầu.
 longjmp(jmp_buf, int val): Chuyển chương trình trở về điểm đã gọi setjmp() trước đó và setjmp() sẽ trả về giá trị val (khác 0).
 Cấu trúc của setjmp() và longjmp():
 jmp_buf: Là một kiểu dữ liệu đặc biệt để lưu trạng thái của chương trình.
 val: Giá trị mà setjmp() trả về sau khi longjmp() được gọi.

## BÀI 3: EXTERN - STATIC - VOLATILE - REGISTER
### 1.Extern
•	Được sử dụng để tránh việc tốn bộ nhớ khi gọi nhiều file. Giúp biến hoặc hàm được định nghĩa và sử dụng ở vị trí khác.
•	Muốn khai báo extern thì các biến, hàm phải ở toàn cuc.
•	Giúp cho các file trong cùng thư mục có thể chia sẽ các biến, các hàm cho lẫn nhau.
•	Không sử dụng include phải liên kết file
### 2.Static
#### a. Biến Local Static
Khái niệm: Biến được khai báo với từ khóa static bên trong một hàm.
Phạm vi: Phạm vi chỉ trong hàm mà nó được khai báo.
Thời gian sống: Biến có thời gian sống suốt chương trình, tức là nó giữ giá trị giữa các lần gọi hàm.
#### b. Biến Global Static
Khái niệm: Biến được khai báo với từ khóa static bên ngoài mọi hàm (global).
Phạm vi: Phạm vi chỉ trong file nơi nó được khai báo. Không thể truy cập từ file khác.
Thời gian sống: Suốt chương trình.
#### c. Hàm Static
Khái niệm: Hàm được khai báo với từ khóa static.
Phạm vi: Chỉ có thể được gọi từ file nơi nó được khai báo. Không thể gọi từ file khác.
Thời gian sống: Suốt chương trình, nhưng phạm vi chỉ trong file.
#### d. Tính chất của static
Giữ giá trị: Biến static giữ giá trị giữa các lần gọi hàm.
Ẩn dấu: Biến và hàm static không thể được truy cập từ file khác, giúp giảm khả năng xung đột tên.
Tối ưu hóa: Sử dụng static giúp tối ưu hóa bộ nhớ, nhất là trong trường hợp biến không cần thiết phải có phạm vi toàn cục.
#### e. Ứng dụng của static
Đếm số lần gọi hàm: Biến static local có thể được sử dụng để đếm số lần gọi hàm.
Quản lý trạng thái: Giữ trạng thái trong các hàm mà không cần sử dụng biến toàn cục.
Tổ chức mã: Giúp tổ chức mã nguồn tốt hơn bằng cách hạn chế phạm vi của biến và hàm.
#### f. Lưu ý
Không khởi tạo lại: Biến static chỉ được khởi tạo một lần, lần đầu tiên nó được sử dụng.
Tính rõ ràng: Sử dụng static có thể làm cho mã nguồn khó hiểu hơn nếu không được sử dụng đúng cách.
### 3.Volatile
#### a. Khái Niệm
Từ khóa volatile được sử dụng để chỉ ra rằng giá trị của biến có thể thay đổi mà không có sự can thiệp từ chương trình hiện tại, ví dụ như từ phần cứng hoặc các luồng khác.
#### b. Khi nào sử dụng
Biến có thể bị thay đổi bởi:
Phần cứng: Các biến lưu trữ trạng thái của thiết bị ngoại vi.
Các luồng khác: Khi nhiều luồng hoặc quá trình cùng truy cập vào một biến.
Hệ điều hành: Trong các trình điều khiển hoặc mã nhúng, biến có thể thay đổi bởi các interrupt.
### 4.Register
#### a. Khái Niệm
Từ khóa register được sử dụng để chỉ ra rằng biến nên được lưu trữ trong thanh ghi CPU thay vì bộ nhớ chính. Điều này giúp tăng tốc độ truy cập và hiệu suất của chương trình.
#### b. Lưu ý khi sử dụng
Số lượng hạn chế: Không phải tất cả các biến đều có thể được lưu trữ trong thanh ghi, vì số lượng thanh ghi trên CPU là có hạn.
Không thể tham chiếu địa chỉ: Bạn không thể lấy địa chỉ của một biến được khai báo với từ khóa register.

## BÀI 4: STRUCT - UNION
### Struct
#### a. Khái niệm
struct (viết tắt của "structure") là một kiểu dữ liệu dùng để gom nhóm các biến (có thể có các kiểu dữ liệu khác nhau) thành một thực thể duy nhất. Mỗi biến trong cấu trúc được gọi là thành viên (member) của cấu trúc.
#### b. Cú pháp
struct <name> {
    <data_type> <member_name1>;
    <data_type> <member_name2>;
    // Các thành viên khác
};
#### c. Tính chất của struct
Độc lập giữa các thành viên: Mỗi thành viên trong struct đều có vùng nhớ riêng và có thể chứa các giá trị khác nhau cùng lúc.
Kích thước: Kích thước của struct bằng tổng kích thước của tất cả các member cộng thêm padding mà trình biên dịch có thể thêm vào.
#### d. Ứng dụng của struct
•	json
•	linked list
### union 
#### a. Khái niệm
union tương tự như struct, nhưng có một điểm khác biệt quan trọng: tất cả các thành viên của union chia sẻ cùng một vùng nhớ. Điều này có nghĩa là tại một thời điểm, chỉ có thể lưu trữ một thành viên trong union.
#### b. Cú pháp
union <name> {
    <data_type> <member_name1>;
    <data_type> <member_name2>;
    // Các thành viên khác
};
#### d. Tính chất của union
Chia sẻ bộ nhớ: Kích thước của union bằng kích thước của thành viên lớn nhất + padding.
Truy cập độc lập: Tại một thời điểm, chỉ một thành viên có thể lưu trữ giá trị có ý nghĩa. Nếu bạn gán giá trị cho thành viên khác, giá trị của thành viên trước sẽ bị ghi đè.
#### e. Ứng dụng của union
union thường được sử dụng trong các hệ thống nhúng hoặc các tình huống mà bạn cần tiết kiệm bộ nhớ và chỉ cần lưu trữ một loại dữ liệu tại một thời điểm.

## BÀI 5: Memory Layout
Chương trình main.exe ( trên window), main.hex ( nạp vào vi điều khiển) được lưu ở bộ nhớ SSD hoặc FLASH. Khi nhấn run chương trình trên window ( cấp nguồn cho vi điều khiển) thì những chương trình này sẽ được copy vào bộ nhớ RAM để thực thi.
Thứ tự sắp xếp:
Text Segment (chứa code).
Data Segment (chứa biến toàn cục đã khởi tạo và chưa khởi tạo).
Bss 
Heap (dành cho cấp phát động).
Stack (dành cho biến cục bộ và khung hàm).

### a. Text Segment (Code Segment)
•	Chứa mã lệnh của chương trình (machine code).
•	Đây là nơi chứa tất cả các hàm và mã chương trình thực thi được.
•	Quyền truy cập: Text Segment thường có quyền đọc và thực thi, nhưng không có quyền ghi.
•	Lưu hằng số, con trỏ kiểu char
•	Tất cả các biến lưu ở phần vùng Text đều không thể thay đổi giá trị mà chỉ được đọc.

### b.	Initialized Data Segment: 
•	Chứa các biến toàn cục hoặc biến tĩnh (global/static) đã được khởi tạo.
•	Quyền truy cập là đọc và ghi
•	Tất cả các biến sẽ được thu hồi sau khi chương trình kết thúc

### c.	Uninitialized Data Segment (BSS Segment):
•	Chứa các biến toàn cục hoặc biến tĩnh nhưng chưa được khởi tạo, còn gọi là BSS (Block Started by Symbol). Khi chương trình chạy, những biến này sẽ được khởi tạo bằng 0.
•	Quyền truy cập là đọc và ghi, tức là có thể đọc và thay đổi giá trị của biến .
•	Tất cả các biến sẽ được thu hồi sau khi chương trình kết thúc.

### d. Heap
•	Dùng để lưu trữ các đối tượng hoặc biến được cấp phát động (dynamic allocation) trong thời gian chạy, ví dụ như malloc(),...
•	Heap được sử dụng để cấp phát bộ nhớ động trong quá trình thực thi của chương trình.
•	Các hàm như malloc(), calloc(), realloc(), và free() được sử dụng để cấp phát và giải phóng bộ nhớ trên heap.
### e. Stack
•	Lưu các biếncục bộ (local variables) và các tham số của hàm ngoại trừ static cục bộ.
•	Stack phát triển từ trên xuống dưới (từ địa chỉ cao đến địa chỉ thấp).
•	Kích thước stack thường bị giới hạn và có thể dẫn đến lỗi "stack overflow" nếu vượt quá giới hạn.
•	Quyền truy cập là đọc và ghi, tức là có thể đọc và thay đổi giá trị của biến .
•	Tất cả các biến sẽ được thu hồi sau khi chương trình kết thúc.

## BÀI 6: STACK-QUEUE
### stack
	Tuân thủ theo nguyên tắc LIFO “last in, first out”
 3 thao tac chính:
•	Push: tạo 1 phần tử vào đỉnh của stack
•	Pop: để xóa 1 phần tử ở đỉnh stack
•	Top: để lấy giá trị phần tử ở đỉnh stack
           push -> top++
           pop -> top—
           maxtop = size – 1
	Cách nhận biết stack đầy: => top = size – 1
	Cách nhận biết stack rỗng: => top = -1
	Tạo stack gồm 3 phần: *items; size; top
	Địa chỉ của staack cũng là địa chỉ của phần tử đầu tiên được đưa vào

 ### queue
 Tuân thủ theo nguyên tắc FIFO: First in, First out ( thêm vào cuối và xóa ở đầu)
 Khi khởi tạo queue cần lưu ý: 
     front = -1
     rear = -1
  exqueue: rear tăng dần
  dequeue: front tăng dần
  max_front = max_rear = size - 1 
 2 loại vòng đời:
•	Linear queue: chỉ khi front = rear thì mới có thể thêm phần tử vào
•	Cỉcular: đưa rear từ phần tử cuối đến ô trống

## BÀI 7: JSON
Json: 
•	phổ biến trong việc giao tiếp của máy chủ và trình duyệt
•	Được dùng cho các kiểu dữ liệu phức tạp
Json gồm các key value
•	Key: phải là chuỗi -> string
•	Value: bất kì là kiểu dữ liệu nào
•	Ngăn cách giữa key và value lầ dấu ;
•	Ngăn cách giữa các key value là dấu ,
Khi làm việc với Array cần quan tâm:
•	Kiểu dữ liệu
•	Count: đếm số lượng phần tử trong mảng
Khi làm việc với object:
•	Key: khai báo kiểu char** key
•	value: struct JSON value *value
•	bao nhiêu cặp key value trong object: size_count
“\”str1\”, \”str2\””;  => khai báo chuối trong chuỗi
Để lưu được key value cần cấp phát vùng nhớ.

## BÀI 8: LINKED LIST
•	Là một chuỗi gồm các nút (node)
•	Danh sách liên kết đơn (Singly Linked List): Mỗi phần tử chứa một con trỏ đến phần tử tiếp theo.
   Mỗi phần tử trong danh sách liên kết có hai phần:
•	Dữ liệu: Phần lưu trữ giá trị của phần tử.(data)
•	Con trỏ: Phần lưu trữ địa chỉ của phần tử tiếp theo (hoặc phần tử trước trong danh sách liên kết đôi).(*next)
   Danh sách liên kết không có hàm kiểm tra list có đầy hay không vì phần tử có thể được đưa vào liên tục.
