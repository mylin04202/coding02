```python
# challenge 06

import requests
import io
import re
import zipfile  # 导入对zip文件处理的模块 zipfile//Import of modules for zip file processing zipfile

##获取二进制数据//Get binary data
zip_get = requests.get(
    "http://www.pythonchallenge.com/pc/def/channel.zip").content

# StringIO和BytesIO是在内存中操作str和bytes的方法，使得和读写文件具有一致的接口//StringIO and BytesIO are methods for manipulating str and bytes in memory, making for a consistent interface with reading and writing files
zip_file = io.BytesIO(zip_get)  #将函数返回的压缩包的二进制数据在内存中读//Read the binary data of the compressed package returned by the function in memory
channel_zip = zipfile.ZipFile(zip_file, "r")  #以只读方式打开压缩包//Open the zip archive as read-only

print(channel_zip.namelist())  #打印压缩包内的文件名列表//Print the list of file names in the zip archive
#阅读 readme.txt

with channel_zip.open('readme.txt', 'r') as f:
    print(f.read().decode('utf-8')) #文件里的内容是byte字节，所以用utf-8读取//The contents of the file are byte bytes, so read in utf-8


file_name_next = "90052"  # 阅读readme.txt的提示//Read readme.txt
comment = ''  # 阅读 46145.txt，说要收集评论//collect the comments

while True:
    file_comment = channel_zip.getinfo(file_name_next + ".txt").comment.decode(
        "utf-8")  # 以utf-8方式读取压缩包内的各个文件//Read the individual files in the zip archive in utf-8
    #comment是个什么东东？？
    comment += file_comment
    with channel_zip.open(file_name_next + ".txt", "r") as f:  # 阅读文件内容//Read the contents of the document
        file_content = f.read().decode('utf-8')
        print(file_content)
    try:  # 尝试查找下一个线索，用正则查找数字//Try to find the next clue
        file_name_next = re.search(r"\d+", file_content).group(0)
    except:  #没有则中断
        break

print(comment)

zip_file.close()
```

