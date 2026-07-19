
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::GetMessage */

undefined4 __thiscall STMineSetC::GetMessage(STMineSetC *this,int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  STMineSetC *this_00;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  Global_sub_00626B50_param_1Enum GVar10;
  int iVar11;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  STMineSetC *local_8;
  
  local_8 = this;
  iVar7 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar7 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar11 = ReportDebugMessage(s_E____titans_nick_to_mine_set_cpp_007d06b0,0x174,0,iVar7,
                                &DAT_007a4ccc,s_STMineSetC__GetMessage_007d06d8);
    if (iVar11 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_nick_to_mine_set_cpp_007d06b0,0x176);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return uVar8;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (0x110 < uVar9) {
    if (0x128 < uVar9) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar9 == 0x128) {
      thunk_FUN_004ad430((int)&local_8->field_01D5);
      thunk_FUN_00622670(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar9 != 0x112) {
      if (uVar9 != 0x113) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if ((int)local_8->field_02BA < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (local_8->field_02AE != 1) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      (**(code **)local_8->field_01D5)();
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if ((int)local_8->field_02BA < 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (local_8->field_02AE != 1) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((int)&local_8->field_01D5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar9 == 0x110) {
    thunk_FUN_00627390((int)local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (3 < uVar9) {
    if (uVar9 == 0x108) {
      GVar10 = thunk_FUN_004ab050();
      thunk_FUN_00626b50(local_8,GVar10);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar9 != 0x10f) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    local_10 = (byte *)thunk_FUN_00622990(local_8,&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_10,local_c);
    FUN_006ab060(&local_10);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar9 == 3) {
    thunk_FUN_00622880((int *)local_8);
    if (this_00->field_0363 == 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_006366d0(this_00->field_0363);
    Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_0363);
    this_00->field_0363 = 0;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar9 == 0) {
    if ((local_8->field_02AD == '\x03') &&
       (0x1194 < (uint)(DAT_00802a38->field_00E4 - local_8->field_035F))) {
      thunk_FUN_00627390((int)local_8);
    }
    iVar7 = thunk_FUN_006239a0((int *)this_00);
    if (iVar7 == 0) {
      if ((this_00->field_02AE == 2) && (this_00->field_0353 == '\0')) {
        uVar9 = thunk_FUN_006226c0(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
        this_00->field_0353 = (char)uVar9;
        if ((char)uVar9 != '\0') {
          LoadImagMineSet(this_00,0);
          thunk_FUN_004ad460(&this_00->field_01D5,1);
        }
      }
    }
    else {
      if ((((this_00->field_0314 == '\0') && (iVar7 = this_00->field_02AE, iVar7 != 2)) &&
          (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
        uVar8 = thunk_FUN_00627400(this_00,iVar7);
        this_00->field_02AE = uVar8;
      }
      iVar7 = this_00->field_02AE;
      if (((iVar7 != 2) && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
        if (this_00->field_0353 == '\0') {
          uVar9 = thunk_FUN_006226c0(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
          this_00->field_0353 = (char)uVar9;
          if (((char)uVar9 != '\0') && ((int)this_00->field_02BA < 0)) {
            LoadImagMineSet(this_00,0);
            thunk_FUN_004ad460(&this_00->field_01D5,1);
          }
        }
        else if ((*(byte *)&DAT_00802a38->field_00E4 & 3) == 0) {
          uVar9 = thunk_FUN_006226c0(this_00,(int)this_00->field_0047,(int)this_00->field_0049);
          this_00->field_0353 = (char)uVar9;
          if (((char)uVar9 == '\0') && (this_00->field_02E9 != '\0')) {
            thunk_FUN_004ad430((int)&this_00->field_01D5);
            this_00->field_02E9 = 0;
          }
        }
        this_00->field_0045 = *(undefined2 *)&this_00->field_0x2ca;
        this_00->field_0041 = *(undefined2 *)&this_00->field_0x2c2;
        this_00->field_0043 = *(undefined2 *)&this_00->field_0x2c6;
        if (this_00->field_0353 != '\0') {
          thunk_FUN_00623600((int *)this_00);
        }
        cVar1 = this_00->field_02AD;
        if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) &&
           (((((uint)DAT_00802a38->field_00E4 % 5 == 0 &&
              (0x19 < (uint)(DAT_00802a38->field_00E4 - this_00->field_0346))) &&
             ((this_00->field_02AE == 0 || (this_00->field_02AE == 1)))) &&
            (iVar7 = thunk_FUN_00625730(this_00), iVar7 != 0)))) {
          this_00->field_02AE = 2;
          this_00->field_030F =
               *(int *)(&DAT_007d02a4 + (uint)(byte)this_00->field_02AD * 4) +
               DAT_00802a38->field_00E4;
        }
      }
    }
    if (((this_00->field_0355 == 0) && (this_00->field_02AE != 2)) &&
       ((this_00->field_02AE != 4 &&
        (((short)(this_00->field_0047 * 0xc9 + 100) == this_00->field_0041 &&
         ((short)(this_00->field_0049 * 0xc9 + 100) == this_00->field_0043)))))) {
      this_00->field_0355 = 1;
    }
    if (((int *)this_00->field_0363 != (int *)0x0) &&
       (iVar7 = thunk_FUN_006372e0((int *)this_00->field_0363), iVar7 != 0)) {
      thunk_FUN_006366d0(this_00->field_0363);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_0363);
      this_00->field_0363 = 0;
    }
    if (this_00->field_0359 == '\0') {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_00627170(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar9 != 2) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  local_8->field_0219 = 0x23a;
  local_8->field_0215 = 0x32;
  if (*(int *)(iVar7 + 0xc) == 2) {
    thunk_FUN_00622ab0(local_8,*(undefined4 **)(param_1 + 0x14));
    if (this_00->field_0x313 != '\0') {
      sVar2 = this_00->field_0047;
      local_1c = 1;
      local_14 = (uint)(byte)this_00->field_0x8e;
      sVar3 = this_00->field_004B;
      sVar4 = this_00->field_0049;
      local_18 = (int)sVar4;
      if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
         (((DAT_007fb242 <= sVar4 || (sVar3 < 0)) || (DAT_007fb244 <= sVar3)))) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(DAT_007fb248 +
                        (local_14 +
                        ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                        (int)sVar2) * 2) * 4);
      }
      if ((iVar7 == 0) &&
         (iVar7 = DumpClassC::WritePtr(sVar2,sVar4,sVar3,local_14,(int)this_00), iVar7 == 0)) {
        this_00->field_0314 = this_00->field_0314 + '\x01';
        iVar7 = local_1c;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) {
        thunk_FUN_00622670(this_00);
      }
    }
    puVar12 = (undefined4 *)&this_00->field_0x231;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined1 *)puVar12 = 0;
    if (this_00->field_0353 != '\0') {
      uVar8 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      this_00->field_02BA = uVar8;
    }
    this_00->field_0363 = 0;
    iVar7 = STAllPlayersC::RegisterMine(DAT_007fa174,*(ushort *)&this_00->field_0x32,this_00);
    if (iVar7 == 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_00622670(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar12 = *(undefined4 **)(param_1 + 0x14);
  puVar13 = (undefined4 *)&local_8->field_0x25e;
  for (iVar11 = 0x13; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = *(undefined2 *)puVar12;
  *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar12 + 2);
  if (*(int *)(iVar7 + 0xc) == 0) {
    *(int *)&local_8->field_0x276 = (int)(short)(*(short *)&local_8->field_0x276 * 0xc9 + 100);
    *(int *)&local_8->field_0x27a = (int)(short)(*(short *)&local_8->field_0x27a * 0xc9 + 100);
    *(int *)&local_8->field_0x27e = (int)(short)(*(short *)&local_8->field_0x27e * 200 + 100);
    local_8->field_0282 = *(undefined4 *)&local_8->field_0x276;
    local_8->field_0286 = *(undefined4 *)&local_8->field_0x27a;
    local_8->field_028A = *(undefined4 *)&local_8->field_0x27e;
  }
  iVar7 = thunk_FUN_00622ba0(local_8);
  if (iVar7 == 0) {
    thunk_FUN_00622670(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  bVar6 = false;
  if (*(int *)&this_00->field_0x2f6 == 0) {
    *(undefined2 *)&this_00->field_0x34 = this_00->field_0041;
    *(undefined2 *)&this_00->field_0x36 = this_00->field_0043;
    *(undefined2 *)&this_00->field_0x38 = this_00->field_0045;
    iVar7 = thunk_FUN_00624570(this_00,CASE_1,*(int *)&this_00->field_0x2c2,
                               *(int *)&this_00->field_0x2c6,*(int *)&this_00->field_0x2ca);
    if (iVar7 == 0) goto cf_common_exit_00621D24;
    *(undefined4 *)&this_00->field_0x2ee = 1;
  }
  else {
    iVar7 = thunk_FUN_00624570(this_00,CASE_2,(int)*(short *)&this_00->field_0x3a,
                               (int)*(short *)&this_00->field_0x3c,
                               (int)*(short *)&this_00->field_0x3e);
    if (iVar7 == 0) goto cf_common_exit_00621D24;
    *(undefined4 *)&this_00->field_0x2ee = 2;
  }
  this_00->field_02AE = 1;
  bVar6 = true;
cf_common_exit_00621D24:
  if (bVar6) {
    this_00->field_02AE = 1;
    this_00->field_0353 = 1;
    LoadImagMineSet(this_00,0);
    iVar7 = STAllPlayersC::RegisterMine(DAT_007fa174,0xffff,this_00);
    if (iVar7 != 0) {
      thunk_FUN_00622670(this_00);
    }
    thunk_FUN_00627700((int)this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_00622670(this_00);
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

