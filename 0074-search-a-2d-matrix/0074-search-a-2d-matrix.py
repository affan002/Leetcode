class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows,cols= len(matrix), len(matrix[0])
        
        l = 0
        r =rows - 1

        while l<=r:
            mid = (l+r)//2
            if target > matrix[mid][-1]:
                l = mid+1
            elif target < matrix[mid][0]:
                r = mid-1

            else:
                break

        if l > r:
            return False

        mid = (l+r)//2
        sub_l = 0
        sub_r = cols -1
        while sub_l <= sub_r:
            sub_mid = (sub_l+sub_r)//2
            if matrix[mid][sub_mid] == target:
                return True
            elif matrix[mid][sub_mid]<target:
                sub_l = sub_mid+1
            else:
                sub_r = sub_mid-1
    
        
            

        return False

        