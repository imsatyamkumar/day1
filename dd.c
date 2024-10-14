class Stack:
    def _init_(self, size=10):
        self.size = size
        self.stack = []
    
    def push(self, value):
        if len(self.stack) == self.size:
            print("\nStack is Full!!! Insertion is not possible!!!")
        else:
            self.stack.append(value)
            print("\nInsertion success!!!")
    
    def pop(self):
        if not self.stack:
            print("\nStack is Empty!!! Deletion is not possible!!!")
        else:
            removed_value = self.stack.pop()
            print(f"\nDeleted : {removed_value}")
    
    def display(self):
        if not self.stack:
            print("\nStack is Empty!!!")
        else:
            print("\nStack elements are:")
            for value in reversed(self.stack):
                print(value)

def main():
    stack = Stack()
    while True:
        print("\n\n*** MENU ***")
        print("1. Push")
        print("2. Pop")
        print("3. Display")
        print("4. Exit")
        choice = int(input("Enter your choice: "))
        
        if choice == 1:
            value = int(input("Enter the value to be inserted: "))
            stack.push(value)
        elif choice == 2:
            stack.pop()
        elif choice == 3:
            stack.display()
        elif choice == 4:
            break
        else:
            print("\nWrong selection!!! Try again!!!")

if _name_ == "_main_":
    main()