
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint * FUN_0065f840(AnonNested_005F5B80_0169_794156D7 *param_1,uint param_2,int param_3)

{
  int iVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  DArrayTy *local_8;
  
  local_8 = (DArrayTy *)0x0;
  if ((((param_1 != (AnonNested_005F5B80_0169_794156D7 *)0x0) && (param_1->field_000C != 0)) &&
      ((int)param_2 < (int)param_1->field_000C)) && (0 < param_3)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar1 != 0) {
      g_currentExceptionFrame = local_54.previous;
      if (local_8 != (DArrayTy *)0x0) {
        DArrayDestroy(local_8);
      }
      return (uint *)0x0;
    }
    pDVar2 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,6,5);
    uVar3 = param_1->field_000C;
    uVar5 = param_2;
    local_8 = pDVar2;
    if ((int)param_2 < (int)uVar3) {
      do {
        if (param_3 <= (int)(uVar5 - param_2)) {
          g_currentExceptionFrame = local_54.previous;
          return &pDVar2->flags;
        }
        if (uVar5 < uVar3) {
          puVar4 = (undefined4 *)(param_1->field_0008 * uVar5 + param_1->field_001C);
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        local_10 = *puVar4;
        local_c = *(undefined2 *)(puVar4 + 1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar2,&local_10);
        uVar3 = param_1->field_000C;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar3);
    }
    g_currentExceptionFrame = local_54.previous;
    return &pDVar2->flags;
  }
  return (uint *)0x0;
}

