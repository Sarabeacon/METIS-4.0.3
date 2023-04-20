# METIS-4.0.3
used to build fastsc .METIS personal mirror: http://glaros.dtc.umn.edu/gkhome/views/metis


build SuiteSparse

1.wget http://faculty.cse.tamu.edu/davis/SuiteSparse/SuiteSparse-4.4.5.tar.gz&&tar -zxvf SuiteSparse-4.4.5.tar.gz
2.cd SuiteSparse-4.4.5
3.git clone METIS-4.0.3 &&mv metis-4.0.3 metis-4.0
4.cd  metis-4.0 &&cmake .
5.cd ..
6.make
