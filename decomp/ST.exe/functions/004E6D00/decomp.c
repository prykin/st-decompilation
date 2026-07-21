
void FUN_004e6d00(int param_1,int param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  puVar6 = param_3;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  uVar3 = GetPlayerRaceId((char)param_1);
  iVar5 = thunk_FUN_004e6c20(param_1,param_2);
  if (iVar5 == 0) {
    iVar7 = 1;
    iVar5 = param_2 + -0x32 + ((uVar3 & 0xff) - 1) * 0x42;
    cVar1 = (&DAT_007c0e4d)[iVar5 * 3];
    while ((cVar1 != '\0' && (iVar7 < 3))) {
      iVar4 = thunk_FUN_004e60d0(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar7 + iVar5 * 3]);
      if (iVar4 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0e4c)[iVar7 + iVar5 * 3];
        iVar4 = GetPlayerRaceId((char)param_1);
        *(char *)(param_3 + 1) = (char)iVar4;
        bVar2 = thunk_FUN_004e5c40(param_1,*param_3);
        *(bool *)((int)param_3 + 5) = bVar2;
        param_3 = (uint *)((int)param_3 + 6);
      }
      iVar7 = iVar7 + 1;
      cVar1 = (&DAT_007c0e4c)[iVar7 + iVar5 * 3];
    }
  }
  return;
}

