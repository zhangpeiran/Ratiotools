# include <iostream>
# include <string>
using namespace std;

long double molarmass(string symbol)
{
long double out;
if (symbol=="H")
{
out=1.0089;
}
else if (symbol=="He")
{
out=4.0026;
}
else if (symbol=="li")
{
out=6.941;
}
else if (symbol=="Be")
{
out=9.0122;
}
else if (symbol=="B")
{
out=10.811;
}
else if (symbol=="C")
{
out=12.011;
}
else if (symbol=="N")
{
out=14.007;
}
else if (symbol=="O")
{
out=15.999;
}
else if (symbol=="F")
{
out=18.998;
}
else if (symbol=="Ne")
{
out=20.17;
}
else if (symbol=="Na")
{
out=22.9898;
}
else if (symbol=="Mg")
{
out=24.305;
}
else if (symbol=="Al")
{
out=26.982;
}
else if (symbol=="Si")
{
out=28.085;
}
else if (symbol=="P")
{
out=30.974;
}
else if (symbol=="S")
{
out=32.06;
}
else if (symbol=="Cl")
{
out=35.453;
}
else if (symbol=="Ar")
{
out=39.94;
}
else if (symbol=="K")
{
out=39.098;
}
else if (symbol=="Ca")
{
out=40.08;
}
else if (symbol=="Sc")
{
out=44.956;
}
else if (symbol=="Ti")
{
out=47.9;
}
else if (symbol=="V")
{
out=50.9415;
}
else if (symbol=="Cr")
{
out=51.996;
}
else if (symbol=="Mn")
{
out=54.938;
}
else if (symbol=="Fe")
{
out=55.84;
}
else if (symbol=="Co")
{
out=58.9332;
}
else if (symbol=="Ni")
{
out=58.69;
}
else if (symbol=="Cu")
{
out=58.69;
}
else if (symbol=="Zn")
{
out=65.38;
}
else if (symbol=="Ga")
{
out=69.72;
}
else if (symbol=="Ge")
{
out=72.59;
}
else if (symbol=="As")
{
out=74.9216;
}
else if (symbol=="Se")
{
out=78.9;
}
else if (symbol=="Br")
{
out=79.904;
}
else if (symbol=="Kr")
{
out=83.8;
}
else if (symbol=="Rb")
{
out=85.467;
}
else if (symbol=="Sr")
{
out=87.62;
}
else if (symbol=="Y")
{
out=88.906;
}
else if (symbol=="Zr")
{
out=91.22;
}
else if (symbol=="Nb")
{
out=92.9064;
}
else if (symbol=="Mo")
{
out=95.94;
}
else if (symbol=="Tc")
{
out=99;
}
else if (symbol=="Ru")
{
out=101.07;
}
else if (symbol=="Rh")
{
out=102.906;
}
else if (symbol=="Pd")
{
out=106.42;
}
else if (symbol=="Ag")
{
out=107.868;
}
else if (symbol=="Cd")
{
out=112.41;
}
else if (symbol=="In")
{
out=114.82;
}
else if (symbol=="Sn")
{
out=118.6;
}
else if (symbol=="Sb")
{
out=121.7;
}
else if (symbol=="Te")
{
out=127.6;
}
else if (symbol=="I")
{
out=126.905;
}
else if (symbol=="Xe")
{
out=131.3;
}
else if (symbol=="Cs")
{
out=132.905;
}
else if (symbol=="Ba")
{
out=137.33;
}
else if (symbol=="La")
{
out=138.905;
}
else if (symbol=="Ce")
{
out=140.12;
}
else if (symbol=="Pr")
{
out=140.91;
}
else if (symbol=="Nd")
{
out=144.2;
}
else if (symbol=="Pm")
{
out=147;
}
else if (symbol=="Sm")
{
out=150.4;
}
else if (symbol=="Eu")
{
out=151.96;
}
else if (symbol=="Gd")
{
out=157.25;
}
else if (symbol=="Tb")
{
out=158.93;
}
else if (symbol=="Dy")
{
out=162.5;
}
else if (symbol=="Ho")
{
out=164.93;
}
else if (symbol=="Er")
{
out=167.2;
}
else if (symbol=="Tm")
{
out=168.934;
}
else if (symbol=="Yb")
{
out=173.0;
}
else if (symbol=="Lu")
{
out=174.96;
}
else if (symbol=="Hf")
{
out=178.4;
}
else if (symbol=="Ta")
{
out=180.947;
}
else if (symbol=="W")
{
out=183.8;
}
else if (symbol=="Re")
{
out=186.207;
}
else if (symbol=="Os")
{
out=190.2;
}
else if (symbol=="Ir")
{
out=192.2;
}
else if (symbol=="Pt")
{
out=195.08;
}
else if (symbol=="Au")
{
out=196.967;
}
else if (symbol=="Hg")
{
out=200.5;
}
else if (symbol=="TI")
{
out=204.3;
}
else if (symbol=="Pb")
{
out=207.2;
}
else if (symbol=="Bi")
{
out=208.98;
}
else if (symbol=="Po")
{
out=209;
}
else if (symbol=="At")
{
out=201;
}
else if (symbol=="Rn")
{
out=222;
}
else if (symbol=="Fr")
{
out=223;
}
else if (symbol=="Ra")
{
out=226.03;
}
else if (symbol=="Ac")
{
out=227;
}
else if (symbol=="Th")
{
out=232.03;
}
else if (symbol=="Pa")
{
out=231.03;
}
else if (symbol=="U")
{
out=238.02;
}
else if (symbol=="Np")
{
out=237.04;
}
else if (symbol=="Pu")
{
out=244;
}
else if (symbol=="Am")
{
out=243;
}
else if (symbol=="Cm")
{
out=247;
}
else if (symbol=="BK")
{
out=247;
}
else if (symbol=="Cf")
{
out=251;
}
else if (symbol=="Es")
{
out=254;
}
else if (symbol=="Fm")
{
out=257;
}
else if (symbol=="Md")
{
out=258;
}
else if (symbol=="No")
{
out=259;
}
else if (symbol=="Lr")
{
out=260;
}
else if (symbol=="Rf")
{
out=261;
}
else if (symbol=="Db")
{
out=262;
}
else if (symbol=="Sg")
{
out=266;
}
else if (symbol=="Bh")
{
out=264;
}
else if (symbol=="Hs")
{
out=269;
}
else if (symbol=="Mt")
{
out=268;
}
else if (symbol=="Ds")
{
out=271;
}
else if (symbol=="Rg")
{
out=272;
}
else if (symbol=="Uub")
{
out=285;
}
else if (symbol=="Uut")
{
out=284;
}
else if (symbol=="Uuq")
{
out=289;
}
else if (symbol=="Uup")
{
out=288;
}
else if (symbol=="Uuh")
{
out=292;
}
return out;
}



