# Компилятор и флаги компиляции
CC = gcc
HEADER = config.h
# Переменные
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
TARGETS = $(SOURCES:.c=)

# Сборка всех исполняемых файлов
all: $(TARGETS)

# Создание каждого исполняемого файла
$(TARGETS): %: %.o
	$(CC) -o $@ $<

# Создание объектных файлов
%.o: %.c $(HEADER)
	$(CC) -c $< $(HEADER)

# Правило для очистки проекта
clean:
	rm -f $(OBJECTS) $(TARGETS) *.gch

# Файлы, которые не являются файлами
.PHONY: all clean