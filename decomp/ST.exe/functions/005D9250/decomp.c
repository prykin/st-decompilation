
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation */

void __thiscall SIDTy::PaintExplanation(SIDTy *this)

{
  AnonPointee_SIDTy_1CC0 *pAVar1;
  code *pcVar2;
  SIDTy *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_EAX;
  uint *extraout_EAX_00;
  uint uVar6;
  ccFntTy *this_00;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    FUN_006b4170((AnonShape_006C7610_838EDECF *)local_8->field_1CB8,0,0,0x7d,
                 local_8->field_1CC0->field_0004,local_8->field_1CC0->field_0008,0xff);
    pAVar1 = pSVar3->field_1CC0;
    uVar7 = pAVar1->field_0014;
    if (uVar7 == 0) {
      uVar7 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar1->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)pSVar3->field_1CC0,0,0,0,0,0);
    if (pSVar3->field_1A5F == '\0') {
      iVar11 = -1;
      iVar10 = -1;
      uVar7 = 0;
      iVar9 = -1;
      iVar4 = -2;
      LoadResourceString(0x2521,HINSTANCE_00807618);
      this_00 = PTR_0081176c->field_0034;
      puVar8 = extraout_EAX_00;
    }
    else {
      puVar5 = &DAT_00807ddd;
      puVar8 = (uint *)&pSVar3->field_1CD4;
      LoadResourceString(0x2520,HINSTANCE_00807618);
      wsprintfA((LPSTR)puVar8,s__0_s__5_s_0__007cd6c4,extraout_EAX,puVar5);
      this_00 = PTR_0081176c->field_0034;
      iVar11 = -1;
      iVar10 = -1;
      uVar7 = 0;
      iVar9 = -1;
      iVar4 = -2;
    }
    ccFntTy::WrTxt(this_00,puVar8,iVar4,iVar9,uVar7,iVar10,iVar11);
    FUN_006b5440((int)pSVar3->field_1CB8,0,0,0x7d,(int)pSVar3->field_1CC0,0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b,0,iVar4,&DAT_007a4ccc,
                             s_SIDTy__PaintExplanation_007cd6a8);
  if (iVar9 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b);
  return;
}

