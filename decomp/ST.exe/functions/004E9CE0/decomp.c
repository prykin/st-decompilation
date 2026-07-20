
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_tele.cpp
   TLOBaseTy::teleNone */

int __thiscall TLOBaseTy::teleNone(TLOBaseTy *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  STJellyGunC *this_00;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar11;
  uint uVar12;
  InternalExceptionFrame local_64;
  STJellyGunC *local_20;
  int local_1c;
  undefined4 local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  void *local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = (STJellyGunC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d5,0,iVar6,&DAT_007a4ccc
                               ,s_TLOBaseTy__teleNone_error_007c151c);
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d6);
      return iVar6;
    }
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  switch(*(undefined4 *)((int)&local_20[1].field_01D5 + 3)) {
  case 1:
    if (*(int *)&local_20[1].field_0x148 == 0) {
      if (((*(int *)&local_20[2].field_0x88 == *(int *)&local_20[1].field_0x1e0) &&
          (*(int *)&local_20[2].field_0x8c == *(int *)&local_20[1].field_0x1e4)) &&
         (*(int *)&local_20[2].field_0x90 == *(int *)&local_20[1].field_0x1e8 + 1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *(undefined4 *)((int)&local_20[1].field_01D5 + 3) = 2;
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      thunk_FUN_004c6c70(local_20,*(int *)&local_20[1].field_0x1e0,
                         *(undefined4 *)&local_20[1].field_0x1e4,
                         *(int *)&local_20[1].field_0x1e8 + 1);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 2:
    iVar6 = FUN_006e62d0(PTR_00802a38,*(int *)&local_20[1].field_0x1dc,(int *)&local_8);
    if (iVar6 != 0) {
      thunk_FUN_004ea620((AnonShape_004EA620_716C262B *)this_00);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    iVar6 = thunk_FUN_004e91e0(local_8,(STBoatC *)this_00);
    if (iVar6 != 0) {
      *(undefined4 *)&this_00[1].field_0x1f8 = 1;
      *(undefined4 *)((int)&this_00[1].field_01D5 + 3) = 3;
      thunk_FUN_00416270(this_00,local_14,(int *)local_10,(int *)local_c);
      STJellyGunC::sub_00415B30
                (this_00,local_14[0],local_10[0],local_c[0],
                 *(short *)&this_00[1].field_0x1e0 * 0xc9 + 200,
                 *(short *)&this_00[1].field_0x1e4 * 0xc9 + 200,
                 (*(short *)&this_00[1].field_0x1e8 + 1) * 200,this_00->field_0x62);
      puVar1 = (undefined4 *)((int)&this_00[1].field_01ED + 3);
      thunk_FUN_004e9650(local_8,(undefined4 *)&this_00[1].field_0x1ec,puVar1,
                         (undefined4 *)&this_00[1].field_0x1f4);
      thunk_FUN_004e96c0(local_8,(int *)this_00->field_0018);
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)&this_00[1].field_0x1ec,*puVar1,
                         *(undefined4 *)&this_00[1].field_0x1f4);
      *(undefined4 *)&this_00[1].field_0x200 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 3:
    iVar6 = STJellyGunC::sub_00415ED0(local_20,&local_18,&local_1c);
    if (iVar6 == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a,0,-5,&DAT_007a4ccc,
                                 s_TLOBaseTy__teleNone_movement_err_007c1564);
      if (iVar6 == 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (iVar6 == 0) {
      iVar10 = (int)this_00->field_0045;
      *(undefined4 *)((int)&this_00[1].field_01D5 + 3) = 4;
      uVar12 = 0;
      uVar2 = PTR_00802a38->field_00E4;
      *(undefined4 *)&this_00[1].field_0x1fc = 0;
      iVar6 = (int)this_00->field_0043;
      *(undefined4 *)&this_00[1].field_0x208 = uVar2;
      iVar9 = (int)this_00->field_0041;
      iVar11 = 0;
      *(undefined4 *)&this_00[1].field_0x204 = 0;
      uVar7 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      thunk_FUN_006377b0(uVar7,iVar11,iVar9,iVar6,iVar10,uVar12);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 4:
    iVar6 = *(int *)&local_20[1].field_0x208;
    uVar7 = PTR_00802a38->field_00E4;
    if ((iVar6 + 0x15U <= uVar7) && (*(int *)&local_20[1].field_0x1fc == 0)) {
      iVar6 = 0;
      uVar7 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar7,iVar6);
      if (*(int *)&this_00[2].field_0xd7 != 0) {
        iVar6 = 0;
        uVar7 = thunk_FUN_004ad650(*(int *)&this_00[2].field_0xd7);
        FUN_006eabf0((void *)this_00->field_0211,uVar7,iVar6);
      }
      if (*(int *)&this_00[2].field_0xdb != 0) {
        iVar6 = 0;
        uVar7 = thunk_FUN_004ad650(*(int *)&this_00[2].field_0xdb);
        FUN_006eabf0((void *)this_00->field_0211,uVar7,iVar6);
      }
      *(undefined4 *)&this_00[1].field_0x1fc = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if ((iVar6 + 100U <= uVar7) && (*(int *)&local_20[1].field_0x204 == 0)) {
      uVar12 = 0;
      iVar9 = (int)(short)(*(short *)&local_20[1].field_0x1f4 * 200 + 100);
      iVar6 = (int)(short)(*(short *)((int)&local_20[1].field_01ED + 3) * 0xc9 + 100);
      iVar10 = (int)(short)(*(short *)&local_20[1].field_0x1ec * 0xc9 + 100);
      iVar11 = 0;
      uVar7 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      thunk_FUN_006377b0(uVar7,iVar11,iVar10,iVar6,iVar9,uVar12);
      *(undefined4 *)&this_00[1].field_0x204 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (iVar6 + 0x79U <= uVar7) {
      if (*(int *)&local_20[1].field_0x200 != 0) {
        thunk_FUN_004d0a80(DAT_00800bcc,*(int *)&local_20[1].field_0x1ec,
                           *(int *)((int)&local_20[1].field_01ED + 3),
                           *(int *)&local_20[1].field_0x1f4);
        *(undefined4 *)&this_00[1].field_0x200 = 0;
      }
      thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this_00);
      uVar2 = *(undefined4 *)&this_00[1].field_0x1f4;
      uVar3 = *(undefined4 *)((int)&this_00[1].field_01ED + 3);
      *(undefined4 *)&this_00[2].field_0x88 = *(undefined4 *)&this_00[1].field_0x1ec;
      *(undefined4 *)&this_00[2].field_0x90 = uVar2;
      *(undefined4 *)&this_00[2].field_0x8c = uVar3;
      iVar6 = thunk_FUN_00417a20(this_00,*(short *)&this_00[2].field_0x88,(short)uVar3,(short)uVar2,
                                 1);
      if (iVar6 != 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1b3);
      }
      thunk_FUN_0041d900(this_00,*(short *)&this_00[2].field_0x88,*(short *)&this_00[2].field_0x8c,
                         *(short *)&this_00[2].field_0x90);
      iVar6 = 1;
      uVar7 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar7,iVar6);
      if (*(int *)&this_00[2].field_0xd7 != 0) {
        iVar6 = 1;
        uVar7 = thunk_FUN_004ad650(*(int *)&this_00[2].field_0xd7);
        FUN_006eabf0((void *)this_00->field_0211,uVar7,iVar6);
      }
      if (*(int *)&this_00[2].field_0xdb != 0) {
        iVar6 = 1;
        uVar7 = thunk_FUN_004ad650(*(int *)&this_00[2].field_0xdb);
        FUN_006eabf0((void *)this_00->field_0211,uVar7,iVar6);
      }
      if ((*(int *)(&DAT_00792778 + this_00->field_0235 * 4) == 0) ||
         (iVar6 = thunk_FUN_004e81b0(*(int *)&this_00->field_0x24,this_00->field_0235,0), iVar6 == 0
         )) {
        puVar8 = (undefined *)0x5;
      }
      else {
        puVar8 = (undefined *)thunk_FUN_004e81b0(*(int *)&this_00->field_0x24,this_00->field_0235,0)
        ;
      }
      thunk_FUN_0041c3f0(this_00,puVar8);
      *(undefined4 *)((int)&this_00[1].field_01D5 + 3) = 5;
      uVar2 = PTR_00802a38->field_00E4;
      *(undefined4 *)&this_00[1].field_0x1fc = 0;
      *(undefined4 *)&this_00[1].field_0x208 = uVar2;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 5:
    if ((*(int *)&local_20[1].field_0x1f8 != 0) &&
       (iVar6 = FUN_006e62d0(PTR_00802a38,*(int *)&local_20[1].field_0x1dc,(int *)&local_8),
       iVar6 == 0)) {
      thunk_FUN_004e95c0(local_8,(int)this_00);
    }
    *(undefined4 *)((int)&this_00[1].field_01D5 + 3) = 0;
    *(undefined4 *)&this_00[1].field_0x1dc = 0;
    *(undefined4 *)&this_00[1].field_0x1f8 = 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

