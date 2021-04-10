```python
#challenge 03

import re
f = open("lab03.txt")
text = f.read()

alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

y = re.findall("[a-z][A-Z][A-Z][A-Z][a-z][A-Z][A-Z][A-Z][a-z]",text)
print(y)

print(x)
```

