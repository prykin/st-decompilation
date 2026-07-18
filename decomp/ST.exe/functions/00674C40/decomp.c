
void __cdecl FUN_00674c40(byte *param_1)

{
  char local_308 [260];
  byte local_204 [256];
  byte local_104 [256];
  
  if ((DAT_0081196c != 0) && (DAT_00811970 == 0)) {
    FUN_0072e730(param_1,(byte *)&param_1,local_104,local_204,(byte *)0x0);
    __makepath(local_308,(char *)&param_1,(char *)local_104,(char *)local_204,&DAT_007d2d48);
    DAT_00811970 = FUN_0072ea70(local_308,&DAT_007c8ff0);
  }
  return;
}

