package net.maromo.prjapolice;

import javax.swing.*;

public class ApoliceTeste {

    public static void main(String[] args) {
	    //Inicia-se o programa de fato
        Apolice apolice = new Apolice();
        apolice.setNomeSegurado("Silvio Cesar Cardoso");
        apolice.setIdade(21);
        apolice.setValorPremio(1500000.0f);
        JOptionPane.showMessageDialog(null,
                "Dados: " + apolice.toString(),
                "Aviso",
                JOptionPane.INFORMATION_MESSAGE);

        Apolice apolice2 = new Apolice();
        apolice2.setNomeSegurado("Nicholas José da Silva");
        apolice2.setIdade(22);
        apolice2.setValorPremio(2000000.0f);
        JOptionPane.showMessageDialog(null,
                "Dados: " + apolice2.toString(),
                "Aviso",
                JOptionPane.INFORMATION_MESSAGE);
    }
}
