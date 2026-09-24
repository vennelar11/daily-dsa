#defangingAnIPAddress

class Solution:
    def defangIPaddr(self, address: str) -> str:
        text = address.replace(".", "[.]")
        return text