# From geeksforgeek 
#No intent to copy anything
#Just trying learn the concept of WebScrap


import requests as rq
from bs4 import BeautifulSoup 

import csv

URL = "https://www.passiton.com/inspirational-quotes"
r = rq.get(URL)

soup = BeautifulSoup(r.content, 'html5lib') #BeautifulSoup is object with two argument
print(soup.prettify())

quotes =[] #to store quotes 

table = soup.find('div', attrs={'id':'all-quotes'})

for row in table.findAll( 'div',  attrs = {'class':'col-6 col-lg-3 text-center margin-30px-bottom sm-margin-30px-top'}):
	quote ={}
	quote['theme']=row.h5.text
	quote['url']=row.a['herf']
	quote['img']=row.img['src']
	quote['lines']=row.img['alt'].split(" #")[0]
	quote['author']=row.img['alt'].split(" #")[1]
	quotes.append(quote)
	
filename = 'inspirational_quotes.csv'
with open (filename, 'w', newline='') as f:
	w = csv.DictWriter(f,['theme', 'url', 'img', 'lines', 'author'])
	w.writeheader()
	for quote in quotes:
		w.writerow(quote)
		
