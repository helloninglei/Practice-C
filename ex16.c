#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};


struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}


void Person_destory(struct Person *who)
{
	assert(who != NULL);
	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}


int main(int argc, char *argv[])
{
	struct Person *zhangsan = Person_create("ZhangSan", 32, 64, 140);
	struct Person *lisi = Person_create("LiSi", 14, 55, 170);

	printf("Zhangsan is at memory location %p:\n", zhangsan);
	Person_print(zhangsan);

	printf("LiSi is at memory location %p:\n", lisi);
	Person_print(lisi);

	zhangsan->age += 20;
	zhangsan->height -= 2;
	zhangsan->weight += 20;
	Person_print(zhangsan);

	lisi->age += 20;
	lisi->weight += 20;
	Person_print(lisi);

	Person_destory(zhangsan);
	Person_destory(lisi);

	return 0;

}
