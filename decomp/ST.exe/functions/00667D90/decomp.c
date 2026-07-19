
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetMessage */

undefined4 __thiscall AiFltClassTy::GetMessage(AiFltClassTy *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  AiFltClassTy *this_00;
  int iVar3;
  uint uVar4;
  STGroupC *this_01;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  AiFltClassTy *local_10;
  byte *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0xeca,0,iVar3,
                               s_AiFltClassTy__GetMessage_error_m_007d2c7c,
                               *(undefined4 *)(param_1 + 0x10),local_10->field_0018);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0xecb);
    return 0xffff;
  }
  local_10->field_0280 = DAT_00802a38->field_00E4;
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 < 0x112) {
    if (uVar4 == 0x111) {
      thunk_FUN_0065d6a0((int)local_10);
    }
    else if (uVar4 < 4) {
      if (uVar4 == 3) {
        thunk_FUN_0065d6e0((int)local_10,extraout_EDX);
        thunk_FUN_0065d720((int)this_00,extraout_EDX_01);
        thunk_FUN_0065d480((int)this_00);
      }
      else if (uVar4 == 0) {
        if (local_10->field_0093 == 0) {
          local_10->field_0093 = 1;
          thunk_FUN_00664760((int)local_10);
        }
        else {
          thunk_FUN_00664960(local_10);
          thunk_FUN_00661580(this_00);
        }
      }
      else if (uVar4 == 2) {
        puVar1 = *(undefined4 **)(param_1 + 0x14);
        if (puVar1 == (undefined4 *)0x0) {
          RaiseInternalException(-6,DAT_007ed77c,s_E____titans_ai_ai_flt_cpp_007d2b80,0xe70);
        }
        InitData(this_00,puVar1);
        if (puVar1[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_0086;
        }
        iVar3 = puVar1[3];
        iVar5 = extraout_EDX_00;
        if (iVar3 == 0) {
          uVar4 = thunk_FUN_00435850(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0x24
                                             ),1,(int *)0x0);
          this_00->field_007D = (short)uVar4;
          thunk_FUN_0065d6a0((int)this_00);
          uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar4;
          this_00->field_008B = (uVar4 >> 0x10 & 7) + 8;
          uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar4;
          this_00->field_01FB = (uVar4 >> 0x10) % 0x1a + 0x19;
          uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar4;
          this_00->field_0203 = (uVar4 >> 0x10) % 0x1a + 0x19;
          thunk_FUN_00676c40(this_00->field_020B,&LAB_004013cf);
          iVar5 = this_00->field_0223;
          this_00->field_0170 = *(undefined2 *)(this_00->field_022F + 0xc);
          iVar3 = CONCAT22((short)((uint)this_00->field_022F >> 0x10),*(undefined2 *)(iVar5 + 0xc));
          this_00->field_0127 = *(undefined2 *)(iVar5 + 0xc);
        }
        if ((this_00->field_007D == -2) || (DAT_007fa174 == 0)) {
          this_01 = (STGroupC *)0x0;
        }
        else {
          this_01 = (STGroupC *)
                    thunk_FUN_0042b760(CONCAT31((int3)((uint)iVar5 >> 8),this_00->field_0x24),
                                       CONCAT22((short)((uint)iVar3 >> 0x10),this_00->field_007D));
        }
        if (this_01 != (STGroupC *)0x0) {
          STGroupC::SetAVPar(this_01,1);
        }
      }
    }
    else if (uVar4 == 0x10f) {
      local_8 = 0;
      local_c = (byte *)PrepareToSave(local_10,&local_8);
      STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_c,local_8);
      if (local_c != (byte *)0x0) {
        FUN_006ab060(&local_c);
      }
    }
  }
  else if (uVar4 == 0x5d95) {
    local_10->field_00A7 = 1;
  }
  else {
    if (uVar4 != 0x5d96) {
      if (uVar4 != 0x5d99) goto LAB_00668010;
      *(undefined2 *)(param_1 + 0x14) = 1;
    }
    thunk_FUN_00661ca0((int)local_10,extraout_EDX,param_1);
  }
LAB_00668010:
  FUN_006e5fd0();
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

