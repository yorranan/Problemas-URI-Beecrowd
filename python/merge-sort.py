def merge(A, p, q, r):
    n_1 = q - p + 1
    n_2 = r - q
    L = [0] * (n_1 + 1)
    R = [0] * (n_2 + 1)  

    for i in range(n_1):
        L[i] = A[p + i]
    for j in range(n_2):
        R[j] = A[q + j + 1]

    L[n_1] = float('inf')
    R[n_2] = float('inf')

    i = 0
    j = 0
    for k in range(p, r + 1):
        if L[i] <= R[j]:
            A[k] = L[i]
            i += 1
        else:
            A[k] = R[j]
            j += 1

def merge_sort(A, p, r):
    if p < r:
        q = (p + r) // 2
        merge_sort(A, p, q)
        merge_sort(A, q + 1, r)
        merge(A, p, q, r)

A = [12, 3, 40, 7, 9, -5, -2, -30]
merge_sort(A, 0, len(A) - 1)
print(A)
