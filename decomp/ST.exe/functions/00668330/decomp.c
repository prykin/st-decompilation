
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 78 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl FUN_00668330(undefined4 *param_1)

{
  int iVar1;
  AnonShape_00668330_F270680B *pAVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  AnonShape_00668330_F270680B *pAVar6;
  InternalExceptionFrame local_4c;
  AnonShape_00668330_F270680B *local_8;

  local_8 = (AnonShape_00668330_F270680B *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar2 = (AnonShape_00668330_F270680B *)Library::DKW::LIB::FUN_006aac10(0x260);
    puVar5 = param_1;
    pAVar6 = pAVar2;
    for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      pAVar6 = (AnonShape_00668330_F270680B *)&pAVar6->field_0x4;
    }
    iVar1 = 0;
    *(undefined4 *)&pAVar2->field_0x14 = 0x260;
    pAVar2->field_0x18 = 2;
    local_8 = pAVar2;
    do {
      if (*(int *)((int)&pAVar2->field_01EB + iVar1) != 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(&pAVar2->field_0x1ef + iVar1) + 0x25f + (int)param_1)
                            );
        *(undefined4 *)((int)&local_8->field_01EB + iVar1) = uVar3;
        pAVar2 = local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x54);
    if (pAVar2->field_01EB == (uint *)0x0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x2c,10);
      local_8->field_01EB = puVar4;
      pAVar2 = local_8;
    }
    if (pAVar2->field_0203 == (uint *)0x0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
      local_8->field_0203 = puVar4;
      pAVar2 = local_8;
    }
    if (pAVar2->field_020F == (uint *)0x0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
      local_8->field_020F = puVar4;
      pAVar2 = local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pAVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_flt_d_cpp_007d2cc0,0x4e);
  return (undefined4 *)0x0;
}

