#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void w(int type)
{
}
int main()
{
    srand((unsigned)time(NULL));
    FILE *fp = NULL;
    fp = fopen("simple.csv", "w+");
    // V : A -> 25.00 -25.99 全新刀
    // V : B -> 22-25        良好刀
    // V : C -> 20-22        磨损严重需要维护刀
    // V : D -> <20          报废刀
    double down = 00.00, top = 20.00;
    for (int i = 0; i < 1000; i++)
    {
        double d1 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d2 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d3 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d4 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d5 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d6 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d7 = down + ((double)rand() / RAND_MAX) * (top - down);
        double d8 = down + ((double)rand() / RAND_MAX) * (top - down);
        fprintf(fp, "%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,D\n",
                d1, d2, d3, d4, d5, d6, d7, d8);
    }
    //----------------------------------------------------------------------------------------------
    {
        double down = 00.00, top = 20.00;
        for (int i = 0; i < 1000; i++)
        {
            double d1 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d2 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d3 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d4 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d5 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d6 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d7 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d8 = down + ((double)rand() / RAND_MAX) * (top - down);
            fprintf(fp, "%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,D\n",
                    d1, d2, d3, d4, d5, d6, d7, d8);
        }
    }
    {
        double down = 20.00, top = 22.00;
        for (int i = 0; i < 1000; i++)
        {
            double d1 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d2 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d3 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d4 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d5 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d6 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d7 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d8 = down + ((double)rand() / RAND_MAX) * (top - down);
            fprintf(fp, "%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,D\n",
                    d1, d2, d3, d4, d5, d6, d7, d8);
        }
    }
    {
        double down = 22.00, top = 25.00;
        for (int i = 0; i < 1000; i++)
        {
            double d1 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d2 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d3 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d4 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d5 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d6 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d7 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d8 = down + ((double)rand() / RAND_MAX) * (top - down);
            fprintf(fp, "%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,D\n",
                    d1, d2, d3, d4, d5, d6, d7, d8);
        }
    }
    {
        double down = 25.00, top = 25.99;
        for (int i = 0; i < 1000; i++)
        {
            double d1 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d2 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d3 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d4 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d5 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d6 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d7 = down + ((double)rand() / RAND_MAX) * (top - down);
            double d8 = down + ((double)rand() / RAND_MAX) * (top - down);
            fprintf(fp, "%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,%2.2f,D\n",
                    d1, d2, d3, d4, d5, d6, d7, d8);
        }
    }

    fclose(fp);
}