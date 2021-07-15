CFLAGS=-Wall -g

clean:
	rm -rf *[0-9] # 删除文件名以数字结尾的文件
all:
	ls | grep .c | xargs -i basename {} .c | xargs make
