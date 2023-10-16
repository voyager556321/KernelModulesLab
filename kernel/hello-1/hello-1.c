/* 
 * hello-1.c - The simplest kernel module. 
 */ 
#include <linux/module.h> /* Needed by all modules */ 
#include <linux/printk.h> /* Needed for pr_info() */ 
#include <linux/init.h>
#define DRIVER_AUTHOR "Vova Laskarzhevskyy <vovls5433@gmial.com> "
#define DRIVER_DESC   "A simple driver"

MODULE_LICENSE("Dual BCD/GPL");

 int init_module(void) 
{ 
	pr_info("Hello world 1.\n"); 
    return 0;

 
    /* A non 0 return means init_module failed; module can't be loaded. */ 
} 
 void cleanup_module(void) 
{ 
	pr_info("Goodbye world 1.\n"); 
} 
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
