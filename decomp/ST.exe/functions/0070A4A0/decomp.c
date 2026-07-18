
undefined4 __cdecl FUN_0070a4a0(int param_1,char param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 local_78;
  undefined4 local_74 [16];
  char local_34;
  uint auStack_33 [10];
  uint local_b;
  
  local_78 = DAT_00858df8;
  DAT_00858df8 = &local_78;
  iVar3 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_78;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_mfrload_cpp_007eff5c,0x1c1,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7eff5c,0x1c3);
    return 0;
  }
  if (((param_1 != 0) && (iVar3 = *(int *)(param_1 + 4), iVar3 != 0)) &&
     (*(int *)(iVar3 + 0xc) != 0)) {
    uVar6 = 0;
    do {
      FUN_006acc70(iVar3,uVar6,(undefined4 *)&local_34);
      if ((param_2 == local_34) || (param_2 == -1)) {
        bVar2 = FUN_0070a460(auStack_33,param_3);
        if (CONCAT31(extraout_var,bVar2) == 0) goto LAB_0070a537;
        if (local_b != 0) {
          FUN_00709a10(param_1,(char)_local_34,&local_b);
        }
        FUN_006b0c70(*(int *)(param_1 + 4),uVar6);
      }
      else {
LAB_0070a537:
        uVar6 = uVar6 + 1;
      }
      iVar3 = *(int *)(param_1 + 4);
    } while (uVar6 < *(uint *)(iVar3 + 0xc));
  }
  DAT_00858df8 = (undefined4 *)local_78;
  return 1;
}

