
void __thiscall FSGSTy::SetChannelList(FSGSTy *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *_Str2;
  char *_Str1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  InternalExceptionFrame IStack_50;
  FSGSTy *pFStack_c;
  int iStack_8;
  
  if ((this[0x1a5f] == (FSGSTy)0x6) && (this[0x1a60] != (FSGSTy)0x0)) {
    IStack_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_50;
    pFStack_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = DAT_00802a30;
    if (iVar4 == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(this_00 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(this_00,0,uVar2,uVar5);
        CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
        this_00[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
      }
      this_01 = pFStack_c;
      *(undefined4 *)(*(int *)(pFStack_c + 0x1eaa) + 0xc) = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_01 + 0x1eaa),param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        iVar4 = *(int *)(this_01 + 0x1eaa);
        iStack_8 = 0;
        uVar7 = *(uint *)(iVar4 + 0xc);
        uVar8 = 0;
        if (uVar7 != 1) {
          do {
            if (uVar8 < uVar7) {
              _Str1 = (char *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
            }
            else {
              _Str1 = (char *)0x0;
            }
            uVar1 = uVar8 + 1;
            if (uVar1 < uVar7) {
              _Str2 = (char *)(*(int *)(iVar4 + 8) * uVar1 + *(int *)(iVar4 + 0x1c));
            }
            else {
              _Str2 = (char *)0x0;
            }
            iVar4 = Library::MSVCRT::__strcmpi(_Str1,_Str2);
            if (0 < iVar4) {
              FUN_006b0cd0(*(int *)(this_01 + 0x1eaa),uVar8,uVar1);
              iStack_8 = 1;
            }
            iVar4 = *(int *)(this_01 + 0x1eaa);
            uVar7 = *(uint *)(iVar4 + 0xc);
            uVar8 = uVar1;
          } while (uVar1 < uVar7 - 1);
        }
      } while (iStack_8 != 0);
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',*(BITMAPINFO **)(this_01 + 0x1e9a)
                        );
      *(undefined4 *)(this_01 + 0x2d) = 0x28;
      *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(*(int *)(this_01 + 0x1eaa) + 0xc);
      *(undefined2 *)(this_01 + 0x35) = 1;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)(this_01 + 0x1d));
      *(undefined4 *)(this_01 + 0x2d) = 0x20;
      if ((*(int *)(*(int *)(this_01 + 0x1eaa) + 0xc) == 0) || (*(int *)(this_01 + 0x1a6b) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)(this_01 + 0x31) = uVar5;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)(this_01 + 0x1d));
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    g_currentExceptionFrame = IStack_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa9d,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__SetChannelList_007cc538);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa9d);
  }
  return;
}

