
undefined4 * __cdecl thunk_FUN_00690fc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame IStack_54;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  iVar1 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    puVar2 = FUN_006aac10(0x10c);
    puVar5 = param_1;
    puVar6 = puVar2;
    for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar1 = 0;
    puVar2[5] = 0x10c;
    *(undefined1 *)(puVar2 + 6) = 2;
    puStack_8 = puVar2;
    do {
      if (*(int *)(iVar1 + 0x85 + (int)puVar2) != 0) {
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(iVar1 + 0x89 + (int)puVar2) + 0x10b + (int)param_1));
        *(undefined4 *)(iVar1 + 0x85 + (int)puStack_8) = uVar3;
        puVar2 = puStack_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x60);
    if (*(int *)((int)puVar2 + 0x85) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)((int)puStack_8 + 0x85) = puVar4;
      puVar2 = puStack_8;
    }
    if (0 < *(short *)((int)puVar2 + 0x105)) {
      *(undefined4 *)(*(int *)((int)puVar2 + 0x85) + 0xc) = 0;
      puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x107) + 0x10b + (int)param_1);
      iVar1 = 0;
      puVar2 = puStack_8;
      if (0 < *(short *)((int)puStack_8 + 0x105)) {
        do {
          uStack_10 = 0;
          puStack_c = (undefined4 *)0x0;
          puStack_c = thunk_FUN_00668330(puVar5);
          if (puStack_c == (undefined4 *)0x0) {
            puStack_c = (undefined4 *)0x0;
          }
          else {
            puStack_c = puStack_c + -8;
          }
          FUN_006ae1c0(*(uint **)((int)puStack_8 + 0x85),&uStack_10);
          puVar5 = (undefined4 *)((int)puVar5 + puVar5[5]);
          iVar1 = iVar1 + 1;
          puVar2 = puStack_8;
        } while (iVar1 < *(short *)((int)puStack_8 + 0x105));
      }
    }
    g_currentExceptionFrame = IStack_54.previous;
    return puVar2;
  }
  g_currentExceptionFrame = IStack_54.previous;
  thunk_FUN_00691540((int *)&puStack_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_tact_d_cpp_007d58fc,0x51);
  return (undefined4 *)0x0;
}

