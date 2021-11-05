package com.company.prjfatecitapira;

public class Aluno {
    //Atributos das classe aluno
    int ra;
    String nome;
    String email;
    String telefone;
    Curso cursoMatriculado;

    //Funcionalidades (métodos da class)
    void matricular(){
        System.out.println("Aluno com RA: " + ra);
        System.out.println("foi matriculado com sucesso");

    }

    void cancelarMatricula(){
        System.out.println("Matrícula do aluno " + nome);
        System.out.println("foi cancelada");
    }

    void imprimirDados(){
        System.out.println("Dados do aluno");
        System.out.println("RA: " + ra);
        System.out.println("Nome: " + nome);
        System.out.println("Email: " + email);
        System.out.println("Telefone: " + telefone);
        System.out.println("Curso Matriculado: " + cursoMatriculado.nomeCurso);
        System.out.println("=======================");
    }
}
