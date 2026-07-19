
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_event_d.cpp
   Diagnostic line evidence: 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl FUN_0065cb00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    local_8 = Library::DKW::LIB::FUN_006aac10(0x49f);
    puVar2 = param_1;
    puVar7 = local_8;
    for (iVar1 = 0x127; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar2;
    *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)puVar2 + 2);
    *(undefined4 *)((int)local_8 + 1) = 0x49f;
    *(undefined1 *)((int)local_8 + 5) = 2;
    iVar1 = *(int *)((int)local_8 + 0x47a);
    if ((int *)((int)local_8 + 0x46e) == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)local_8 + 0x46e) * 5;
    }
    puVar2 = Library::DKW::LIB::FUN_006aac10(uVar6);
    *(undefined4 **)((int)local_8 + 0x476) = puVar2;
    if ((int *)((int)local_8 + 0x46e) == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)local_8 + 0x46e) * 5;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x49e + (int)param_1);
    puVar7 = *(undefined4 **)((int)local_8 + 0x476);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)((int)local_8 + 0x466) + 0x49e + (int)param_1)
                        );
    *(undefined4 *)((int)local_8 + 0x462) = uVar3;
    puVar4 = Library::DKW::TBL::FUN_006c8680
                       ((uint *)0x0,(uint *)(*(int *)((int)local_8 + 0x45a) + 0x49e + (int)param_1))
    ;
    uVar6 = 0;
    *(uint **)((int)local_8 + 0x456) = puVar4;
    iVar1 = *(int *)((int)local_8 + 0x462);
    puVar2 = local_8;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar8 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar8) {
          iVar1 = *(int *)(iVar1 + 8) * uVar6 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0xf) != 0) {
          uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar1 + 0x13) + 0x49e + (int)param_1));
          *(undefined4 *)(iVar1 + 0xf) = uVar3;
          puVar2 = local_8;
        }
        iVar1 = *(int *)((int)puVar2 + 0x462);
        uVar6 = uVar6 + 1;
        bVar8 = uVar6 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar1 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0065d0f0((int *)&local_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_event_d_cpp_007d2b4c,0x4c);
  return (undefined4 *)0x0;
}

