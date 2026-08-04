
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_flt_d.cpp
   Diagnostic line evidence: 78 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STAllocationRecordApplier] Consumer-local packed record
   /SubmarineTitans/Recovered/AllocationRecords/AllocationRecord_00668330.
   Evidence: exact 608-byte source-parameter copy at 00668382 */

AllocationRecord_00668330 * __cdecl FUN_00668330(AllocationRecord_00668330 *param_1)

{
  int iVar1;
  AllocationRecord_00668330 *pAVar2;
  undefined4 uVar3;
  DArrayTy *pDVar4;
  AllocationRecord_00668330 *pAVar5;
  AllocationRecord_00668330 *pAVar6;
  InternalExceptionFrame local_4c;
  AnonShape_00668330_F270680B *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    pAVar2 = Library::DKW::LIB::MemAllocClear(0x260);
    pAVar5 = param_1;
    pAVar6 = pAVar2;
    for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar6 = *(undefined4 *)pAVar5;
      pAVar5 = (AllocationRecord_00668330 *)&pAVar5->field_0x4;
      pAVar6 = (AllocationRecord_00668330 *)&pAVar6->field_0x4;
    }
    iVar1 = 0;
    pAVar2->field_0014 = 0x260;
    pAVar2->field_0018 = 2;
    local_8 = (AnonShape_00668330_F270680B *)pAVar2;
    do {
      if (*(int *)((int)&pAVar2->field_01EB + iVar1) != 0) {
        uVar3 = FUN_006b0060(nullptr,
                             (uint *)(&param_1->field_0x25f + *(int *)(&pAVar2->field_0x1ef + iVar1)
                                     ));
        *(undefined4 *)((int)&local_8->field_01EB + iVar1) = uVar3;
        pAVar2 = (AllocationRecord_00668330 *)local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x54);
    if (pAVar2->field_01EB == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x2c,10);
      local_8->field_01EB = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00668330 *)local_8;
    }
    if (pAVar2->field_0203 == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
      local_8->field_0203 = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00668330 *)local_8;
    }
    if (pAVar2->field_020F == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0xc,10);
      local_8->field_020F = &pDVar4->flags;
      pAVar2 = (AllocationRecord_00668330 *)local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return pAVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006686c0((int *)&local_8);
  RaiseInternalException(iVar1,0,"E:\\__titans\\ai\\ai_flt_d.cpp",0x4e);
  return nullptr;
}

