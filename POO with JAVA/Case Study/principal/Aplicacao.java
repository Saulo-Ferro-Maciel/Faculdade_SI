package br.com.sauloferro.caixaeletronico.principal;

import br.com.sauloferro.caixaeletronico.contas.ContaBancaria;
import br.com.sauloferro.caixaeletronico.terminal.TerminalBancario;

public class Aplicacao {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria("12345-6", "João Silva", 1000.0);
        TerminalBancario terminal = new TerminalBancario(conta);
        terminal.iniciar();
    }
}
