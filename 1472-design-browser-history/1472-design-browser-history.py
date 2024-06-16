# using an array
class BrowserHistory:
    def __init__(self, homepage: str):
        self.i = 0
        self.len = 1
        self.hist = [homepage]
        

    def visit(self, url: str) -> None:
        if len(self.hist) == self.i + 1:
            self.hist.append(url)
        else:
            self.hist[self.i+1] = url

        self.i+=1
        self.len = self.i+1
        
        

    def back(self, steps: int) -> str:
        new_pos = self.i - steps
        if new_pos > 0:
            self.i = new_pos
        else:
            self.i = 0
        
        return self.hist[self.i]
        

    def forward(self, steps: int) -> str:
        new_pos = self.i + steps
        if new_pos > self.len - 1:
            self.i = self.len - 1
        else:
            self.i = new_pos

        return self.hist[self.i]

        
        



# using doublylinkedlist
# class Node:
#     def __init__(self, data, prev=None, next=None):
#         self.data = data
#         self.prev = prev
#         self.next = next

# class BrowserHistory:
#     def __init__(self, homepage: str):
#         self.cur = Node(homepage)

#     def visit(self, url: str) -> None:
#         newNode = Node(data=url, prev=self.cur)
#         self.cur.next = newNode
#         self.cur = newNode
        

#     def back(self, steps: int) -> str:
#         while self.cur.prev and steps>0:
#             self.cur = self.cur.prev
#             steps-=1
#         return self.cur.data

#     def forward(self, steps: int) -> str:
#         while self.cur.next and steps>0:
#             self.cur = self.cur.next
#             steps-=1
#         return self.cur.data
        
        


# Your BrowserHistory object will be instantiated and called as such:
# obj = BrowserHistory(homepage)
# obj.visit(url)
# param_2 = obj.back(steps)
# param_3 = obj.forward(steps)