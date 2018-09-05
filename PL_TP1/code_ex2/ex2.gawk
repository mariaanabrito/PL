BEGIN{
	RS="<foto ficheiro=";
	FS=">[ ]*\n";
	fmt = "<li><a href='%s'> %s </a></li>\n"
	header = "<html><head><meta charset = 'UTF-8'/></head><body>"
    print header > "album.html"
	print "<h1>Álbum Fotográfico</h1>" > "album.html"
	descr	="<center><p>%s , %s</p><p>%s</p><p>%s</p><img src=\"fotos/%s\" width=500></center>\n";
    titleHTML = "<head><title>%s</title></head>\n";
    i = 0;

    printf "Lista de pessoas fotografadas:" > "album.html"
}
NR > 1 && ($3~/<quem>/){
		split($3, nome,"[><]")
	 }
NR > 1 && ($2~/<quem>/){
		split($2, nome,"[><]")
	 }
NR > 1 && ($4~/<quem>/){
		split($4, nome,"[><]")
	 }
NR > 1 && $(NF-2)~/<facto>/ {
		split($(NF-2), fact, "[><]")
}
NR > 1 && $(NF-3)~/<facto>/ {
		split($(NF-3), fact, "[><]")
}
NR > 1 && ($2~/<onde>/) {
		split($2, where, "[><]")
}
NR > 1 && ($(NF-2)~/<onde>/) {
		split($(NF-2), where, "[><]")
}
NR > 1 && ($2~/<quando[> ]/) { 
		split($2, when, "[\"><]")
		}
NR > 1 && ($3~/<quando[> ]/) { 
		split($3, when, "[\"><]")
		}
NR > 1 && ($4~/<quando[> ]/) { 
		split($4, when, "[\"><]")
		}
NR > 1 && ($(NF-2)~/<legenda>/) {
		split($(NF-2), legenda, "[><]")
}
NR>1 {
		sub("^[ ]", "", where[3])
		if (where[3] !~ /desconhecido/)
		{
			locais[where[3]] = where[3]
		}
		split($1, ficheiro, "\"")
		fotoHTML = ficheiro[2]
		sub(/\.[a-z]+/,"", fotoHTML)
		printf fmt, i " " fotoHTML".html", i " " nome[3] > "album.html" 
		printf header > i " " fotoHTML".html"
		printf "<h1>" nome[3] "</h1>" > i " " fotoHTML".html"
		printf titleHTML ,fotoHTML > i " " fotoHTML".html"; 
        printf descr, where[3] , when[3] , fact[3] , legenda[3], ficheiro[2] > i " " fotoHTML".html";
        i++
        fact[3] = ""
        when[3] = "Data desconhecida"
        where[3] = "Local desconhecido"
        legenda[3] = ""
        nome[3] = "Desconhecido"
	 }
END {
	printf "Lista de todos os locais fotografados:" > "album.html"
	for(l in locais)
		print locais[l] "<br>" > "album.html"
	print "</ul></body></html>" > "album.html"
}
