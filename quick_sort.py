def quick_sort(sort_list):
    if not sort_list:
        return []
    if len(sort_list) == 1:
        return sort_list[:]

    list1 = []
    list2 = []
    for item in sort_list[1:]:
        if item < sort_list[0]:
            list1.append(item)
        else:
            list2.append(item)

    return quick_sort(list1) + [sort_list[0]] + quick_sort(list2)

if __name__ == "__main__":
    list1 = [3,4,1,3,12,3,232,12,2]
    list2 = quick_sort(list1)
    print(list2)