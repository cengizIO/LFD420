#include <linux/module.h>
#include <linux/init.h>


static void printdude(void){ pr_info("Dude!\n"); }

static int __init my_init(void)
{
  pr_info("Hello: module loaded at 0x%p\n", my_init);
  return 0;
}

static void __exit my_exit(void)
{
  pr_info("Bye: module unloaded from 0x%p\n", my_exit);
}

module_init(my_init);
module_exit(my_exit);

MODULE_AUTHOR("A GENIUS");
MODULE_LICENSE("GPL v2");

EXPORT_SYMBOL(printdude);
