BUILD_ROOT = $(shell pwd)
EXCEL_LOG_PATH = $(BUILD_ROOT)/excel_log/
main:
ifeq ("$(var)", "create")
	make -C $(EXCEL_LOG_PATH);
	./create;
	g++ *.c -lm;
else
	g++ *.c -lm;
endif