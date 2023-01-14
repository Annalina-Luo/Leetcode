## 算法：二分法
- how do we divide? how many times?
- how do we merge? how many times?
### 1. Merge sort
##### Dividing
If the input list is a linked list, dividing takes O(n) time<br>
If the input list is an array, dividing takes O(1) time<br>
** Pseudo Code for Merge Sort **
```{c}
MERGESORT(A, left, right)
  IF left >= right
    return
  middle=(left+right)/2
  MERGESORT(A, left, middle)
  MERGESORT(middle+1, right)
  MERGE(A, left, middle, right)
```
** Pseudo Code for Merging **
```{c}
MERGE(A, left, middle, right)
  i1 = left, i2 = middle+1, i=0
  WHILE i1 <= middle AND i2<= right
    If A[I1] <A[12]
      B[i++] = A[i1++]
    ELSE
      B[i++] = A[i2++]
  WHILE i1 <= middle
    B[i++] = A[i1++]
  WHILE i2 <= right
    B[i++] = A[i2++]
```
