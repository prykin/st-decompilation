
hostent * gethostbyname(char *name)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0072d6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = gethostbyname(name);
  return phVar1;
}

