
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0054ca10(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  piVar2 = param_1;
  if (DAT_0080879c == 0) {
    switch(_DAT_008087a0 & 0xff) {
    case 1:
    case 4:
    case 0xd:
    case 0x13:
      if (DAT_00808a9b == -1) break;
    case 6:
    case 7:
    case 0xe:
      if (param_1[2] == 1) {
        return 0;
      }
    }
  }
  uVar5 = 0xffffffff;
  pcVar6 = PTR_DAT_007c83b0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)FUN_006b9770((byte *)((~uVar5 - 1) + param_4),(int *)0x0,10);
  DAT_00802a3c = DAT_00802a3c + 1;
  if (DAT_00802a58 != (void *)0x0) {
    thunk_FUN_00555040(DAT_00802a58,1,DAT_00802a3c,(char *)0x0);
  }
  iVar4 = thunk_FUN_0054cdd0(puVar3,*piVar2,(undefined4 *)0x0,(int *)0x0,param_1,0);
  if (param_1 != (int *)0x0) {
    FUN_006f20e0((uint *)&param_1);
  }
  return iVar4;
}

