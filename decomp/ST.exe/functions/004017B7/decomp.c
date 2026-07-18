
uint thunk_FUN_006099e0(uint param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 auStack_90 [15];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    uVar6 = uStack_8;
    if (0 < (int)uStack_8) {
      do {
        FUN_006ae110(*(byte **)(iStack_c + 0x234));
        uVar6 = uVar6 - 1;
        *(undefined4 *)(iStack_c + 0x234) = 0;
      } while (uVar6 != 0);
    }
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_field_cpp_007cf850,0x1e5,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7cf850,0x1e7);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if (*(int *)(iStack_c + 0x234) == 0) {
    puVar3 = FUN_006ae290((uint *)0x0,param_1,0x40,10);
    *(uint **)(iStack_c + 0x234) = puVar3;
  }
  if ((*(int *)(iStack_c + 0x234) != 0) && (param_1 != 0)) {
    puVar5 = auStack_90;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uStack_54 = 0xffffffff;
    if (0 < (int)param_1) {
      do {
        uStack_8 = FUN_006ae1c0(*(uint **)(iStack_c + 0x234),auStack_90);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (-1 < (int)uStack_8) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return uStack_8 + 1;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return uStack_8;
}

