# a code to create adventyt fame using python
# Room based
print("Welcome to game ")
print("Rooms are:\n ")
print("[1][2][3] ")
print("[4][5][6] ")
print("[7][8][9] ")

ch = 0
room = int(input("Enter your room\n"))

while(ch != 5):
    print("Enter choice\n1.Up\n2.Down\n3.Left\n4.Right\n5.Exit")
    ch = int(input())

    if(ch == 1):
        room = room-3
        print("YOu are in room", room)
    elif (ch == 2):
        room = room+3
        print("Your are in room", room)
    elif (ch == 3):
        room = room-1
        print("Your are in room", room)
    elif (ch == 4):
        room = room+1
        print("Your are in room", room)
