

protected void split_bottomup(KTreeNode<Key> node, int pos) { 

    if (node.getK()>4) { 
    // CHEATING: we created and split a 5-node! ​

    onSplit(node); 
    node.split(2 + (pos<2 ? 1 : 0)); 

    if (node.parent!=null) { 

        int i=node.parent.getIndexOfChild(node); 
        assert (i>=0); 
        node.parent.mergeChild(i); 
        node.parent_.checkConsistency(); 

        split_bottomup(node.parent,i); // eventually split parent 
    } 
} 



