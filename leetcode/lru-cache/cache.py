class ListNode:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.prev = None
        self.next = None

class LRUCache:
    def __init__(self, capacity):
        self.cache = {}
        self.size = 0
        self.capacity = capacity
        self.head = ListNode(0, 0)
        self.tail = ListNode(0, 0)
        self.head.next = self.tail
        self.tail.prev = self.head

    def get(self, key):
        node = self.cache.get(key)
        if not node:
            return -1
        else:
            self.moveToHead(node)
            return node.value

    def put(self, key, value):
        node = self.cache.get(key)
        if not node:
            new_node = ListNode(key, value)
            self.cache[key] = new_node
            self.insertHead(new_node)
            if self.size > self.capacity:
                tail = self.removeTail()
                del self.cache[tail.key]
        else:
            node.value = value
            self.moveToHead(node)

    def moveToHead(self, node):
        self.removeNode(node)
        self.insertHead(node)

    def insertHead(self, node):
        head_next = self.head.next
        self.head.next = node
        head_next.prev = node
        node.next = head_next
        node.prev = self.head
        self.size += 1

    def removeNode(self, node):
        node.next.prev = node.prev
        node.prev.next = node.next
        self.size -= 1

    def removeTail(self):
        tail = self.tail.prev
        self.removeNode(tail)
        return tail
