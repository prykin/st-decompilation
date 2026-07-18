
int __cdecl
FUN_007192d0(undefined4 *param_1,undefined4 *param_2,uint param_3,UINT param_4,int param_5,
            int param_6)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  DWORD *pDVar6;
  undefined4 local_450 [256];
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  DWORD local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_c = iVar2;
    local_8 = timeGetTime();
    pDVar6 = &local_8;
    DVar3 = timeGetTime();
    iVar2 = FUN_00719190(param_1,param_2,param_3,param_4,param_5,&local_c,param_6,DVar3,pDVar6);
    while (iVar2 == 0) {
      pDVar6 = &local_8;
      DVar3 = timeGetTime();
      iVar2 = FUN_00719190(param_1,param_2,param_3,param_4,param_5,&local_c,param_6,DVar3,pDVar6);
    }
    puVar5 = local_450;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_006b08f0(param_1,(int)local_450,param_3,param_4);
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Palette_cpp_007f0718,399,0,iVar2,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar2,0,0x7f0718,400);
    return iVar2;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

