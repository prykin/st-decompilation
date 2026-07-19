
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::GetMessage */

undefined4 __thiscall STMineSetC::GetMessage(STMineSetC *this,int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  code *pcVar8;
  bool bVar9;
  STMineSetC *this_00;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  Global_sub_00626B50_param_1Enum GVar13;
  int iVar14;
  undefined4 unaff_ESI;
  undefined4 *puVar15;
  void *unaff_EDI;
  undefined4 *puVar16;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  STMineSetC *local_8;
  
  local_8 = this;
  iVar10 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar10 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar10 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar14 = ReportDebugMessage(s_E____titans_nick_to_mine_set_cpp_007d06b0,0x174,0,iVar10,
                                &DAT_007a4ccc,s_STMineSetC__GetMessage_007d06d8);
    if (iVar14 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_nick_to_mine_set_cpp_007d06b0,0x176);
      return 0xffff;
    }
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return uVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  if (0x110 < uVar12) {
    if (0x128 < uVar12) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar12 == 0x128) {
      thunk_FUN_004ad430((int)&local_8->field_01D5);
      thunk_FUN_00622670(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar12 != 0x112) {
      if (uVar12 != 0x113) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if ((int)local_8->field_02BA < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (*(int *)&local_8->field_0x2ae != 1) {
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
    if (*(int *)&local_8->field_0x2ae != 1) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((int)&local_8->field_01D5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar12 == 0x110) {
    thunk_FUN_00627390((int)local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (3 < uVar12) {
    if (uVar12 == 0x108) {
      GVar13 = thunk_FUN_004ab050();
      thunk_FUN_00626b50(local_8,GVar13);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    if (uVar12 != 0x10f) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    local_10 = (byte *)thunk_FUN_00622990(local_8,&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_10,local_c);
    FUN_006ab060(&local_10);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar12 == 3) {
    thunk_FUN_00622880((int *)local_8);
    if (*(int *)&this_00[1].field_0xa5 == 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_006366d0(*(int *)&this_00[1].field_0xa5);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0xa5);
    *(undefined4 *)&this_00[1].field_0xa5 = 0;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar12 == 0) {
    if ((local_8->field_0x2ad == '\x03') &&
       (0x1194 < (uint)(DAT_00802a38->field_00E4 - *(int *)&local_8[1].field_0xa1))) {
      thunk_FUN_00627390((int)local_8);
    }
    iVar10 = thunk_FUN_006239a0((int *)this_00);
    if (iVar10 == 0) {
      if ((*(int *)&this_00->field_0x2ae == 2) && (this_00[1].field_0x95 == '\0')) {
        uVar12 = thunk_FUN_006226c0(this_00,(int)*(short *)&this_00->field_0x47,
                                    (int)*(short *)&this_00->field_0x49);
        this_00[1].field_0x95 = (char)uVar12;
        if ((char)uVar12 != '\0') {
          LoadImagMineSet(this_00,0);
          thunk_FUN_004ad460(&this_00->field_01D5,1);
        }
      }
    }
    else {
      if ((((this_00[1].field_0x56 == '\0') && (iVar10 = *(int *)&this_00->field_0x2ae, iVar10 != 2)
           ) && (iVar10 != 3)) && ((iVar10 != 4 && (iVar10 != 5)))) {
        uVar11 = thunk_FUN_00627400(this_00,iVar10);
        *(undefined4 *)&this_00->field_0x2ae = uVar11;
      }
      iVar10 = *(int *)&this_00->field_0x2ae;
      if (((iVar10 != 2) && (iVar10 != 3)) && ((iVar10 != 4 && (iVar10 != 5)))) {
        if (this_00[1].field_0x95 == '\0') {
          uVar12 = thunk_FUN_006226c0(this_00,(int)*(short *)&this_00->field_0x47,
                                      (int)*(short *)&this_00->field_0x49);
          this_00[1].field_0x95 = (char)uVar12;
          if (((char)uVar12 != '\0') && ((int)this_00->field_02BA < 0)) {
            LoadImagMineSet(this_00,0);
            thunk_FUN_004ad460(&this_00->field_01D5,1);
          }
        }
        else if ((*(byte *)&DAT_00802a38->field_00E4 & 3) == 0) {
          uVar12 = thunk_FUN_006226c0(this_00,(int)*(short *)&this_00->field_0x47,
                                      (int)*(short *)&this_00->field_0x49);
          this_00[1].field_0x95 = (char)uVar12;
          if (((char)uVar12 == '\0') && (this_00[1].field_0x2b != '\0')) {
            thunk_FUN_004ad430((int)&this_00->field_01D5);
            this_00[1].field_0x2b = 0;
          }
        }
        uVar6 = *(undefined2 *)&this_00[1].field_0x4;
        uVar7 = *(undefined2 *)&this_00[1].field_0x8;
        *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)&this_00[1].field_0xc;
        cVar1 = this_00[1].field_0x95;
        *(undefined2 *)&this_00->field_0x41 = uVar6;
        *(undefined2 *)&this_00->field_0x43 = uVar7;
        if (cVar1 != '\0') {
          thunk_FUN_00623600((int *)this_00);
        }
        cVar1 = this_00->field_0x2ad;
        if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) &&
           (((((uint)DAT_00802a38->field_00E4 % 5 == 0 &&
              (0x19 < (uint)(DAT_00802a38->field_00E4 - *(int *)&this_00[1].field_0x88))) &&
             ((*(int *)&this_00->field_0x2ae == 0 || (*(int *)&this_00->field_0x2ae == 1)))) &&
            (iVar10 = thunk_FUN_00625730(this_00), iVar10 != 0)))) {
          *(undefined4 *)&this_00->field_0x2ae = 2;
          *(int *)&this_00[1].field_0x51 =
               *(int *)(&DAT_007d02a4 + (uint)(byte)this_00->field_0x2ad * 4) +
               DAT_00802a38->field_00E4;
        }
      }
    }
    if (((*(int *)&this_00[1].field_0x97 == 0) && (*(int *)&this_00->field_0x2ae != 2)) &&
       ((*(int *)&this_00->field_0x2ae != 4 &&
        (((short)(*(short *)&this_00->field_0x47 * 0xc9 + 100) == *(short *)&this_00->field_0x41 &&
         ((short)(*(short *)&this_00->field_0x49 * 0xc9 + 100) == *(short *)&this_00->field_0x43))))
       )) {
      *(undefined4 *)&this_00[1].field_0x97 = 1;
    }
    if ((*(int **)&this_00[1].field_0xa5 != (int *)0x0) &&
       (iVar10 = thunk_FUN_006372e0(*(int **)&this_00[1].field_0xa5), iVar10 != 0)) {
      thunk_FUN_006366d0(*(int *)&this_00[1].field_0xa5);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0xa5);
      *(undefined4 *)&this_00[1].field_0xa5 = 0;
    }
    if (this_00[1].field_0x9b == '\0') {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_00627170(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (uVar12 != 2) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x14);
  *(undefined4 *)&local_8->field_0x219 = 0x23a;
  *(undefined4 *)&local_8->field_0x215 = 0x32;
  if (*(int *)(iVar10 + 0xc) == 2) {
    thunk_FUN_00622ab0(local_8,*(undefined4 **)(param_1 + 0x14));
    if (this_00[1].field_0x55 != '\0') {
      sVar2 = *(short *)&this_00->field_0x47;
      local_1c = 1;
      local_14 = (uint)(byte)this_00->field_0x8e;
      sVar3 = *(short *)&this_00->field_0x4b;
      sVar4 = *(short *)&this_00->field_0x49;
      local_18 = (int)sVar4;
      if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
         (((DAT_007fb242 <= sVar4 || (sVar3 < 0)) || (DAT_007fb244 <= sVar3)))) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(DAT_007fb248 +
                         (local_14 +
                         ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                         (int)sVar2) * 2) * 4);
      }
      if ((iVar10 == 0) &&
         (iVar10 = DumpClassC::WritePtr(sVar2,sVar4,sVar3,local_14,(int)this_00), iVar10 == 0)) {
        this_00[1].field_0x56 = this_00[1].field_0x56 + '\x01';
        iVar10 = local_1c;
      }
      else {
        iVar10 = 0;
      }
      if (iVar10 == 0) {
        thunk_FUN_00622670(this_00);
      }
    }
    puVar15 = (undefined4 *)&this_00->field_0x231;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (this_00[1].field_0x95 != '\0') {
      uVar11 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      this_00->field_02BA = uVar11;
    }
    uVar5 = *(ushort *)&this_00->field_0x32;
    *(undefined4 *)&this_00[1].field_0xa5 = 0;
    iVar10 = STAllPlayersC::RegisterMine(DAT_007fa174,uVar5,this_00);
    if (iVar10 == 0) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    thunk_FUN_00622670(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar15 = *(undefined4 **)(param_1 + 0x14);
  puVar16 = (undefined4 *)&local_8->field_0x25e;
  for (iVar14 = 0x13; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
  *(undefined1 *)((int)puVar16 + 2) = *(undefined1 *)((int)puVar15 + 2);
  if (*(int *)(iVar10 + 0xc) == 0) {
    *(int *)&local_8->field_0x276 = (int)(short)(*(short *)&local_8->field_0x276 * 0xc9 + 100);
    *(int *)&local_8->field_0x27a = (int)(short)(*(short *)&local_8->field_0x27a * 0xc9 + 100);
    *(int *)&local_8->field_0x27e = (int)(short)(*(short *)&local_8->field_0x27e * 200 + 100);
    *(undefined4 *)&local_8->field_0x282 = *(undefined4 *)&local_8->field_0x276;
    *(undefined4 *)&local_8->field_0x286 = *(undefined4 *)&local_8->field_0x27a;
    *(undefined4 *)&local_8->field_0x28a = *(undefined4 *)&local_8->field_0x27e;
  }
  iVar10 = thunk_FUN_00622ba0(local_8);
  if (iVar10 == 0) {
    thunk_FUN_00622670(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  bVar9 = false;
  if (*(int *)&this_00[1].field_0x38 == 0) {
    *(undefined2 *)&this_00->field_0x34 = *(undefined2 *)&this_00->field_0x41;
    iVar10 = *(int *)&this_00[1].field_0xc;
    *(undefined2 *)&this_00->field_0x36 = *(undefined2 *)&this_00->field_0x43;
    iVar14 = *(int *)&this_00[1].field_0x8;
    *(undefined2 *)&this_00->field_0x38 = *(undefined2 *)&this_00->field_0x45;
    iVar10 = thunk_FUN_00624570(this_00,CASE_1,*(int *)&this_00[1].field_0x4,iVar14,iVar10);
    if (iVar10 == 0) goto cf_common_exit_00621D24;
    *(undefined4 *)&this_00[1].field_0x30 = 1;
  }
  else {
    iVar10 = thunk_FUN_00624570(this_00,CASE_2,(int)*(short *)&this_00->field_0x3a,
                                (int)*(short *)&this_00->field_0x3c,
                                (int)*(short *)&this_00->field_0x3e);
    if (iVar10 == 0) goto cf_common_exit_00621D24;
    *(undefined4 *)&this_00[1].field_0x30 = 2;
  }
  *(undefined4 *)&this_00->field_0x2ae = 1;
  bVar9 = true;
cf_common_exit_00621D24:
  if (bVar9) {
    *(undefined4 *)&this_00->field_0x2ae = 1;
    this_00[1].field_0x95 = 1;
    LoadImagMineSet(this_00,0);
    iVar10 = STAllPlayersC::RegisterMine(DAT_007fa174,0xffff,this_00);
    if (iVar10 != 0) {
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

