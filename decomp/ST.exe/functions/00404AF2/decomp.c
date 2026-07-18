
uint thunk_FUN_0062cf90(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar7;
  undefined4 uStack_74;
  undefined4 auStack_70 [16];
  int aiStack_30 [4];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_10;
  int iStack_c;
  int *piStack_8;
  
  uStack_10 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  piStack_8 = param_1;
  uStack_74 = DAT_00858df8;
  DAT_00858df8 = &uStack_74;
  iVar3 = __setjmp3(auStack_70,0,unaff_EDI,unaff_ESI);
  piVar2 = piStack_8;
  if (iVar3 == 0) {
    if (*(int *)(iStack_c + 0x30 + *piStack_8 * 4) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x20,10);
      *(uint **)(iStack_c + 0x30 + *piVar2 * 4) = puVar4;
    }
    if (*(int *)(iStack_c + 0x30 + *piVar2 * 4) != 0) {
      piVar7 = aiStack_30;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      iStack_20 = piVar2[4];
      iStack_18 = piVar2[6];
      iStack_1c = piVar2[5];
      aiStack_30[1] = piVar2[1];
      aiStack_30[2] = piVar2[2];
      aiStack_30[3] = piVar2[3];
      uVar5 = FUN_006ae1c0(*(uint **)(iStack_c + 0x30 + *piVar2 * 4),aiStack_30);
      DAT_00858df8 = (undefined4 *)uStack_74;
      return uVar5;
    }
    DAT_00858df8 = (undefined4 *)uStack_74;
    return uStack_10;
  }
  DAT_00858df8 = (undefined4 *)uStack_74;
  iVar6 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x86,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7d13ec,0x88);
  return 0xffff;
}

