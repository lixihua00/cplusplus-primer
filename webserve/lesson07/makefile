#定义变量
#src=main.o add.o sub.o mult.o div.o
src=$(wildcard ./*.c)
objs=$(patsubst %.c,%.o,$(src))
target=app

$(target):$(objs)
	$(CC) $(objs) -o $(target)

%.o:%.c
	$(CC) -c $< -o $@
.PHONY:clean
clean:
	rm $(objs) -rf
	

