// Insertion sort pseudo-code
for j = 1 to A.length-1
    key = A[j]
    i = j-1;
    while i >= 0 and A[i] > key
        A[i+1] = A[i]
        i = i - 1
    A[i+1] = key;
