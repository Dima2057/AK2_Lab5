#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>
#include <linux/moduleparam.h>
#include <linux/errno.h>

#include "hello1.h"

extern int print_hello(uint);

static uint howmany = 1;
module_param(howmany, uint, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(howmany, "Values 0 - 10, shows how many times greeting will be printed.");

static int __init hello2_init(void)
{
	return print_hello(howmany);
}

static void __exit hello2_exit(void)
{
	/* Do nothing here right now */
}

module_init(hello2_init);
module_exit(hello2_exit);

MODULE_AUTHOR("Dima Tymochko <dima.tumochko@gmail.com>");
MODULE_DESCRIPTION("Hello, world in Linux Kernel Training2");
MODULE_LICENSE("Dual BSD/GPL");
