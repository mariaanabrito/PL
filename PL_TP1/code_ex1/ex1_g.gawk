BEGIN{
	RS="<TRANSACCAO>\n";
	FS="\n";
}
(NR>1)&&!($11~/[Pp][Aa][Rr][Qq][Uu][Ee]/) {
			split($4, data, "[><]")
			if(($3 == "<ENTRADA/>"))
				{
					entrada = "Não existe"
				}
			else
			{
				split($3, ent, "[><]")
				entrada = ent[3]
			}
			split($6, saida, "[><]")
			string=entrada " ----> " saida[3]
			datas[data[3]]= datas[data[3]] "\n" string;
	}
END{
	for(d in datas)
	{
		print d":", datas[d] "\n"
	}
}