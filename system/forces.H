
ForceBowl
{
type forces;
functionObjectLibs ("libforces.so"); //Lib to load
patches (bowl); // change to your patch name
// Name of fields
pName p;
Uname U;
// Dump to file
log true;
rho rhoInf;
rhoInf 1.125; //Reference density for fluid
CofR (0 0 0); //Origin for moment calculations
outputControl timeStep;
outputInterval 5;
}



CoeffsBowlCxmz
{
type forceCoeffs;
functionObjectLibs ("libforces.so");
patches (bowl); //change to your patch name
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
magUInf 25;
lRef 0.15;
Aref 0.07065;
outputControl timeStep;
outputInterval 5;
}

CoeffsbowlCzCxmy
{
type forceCoeffs;
functionObjectLibs ("libforces.so");
patches (bowl); //change to your patch name
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
magUInf 25;
lRef 0.15;
Aref 0.07065;
outputControl timeStep;
outputInterval 5;
}
