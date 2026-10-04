def add_lists(list1, list2):
    return list(map(lambda x, y: x + y, list1, list2))

list1 = [1, 2]
list2 = [3, 4]

print(add_lists(list1, list2))