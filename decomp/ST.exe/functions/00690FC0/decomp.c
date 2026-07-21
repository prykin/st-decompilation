
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_tact_d.cpp
   Diagnostic line evidence: 81 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl FUN_00690fc0(undefined4 *param_1)

{
  int iVar1;
  AnonShape_00690FC0_955C4112 *pAVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  AnonShape_00690FC0_955C4112 *pAVar6;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined4 *local_c;
  AnonShape_00690FC0_955C4112 *local_8;

  local_8 = (AnonShape_00690FC0_955C4112 *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar2 = (AnonShape_00690FC0_955C4112 *)Library::DKW::LIB::FUN_006aac10(0x10c);
    puVar5 = param_1;
    pAVar6 = pAVar2;
    for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      pAVar6 = (AnonShape_00690FC0_955C4112 *)&pAVar6->field_0x4;
    }
    iVar1 = 0;
    *(undefined4 *)&pAVar2->field_0x14 = 0x10c;
    pAVar2->field_0x18 = 2;
    local_8 = pAVar2;
    do {
      if (*(int *)((int)&pAVar2->field_0085 + iVar1) != 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(&pAVar2->field_0x89 + iVar1) + 0x10b + (int)param_1))
        ;
        *(undefined4 *)((int)&local_8->field_0085 + iVar1) = uVar3;
        pAVar2 = local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x60);
    if (pAVar2->field_0085 == (uint *)0x0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,8,10);
      local_8->field_0085 = puVar4;
      pAVar2 = local_8;
    }
    if (0 < pAVar2->field_0105) {
      pAVar2->field_0085[3] = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x107) + 0x10b + (int)param_1);
      iVar1 = 0;
      pAVar2 = local_8;
      if (0 < local_8->field_0105) {
        do {
          local_10 = 0;
          local_c = (undefined4 *)0x0;
          local_c = thunk_FUN_00668330(puVar5);
          if (local_c == (undefined4 *)0x0) {
            local_c = (undefined4 *)0x0;
          }
          else {
            local_c = local_c + -8;
          }
          Library::DKW::TBL::FUN_006ae1c0(local_8->field_0085,&local_10);
          puVar5 = (undefined4 *)((int)puVar5 + puVar5[5]);
          iVar1 = iVar1 + 1;
          pAVar2 = local_8;
        } while (iVar1 < local_8->field_0105);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    return (undefined4 *)pAVar2;
  }
  g_currentExceptionFrame = local_54.previous;
  thunk_FUN_00691540((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_tact_d.cpp",0x51);
  return (undefined4 *)0x0;
}

