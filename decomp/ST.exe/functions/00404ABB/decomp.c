
uint * thunk_FUN_0043e4e0(char param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_14 = *(int *)((int)&DAT_007f4e29 + param_1 * 0xa62);
  iStack_10 = *(int *)(iStack_14 + 0xc);
  uVar4 = thunk_FUN_0043e460(param_1);
  uStack_c = (uint)uVar4;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar5 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  uVar3 = uStack_c;
  if (iVar5 == 0) {
    puVar6 = FUN_006ae290((uint *)0x0,uStack_c,2,1);
    iVar8 = iStack_10;
    iVar5 = iStack_14;
    if ((uVar3 != 0) && (iStack_8 = 0, 0 < iStack_10)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar5 + 0x1c) + iStack_8 * 4);
        if ((piVar1 != (int *)0x0) && (iVar7 = (**(code **)(*piVar1 + 0xf8))(), iVar7 == 1)) {
          FUN_006ae1c0(puVar6,&iStack_8);
        }
        iStack_8 = iStack_8 + 1;
      } while (iStack_8 < iVar8);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return puVar6;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1f8c,0,iVar5,&DAT_007a4ccc);
  if (iVar8 == 0) {
    FUN_006a5e40(iVar5,0,0x7a6004,0x1f8d);
    return (uint *)0x0;
  }
  pcVar2 = (code *)swi(3);
  puVar6 = (uint *)(*pcVar2)();
  return puVar6;
}

