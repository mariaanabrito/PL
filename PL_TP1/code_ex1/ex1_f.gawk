BEGIN{
	RS="<TRANSACCAO>\n";
	FS="\n";
}

NR>1 {
		split($4,data,"[-]")
		mes = data[2] 
	    split($10,op,"[><]")
	    meses[mes][op[3]]++;
}
END{
	for(i in meses)
	{
		for(j in meses[i])
			print "No mês", i, "passou", meses[i][j], "vezes em", j "."
	}
	
}
