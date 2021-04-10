```python
#challenge 04
import re
import requests


def next_page(link):
    global steps # 使得函数内的step和全局变量为一个变量//Make the step and global variables within the function one variable
    html = gethtml(f"http://www.pythonchallenge.com/pc/def/linkedlist.php?nothing={link}")
    try:
        hint = re.search(r'.*\s(\d+)', html).group(1)
    except AttributeError:
        print(html)
        return 'stop'
    else:
        steps +=1
        print(steps, hint)
        return hint


def gethtml(url):
    '''
    因为发现request经常会卡住无响应，所以封装了这个函数，用于重试//Because it was found that request would often get stuck and not respond, this function was wrapped to retry
    '''
    i = 0
    while i < 3:
        try:
            html = requests.get(url, timeout=5).text
            return html
        except requests.exceptions.RequestException:
            i += 1


def run(link):
    while True:
        link = next_page(link)
        if link == 'stop':
            break


steps = 1
link = 12345
run(link)
# Yes. Divide by two and keep going.
run(8022)  # 16044//2=8022



```

