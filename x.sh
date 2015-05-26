/opt/lampp/lampp start
mkdir /var/run/mysqld
sudo ln -s  /opt/lampp/var/mysql/mysql.sock /var/run/mysqld/
mv /var/run/mysqld/mysql.sock /var/run/mysqld/mysqld.sock
python codecracker.py
