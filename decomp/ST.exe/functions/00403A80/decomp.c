
undefined4 thunk_FUN_00423b50(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  void *pvStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_c = *(uint *)(param_1 + 0xc);
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  uVar2 = uStack_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0xf8,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7a50a4,0xf9);
    return 0xffffffff;
  }
  if (uStack_c == 0) {
    return 0;
  }
  uVar7 = 0;
  if (uStack_c != 0) {
    uVar6 = 0;
    do {
      FUN_006acc70(param_1,uVar6,&uStack_8);
      thunk_FUN_00423850(pvStack_10,uStack_8,param_2);
      uVar7 = uVar7 + 1;
      uVar6 = uVar7 & 0xffff;
    } while (uVar6 < uVar2);
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  return 0;
}

