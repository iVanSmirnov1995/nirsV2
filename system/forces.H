
ForceRoket
{
type forces;
functionObjectLibs ("libforces.so"); //Lib to load
patches (roket); // change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.125; //Reference density for fluid
CofR (0 0 0); //Origin for moment calculations
outputControl timeStep;
outputInterval 100;
}



CoeffsKobraCxmz
{
type forceCoeffs;
functionObjectLibs ("libforces.so");
patches (roket); //change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.225;
CofR (0 0 0);
liftDir (0 1 0);
dragDir (1 0 0);
pitchAxis (0 0 1);
magUInf 600;
lRef 4.0;
Aref 0.113354;
outputControl timeStep;
outputInterval 100;
}

CoeffsKobraCzCxmy
{
type forceCoeffs;
functionObjectLibs ("libforces.so");
patches (roket); //change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.225;
CofR (0 0 0);
liftDir (0 0 1);
dragDir (1 0 0);
pitchAxis (0 1 0);
magUInf 600;
lRef 4.0;
Aref 0.113354;
outputControl timeStep;
outputInterval 100;
}
