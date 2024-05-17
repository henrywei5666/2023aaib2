# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None:return root #沒有東西就提早結束
        left=self.removeLeafNodes(root.left,target) #先用同一個函式，處理左半邊
        right=self.removeLeafNodes(root.right,target) #先用同一個函式，處理左半邊
        if left==None and right==None and root.val==target: #最後變葉子，且值同
            return None #甚麼都沒有，交給當初呼叫我的人

        root.left=left
        root.right=right
        return root