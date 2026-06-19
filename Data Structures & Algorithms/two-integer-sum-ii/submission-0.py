class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        start=0
        end=len(numbers)
        indices=[]

        while start<end:
            if(target==numbers[start]+numbers[end-1]):
                return [start+1,end]
            elif(target<numbers[start]+numbers[end-1]):
                end-=1
            else:
                start+=1
        
        return []
