# TranGiaKiet-24110103

Repo này chứa các bài tập thực hành về **Lập trình Hướng Đối Tượng (OOP) bằng C++**.  
Mỗi bài được cài đặt trong một file `.cpp` riêng biệt.

---
Phần bài viết này có sự hỗ trợ chủa **ChatGPT** để có thể viết Readme và tạo Github này.
Cũng như là giúp tôi làm mở rộng các exercise của mình.

Qua 10 bài tập, mình rút ra được:
Điều đã làm tốt
Biết cách xây dựng class với đầy đủ thuộc tính và phương thức.
Áp dụng đúng private, getter/setter, constructor.
Một số bài đã thêm tính năng mở rộng (ví dụ: Account có kiểm tra số dư tối thiểu, Car có nhiều thuộc tính).
Code có comment chi tiết, dễ đọc, dễ hiểu.

Điều còn hạn chế
Chưa áp dụng kế thừa (inheritance) và đa hình (polymorphism).
Các test case trong main() còn khá đơn giản, chưa có kiểm thử tự động
Một số class còn cơ bản (vd: Circle, Person).

Bài học rút ra
Nắm vững cách thiết kế class trong C++.
Hiểu vai trò của encapsulation và constructor trong OOP
Biết cách tổ chức nhiều file, mỗi file thể hiện một bài toán cụ thể.

Hướng phát triển tiếp th
Bổ sung inheritance (ví dụ: Student kế thừa từ Person, Employee kế thừa từ Person).
Áp dụng polymorphism trong các class có hành vi chung.
Thêm unit test thay vì chỉ cout.
Xây dựng một project lớn hơn, tích hợp nhiều class vào cùng một chương trình. 

# Mô tả ngắn 
Đây là repository chứa các giải pháp các bài tập theo yêu cầu môn học. Mỗi bài nằm trong một file riêng như `Car.cpp`, `Student.cpp`, v.v.

## 📂 Danh sách bài tập
- **Car.cpp** – lớp `Car` với thuộc tính hãng xe, mẫu xe, năm sản xuất; phương thức hiển thị thông tin.  
- **Student.cpp** – lớp `Student` với tên, mã số, điểm trung bình; phương thức in chi tiết.  
- **Book.cpp** – lớp `Book` với tên sách, tác giả, giá; phương thức hiển thị thông tin.  
- **Employee.cpp** – lớp `Employee` với mã nhân viên, lương, phòng ban; hàm tính thưởng.  
- **Rectangle.cpp** – lớp `Rectangle` với chiều dài, chiều rộng; phương thức tính diện tích và chu vi.  
- **Circle.cpp** – lớp `Circle` với bán kính; phương thức tính diện tích và chu vi.  
- **Account.cpp** – lớp `Account` với số dư, nạp tiền, rút tiền, và lịch sử giao dịch.  
- **Laptop.cpp** – lớp `Laptop` với thương hiệu, CPU, RAM; phương thức hiển thị cấu hình.  
- **Course.cpp** – lớp `Course` với tên học phần, số tín chỉ, danh sách sinh viên; phương thức hiển thị thông tin.  
- **Person.cpp** – lớp `Person` với tên, tuổi, giới tính; phương thức in thông tin.  

---

## ⚙️ Cách biên dịch và chạy chương trình

Mỗi file có thể biên dịch riêng biệt bằng `g++`. Ví dụ:

```bash
# Biên dịch và chạy Person.cpp
g++ Person.cpp -o Person
./Person

# Biên dịch và chạy Car.cpp
g++ Car.cpp -o Car
./Car

