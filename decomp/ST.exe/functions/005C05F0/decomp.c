
/* [STMethodOwnerApplier] Structural method owner recovered as MReportTy.
   Evidence: this_call_owners=[MReportTy]; agreed_this_calls=3; incoming_this_accesses=26;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MReportTy::sub_005C05F0(MReportTy *this)

{
  HoloTy *pHVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int local_8;

  local_8 = 4;
  puVar3 = &this->field_008F;
  do {
    if (*puVar3 != 0) {
      StartSystemTy::sub_006E56B0(this->field_000C,*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this->field_009F != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_009F);
    this->field_009F = 0;
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                   (uint)g_cursorClass_00802A30->field_001C);
    }
  }
  FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  if (this->field_0453 != (HoloTy *)0x0) {
    HoloTy::Done(this->field_0453);
    Library::MSVCRT::FUN_0072e2b0(this->field_0453);
    this->field_0453 = (HoloTy *)0x0;
  }
  if (this->field_0457 != (HoloTy *)0x0) {
    HoloTy::Done(this->field_0457);
    Library::MSVCRT::FUN_0072e2b0(this->field_0457);
    this->field_0457 = (HoloTy *)0x0;
  }
  pHVar1 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar1 == (HoloTy *)0x0) {
    pHVar1 = (HoloTy *)0x0;
  }
  else {
    pHVar1->field_0002 = 1;
    pHVar1->field_0000 = 0;
    pHVar1->field_0003 = -1;
    pHVar1->field_0001 = CASE_2;
    pHVar1->field_0007 = 0;
    pHVar1->field_000B = (void *)0x0;
    *(undefined4 *)&pHVar1->field_0xf = 0;
    *(undefined4 *)&pHVar1->field_0x1b = 1;
    pHVar1->field_0013 = 1;
    pHVar1->field_0017 = -1;
    pHVar1->field_0027 = 0;
    pHVar1->field_0023 = 0;
    pHVar1->field_002F = 1;
    pHVar1->field_002B = 1;
  }
  this->field_0453 = pHVar1;
  if (pHVar1 != (HoloTy *)0x0) {
    uVar7 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar5 = HoloTy::Init(this->field_0453,CASE_2,0x47,0x46,iVar2,iVar4,uVar5,cVar6,uVar7);
    if (uVar5 != 0) {
      pHVar1 = this->field_0453;
      pHVar1->field_0002 = 0;
      pHVar1->field_0017 = -1;
      uVar5 = this->field_0453->field_0003;
      if (-1 < (int)uVar5) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar5);
      }
      HoloTy::NextFas(this->field_0453);
    }
    HoloTy::NextFas(this->field_0453);
  }
  pHVar1 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar1 == (HoloTy *)0x0) {
    pHVar1 = (HoloTy *)0x0;
  }
  else {
    pHVar1->field_0002 = 1;
    pHVar1->field_0000 = 0;
    pHVar1->field_0003 = -1;
    pHVar1->field_0001 = CASE_2;
    pHVar1->field_0007 = 0;
    pHVar1->field_000B = (void *)0x0;
    *(undefined4 *)&pHVar1->field_0xf = 0;
    *(undefined4 *)&pHVar1->field_0x1b = 1;
    pHVar1->field_0013 = 1;
    pHVar1->field_0017 = -1;
    pHVar1->field_0027 = 0;
    pHVar1->field_0023 = 0;
    pHVar1->field_002F = 1;
    pHVar1->field_002B = 1;
  }
  this->field_0457 = pHVar1;
  if (pHVar1 != (HoloTy *)0x0) {
    uVar7 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x1a,10,0x2e9,0x32);
    uVar5 = HoloTy::Init(this->field_0457,CASE_3,0x1a,10,iVar2,iVar4,uVar5,cVar6,uVar7);
    if (uVar5 != 0) {
      pHVar1 = this->field_0457;
      pHVar1->field_0002 = 0;
      pHVar1->field_0017 = -1;
      uVar5 = this->field_0457->field_0003;
      if (-1 < (int)uVar5) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar5);
      }
      HoloTy::NextFas(this->field_0457);
    }
    HoloTy::NextFas(this->field_0457);
  }
  PutDDX(0,0,'\x01',(BITMAPINFO *)this->field_005D);
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,(uint)g_cursorClass_00802A30->field_001C
                 ,0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      this->field_0065 = 4;
      return;
    }
  }
  this->field_0065 = 4;
  return;
}

