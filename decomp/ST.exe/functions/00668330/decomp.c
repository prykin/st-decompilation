
undefined4 * __cdecl FUN_00668330(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    puVar2 = Library::DKW::LIB::FUN_006aac10(0x260);
    puVar5 = param_1;
    puVar6 = puVar2;
    for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar1 = 0;
    puVar2[5] = 0x260;
    *(undefined1 *)(puVar2 + 6) = 2;
    local_8 = puVar2;
    do {
      if (*(int *)(iVar1 + 0x1eb + (int)puVar2) != 0) {
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(iVar1 + 0x1ef + (int)puVar2) + 0x25f + (int)param_1))
        ;
        *(undefined4 *)(iVar1 + 0x1eb + (int)local_8) = uVar3;
        puVar2 = local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x54);
    if (*(int *)((int)puVar2 + 0x1eb) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      *(uint **)((int)local_8 + 0x1eb) = puVar4;
      puVar2 = local_8;
    }
    if (*(int *)((int)puVar2 + 0x203) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      *(uint **)((int)local_8 + 0x203) = puVar4;
      puVar2 = local_8;
    }
    if (*(int *)((int)puVar2 + 0x20f) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      *(uint **)((int)local_8 + 0x20f) = puVar4;
      puVar2 = local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x4e);
  return (undefined4 *)0x0;
}

