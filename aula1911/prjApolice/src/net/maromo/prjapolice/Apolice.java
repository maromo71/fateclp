package net.maromo.prjapolice;

public class Apolice {
    private String nomeSegurado;
    private int idade;
    private float valorPremio;

    //Alt + Insert
    public String getNomeSegurado() {
        return nomeSegurado;
    }

    public void setNomeSegurado(String nomeSegurado) {
        this.nomeSegurado = nomeSegurado;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getValorPremio() {
        return valorPremio;
    }

    public void setValorPremio(float valorPremio) {
        this.valorPremio = valorPremio;
    }

    public String toString(){
        return "Nome do Segurado: " + nomeSegurado + "\n" +
                "Idade do Segurado: " + idade + "\n" +
                "Valor do Premio: " + valorPremio;
    }
}
