
uint __thiscall STTmMineC::CreatePart(STTmMineC *this,uint param_1)

{
  code *pcVar1;
  STTmMineC *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 auStack_8c [15];
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  STTmMineC *pSStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pSStack_c = this;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar5 = FUN_006ad4d0(s_E____titans_nick_to_TmMin_cpp_007d209c,0x4a6,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7d209c,0x4a8);
    return 0xffff;
  }
  if (*(int *)(pSStack_c + 0x336) == 0) {
    puVar4 = FUN_006ae290((uint *)0x0,param_1,0x3c,10);
    *(uint **)(pSVar2 + 0x336) = puVar4;
    if (puVar4 == (uint *)0x0) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uStack_8;
    }
  }
  if (param_1 != 0) {
    uVar6 = 0;
    puVar7 = auStack_8c;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if (0 < (int)param_1) {
      do {
        uStack_8 = FUN_006ae1c0(*(uint **)(pSVar2 + 0x336),auStack_8c);
        iVar3 = *(int *)(pSVar2 + 0x336);
        if (uVar6 < *(uint *)(iVar3 + 0xc)) {
          iVar3 = *(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)param_1);
    }
    if (-1 < (int)uStack_8) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uStack_8 + 1;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return uStack_8;
}

