package net.maromo.prjgrupoescoteiro;

public class GerenciarGrupoEscoteiro {

    public static void main(String[] args) {
	    //Efetivar o escoteiro João Pedro e colocá-lo para acampar
        Escoteiro escoteiroJoao = new Escoteiro();
        Escoteiro escoteiroPedro = new Escoteiro();

        escoteiroJoao.nome = "João Pedro da Silva";
        escoteiroJoao.idade = 14;
        escoteiroJoao.setRamo("Lobo");
        escoteiroJoao.setPontos(500);

        escoteiroPedro.nome = "Pedro Horácio";
        escoteiroPedro.idade = 15;
        escoteiroPedro.setRamo("Lobo");
        escoteiroPedro.setPontos(1000);


        //Mandar o joão acampar
        escoteiroJoao.acampar();
        escoteiroPedro.acampar();

        //Mandar o Pedro acampar

        escoteiroJoao.exibirDados();
        escoteiroPedro.exibirDados();

        escoteiroJoao.desfiliar();
    }
}
