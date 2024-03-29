UNAME := $(shell uname -m)
main:
	@echo "What do you need?"
	@echo "MAKING x86_64 AND AARCH64 BUILD (x86_64 need) - make cross"
	@echo "MAKING BUILD WITH OWN ARCH - make ownarch"
	@echo "CLEAN ALL BUILD - make clean"
	@echo "RUN PROGRAM AFTER BUILD - make run"
cross:
	@make clean
	@bash crosscheck.sh
	@echo -n "checking file main.cpp: "
	@bash make.sh
	@echo -n "checking file module/linux.cpp: "
	@bash make2.sh
	@echo -n "checking file module/sendpacket.cpp: "
	@bash make3.sh
	@echo "MAKING OUTPUT FOLDER (./out)"
	@mkdir out
	@echo "Building Program for x86_64, AARCH64 (default): "
	@echo "Building for X86_64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "./out/udpflood-x86_64-$(shell uname -o | tr / _ )"
	@echo "Building for aarch64 please wait...."
	@aarch64-linux-gnu-g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "./out/udpflood-aarch64-$(shell uname -o | tr / _ )"
	@echo "Add permission for udpflood"
	@chmod 777 ./out/udpflood-x86_64-$(shell uname -o | tr / _ )
	@chmod 777 ./out/udpflood-aarch64-$(shell uname -o | tr / _ )
	@echo "Building been successfully!"
	@echo "DID YOU KNOW?, THE OUTPUT FILE IS udpflood-(cpuarch)-(platform) and output folder is ./out!"
ownarch:
	@make clean
	@echo -n "checking file main.cpp: "
	@bash make.sh
	@echo -n "checking file module/linux.cpp: "
	@bash make2.sh
	@echo -n "checking file module/sendpacket.cpp: "
	@bash make3.sh
	@echo "MAKING OUTPUT FOLDER (./out)"
	@mkdir ./out
	@echo "THIS WILL BUILD ON YOUR OWN CPU ARCH: $(shell uname -m): "
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "./out/udpflood-$(shell uname -m)-$(shell uname -o | tr / _ )"
	@echo "Add permission for udpflood"
	@chmod 777 ./out/udpflood-$(shell uname -m)-$(shell uname -o | tr / _ )
	@echo "Building been successfully!"
	@echo "DID YOU KNOW?, THE OUTPUT FILE IS udpflood-(cpuarch)-(platform) and output folder is ./out!"
clean:
	@rm -rf ./out
run:
	@./out/udpflood-$(shell uname -m)-$(shell uname -o | tr / _ )

