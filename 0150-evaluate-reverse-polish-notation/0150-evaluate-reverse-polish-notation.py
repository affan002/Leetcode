class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token in ["-", "+", "*", "/"]:
                oper2 = stack.pop()
                oper1 = stack.pop()
                if token == "-":
                    stack.append(oper1 - oper2)
                elif token == "+":
                    stack.append(oper1 + oper2)
                elif token == "*":
                    stack.append(oper1 * oper2)
                elif token == "/":
                    stack.append(int(oper1 / oper2))
                
            else:    
                stack.append(int(token))  

        return stack[0]