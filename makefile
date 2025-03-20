CC = gcc
CFLAGS = -Wall -Wextra

test: test_traffic.o traffic_logic.o
	$(CC) $(CFLAGS) -o test_traffic test_traffic.o traffic_logic.o

traffic: traffic_main.o traffic_logic.o
	$(CC) $(CFLAGS) -o traffic traffic_main.o traffic_logic.o

traffic_logic.o: traffic_logic.c traffic.h
	$(CC) $(CFLAGS) -c traffic_logic.c -o traffic_logic.o

traffic_main.o: traffic_main.c traffic.h
	$(CC) $(CFLAGS) -c traffic_main.c -o traffic_main.o

test_traffic.o: test_traffic.c traffic.h
	$(CC) $(CFLAGS) -c test_traffic.c -o test_traffic.o

run: traffic
	./traffic

test_run: test
	./test_traffic

clean:
	rm -f *.o traffic test_traffic

