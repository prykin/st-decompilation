
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::GetMessage */

undefined4 __thiscall STRubbishC::GetMessage(STRubbishC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  code *pcVar5;
  STRubbishC *this_00;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  STRubbishC *local_14;
  byte *local_10;
  uint local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar8 = ReportDebugMessage(s_E____titans_nick_to_Rubb_cpp_007d1798,0xa6,0,iVar7,&DAT_007a4ccc,
                               s_STRubbishC__GetMessage_007d17bc);
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_nick_to_Rubb_cpp_007d1798,0xa8);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return uVar10;
  }
  iVar7 = STGameObjC::GetMessage((STGameObjC *)local_14,param_1);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if (3 < uVar4) {
    if (uVar4 == 0x108) {
      iVar7 = thunk_FUN_004ab050();
      thunk_FUN_00630000(this_00,iVar7);
    }
    else if (uVar4 == 0x10f) {
      local_10 = (byte *)thunk_FUN_0062f940(this_00,&local_c);
      STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_10,local_c);
      FUN_006ab060(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar4 == 3) {
    thunk_FUN_0062f7a0(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar4 == 0) {
    if (this_00->field_01FA == 1) {
      if ((this_00->field_01F9 == '\0') &&
         (iVar7 = thunk_FUN_0062fea0(this_00,this_00->field_01D5,this_00->field_01D9), iVar7 != 0))
      {
        thunk_FUN_0062fe00(this_00);
        this_00->field_01F9 = 1;
      }
      thunk_FUN_0062f150(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (this_00->field_01FA != 2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    thunk_FUN_0062f900(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar4 != 2) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  local_8 = iVar7;
  if (*(int *)(iVar7 + 0xc) == 2) {
    thunk_FUN_0062fa80(this_00,iVar7);
    if (this_00->field_01F9 == '\0') {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    thunk_FUN_0062fe00(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if ((((int)this_00->field_01D5 < 0) || ((int)this_00->field_01D9 < 0)) ||
     ((int)this_00->field_01DD < 0)) {
    iVar8 = *(int *)(iVar7 + 0x14);
    sVar1 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar1) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    this_00->field_01D5 = iVar8;
    iVar8 = *(int *)(iVar7 + 0x18);
    sVar1 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar1) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    this_00->field_01D9 = iVar8;
    iVar8 = *(int *)(iVar7 + 0x1c);
    if (iVar8 < 0) {
      iVar8 = (short)(iVar8 / 200) + -1;
    }
    else {
      iVar8 = (int)(short)(iVar8 / 200);
    }
    this_00->field_01DD = iVar8;
    bVar6 = thunk_FUN_004961b0(*(short *)&this_00->field_01D5,*(short *)&this_00->field_01D9,
                               (short)iVar8);
    if (CONCAT31(extraout_var,bVar6) != 0) {
      sVar1 = *(short *)&this_00->field_01D5;
      sVar2 = *(short *)&this_00->field_01DD;
      sVar3 = *(short *)&this_00->field_01D9;
      if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
          ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(DAT_007fb248 + 4 +
                        ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                        (int)sVar1) * 8);
        iVar7 = local_8;
      }
      if ((iVar8 == 0) &&
         (iVar8 = DumpClassC::WritePtr
                            ((short)this_00->field_01D5,(short)this_00->field_01D9,
                             (short)this_00->field_01DD,1,(int)this_00), iVar7 = local_8, iVar8 == 0
         )) {
        iVar8 = *(int *)(local_8 + 0x14);
        sVar1 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar1) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar1) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        this_00->field_01D5 = iVar8;
        iVar11 = *(int *)(local_8 + 0x18);
        sVar1 = (short)(iVar11 >> 0x1f);
        if (iVar11 < 0) {
          iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar1) -
                          (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar1) -
                               (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
        }
        this_00->field_01D9 = iVar11;
        iVar9 = *(int *)(local_8 + 0x1c);
        sVar1 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          iVar9 = (short)(((short)(iVar9 / 200) + sVar1) -
                         (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar9 = (int)(short)(((short)(iVar9 / 200) + sVar1) -
                              (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
        }
        this_00->field_01DD = iVar9;
        iVar8 = thunk_FUN_0062fea0(this_00,iVar8,iVar11);
        this_00->field_01F9 = (char)iVar8;
        goto LAB_0062ea02;
      }
    }
    thunk_FUN_0062f900(this_00);
  }
LAB_0062ea02:
  iVar7 = thunk_FUN_0062fca0(this_00,iVar7);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  this_00->field_01FA = 1;
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

