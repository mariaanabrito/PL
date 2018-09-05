BEGIN{
	RS="<TRANSACCAO>\n";
	FS="\n";
}

NR>1 {
	   split($4,data,"[-]")
	   split($7, imp, "[><]")
	   mes = data[2]
	   sub(",", ".",imp[3])
	   meses[mes] += imp[3]
	 }
END{
	soma = 0;
	for(i in meses)
	{print "No mês " i, "no total de " meses[i] " euros"
	 soma += meses[i]
	}
	print "Total: " soma " euros"
}
