class Node:
    def __init__(self, data, prev=None, next=None):
        self.data = data
        self.prev = prev
        self.next = next

class BrowserHistory:
    def __init__(self, homepage: str):
        self.cur = Node(homepage)

    def visit(self, url: str) -> None:
        newNode = Node(data=url, prev=self.cur)
        self.cur.next = newNode
        self.cur = newNode
        

    def back(self, steps: int) -> str:
        while self.cur.prev and steps>0:
            self.cur = self.cur.prev
            steps-=1
        return self.cur.data

    def forward(self, steps: int) -> str:
        while self.cur.next and steps>0:
            self.cur = self.cur.next
            steps-=1
        return self.cur.data
        
        


# Your BrowserHistory object will be instantiated and called as such:
# obj = BrowserHistory(homepage)
# obj.visit(url)
# param_2 = obj.back(steps)
# param_3 = obj.forward(steps)