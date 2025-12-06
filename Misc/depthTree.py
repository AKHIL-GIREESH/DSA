def DepthTree(node):
    if not node:
        return 0
    
    l = DepthTree(node.left)
    r = DepthTree(node.right)
    
    return 1 + max(l,r)