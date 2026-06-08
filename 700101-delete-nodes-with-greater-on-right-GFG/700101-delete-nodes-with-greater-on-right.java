/* Structure of linked list node
class Node {

    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/
class Solution {
    int dfs(Node head){
        if(head.next==null) return head.data;
        int val = dfs(head.next);
        if(val > head.data){
            head.data = head.next.data;
            head.next = head.next.next;
        }
        return Math.max(val,head.data);
    }
    Node compute(Node head) {
        dfs(head);
        return head;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna