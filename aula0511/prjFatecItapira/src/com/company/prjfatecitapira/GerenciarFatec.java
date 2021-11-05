package com.company.prjfatecitapira;

import java.util.Scanner;

public class GerenciarFatec {

    public static void main(String[] args) {
        //começo o programa
        //Definir um curso
        //Definir dois alunos, matriculá-los e cancelar
        //a matricula do primeiro
        //Ao final imprimir os dados do aluno que foi
        //efetivamente matriculado
        Scanner leitor = new Scanner(System.in);
        Curso curso1 = new Curso();

        curso1.codigoCurso  =500;
        curso1.nomeCurso = "Gestão em Tecnologia da Informação";

        Aluno aluno1 = new Aluno();
        Aluno aluno2 = new Aluno();
        //Atribuir dados ao aluno 1
        System.out.println("Digite o ra do aluno");
        aluno1.ra = Integer.parseInt(leitor.nextLine());

        System.out.println("Digite o nome do aluno");
        aluno1.nome = leitor.nextLine();

        System.out.println("Digite o email do aluno");
        aluno1.email = leitor.nextLine();

        System.out.println("Digite o telefone: ");
        aluno1.telefone = leitor.nextLine();

        aluno1.cursoMatriculado = curso1;

        //Atribuir dados ao aluno 2
        aluno2.ra = 222;
        aluno2.nome = "Abner Alves";
        aluno2.email = "abneralves@uol.com.br";
        aluno2.telefone = "(19)88888-8888";
        aluno2.cursoMatriculado = curso1;

        aluno1.matricular();
        aluno2.matricular();

        aluno1.imprimirDados();
        aluno2.imprimirDados();


    }
}
