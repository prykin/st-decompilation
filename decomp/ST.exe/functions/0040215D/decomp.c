
int thunk_FUN_0065d2a0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int *piVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (iStack_c == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)(iStack_c + 0x20);
    }
    puVar6 = param_1;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    piVar1 = (int *)(iStack_c + 0x20b);
    *(undefined4 *)(iStack_c + 0x20) = 900;
    *(undefined1 *)(iStack_c + 0x38) = 1;
    iStack_8 = 7;
    piVar7 = piVar1;
    do {
      if (*piVar7 != 0) {
        iVar3 = FUN_006b0060((uint *)0x0,(uint *)(piVar7[1] + 0x25f + (int)param_1));
        *piVar7 = iVar3;
      }
      piVar7 = piVar7 + 3;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    if (*piVar1 == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x2c,10);
      *piVar1 = (int)puVar4;
    }
    if (*(int *)(iStack_c + 0x217) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,0x14,0x34,10);
      *(uint **)(iStack_c + 0x217) = puVar4;
    }
    if (*(int *)(iStack_c + 0x223) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)(iStack_c + 0x223) = puVar4;
    }
    if (*(int *)(iStack_c + 0x22f) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)(iStack_c + 0x22f) = puVar4;
    }
    if (*(int *)(iStack_c + 0x23b) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,4,10);
      *(uint **)(iStack_c + 0x23b) = puVar4;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  thunk_FUN_0065d480(iStack_c);
  iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_flt_cpp_007d2b80,0x31,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7d2b80,0x32);
  return iVar3;
}

