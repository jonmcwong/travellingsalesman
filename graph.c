#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

struct graph
{
	int ** matrix;
	int N
}

struct graph * create_graph(graph * new_graph, int N)
{

	// Use current time as seed for random generator 
    srand(time(0)); 


	new_graph.N = N;
	for (int i = 0; i < N; i++)
	{
		new_graph.matrx[i][i] = 0;
		for (int j = i + 1; j < N; j++)
		{
			new_graph.matrix[i][j] = new_graph.matrix[j][i] = rand();
		}
	}

	// print the graph
	printf("Graph created:\n");
	return new_graph;
}

void print_graph(graph * print_graph, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d\t", print_graph.matrix[i][j]);
		}
		printf("\n\n");
	}
}