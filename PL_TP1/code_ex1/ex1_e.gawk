BEGIN{
	RS="<TRANSACCAO>\n";
	FS="\n";
}

NR>1 {
		split($4,data,"[-]")
		mes = data[2] 
		split($7, imp, "[><]")
	    sub(",", ".",imp[3])
	    split($11,tipo,"[><]")
	    meses[mes][tipo[3]] += imp[3];
}
END{
	for(i in meses)
	{
		for(j in meses[i])
			print "No mês", i, "foi gasto", meses[i][j], "euros em", j "."
	}
	
}
