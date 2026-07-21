
void __fastcall FUN_005c05f0(AnonShape_005C05F0_AB1ACC3B *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int local_8;

  local_8 = 4;
  puVar3 = (uint *)&param_1->field_0x8f;
  do {
    if (*puVar3 != 0) {
      StartSystemTy::sub_006E56B0(param_1->field_000C,*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1->field_009F != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_009F);
    param_1->field_009F = 0;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C);
    }
  }
  FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  if ((HoloTy *)param_1->field_0453 != (HoloTy *)0x0) {
    HoloTy::Done((HoloTy *)param_1->field_0453);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_0453);
    param_1->field_0453 = 0;
  }
  if ((HoloTy *)param_1->field_0457 != (HoloTy *)0x0) {
    HoloTy::Done((HoloTy *)param_1->field_0457);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_0457);
    param_1->field_0457 = 0;
  }
  puVar1 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1[2] = 1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[1] = 2;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 1;
    *(undefined4 *)(puVar1 + 0x13) = 1;
    *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 1;
    *(undefined4 *)(puVar1 + 0x2b) = 1;
  }
  param_1->field_0453 = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar7 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x47,0x46,0x2bd,0x15e);
    uVar5 = HoloTy::Init((HoloTy *)param_1->field_0453,CASE_2,0x47,0x46,iVar2,iVar4,uVar5,cVar6,
                         uVar7);
    if (uVar5 != 0) {
      iVar2 = param_1->field_0453;
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(param_1->field_0453 + 3);
      if (-1 < (int)uVar5) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar5);
      }
      HoloTy::NextFas((HoloTy *)param_1->field_0453);
    }
    HoloTy::NextFas((HoloTy *)param_1->field_0453);
  }
  puVar1 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1[2] = 1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    puVar1[1] = 2;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 1;
    *(undefined4 *)(puVar1 + 0x13) = 1;
    *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 1;
    *(undefined4 *)(puVar1 + 0x2b) = 1;
  }
  param_1->field_0457 = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar7 = 0;
    cVar6 = '\x01';
    uVar5 = 0x10;
    iVar4 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x1a,10,0x2e9,0x32);
    uVar5 = HoloTy::Init((HoloTy *)param_1->field_0457,CASE_3,0x1a,10,iVar2,iVar4,uVar5,cVar6,uVar7)
    ;
    if (uVar5 != 0) {
      iVar2 = param_1->field_0457;
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar5 = *(uint *)(param_1->field_0457 + 3);
      if (-1 < (int)uVar5) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar5);
      }
      HoloTy::NextFas((HoloTy *)param_1->field_0457);
    }
    HoloTy::NextFas((HoloTy *)param_1->field_0457);
  }
  PutDDX(0,0,'\x01',param_1->field_005D);
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      param_1->field_0065 = 4;
      return;
    }
  }
  param_1->field_0065 = 4;
  return;
}

