#!/usr/bin/python3
"""  lists all states from the database hbtn_0e_0_usa """
import MySQLdb
import sys


if __name__ == '__main__':
    conn = MySQLdb.connect(host='localhost', port=3306, user = sys.argv[1], password = sys.argv[2], db = sys.argv[3], charset = 'utf8')
    cur = conn.cursor()

    cur.execute("SELECT * FROM states")
    query = cur.fetchall()

    for row in query:
        print(row)

    cur.close()
    conn.close()
    
