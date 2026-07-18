
int __cdecl FUN_0072ec30(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  uVar1 = thunk_FUN_006a4f20((int)DAT_0085a5f4,2);
  if (uVar1 < (uint)((int)DAT_0085a5f0 + (4 - (int)DAT_0085a5f4))) {
    iVar5 = 0x68;
    pcVar4 = "onexit.c";
    uVar1 = 2;
    iVar2 = thunk_FUN_006a4f20((int)DAT_0085a5f4,2);
    piVar3 = thunk_FUN_006a4160(DAT_0085a5f4,iVar2 + 0x10,uVar1,pcVar4,iVar5);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    DAT_0085a5f0 = piVar3 + ((int)DAT_0085a5f0 - (int)DAT_0085a5f4 >> 2);
    DAT_0085a5f4 = piVar3;
  }
  *DAT_0085a5f0 = param_1;
  DAT_0085a5f0 = DAT_0085a5f0 + 1;
  return param_1;
}

