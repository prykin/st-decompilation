
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::GetMessage */

undefined4 __thiscall MTestTy::GetMessage(MTestTy *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  HoloTy *pHVar3;
  MTestTy *pMVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_c = this;
  DVar5 = FUN_006e51b0(this->field_0010);
  this->field_00A1 = DVar5;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar4 = local_c;
  if (iVar6 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      NoneMTest(local_c);
      break;
    case 2:
      InitMTest(local_c);
      break;
    case 3:
      DoneMTest(local_c);
      break;
    case 5:
      PaintMTest(local_c);
      break;
    case 0x62:
      if (local_c->field_00B3 == '\0') {
        _DAT_00811774 = FUN_006e51b0(local_c->field_0010);
        pMVar4->field_00B3 = 1;
        if (g_holo_00811778 != (HoloTy *)0x0) {
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = (HoloTy *)0x0;
        }
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,DAT_0081176c + 0x140);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
        g_holo_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (g_holo_00811778 == (HoloTy *)0x0) {
          g_holo_00811778 = (HoloTy *)0x0;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          g_holo_00811778->field_0003 = 0xffffffff;
          g_holo_00811778->field_0001 = 2;
          g_holo_00811778->field_0007 = 0;
          g_holo_00811778->field_000B = 0;
          *(undefined4 *)&g_holo_00811778->field_0xf = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = 0xffffffff;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != (HoloTy *)0x0) {
          uVar11 = 0;
          cVar10 = '\x01';
          uVar9 = 0x10;
          iVar8 = 1;
          iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,iVar6,iVar8,uVar9,cVar10,uVar11);
          pHVar3 = g_holo_00811778;
          puVar1 = &g_holo_00811778->field_0013;
          g_holo_00811778->field_0002 = 1;
          pHVar3->field_0017 = *puVar1;
          if (-1 < (int)g_holo_00811778->field_0003) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,g_holo_00811778->field_0003);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (local_c->field_00B3 == '\x04') {
        _DAT_00811774 = FUN_006e51b0(local_c->field_0010);
        pMVar4->field_00B3 = 5;
        if (g_holo_00811778 != (HoloTy *)0x0) {
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = (HoloTy *)0x0;
        }
        g_holo_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (g_holo_00811778 == (HoloTy *)0x0) {
          g_holo_00811778 = (HoloTy *)0x0;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          g_holo_00811778->field_0003 = 0xffffffff;
          g_holo_00811778->field_0001 = 2;
          g_holo_00811778->field_0007 = 0;
          g_holo_00811778->field_000B = 0;
          *(undefined4 *)&g_holo_00811778->field_0xf = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = 0xffffffff;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != (HoloTy *)0x0) {
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          MMMObjTy::OutRGlProc
                    ((MMMObjTy *)(DAT_0081176c + 0x140),DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                     (undefined4 *)(DAT_0081176c + 0x140));
          uVar11 = 0;
          cVar10 = '\x01';
          uVar9 = 0x10;
          iVar8 = 1;
          iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,iVar6,iVar8,uVar9,cVar10,uVar11);
          pHVar3 = g_holo_00811778;
          g_holo_00811778->field_0002 = 0;
          pHVar3->field_0017 = 0xffffffff;
          if (-1 < (int)g_holo_00811778->field_0003) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,g_holo_00811778->field_0003);
          }
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',(BITMAPINFO *)pMVar4->field_005D);
        }
      }
      break;
    case 100:
      thunk_FUN_005e5f60(local_c);
      pMVar4->field_008D = 1;
      pMVar4->field_0091 = 0x7102;
    }
    g_currentExceptionFrame = local_50.previous;
    uVar7 = FUN_006e5fd0();
    return uVar7;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Start_test_obj_cpp_007cdcbc,0xb5,0,iVar6,&DAT_007a4ccc,
                             s_MTestTy__GetMessage_007cdd44);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Start_test_obj_cpp_007cdcbc,0xb5);
  return 0xffff;
}

