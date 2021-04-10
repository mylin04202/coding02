```python
# challenge 02

data = open('cha.txt').read()
mydict = {
    "test": -1
    
}

count = {}
for c in data:
    count[c] = count.get(c, 0) + 1
print(count)
```

