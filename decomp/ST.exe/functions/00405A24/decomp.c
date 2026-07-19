
undefined4 * __cdecl
thunk_FUN_00648620(undefined4 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  int iStack_8;
  
  iStack_8 = 0;
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    *param_4 = param_3 + 0x85U;
    puVar3 = Library::DKW::LIB::FUN_006aac10(param_3 + 0x85U);
    puVar5 = puVar3;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    *(uint *)((int)puVar3 + 1) = *param_4;
    *(int *)((int)puVar3 + 0x4a) = param_3;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    uVar7 = *(uint *)((int)puVar3 + 0x4a);
    puVar5 = puVar3 + 0x21;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined1 **)((int)puVar3 + 0x46) =
         (undefined1 *)((int)(puVar3 + 0x21) + (-0x84 - (int)puVar3));
    g_currentExceptionFrame = IStack_4c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  if (iStack_8 != 0) {
    FUN_006ab060(&iStack_8);
  }
  iVar4 = ReportDebugMessage(s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x6b,0,iVar2,&DAT_007a4ccc,
                             s_BossDataPack_007d2818);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x6c);
  return (undefined4 *)0x0;
}

