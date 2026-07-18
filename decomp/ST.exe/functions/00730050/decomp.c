
int __cdecl FUN_00730050(int *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x79ff0c,0x36,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x79ff0c,0x37,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = FUN_007376e0(param_1,param_2,(undefined4 *)&stack0x0000000c);
  return iVar2;
}

