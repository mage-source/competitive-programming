class ListNode:
    def __init__(self, key, val):
        self.key = key
        self.val = val
        self.freq = 1
        self.prev = None
        self.next = None

class DLL:
    def __init__(self):
        self.head = ListNode(0, 0)
        self.tail = ListNode(0, 0)
        self.head.next = self.tail
        self.tail.prev = self.head
        self.size = 0

    def insertHead(self, node):
        head_next = self.head.next
        head_next.prev = node
        self.head.next = node
        node.prev = self.head
        node.next = head_next
        self.size += 1

    def removeNode(self, node):
        node.next.prev = node.prev
        node.prev.next = node.next
        self.size -= 1

    def removeTail(self):
        tail = self.tail.prev
        self.removeNode(tail)
        return tail

class LFUCache:
    def __init__(self, capacity):
        self.cache = {}
        self.freq_table = defaultdict(DLL)
        self.capacity = capacity
        self.min_freq = 0

    def get(self, key):
        if key not in self.cache:
            return -1
        return self.updateCache(self.cache[key], key, self.cache[key].val)

    def put(self, key, value):
        if not self.capacity:
            return
        if key in self.cache:
            self.updateCache(self.cache[key], key, value)
        else:
            if len(self.cache) == self.capacity:
                prev_tail = self.freq_table[self.min_freq].removeTail()
                del self.cache[prev_tail.key]
            node = ListNode(key, value)
            self.freq_table[1].insertHead(node)
            self.cache[key] = node
            self.min_freq = 1

    def updateCache(self, node, key, value):
        node = self.cache[key]
        node.val = value
        prev_freq = node.freq
        node.freq += 1
        self.freq_table[prev_freq].removeNode(node)
        self.freq_table[node.freq].insertHead(node)
        if prev_freq == self.min_freq and self.freq_table[prev_freq].size == 0:
            self.min_freq += 1
        return node.val
