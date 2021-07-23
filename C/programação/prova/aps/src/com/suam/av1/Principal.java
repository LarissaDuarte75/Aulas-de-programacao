package com.suam.av1;

import javax.swing.JOptionPane;

public class Principal {

	public static void main(String[] args) {
		
		boolean sair = false;
		
		Empresa a = null;
		Cliente b = null;
		Funcionario c = null;
		
		try {
		
		while(! sair) {
			
			String opcao = JOptionPane.showInputDialog(montaMenu(), null);
			if(opcao.equals("1")) {
				a = new Empresa();
				a.nome = JOptionPane.showInputDialog("Digite o nome da empresa: ");
				a.cnpj = JOptionPane.showInputDialog("Digite o cnpj da " +a.nome+ ":");
				
				b = new Cliente();
				b.nome = JOptionPane.showInputDialog("Digite o nome do cliente: ");
				b.idade = Integer.parseInt(JOptionPane.showInputDialog("Digite a idade do funcionário " +b.nome+ ":"));
				
				c = new Funcionario();
				c.nome = JOptionPane.showInputDialog("Digite o nome do funcionário: ");
				c.idade = Integer.parseInt(JOptionPane.showInputDialog("Digite a idade do funcionário " +c.nome+ ":"));
				
				
				
			}
			
			if(opcao.equals("2")) {
				if(a!= null) {
					JOptionPane.showMessageDialog(null, montaExibicao(a));
					JOptionPane.showMessageDialog(null, montaExibicao2(b));
					JOptionPane.showMessageDialog(null, montaExibicao3(c));
				}
				
				else {
					JOptionPane.showInputDialog(null, "Nenhuma empresa foi criada!");
				}
			}
			if(opcao.equals("3")) {
				int opcaoSair = JOptionPane.showConfirmDialog (null, "Deseja mesmo sair do programa?");
			   if(opcaoSair == 0) {
				   sair = true;
			   }
			}
		}
		
   }		

		catch(Exception e) {
			JOptionPane.showMessageDialog(null, "Você saiu do programa");
			
		}
		finally {
			System.exit(0);	
		}
}	
			
		
	

	public static String montaExibicao(Empresa a) {
		String exibicao = "";
		exibicao+="Empresa: "+a.nome+"\n";
		exibicao+= "cnpj: " +a.cnpj+"\n";
		return exibicao;
		
	}
	
	public static String montaExibicao2(Cliente b) {
		String exibicao2 = "";
		exibicao2+="Cliente: "+b.nome+"\n";
		exibicao2+= "Idade do cliente: " +b.idade+"\n";
		return exibicao2;
		
	}
	
	public static String montaExibicao3(Funcionario c) {
		String exibicao3 = "";
		exibicao3+="Funcionário: "+c.nome+"\n";
		exibicao3+= "Idade do funcionário: " +c.idade+"\n";
		return exibicao3;
	}
	public static String montaMenu() {
		String menu ="";
		menu+="===============================\n";
		menu+= "1 - Criar Empresa\n";
		menu+= "2 - Exibir dados da Empresa\n";
		menu+= "3 - Sair do programa\n";
		menu+="===============================\n";
		return menu;
		
	}
}