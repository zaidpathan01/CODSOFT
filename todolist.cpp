#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
string description;
bool completed;
};
vector<Task> taskList;
void addTask();
void viewTasks();
void markTaskCompleted();
void removeTask();
int main() {
int choice;
do {
cout << "\nTo-Do List Manager\n1. Add Task\n2. View Tasks\n3.Mark Task as Completed\n4. Remove Task\n5. Exit\nEnter your choice:";
cin >> choice;
switch (choice) {
case 1: addTask(); break;
case 2: viewTasks(); break;
case 3: markTaskCompleted(); break;
case 4: removeTask(); break;
case 5: cout << "Exiting..." << endl; break;
default: cout << "Invalid choice" << endl;
}
} while (choice != 5);
return 0;
}
void addTask() {
Task newTask;
cout << "Enter task description: ";
getline(cin >> ws, newTask.description);
newTask.completed = false;
taskList.push_back(newTask);
cout << "Task added successfully!" << endl;
}
void viewTasks() {
if (taskList.empty()) {
cout << "No tasks in the list" << endl;
} else {
cout << "Tasks:" << endl;
for (size_t i = 0; i < taskList.size(); i++) {
cout << i + 1 << ". " << taskList[i].description <<
(taskList[i].completed ? " (Completed)" : " (Pending)") << endl;
}
}
}
void markTaskCompleted() {
int taskIndex;
cout << "Enter task number to mark as completed: ";
cin >> taskIndex;
if (taskIndex > 0 && taskIndex <= taskList.size()) {
taskList[taskIndex - 1].completed = true;
cout << "Task marked completed!" << endl;
} else {
cout << "Invalid task number" << endl;
}
}
void removeTask() {
int taskIndex;
cout << "Enter task number to remove: ";
cin >> taskIndex;
if (taskIndex > 0 && taskIndex <= taskList.size()) {
taskList.erase(taskList.begin() + taskIndex - 1);
cout << "Task removed successfully!" << endl;
} else {
cout << "Invalid task number" << endl;
}
}
