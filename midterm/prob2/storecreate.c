#include <stdio.h>
#include "db.dat"

int main(int argc, char* argv[])
{
	struct db rec;
	FILE *fp;
	if(argc != 2)
	{
		fprintf(stderr, "How to use: %s FileName\n", argv[0]);
		return 1;
	}
	fp = fopen(argv[1], "w");
	printf("%-4d %-16s %-16s %-4d %4d\n", "id", "name", "category", "expired date", "stock");
	while(scanf("%d %s %s %d %d", &rec.id, rec.name, rec.category, rec.expireddate, rec.stock) == 5)
		fprintf(fp, "%d %s %s %d %d", rec.id, rec.name, rec.category, rec.expireddate, rec.stock);
	fclose(fp);
	return 0;
}

