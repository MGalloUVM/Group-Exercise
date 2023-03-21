#broken by: ws
#open numbers.html
with open("numbers.html", "w") as f:
    #add the title
    f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n")
    #add the table header
    f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
    #loop through the numbers 1 to 50
    for i in range(1, 51):
        #check if even or odd
        if i % 2 == 0:
            #write to the even column
            f.write("<tr><td>{}</td><td></td></tr>\n".format(i+1))
        else:
            #write to the odd column
            f.write("<tr><td></td><td>{}</td></tr>\n".format(i+1))
    #close the headers
    f.write("</table>\n</body>\n</html>")

#display the html code
with open("numbers.html", "r") as f:
    print(f.read())
    
