package net.maromo.prjgrupoescoteiro;

public class Escoteiro {
    //Atributos
    public String nome;
    public int idade;
    private String ramo;
    private int pontos;


    //Modificadores de acesso. Vamos acessar estas informações
    public void setRamo(String ramo) {
        this.ramo = ramo;
    }
    public void setPontos(int pontos) {
        this.pontos = pontos;
    }

    //Métodos
    public void acampar(){
        //Lógica de como um escoteiro acampa
        System.out.println("O Escoteiro " + nome + " vai acampar hoje");

    }

    public void desfiliar(){
        //Lógica para desfiliar um determinado escoteiro do grupo
        System.out.println("Escoteiro: " + nome + " foi desligado do grupo");

    }

    public void exibirDados(){
        System.out.println("Dados do escoteiro");
        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade);
        System.out.println("Ramo a que pertence: " + ramo);
        System.out.println("Pontuação: " + pontos);
    }

}
