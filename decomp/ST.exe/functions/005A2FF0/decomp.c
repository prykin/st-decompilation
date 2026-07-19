
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetChannelList */

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
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;
  
  if ((this->field_1A5F == '\x06') && (this->field_1A60 != '\0')) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = DAT_00802a30;
    if (iVar4 == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar5 = DAT_00802a30->field_00C9;
        uVar2 = DAT_00802a30->field_00C5;
        DAT_00802a30->field_0493 = 1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar5);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_0xd2 = 0;
        *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
      }
      this_01 = local_c;
      *(undefined4 *)(local_c->field_1EAA + 0xc) = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_01->field_1EAA,param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        iVar4 = this_01->field_1EAA;
        local_8 = 0;
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
              FUN_006b0cd0(this_01->field_1EAA,uVar8,uVar1);
              local_8 = 1;
            }
            iVar4 = this_01->field_1EAA;
            uVar7 = *(uint *)(iVar4 + 0xc);
            uVar8 = uVar1;
          } while (uVar1 < uVar7 - 1);
        }
      } while (local_8 != 0);
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',(BITMAPINFO *)this_01->field_1E9A);
      this_01->field_002D = 0x28;
      *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)(this_01->field_1EAA + 0xc);
      *(undefined2 *)&this_01->field_0x35 = 1;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x20;
      if ((*(int *)(this_01->field_1EAA + 0xc) == 0) || (this_01->field_1A6B == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar5;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
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

