
undefined4 * __cdecl thunk_FUN_006684e0(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = 7;
    piVar6 = (int *)((int)param_1 + 0x1eb);
    do {
      iVar5 = *piVar6;
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + 0xc) * *(int *)(iVar5 + 8) + 0x1c;
        iStack_c = iStack_c + iVar5;
        piVar6[2] = iVar5;
      }
      piVar6 = piVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *param_2 = iStack_c + 0x260U;
    puVar4 = FUN_006aac10(iStack_c + 0x260U);
    puVar7 = puVar4;
    for (iVar3 = 0x98; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *param_1;
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar3 = 0;
    puVar4[5] = *param_2;
    *(undefined1 *)(puVar4 + 6) = 0;
    puVar8 = (uint *)((int)puVar4 + 0x25f);
    puStack_8 = puVar4;
    do {
      puVar1 = *(uint **)(iVar3 + 0x1eb + (int)puVar4);
      if (puVar1 != (uint *)0x0) {
        FUN_006affc0(puVar1,puVar8,&iStack_c);
        *(int *)(iVar3 + 0x1ef + (int)puStack_8) = (int)puVar8 + (-0x25f - (int)puStack_8);
        puVar8 = (uint *)((int)puVar8 + *(int *)(iVar3 + 499 + (int)puStack_8));
        puVar4 = puStack_8;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x54);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return puVar4;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_006ab060(&puStack_8);
  }
  iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x75,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  }
  FUN_006a5e40(iVar3,0,0x7d2cc0,0x76);
  return (undefined4 *)0x0;
}

