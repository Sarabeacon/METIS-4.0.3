# METIS-4.0.3
used to build fastsc .METIS personal mirror: http://glaros.dtc.umn.edu/gkhome/views/metis


build SuiteSparse<br />
<br /><br />
1.wget http://faculty.cse.tamu.edu/davis/SuiteSparse/SuiteSparse-4.4.5.tar.gz&&tar -zxvf SuiteSparse-4.4.5.tar.gz<br />
2.cd SuiteSparse-4.4.5<br />
3.git clone METIS-4.0.3 &&mv metis-4.0.3 metis-4.0<br />
4.cd  metis-4.0 &&cmake .<br />
5.cd ..<br />
6.make<br />
