obj-m += hello-1.o 

PWD :=  /home/admin/Repositories/KernelModulesLab/kernel/hello-1

all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 

clean: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
