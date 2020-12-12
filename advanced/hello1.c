#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

#include "hello1.h"

int print_hello(uint value)
{
	int i;

	if (value == 0) {
		pr_warn("Be careful, the value is so small!!!\n");
	}
	else if (value > 5 && value <= 10) {
		pr_warn("Be careful, the value is midle!\n");
	} 
	else if (value > 10) {
		pr_err("Value is not correct!\n");
		return -EINVAL;
	}
	for (i = 0; i < value; i++) {
		pr_alert("Hello, world!\n");
	}
	return 0;
}
EXPORT_SYMBOL(print_hello);

static int __init hello1_init(void)
{
	pr_alert("hello1 started!\n");
	return 0;
}

static void __exit hello1_exit(void)
{
	pr_alert("hello1 closed!\n");
}

module_init(hello1_init);
module_exit(hello1_exit);

MODULE_AUTHOR("Dima Tymochko <dima.tumochko@gmail.com>");
MODULE_DESCRIPTION("Hello, world in Linux Kernel Training1");
MODULE_LICENSE("Dual BSD/GPL");
