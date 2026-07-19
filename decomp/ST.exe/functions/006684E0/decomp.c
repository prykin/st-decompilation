
undefined4 * __cdecl FUN_006684e0(undefined4 *param_1,uint *param_2)

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
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = 7;
    piVar6 = (int *)((int)param_1 + 0x1eb);
    do {
      iVar5 = *piVar6;
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + 0xc) * *(int *)(iVar5 + 8) + 0x1c;
        local_c = local_c + iVar5;
        piVar6[2] = iVar5;
      }
      piVar6 = piVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *param_2 = local_c + 0x260U;
    puVar4 = Library::DKW::LIB::FUN_006aac10(local_c + 0x260U);
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
    local_8 = puVar4;
    do {
      puVar1 = *(uint **)(iVar3 + 0x1eb + (int)puVar4);
      if (puVar1 != (uint *)0x0) {
        FUN_006affc0(puVar1,puVar8,&local_c);
        *(int *)(iVar3 + 0x1ef + (int)local_8) = (int)puVar8 + (-0x25f - (int)local_8);
        puVar8 = (uint *)((int)puVar8 + *(int *)(iVar3 + 499 + (int)local_8));
        puVar4 = local_8;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x54);
    g_currentExceptionFrame = local_50.previous;
    return puVar4;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x75,0,iVar3,&DAT_007a4ccc,
                             s_FltDataPack_007d2ce4);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  }
  RaiseInternalException(iVar3,0,s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x76);
  return (undefined4 *)0x0;
}

