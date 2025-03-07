# 📌 Dynamic Array Implementation (clsDynamicArray)⚡

> **A C++ template-based dynamic array implementation with powerful functionalities for managing elements efficiently. 🚀**

---

## 🌟 Project Overview

The `clsDynamicArray` class is a **generic dynamic array** implementation in C++ that supports **resizing**, **modifications**, and **element manipulations**. It provides a flexible way to manage collections of data with dynamic memory allocation, ensuring optimal performance and usability.

### 🔹 Core Functionalities:
- **Insert** elements at any position ➕
- **Delete** elements efficiently ❌
- **Resize** dynamically to manage memory ♻️
- **Reverse** the entire array order 🔄
- **Find & Modify** elements easily 🔍
- **Clear** the array in one call ✨

This implementation leverages **C++ templates**, making it compatible with any data type.

---

## ✨ Features

### 🔹 Basic Operations
- **`SetItem(Index, Value)`**: Updates the element at a specific index.
- **`GetItem(Index)`**: Retrieves the element at a given index.
- **`Size()`**: Returns the total number of elements in the array.
- **`IsEmpty()`**: Checks if the array is empty.
- **`PrintList()`**: Displays all elements in the array.

### 🔹 Advanced Functionalities
- **`Resize(New_Size)`**: Adjusts the size of the array dynamically.
- **`Reverse()`**: Reverses the order of elements.
- **`Clear()`**: Removes all elements and frees memory.
- **`Find(Value)`**: Returns the index of the first occurrence of a value (-1 if not found).
- **`DeleteItem(Value)`**: Deletes the first occurrence of a given value.
- **`DeleteItemAt(Index)`**: Deletes the element at a specific index.
- **`DeleteFirstItem()`**: Removes the first element.
- **`DeleteLastItem()`**: Removes the last element.
- **`InsertAt(Index, Value)`**: Inserts an element at a specified position.
- **`InsertAtBeginning(Value)`**: Inserts an element at the start.
- **`InsertAtEnd(Value)`**: Inserts an element at the end.
- **`InsertBefore(Index, Value)`**: Inserts an element before a given index.
- **`InsertAfter(Index, Value)`**: Inserts an element after a given index.

---

## 🚀 How It Works

### 🔹 Insertion & Deletion
- Use `InsertAt(Index, Value)` to place an element at a specific position.
- `DeleteItemAt(Index)` removes an element from a given index.
- `DeleteFirstItem()` and `DeleteLastItem()` handle edge cases.

### 🔹 Resizing & Memory Management
- `Resize(New_Size)` adjusts the capacity dynamically, ensuring optimal usage.
- `Clear()` safely deletes all elements to prevent memory leaks.

### 🔹 Searching & Modifications
- `Find(Value)` locates elements efficiently.
- `SetItem(Index, Value)` allows modifying elements dynamically.

---

## 📚 Potential Enhancements

- 🏢 **Iterator Support**: Enabling STL-like traversal.
- ⌛ **Performance Optimization**: Enhancing efficiency for large datasets.
- 💾 **Persistent Storage**: Implementing file-based data storage.
- ⚙ **Thread Safety**: Supporting concurrent operations.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Supports multiple data types.
- **Dynamic Memory Allocation**: Utilizes heap memory efficiently.

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Dynamic memory management with pointers**
- ✅ **Efficient array operations (insert, delete, find, modify)**
- ✅ **Generic programming using C++ templates**

---

## 🌟 License

This project is **open-source**. Feel free to modify and enhance it! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements, submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository.
2. **Include** `clsDynamicArray.h` in your project.
3. **Compile & Run** your C++ program with a standard compiler (e.g., `g++ main.cpp -o output`).
4. **Test** various array operations.

