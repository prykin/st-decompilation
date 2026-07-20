
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation */

void __thiscall SIDTy::PaintExplanation(SIDTy *this)

{
  code *pcVar1;
  SIDTy *pSVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  ccFntTy *this_00;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b4170(local_8->field_1CB8,0,0,0x7d,*(int *)(local_8->field_1CC0 + 4),
                 *(int *)(local_8->field_1CC0 + 8),0xff);
    iVar3 = pSVar2->field_1CC0;
    uVar8 = *(uint *)(iVar3 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),pSVar2->field_1CC0,0,0,0,0,0);
    if (pSVar2->field_1A5F == '\0') {
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar3 = -2;
      puVar6 = (uint *)FUN_006b0140(0x2521,HINSTANCE_00807618);
      this_00 = *(ccFntTy **)(DAT_0081176c + 0x34);
    }
    else {
      puVar4 = &DAT_00807ddd;
      puVar6 = (uint *)&pSVar2->field_1CD4;
      uVar5 = FUN_006b0140(0x2520,HINSTANCE_00807618);
      wsprintfA((LPSTR)puVar6,s__0_s__5_s_0__007cd6c4,uVar5,puVar4);
      this_00 = *(ccFntTy **)(DAT_0081176c + 0x34);
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar3 = -2;
    }
    ccFntTy::WrTxt(this_00,puVar6,iVar3,iVar9,uVar8,iVar10,iVar11);
    FUN_006b5440(pSVar2->field_1CB8,0,0,0x7d,pSVar2->field_1CC0,0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b,0,iVar3,&DAT_007a4ccc,
                             s_SIDTy__PaintExplanation_007cd6a8);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b);
  return;
}

