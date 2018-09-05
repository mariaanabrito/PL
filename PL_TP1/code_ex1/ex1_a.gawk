BEGIN {
	RS="<DATA_ENTRADA>";
	FS="</DATA_ENTRADA>"
}
(NR>1)&&($1!="null") {
						a[$1]++;
					 }
END{
	for(i in a)
		{
			print i, a[i]
		}
	}