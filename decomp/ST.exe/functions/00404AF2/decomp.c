
uint __thiscall STManRub3C::AddNewRub3(STManRub3C *this,int *param_1)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  undefined4 uStack_74;
  undefined4 auStack_70 [16];
  int aiStack_30 [4];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_10;
  STManRub3C *pSStack_c;
  int *piStack_8;
  
  uStack_10 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  piStack_8 = param_1;
  uStack_74 = DAT_00858df8;
  DAT_00858df8 = &uStack_74;
  pSStack_c = this;
  iVar4 = __setjmp3(auStack_70,0,unaff_EDI,unaff_ESI);
  piVar3 = piStack_8;
  pSVar2 = pSStack_c;
  if (iVar4 == 0) {
    if (*(int *)(pSStack_c + *piStack_8 * 4 + 0x30) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,0x20,10);
      *(uint **)(pSVar2 + *piVar3 * 4 + 0x30) = puVar5;
    }
    if (*(int *)(pSVar2 + *piVar3 * 4 + 0x30) != 0) {
      piVar8 = aiStack_30;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      iStack_20 = piVar3[4];
      iStack_18 = piVar3[6];
      iStack_1c = piVar3[5];
      aiStack_30[1] = piVar3[1];
      aiStack_30[2] = piVar3[2];
      aiStack_30[3] = piVar3[3];
      uVar6 = FUN_006ae1c0(*(uint **)(pSVar2 + *piVar3 * 4 + 0x30),aiStack_30);
      DAT_00858df8 = (undefined4 *)uStack_74;
      return uVar6;
    }
    DAT_00858df8 = (undefined4 *)uStack_74;
    return uStack_10;
  }
  DAT_00858df8 = (undefined4 *)uStack_74;
  iVar7 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x86,0,iVar4,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar4,0,0x7d13ec,0x88);
  return 0xffff;
}

