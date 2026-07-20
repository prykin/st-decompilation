
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DeleteCtrls */

void __thiscall PrividerTy::DeleteCtrls(PrividerTy *this,char param_1)

{
  code *pcVar1;
  PrividerTy *pPVar2;
  int iVar3;
  HoloTy *pHVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  InternalExceptionFrame local_50;
  PrividerTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x279,0,iVar3,&DAT_007a4ccc
                               ,s_PrividerTy__DeleteCtrls_007cce88);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x279);
    return;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  pPVar2 = local_c;
  if (param_1 != '\0') {
    if (local_c->field_1A73 != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_1A73);
    }
    pPVar2->field_1A73 = 0;
    pPVar2->field_1A61 = 0;
    FUN_006b5f80(DAT_008075a8,0x79,0x51,0x22e,0x145);
    if (pPVar2->field_1C96 != (HoloTy *)0x0) {
      HoloTy::Done(pPVar2->field_1C96);
      Library::MSVCRT::FUN_0072e2b0(pPVar2->field_1C96);
      pPVar2->field_1C96 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pPVar2->field_1C96 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar8 = HoloTy::Init(pPVar2->field_1C96,CASE_2,0x79,0x51,iVar3,iVar7,uVar8,cVar9,uVar10);
      if (uVar8 != 0) {
        pHVar4 = pPVar2->field_1C96;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar8 = pPVar2->field_1C96->field_0003;
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(pPVar2->field_1C96);
      }
      PutDDXClip(0x79,0x51,0x79,0x51,0x22e,(byte *)0x145,'\x01',
                 (BITMAPINFO *)PTR_0081176c->field_002C);
    }
    if (pPVar2->field_1A7B != 0xffffffff) {
      FUN_006b3af0((int *)pPVar2->field_1ABF,pPVar2->field_1A7B);
    }
    if (pPVar2->field_1B0C != 0xffffffff) {
      FUN_006b3af0((int *)pPVar2->field_1B50,pPVar2->field_1B0C);
    }
    if (pPVar2->field_1B9D != 0xffffffff) {
      FUN_006b3af0((int *)pPVar2->field_1BE1,pPVar2->field_1B9D);
    }
    puVar6 = &pPVar2->field_1C2A;
    local_8 = 0x16;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar6);
      puVar6 = puVar6 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  iVar3 = pPVar2->field_1C82;
  local_8 = *(uint *)(iVar3 + 0x14);
  if (local_8 == 0) {
    local_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  if (pPVar2->field_1C86 != 0) {
    StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_1C86);
    pPVar2->field_1C86 = 0;
    FUN_006b5f80(DAT_008075a8,0x79,0x197,0x22e,0x2e);
    if (pPVar2->field_1C9A != (HoloTy *)0x0) {
      HoloTy::Done(pPVar2->field_1C9A);
      Library::MSVCRT::FUN_0072e2b0(pPVar2->field_1C9A);
      pPVar2->field_1C9A = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pPVar2->field_1C9A = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
      uVar8 = HoloTy::Init(pPVar2->field_1C9A,CASE_1,0x79,0x197,iVar3,iVar7,uVar8,cVar9,uVar10);
      if (uVar8 != 0) {
        pHVar4 = pPVar2->field_1C9A;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar8 = pPVar2->field_1C9A->field_0003;
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(pPVar2->field_1C9A);
      }
    }
    PutDDXClip(0x79,0x197,0x79,0x197,0x22e,(byte *)0x2e,'\x01',
               (BITMAPINFO *)PTR_0081176c->field_002C);
    FUN_006b3af0(DAT_008075a8,pPVar2->field_1C8A);
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

