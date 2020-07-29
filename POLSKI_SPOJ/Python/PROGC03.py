import sys

Stack = [[0], [1], [2], [3], [4], [5], [6], [7], [8], [9]]
Queue = [[0], [1], [2], [3], [4], [5], [6], [7], [8], [9]]

for line in sys.stdin:
    command = list(line.split())
    if command[0] == 'new_s':
        Stack[int(command[1])].append('active')
    elif command[0] == 'push':
        if len(Stack[int(command[1])]) == 12:
            print('error: stack is full')
        else:
            Stack[int(command[1])].append(command[2])
    elif command[0] == 'pop':
        if Stack[int(command[1])][-1] == 'active':
            print('error: stack is empty')
        else:
            Stack[int(command[1])].pop()
    elif command[0] == 'stack->stack':
        if len(Stack[int(command[1])]) == 2:
            print('error: wrong command')
        elif len(Stack[int(command[2])]) == 12:
            print('error: wrong command')
        else:
            Stack[int(command[2])].append(Stack[int(command[1])][-1])
            Stack[int(command[1])].pop()
    elif command[0] == 'delete_s':
        Stack[int(command[1])].clear()
        Stack[int(command[1])].append(int(command[1]))
    elif command[0] == 'print_s':
        if Stack[int(command[1])][-1] == 'active':
            print('empty')
        elif Stack[int(command[1])][1] == 'active' and Stack[int(command[1])][-1] != 'active':
            print(*Stack[int(command[1])][2:])
    elif command[0] == 'new_q':
        Queue[int(command[1])].append('active')
    elif command[0] == 'enqueue':
        if len(Queue[int(command[1])]) == 12:
            print('error: queue is full')
        else:
            Queue[int(command[1])].insert(2, command[2])
    elif command[0] == 'dequeue':
        if Queue[int(command[1])][-1] == 'active':
            print('error: queue is empty')
        else:
            Queue[int(command[1])].pop()
    elif command[0] == 'delete_q':
        Queue[int(command[1])].clear()
        Queue[int(command[1])].append(int(command[1]))
    elif command[0] == 'print_q':
        if Queue[int(command[1])][-1] == 'active':
            print('empty')
        elif Queue[int(command[1])][1] == 'active' and Queue[int(command[1])][-1] != 'active':
            print(*Queue[int(command[1])][2:])
    elif command[0] == 'stack->queue':
        if len(Stack[int(command[1])]) == 2:
            print('error: wrong command')
        elif len(Queue[int(command[2])]) == 12:
            print('error: wrong command')
        else:
            Queue[int(command[2])].insert(2, Stack[int(command[1])][-1])
            Stack[int(command[1])].pop()
    elif command[0] == 'queue->queue':
        if len(Queue[int(command[1])]) == 2:
            print('error: wrong command')
        elif len(Queue[int(command[2])]) == 12:
            print('error: wrong command')
        else:
            Queue[int(command[2])].insert(2, Queue[int(command[1])][-1])
            Queue[int(command[1])].pop()
    elif command[0] == 'queue->stack':
        if len(Queue[int(command[1])]) == 2:
            print('error: wrong command')
        elif len(Stack[int(command[2])]) == 12:
            print('error: wrong command')
        else:
            Stack[int(command[2])].append(Queue[int(command[1])][-1])
            Queue[int(command[1])].pop()
