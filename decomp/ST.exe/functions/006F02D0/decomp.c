
undefined4 __cdecl FUN_006f02d0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = param_2 - param_5;
  iVar2 = param_3 - param_5;
  do {
    if (param_3 + param_5 < iVar2) {
      return 1;
    }
    if (iVar4 <= param_2 + param_5) {
      puVar3 = (ushort *)
               ((int)param_1 + ((param_1[1] * param_4 + iVar2) * *param_1 + 2 + iVar4) * 6);
      iVar5 = iVar4;
      do {
        uVar1 = *puVar3;
        if (uVar1 == 0) {
          return 0;
        }
        if ((uVar1 & 0x2000) == 0) {
          return 0;
        }
        if ((uVar1 & 0xf) != 0) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 3;
      } while (iVar5 <= param_2 + param_5);
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

