
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
  AnonShape_0065CB00_C527AFF0 *pAVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  InternalExceptionFrame local_4c;
  AnonShape_0065CB00_C527AFF0 *local_8;

  local_8 = (AnonShape_0065CB00_C527AFF0 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = (AnonShape_0065CB00_C527AFF0 *)Library::DKW::LIB::FUN_006aac10(0x49f);
    puVar2 = param_1;
    pAVar5 = local_8;
    for (iVar1 = 0x127; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      pAVar5 = (AnonShape_0065CB00_C527AFF0 *)((int)&pAVar5->field_0001 + 3);
    }
    *(undefined2 *)pAVar5 = *(undefined2 *)puVar2;
    *(undefined1 *)((int)&pAVar5->field_0001 + 1) = *(undefined1 *)((int)puVar2 + 2);
    local_8->field_0001 = 0x49f;
    local_8->field_0005 = 2;
    iVar1 = local_8->field_047A;
    if (&local_8->field_046E == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = local_8->field_046E * 5;
    }
    puVar2 = Library::DKW::LIB::FUN_006aac10(uVar7);
    local_8->field_0476 = puVar2;
    if (&local_8->field_046E == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = local_8->field_046E * 5;
    }
    puVar2 = (undefined4 *)(iVar1 + 0x49e + (int)param_1);
    puVar8 = local_8->field_0476;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar3 = FUN_006b0060((uint *)0x0,(uint *)(local_8->field_0466 + 0x49e + (int)param_1));
    local_8->field_0462 = uVar3;
    puVar4 = Library::DKW::TBL::FUN_006c8680
                       ((uint *)0x0,(uint *)(local_8->field_045A + 0x49e + (int)param_1));
    uVar7 = 0;
    local_8->field_0456 = puVar4;
    iVar1 = local_8->field_0462;
    pAVar5 = local_8;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar9 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar9) {
          iVar1 = *(int *)(iVar1 + 8) * uVar7 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0xf) != 0) {
          uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar1 + 0x13) + 0x49e + (int)param_1));
          *(undefined4 *)(iVar1 + 0xf) = uVar3;
          pAVar5 = local_8;
        }
        iVar1 = pAVar5->field_0462;
        uVar7 = uVar7 + 1;
        bVar9 = uVar7 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar7 < (int)*(uint *)(iVar1 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pAVar5;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0065d0f0((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_event_d.cpp",0x4c);
  return (undefined4 *)0x0;
}

