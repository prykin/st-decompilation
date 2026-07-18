
uint thunk_FUN_0062d910(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                       int param_5,undefined2 param_6,int *param_7)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_7c;
  undefined4 auStack_78 [16];
  int iStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  *param_7 = 0;
  uStack_10 = 0xffffffff;
  uStack_7c = DAT_00858df8;
  DAT_00858df8 = &uStack_7c;
  iVar2 = __setjmp3(auStack_78,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_7c;
    iVar6 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x1c8,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7d13ec,0x1ca);
    return 0xffff;
  }
  iVar2 = *(int *)(iStack_8 + 0x50 + param_1 * 4);
  if (iVar2 == 0) {
    puVar3 = FUN_006ae290((uint *)0x0,10,0x28,10);
    *(uint **)(iStack_8 + 0x50 + param_1 * 4) = puVar3;
  }
  else {
    iStack_c = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (0 < iStack_c) {
      do {
        iVar2 = *(int *)(iStack_8 + 0x50 + param_1 * 4);
        if (uVar5 < *(uint *)(iVar2 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c));
        }
        else {
          piVar4 = (int *)0x0;
        }
        if ((piVar4 != (int *)0x0) && (*piVar4 == param_5)) {
          piVar4[3] = 0;
          *(undefined2 *)(piVar4 + 1) = param_6;
          *(undefined2 *)((int)piVar4 + 6) = param_2;
          *(undefined2 *)(piVar4 + 2) = param_3;
          *(undefined2 *)((int)piVar4 + 10) = param_4;
          piVar4[8] = 0;
          *param_7 = 1;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iStack_c);
    }
  }
  puVar3 = *(uint **)(iStack_8 + 0x50 + param_1 * 4);
  if ((puVar3 != (uint *)0x0) && (*param_7 == 0)) {
    piVar4 = &iStack_38;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    uStack_34 = param_6;
    iStack_38 = param_5;
    uStack_30 = param_3;
    uStack_32 = param_2;
    uStack_2e = param_4;
    uStack_2c = 0;
    uStack_18 = 0;
    uVar5 = FUN_006ae1c0(puVar3,&iStack_38);
    DAT_00858df8 = (undefined4 *)uStack_7c;
    return uVar5;
  }
  DAT_00858df8 = (undefined4 *)uStack_7c;
  return uStack_10;
}

