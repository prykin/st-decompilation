
undefined4 * __cdecl FUN_0067d1d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    local_8 = Library::DKW::LIB::FUN_006aac10(299);
    puVar2 = param_1;
    puVar5 = local_8;
    for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
    *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar2 + 2);
    local_8[5] = 299;
    *(undefined1 *)(local_8 + 6) = 2;
    puVar2 = thunk_FUN_0065cb00((undefined4 *)(*(int *)((int)local_8 + 0xfe) + 0x12a + (int)param_1)
                               );
    iVar1 = 0;
    *(undefined4 **)((int)local_8 + 0x106) = puVar2;
    puVar2 = local_8;
    do {
      if (*(int *)(iVar1 + 0xc2 + (int)puVar2) != 0) {
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(iVar1 + 0xc6 + (int)puVar2) + 0x12a + (int)param_1));
        *(undefined4 *)(iVar1 + 0xc2 + (int)local_8) = uVar3;
        puVar2 = local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x3c);
    if (*(int *)((int)puVar2 + 0xc2) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x10,5);
      *(uint **)((int)local_8 + 0xc2) = puVar4;
      puVar2 = local_8;
    }
    iVar1 = *(int *)((int)puVar2 + 0xc2);
    uVar6 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar7 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar7) {
          puVar5 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar6 + *(int *)(iVar1 + 0x1c));
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5[1] == 0) {
          puVar2 = thunk_FUN_00690fc0((undefined4 *)(puVar5[2] + 0x12a + (int)param_1));
          *puVar5 = puVar2;
          puVar2 = local_8;
        }
        iVar1 = *(int *)((int)puVar2 + 0xc2);
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar1 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x77);
  return (undefined4 *)0x0;
}

