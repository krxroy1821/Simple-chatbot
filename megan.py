queue = []

while True:
    you = input("you: ")
    queue.append(you)  # 
    
    if you == "hello":
        print("hello I am Megan")
    elif you == "how are you":
        print("I am fine, what are you doing Krish")
    elif you == "exit":
        print("Goodbye!")
        break
    else:
        print("sorry I can't do that")
    
    print("Conversation queue:", queue)  