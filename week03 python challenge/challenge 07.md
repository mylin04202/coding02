```python
#challenge 07

import requests
import io
from PIL import Image  # Python Imaging Library导入Image

url = 'http://www.pythonchallenge.com/pc/def/oxygen.png'
image = requests.get(url).content

img_io = io.BytesIO(image)  #Putting binary data into memory
img = Image.open(img_io)  #Open the image and create the image object
# img.show() # Show image, start a window
# print(img.size)  #629,95
# 灰色带大概在图片中间部位//The grey band is approximately in the middle of the picture
width, height = img.size
y = height // 2  ##灰色带的大致区域设为y //The approximate area of the grey band is set to y
print(img.mode)  # 查看图片像素模式，RGBA，带alpha通道//View image pixel mode, RGBA, with alpha channel
# 获取中间条带的信息//Get information about intermediate strips
for x in range(width):
    pixel = img.getpixel((x, y))

    print(pixel) #打印各个点的像素信息//Print pixel information for each point
    
    for x in range(width):
    pixel = img.getpixel((x, y))
    if pixel[1] == pixel[0] and pixel[0] == pixel[2]:

        print(pixel[0], end=' ')
print()
print()

#尝试 给字符串去重, 但是发现会自动排序🤣丢失信息//Tried to de-duplicate the string, but found that it was automatically sorted 🤣 Missing information
""" grey_list = []
for x in range(width):
    pixel = img.getpixel((x, y))
    if pixel[1] == pixel[0] and pixel[0] == pixel[2]:
        grey_list.append(pixel[0])
grey_set = set(grey_list) #用set去重
print(grey_set) """

# 每七个取一个数字//Take one number for every seven

for x in range(width):
    pixel = img.getpixel((x, y))
    if pixel[1] == pixel[0] and pixel[0] == pixel[2]:
        if x % 7 == 0:
            print(pixel[0], end=' ')
print()

for x in range(width):
    pixel = img.getpixel((x, y))
    if pixel[1] == pixel[0] and pixel[0] == pixel[2]:
        if x % 7 == 0:
            print(chr(pixel[0]), end='')
print()

hint = [105, 110, 116, 101, 103, 114, 105, 116, 121]
for num in hint:
    print(chr(num), end='')  
```

