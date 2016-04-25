#include "gl/glut.h"

void display1()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);		//Indica a cor a ser utilizada no fundo da janela.
	glClear(GL_COLOR_BUFFER_BIT);			//Limpa o buffer indicado com a cor do GlClearColor
	glColor3f(1.0, 0.0, 0.0);				//Define a cor vermelha (1.0, 0.0, 0.0) como a cor atual
	
	glBegin(GL_POINTS);						
	glVertex2f(0.0, 0.0);					
	glEnd();								/*	Inicialmente, a janela gráfica está definida para valores no intervalo [-1,1], tanto em x quanto
											em y. Assim, a função glVertex2f(0.0, 0.0) acende o pixel na posição x = 0.0, y = 0.0 (centro). */
	
	
	glFlush();								//Envia uma solicitação para que o conteúdo do Frame Buffer seja exibido.
	glutSwapBuffers();						//Troca os buffers.
}

void display2()
{
	glClear
}

void main14a(int argc, char **argv)
{
	glutInit(&argc, argv);			//Esta função é utilizada para iniciar a biblioteca GLUT
	glutCreateWindow("Ponto");		//Cria uma janela para o OpenGL com o nome "Ponto"
	glutDisplayFunc(display1);		//Registra que a função void display() será a função a ser chamada quando a janela gráfica for atualizada
	glutMainLoop();					//Inicia o gerenciamento de eventos, aguardando que algum evento seja acionado
}


void main (int argc, char **argv)
{
	main14a(argc, (&(&(**argv))) );


	/*Perguntas
	-Que função é utilizada para inicializar uma janela OpenGL?
	-O que a função glutMainLoop() faz? Dê um
	*/
}
