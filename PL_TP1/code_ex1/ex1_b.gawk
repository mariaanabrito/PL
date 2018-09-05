BEGIN{
	RS="<SAIDA>";
	FS="</SAIDA>";
}
(NR>1) {m[$1] = $1;}
END{
	for(i in m)
		{
			print m[i];
		}
}
