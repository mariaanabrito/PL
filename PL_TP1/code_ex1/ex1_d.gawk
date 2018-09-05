BEGIN{
	RS="<TRANSACCAO>\n";
	FS="\n";
}

(NR>1)&&($11~/[Pp][Aa][Rr][Qq][Uu][Ee]/) {
		split($4,data,"[-]")
		mes = data[2] 
		split($7, imp, "[><]")
	    sub(",", ".",imp[3])
	    meses[mes] += imp[3]
}

END{
	for(i in meses)
	{print "No mês " i, "no total de " meses[i] " euros"}
}
