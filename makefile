main:
	@echo -n "checking file main.cpp: "
	@bash make.sh
	@echo -n "checking file module/linux.cpp: "
	@bash make2.sh
	@echo -n "checking file module/sendpacket.cpp: "
	@bash make3.sh
	@echo "Building Program for x86_64, AARCH64 (default): "
	@echo "Building for X86_64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "udpflood-x86_64"
	@echo "Building for aarch64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "udpflood-aarch64"
	@echo "Add permission for udpflood"
	@chmod 777 udpflood-x86_64
	@chmod 777 udpflood-aarch64
	@echo "Building been successfully!"
x86_64:
	@echo -n "checking file main.cpp: "
	@bash make.sh
	@echo -n "checking file module/linux.cpp: "
	@bash make2.sh
	@echo -n "checking file module/sendpacket.cpp: "
	@bash make3.sh
	@echo "Building Program for x86_64, AARCH64 (default): "
	@echo "Building for X86_64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "udpflood-x86_64"
	@echo "Building for aarch64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "udpflood-aarch64"
	@echo "Add permission for udpflood"
	@chmod 777 udpflood-x86_64
	@chmod 777 udpflood-aarch64
	@echo "Building been successfully!"
aarch64:
	@echo -n "checking file main.cpp: "
	@bash make.sh
	@echo -n "checking file module/linux.cpp: "
	@bash make2.sh
	@echo -n "checking file module/sendpacket.cpp: "
	@bash make3.sh
	@echo "Building Program for x86_64, AARCH64 (default): "
	@echo "Building for X86_64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "udpflood-x86_64"
	@echo "Building for aarch64 please wait...."
	@g++ main.cpp module/linux.cpp module/sentpacket.cpp -o "udpflood-aarch64"
	@echo "Add permission for udpflood"
	@chmod 777 udpflood-x86_64
	@chmod 777 udpflood-aarch64
	@echo "Building been successfully!"
