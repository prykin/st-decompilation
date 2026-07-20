
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_tele.cpp
   TLOBaseTy::teleNone */

int __thiscall TLOBaseTy::teleNone(TLOBaseTy *this)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  STBoatC *this_00;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar13;
  uint uVar14;
  InternalExceptionFrame local_64;
  STBoatC *local_20;
  int local_1c;
  undefined4 local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  void *local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = (STBoatC *)this;
  iVar8 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d5,0,iVar8,
                                &DAT_007a4ccc,s_TLOBaseTy__teleNone_error_007c151c);
    if (iVar11 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d6);
      return iVar8;
    }
    pcVar6 = (code *)swi(3);
    iVar8 = (*pcVar6)();
    return iVar8;
  }
  switch(*(undefined4 *)((int)&local_20->field_046B + 1)) {
  case 1:
    if (*(int *)&local_20->field_0x3dc == 0) {
      iVar8 = *(int *)((int)&local_20->field_0471 + 3);
      iVar11._0_2_ = local_20->field_05B0;
      iVar11._2_2_ = local_20->field_05B2;
      if (((iVar11 == iVar8) &&
          (iVar12._0_2_ = local_20->field_05B4, iVar12._2_2_ = local_20->field_05B6,
          iVar12 == *(int *)((int)&local_20->field_0477 + 1))) &&
         (iVar13._0_2_ = local_20->field_05B8, iVar13._2_2_ = local_20->field_05BA,
         iVar13 == *(int *)((int)&local_20->field_047B + 1) + 1)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        *(undefined4 *)((int)&local_20->field_046B + 1) = 2;
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      thunk_FUN_004c6c70(local_20,iVar8,*(undefined4 *)((int)&local_20->field_0477 + 1),
                         *(int *)((int)&local_20->field_047B + 1) + 1);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 2:
    iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)&local_20->field_046F + 1),(int *)&local_8);
    if (iVar8 != 0) {
      thunk_FUN_004ea620((int)this_00);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    iVar8 = thunk_FUN_004e91e0(local_8,this_00);
    if (iVar8 != 0) {
      *(undefined4 *)((int)&this_00->field_048B + 1) = 1;
      *(undefined4 *)((int)&this_00->field_046B + 1) = 3;
      thunk_FUN_00416270(this_00,local_14,(int *)local_10,(int *)local_c);
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this_00,local_14[0],local_10[0],local_c[0],
                 *(short *)((int)&this_00->field_0471 + 3) * 0xc9 + 200,
                 *(short *)((int)&this_00->field_0477 + 1) * 0xc9 + 200,
                 (*(short *)((int)&this_00->field_047B + 1) + 1) * 200,this_00->field_0062);
      puVar1 = (undefined4 *)((int)&this_00->field_0483 + 1);
      thunk_FUN_004e9650(local_8,(undefined4 *)((int)&this_00->field_047F + 1),puVar1,
                         (undefined4 *)&this_00->field_0x488);
      thunk_FUN_004e96c0(local_8,(int *)this_00->field_0018);
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)((int)&this_00->field_047F + 1),*puVar1,
                         *(undefined4 *)&this_00->field_0x488);
      *(undefined4 *)((int)&this_00->field_0493 + 1) = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 3:
    iVar8 = STJellyGunC::sub_00415ED0((STJellyGunC *)local_20,&local_18,&local_1c);
    if (iVar8 == -1) {
      iVar8 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a,0,-5,&DAT_007a4ccc,
                                 s_TLOBaseTy__teleNone_movement_err_007c1564);
      if (iVar8 == 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    if (iVar8 == 0) {
      iVar12 = (int)this_00->field_0045;
      *(undefined4 *)((int)&this_00->field_046B + 1) = 4;
      uVar14 = 0;
      uVar3 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)&this_00->field_048F + 1) = 0;
      iVar8 = (int)this_00->field_0043;
      *(undefined4 *)((int)&this_00->field_049B + 1) = uVar3;
      iVar11 = (int)this_00->field_0041;
      iVar13 = 0;
      *(undefined4 *)((int)&this_00->field_0497 + 1) = 0;
      uVar9 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      thunk_FUN_006377b0(uVar9,iVar13,iVar11,iVar8,iVar12,uVar14);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 4:
    iVar8 = *(int *)((int)&local_20->field_049B + 1);
    uVar9 = *(uint *)((int)DAT_00802a38 + 0xe4);
    if ((iVar8 + 0x15U <= uVar9) && (*(int *)((int)&local_20->field_048F + 1) == 0)) {
      iVar8 = 0;
      uVar9 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar9,iVar8);
      if (*(int *)&this_00->field_0x5ff != 0) {
        iVar8 = 0;
        uVar9 = thunk_FUN_004ad650(*(int *)&this_00->field_0x5ff);
        FUN_006eabf0((void *)this_00->field_0211,uVar9,iVar8);
      }
      if (*(int *)&this_00->field_0x603 != 0) {
        iVar8 = 0;
        uVar9 = thunk_FUN_004ad650(*(int *)&this_00->field_0x603);
        FUN_006eabf0((void *)this_00->field_0211,uVar9,iVar8);
      }
      *(undefined4 *)((int)&this_00->field_048F + 1) = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if ((iVar8 + 100U <= uVar9) && (*(int *)((int)&local_20->field_0497 + 1) == 0)) {
      uVar14 = 0;
      iVar11 = (int)(short)(*(short *)&local_20->field_0x488 * 200 + 100);
      iVar8 = (int)(short)(*(short *)((int)&local_20->field_0483 + 1) * 0xc9 + 100);
      iVar12 = (int)(short)(*(short *)((int)&local_20->field_047F + 1) * 0xc9 + 100);
      iVar13 = 0;
      uVar9 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      thunk_FUN_006377b0(uVar9,iVar13,iVar12,iVar8,iVar11,uVar14);
      *(undefined4 *)((int)&this_00->field_0497 + 1) = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (iVar8 + 0x79U <= uVar9) {
      if (*(int *)((int)&local_20->field_0493 + 1) != 0) {
        thunk_FUN_004d0a80(DAT_00800bcc,*(int *)((int)&local_20->field_047F + 1),
                           *(int *)((int)&local_20->field_0483 + 1),*(int *)&local_20->field_0x488);
        *(undefined4 *)((int)&this_00->field_0493 + 1) = 0;
      }
      thunk_FUN_0041c5a0((int *)this_00);
      uVar3 = *(undefined4 *)((int)&this_00->field_047F + 1);
      uVar4 = *(undefined4 *)&this_00->field_0x488;
      uVar5 = *(undefined4 *)((int)&this_00->field_0483 + 1);
      this_00->field_05B0 = (short)uVar3;
      this_00->field_05B2 = (short)((uint)uVar3 >> 0x10);
      this_00->field_05B8 = (short)uVar4;
      this_00->field_05BA = (short)((uint)uVar4 >> 0x10);
      sVar2 = this_00->field_05B0;
      this_00->field_05B4 = (short)uVar5;
      this_00->field_05B6 = (short)((uint)uVar5 >> 0x10);
      iVar8 = thunk_FUN_00417a20(this_00,sVar2,(short)uVar5,(short)uVar4,1);
      if (iVar8 != 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1b3);
      }
      thunk_FUN_0041d900(this_00,this_00->field_05B0,this_00->field_05B4,this_00->field_05B8);
      iVar8 = 1;
      uVar9 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar9,iVar8);
      if (*(int *)&this_00->field_0x5ff != 0) {
        iVar8 = 1;
        uVar9 = thunk_FUN_004ad650(*(int *)&this_00->field_0x5ff);
        FUN_006eabf0((void *)this_00->field_0211,uVar9,iVar8);
      }
      if (*(int *)&this_00->field_0x603 != 0) {
        iVar8 = 1;
        uVar9 = thunk_FUN_004ad650(*(int *)&this_00->field_0x603);
        FUN_006eabf0((void *)this_00->field_0211,uVar9,iVar8);
      }
      if ((*(int *)(&DAT_00792778 + *(int *)&this_00->field_0x235 * 4) == 0) ||
         (iVar8 = thunk_FUN_004e81b0(*(int *)&this_00->field_0x24,*(int *)&this_00->field_0x235,0),
         iVar8 == 0)) {
        puVar10 = (undefined *)0x5;
      }
      else {
        puVar10 = (undefined *)
                  thunk_FUN_004e81b0(*(int *)&this_00->field_0x24,*(int *)&this_00->field_0x235,0);
      }
      thunk_FUN_0041c3f0(this_00,puVar10);
      *(undefined4 *)((int)&this_00->field_046B + 1) = 5;
      uVar3 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)&this_00->field_048F + 1) = 0;
      *(undefined4 *)((int)&this_00->field_049B + 1) = uVar3;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 5:
    if ((*(int *)((int)&local_20->field_048B + 1) != 0) &&
       (iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)((int)&local_20->field_046F + 1),(int *)&local_8),
       iVar8 == 0)) {
      thunk_FUN_004e95c0(local_8,(int)this_00);
    }
    *(undefined4 *)((int)&this_00->field_046B + 1) = 0;
    *(undefined4 *)((int)&this_00->field_046F + 1) = 0;
    *(undefined4 *)((int)&this_00->field_048B + 1) = 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

