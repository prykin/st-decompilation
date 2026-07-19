
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::GetMessage */

undefined4 __thiscall MTestTy::GetMessage(MTestTy *this,int param_1)

{
  HoloTy *pHVar1;
  code *pcVar2;
  HoloTy *pHVar3;
  MTestTy *pMVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  char cVar9;
  uint uVar10;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_c = this;
  uVar5 = FUN_006e51b0(this->field_0010);
  this->field_00A1 = uVar5;
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
      if (local_c[1].field_0xe == '\0') {
        _DAT_00811774 = FUN_006e51b0(local_c->field_0010);
        pMVar4[1].field_0xe = 1;
        if (DAT_00811778 != (HoloTy *)0x0) {
          HoloTy::Done(DAT_00811778);
          Library::MSVCRT::FUN_0072e2b0((undefined4 *)DAT_00811778);
          DAT_00811778 = (HoloTy *)0x0;
        }
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,DAT_0081176c + 0x140);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
        DAT_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (DAT_00811778 == (HoloTy *)0x0) {
          DAT_00811778 = (HoloTy *)0x0;
        }
        else {
          DAT_00811778[2] = (HoloTy)0x1;
          *DAT_00811778 = (HoloTy)0x0;
          *(undefined4 *)(DAT_00811778 + 3) = 0xffffffff;
          DAT_00811778[1] = (HoloTy)0x2;
          *(undefined4 *)(DAT_00811778 + 7) = 0;
          *(undefined4 *)(DAT_00811778 + 0xb) = 0;
          *(undefined4 *)(DAT_00811778 + 0xf) = 0;
          *(undefined4 *)(DAT_00811778 + 0x1b) = 1;
          *(undefined4 *)(DAT_00811778 + 0x13) = 1;
          *(undefined4 *)(DAT_00811778 + 0x17) = 0xffffffff;
          *(undefined4 *)(DAT_00811778 + 0x27) = 0;
          *(undefined4 *)(DAT_00811778 + 0x23) = 0;
          *(undefined4 *)(DAT_00811778 + 0x2f) = 1;
          *(undefined4 *)(DAT_00811778 + 0x2b) = 1;
        }
        if (DAT_00811778 != (HoloTy *)0x0) {
          uVar10 = 0;
          cVar9 = '\x01';
          uVar8 = 0x10;
          iVar7 = 1;
          iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          HoloTy::Init(DAT_00811778,4,10,0xb4,iVar6,iVar7,uVar8,cVar9,uVar10);
          pHVar3 = DAT_00811778;
          pHVar1 = DAT_00811778 + 0x13;
          DAT_00811778[2] = (HoloTy)0x1;
          *(undefined4 *)(pHVar3 + 0x17) = *(undefined4 *)pHVar1;
          if (-1 < (int)*(uint *)(DAT_00811778 + 3)) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_00811778 + 3));
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (local_c[1].field_0xe == '\x04') {
        _DAT_00811774 = FUN_006e51b0(local_c->field_0010);
        pMVar4[1].field_0xe = 5;
        if (DAT_00811778 != (HoloTy *)0x0) {
          HoloTy::Done(DAT_00811778);
          Library::MSVCRT::FUN_0072e2b0((undefined4 *)DAT_00811778);
          DAT_00811778 = (HoloTy *)0x0;
        }
        DAT_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (DAT_00811778 == (HoloTy *)0x0) {
          DAT_00811778 = (HoloTy *)0x0;
        }
        else {
          DAT_00811778[2] = (HoloTy)0x1;
          *DAT_00811778 = (HoloTy)0x0;
          *(undefined4 *)(DAT_00811778 + 3) = 0xffffffff;
          DAT_00811778[1] = (HoloTy)0x2;
          *(undefined4 *)(DAT_00811778 + 7) = 0;
          *(undefined4 *)(DAT_00811778 + 0xb) = 0;
          *(undefined4 *)(DAT_00811778 + 0xf) = 0;
          *(undefined4 *)(DAT_00811778 + 0x1b) = 1;
          *(undefined4 *)(DAT_00811778 + 0x13) = 1;
          *(undefined4 *)(DAT_00811778 + 0x17) = 0xffffffff;
          *(undefined4 *)(DAT_00811778 + 0x27) = 0;
          *(undefined4 *)(DAT_00811778 + 0x23) = 0;
          *(undefined4 *)(DAT_00811778 + 0x2f) = 1;
          *(undefined4 *)(DAT_00811778 + 0x2b) = 1;
        }
        if (DAT_00811778 != (HoloTy *)0x0) {
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          MMMObjTy::OutRGlProc
                    ((MMMObjTy *)(DAT_0081176c + 0x140),DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                     (undefined4 *)(DAT_0081176c + 0x140));
          uVar10 = 0;
          cVar9 = '\x01';
          uVar8 = 0x10;
          iVar7 = 1;
          iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          HoloTy::Init(DAT_00811778,4,10,0xb4,iVar6,iVar7,uVar8,cVar9,uVar10);
          pHVar1 = DAT_00811778;
          DAT_00811778[2] = (HoloTy)0x0;
          *(undefined4 *)(pHVar1 + 0x17) = 0xffffffff;
          if (-1 < (int)*(uint *)(DAT_00811778 + 3)) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_00811778 + 3));
          }
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                             *(BITMAPINFO **)&pMVar4->field_0x5d);
        }
      }
      break;
    case 100:
      thunk_FUN_005e5f60(local_c);
      *(undefined4 *)&pMVar4->field_0x8d = 1;
      *(undefined4 *)&pMVar4->field_0x91 = 0x7102;
    }
    g_currentExceptionFrame = local_50.previous;
    uVar5 = FUN_006e5fd0();
    return uVar5;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_test_obj_cpp_007cdcbc,0xb5,0,iVar6,&DAT_007a4ccc,
                             s_MTestTy__GetMessage_007cdd44);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Start_test_obj_cpp_007cdcbc,0xb5);
  return 0xffff;
}

