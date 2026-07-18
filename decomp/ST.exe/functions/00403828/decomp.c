
uint __thiscall STGroupC::GetTOBJQty(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  STGroupC *pSStack_10;
  uint uStack_c;
  int iStack_8;
  
  uVar6 = 0;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pSStack_10 = this;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_10;
  if (iVar3 == 0) {
    iStack_8 = 0;
    iStack_14 = *(int *)(*(int *)(pSStack_10 + 0x29) + 0xc);
    if (0 < iStack_14) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,&uStack_c);
        if ((short)uStack_c != -1) {
          piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),
                                             uStack_c,1);
          if (piVar4 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a50a4,0x66);
          }
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          if (iVar3 == param_1) {
            iStack_8 = iStack_8 + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iStack_14);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return CONCAT22((short)((uint)uStack_58 >> 0x10),(undefined2)iStack_8);
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar5 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x6b,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar3,0,0x7a50a4,0x6c);
  return CONCAT22(extraout_var,(undefined2)iStack_8);
}

