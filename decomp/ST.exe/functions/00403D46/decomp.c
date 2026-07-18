
uint * __thiscall STGroupC::GetTOBJList(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined4 extraout_EDX;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  STGroupC *pSStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pSStack_10 = this;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    puStack_c = FUN_006ae290((uint *)0x0,0,2,1);
    pSVar2 = pSStack_10;
    uVar7 = 0;
    iStack_14 = *(int *)(*(int *)(pSStack_10 + 0x29) + 0xc);
    if (0 < iStack_14) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar7,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),
                                             uStack_8,1);
          if (piVar4 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a50a4,0x81);
          }
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          if (iVar3 == param_1) {
            FUN_006ae1c0(puStack_c,&uStack_8);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iStack_14);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return puStack_c;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar5 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x86,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    puVar6 = (uint *)(*pcVar1)();
    return puVar6;
  }
  FUN_006a5e40(iVar3,0,0x7a50a4,0x87);
  return puStack_c;
}

