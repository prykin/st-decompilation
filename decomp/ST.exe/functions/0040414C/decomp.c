
int __cdecl thunk_FUN_006a1370(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_5 = 0;
  *(undefined2 *)(param_5 + 1) = 0;
  iVar2 = param_4;
  if (param_4 < 6) {
    puVar3 = (undefined4 *)
             ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
    while( true ) {
      uVar1 = *(ushort *)(puVar3 + 1);
      if ((uVar1 & 0xf00) != 0) break;
      iVar2 = iVar2 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + *param_1 * param_1[1] * 6);
      if (5 < iVar2) {
        return param_4;
      }
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *puVar3;
      *(ushort *)(param_5 + 1) = uVar1;
    }
  }
  return iVar2;
}

