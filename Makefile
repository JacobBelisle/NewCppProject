CC		= g++
CFLAGS	= -g	#sends the debug info
TARGET	= a.out

all: build link exec clean

build:
	@$(CC) $(CFLAGS) -c *.cpp

link:
	@$(CC) -o $(TARGET) *.o

exec:
	@./$(TARGET)

debug: build link
	@gdb -quiet $(TARGET)

clean:
	@rm -f *.o $(TARGET) *~ && echo \