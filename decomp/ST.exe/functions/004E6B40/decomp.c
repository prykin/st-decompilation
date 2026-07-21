
void FUN_004e6b40(int param_1,int param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  puVar6 = param_3;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  iVar5 = thunk_FUN_004e6a80(param_1,param_2);
  if (iVar5 == 0) {
    cVar1 = (&DAT_007c0dd2)[param_2 * 3];
    for (iVar5 = 1; (cVar1 != '\0' && (iVar5 < 3)); iVar5 = iVar5 + 1) {
      iVar2 = param_2 * 3;
      iVar4 = thunk_FUN_004e60d0(param_1,(uint)(byte)(&DAT_007c0dd1)[iVar5 + iVar2]);
      if (iVar4 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0dd1)[iVar5 + iVar2];
        iVar4 = GetPlayerRaceId((char)param_1);
        *(char *)(param_3 + 1) = (char)iVar4;
        bVar3 = thunk_FUN_004e5c40(param_1,*param_3);
        *(bool *)((int)param_3 + 5) = bVar3;
        param_3 = (uint *)((int)param_3 + 6);
      }
      cVar1 = (&DAT_007c0dd2)[iVar5 + iVar2];
    }
  }
  return;
}

