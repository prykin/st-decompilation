#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_tele.cpp
   TLOBaseTy::teleNone */

int __thiscall TLOBaseTy::teleNone(TLOBaseTy *this)

{
  code *pcVar1;
  bool bVar2;
  STJellyGunC *this_00;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_tele.cpp",0x1d5,0,iVar3,"%s"
                               ,"TLOBaseTy::teleNone error");
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Artem\\TLO_tele.cpp",0x1d6);
      return iVar3;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(*(undefined4 *)&local_20->field_0x46c) {
  case 1:
    if (local_20->field_03DC == 0) {
      if (((local_20->field_05B0 == *(int *)&local_20->field_0x474) &&
          (local_20->field_05B4 == *(int *)&local_20->field_0x478)) &&
         (local_20->field_05B8 == *(int *)&local_20->field_0x47c + 1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        *(undefined4 *)&local_20->field_0x46c = 2;
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      thunk_FUN_004c6c70(local_20,*(int *)&local_20->field_0x474,
                         *(undefined4 *)&local_20->field_0x478,*(int *)&local_20->field_0x47c + 1);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 2:
    iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)&local_20->field_0x470,(int *)&local_8);
    if (iVar3 != 0) {
      thunk_FUN_004ea620((AnonShape_004EA620_716C262B *)this_00);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    iVar3 = thunk_FUN_004e91e0(local_8,(STBoatC *)this_00);
    if (iVar3 != 0) {
      *(undefined4 *)&this_00->field_0x48c = 1;
      *(undefined4 *)&this_00->field_0x46c = 3;
      thunk_FUN_00416270(this_00,local_14,(int *)local_10,(int *)local_c);
      sub_00415B30(this_00,local_14[0],local_10[0],local_c[0],
                   *(short *)&this_00->field_0x474 * 0xc9 + 200,
                   *(short *)&this_00->field_0x478 * 0xc9 + 200,
                   (*(short *)&this_00->field_0x47c + 1) * 200,this_00->field_0062);
      thunk_FUN_004e9650(local_8,(undefined4 *)&this_00->field_0x480,
                         (undefined4 *)&this_00->field_0x484,(undefined4 *)&this_00->field_0x488);
      thunk_FUN_004e96c0(local_8,(int *)this_00->field_0018);
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)&this_00->field_0x480,
                         *(undefined4 *)&this_00->field_0x484,*(undefined4 *)&this_00->field_0x488);
      *(undefined4 *)&this_00->field_0x494 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 3:
    iVar3 = STJellyGunC::sub_00415ED0(local_20,&local_18,&local_1c);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_tele.cpp",0x19a,0,-5,"%s",
                                 "TLOBaseTy::teleNone\nmovement error");
      if (iVar3 == 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_tele.cpp",0x19a);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar3 == 0) {
      iVar7 = (int)this_00->field_0045;
      *(undefined4 *)&this_00->field_0x46c = 4;
      uVar9 = 0;
      uVar4 = PTR_00802a38->field_00E4;
      *(undefined4 *)&this_00->field_0x490 = 0;
      iVar3 = (int)this_00->field_0043;
      *(uint *)&this_00->field_0x49c = uVar4;
      iVar6 = (int)this_00->field_0041;
      iVar8 = 0;
      *(undefined4 *)&this_00->field_0x498 = 0;
      uVar4 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      thunk_FUN_006377b0(uVar4,iVar8,iVar6,iVar3,iVar7,uVar9);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 4:
    iVar3 = *(int *)&local_20->field_0x49c;
    uVar4 = PTR_00802a38->field_00E4;
    if ((iVar3 + 0x15U <= uVar4) && (*(int *)&local_20->field_0x490 == 0)) {
      iVar3 = 0;
      uVar4 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3._0_2_ = this_00[1].field_0043;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3._2_2_ = this_00[1].field_0045;
      if (iVar3 != 0) {
        iVar6 = 0;
        uVar4 = thunk_FUN_004ad650(iVar3);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar6);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6._0_2_ = this_00[1].field_0047;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6._2_2_ = this_00[1].field_0049;
      if (iVar6 != 0) {
        iVar3 = 0;
        uVar4 = thunk_FUN_004ad650(iVar6);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      *(undefined4 *)&this_00->field_0x490 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if ((iVar3 + 100U <= uVar4) && (*(int *)&local_20->field_0x498 == 0)) {
      uVar9 = 0;
      iVar6 = (int)(short)(*(short *)&local_20->field_0x488 * 200 + 100);
      iVar3 = (int)(short)(*(short *)&local_20->field_0x484 * 0xc9 + 100);
      iVar7 = (int)(short)(*(short *)&local_20->field_0x480 * 0xc9 + 100);
      iVar8 = 0;
      uVar4 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      thunk_FUN_006377b0(uVar4,iVar8,iVar7,iVar3,iVar6,uVar9);
      *(undefined4 *)&this_00->field_0x498 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (iVar3 + 0x79U <= uVar4) {
      if (*(int *)&local_20->field_0x494 != 0) {
        thunk_FUN_004d0a80(DAT_00800bcc,*(int *)&local_20->field_0x480,
                           *(int *)&local_20->field_0x484,*(int *)&local_20->field_0x488);
        *(undefined4 *)&this_00->field_0x494 = 0;
      }
      thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this_00);
      this_00->field_05B0 = *(undefined4 *)&this_00->field_0x480;
      this_00->field_05B8 = *(undefined4 *)&this_00->field_0x488;
      this_00->field_05B4 = *(undefined4 *)&this_00->field_0x484;
      iVar3 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_05B0,
                                 (short)*(undefined4 *)&this_00->field_0x484,
                                 (short)*(undefined4 *)&this_00->field_0x488,1);
      if (iVar3 != 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_tele.cpp",0x1b3);
      }
      thunk_FUN_0041d900(this_00,*(short *)&this_00->field_05B0,*(short *)&this_00->field_05B4,
                         *(short *)&this_00->field_05B8);
      iVar3 = 1;
      uVar4 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7._0_2_ = this_00[1].field_0043;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7._2_2_ = this_00[1].field_0045;
      if (iVar7 != 0) {
        iVar3 = 1;
        uVar4 = thunk_FUN_004ad650(iVar7);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar8._0_2_ = this_00[1].field_0047;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar8._2_2_ = this_00[1].field_0049;
      if (iVar8 != 0) {
        iVar3 = 1;
        uVar4 = thunk_FUN_004ad650(iVar8);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      if ((*(int *)(&DAT_00792778 + this_00->field_0235 * 4) == 0) ||
         (iVar3 = thunk_FUN_004e81b0(this_00->field_0024,this_00->field_0235,0), iVar3 == 0)) {
        puVar5 = (undefined *)0x5;
      }
      else {
        puVar5 = (undefined *)thunk_FUN_004e81b0(this_00->field_0024,this_00->field_0235,0);
      }
      thunk_FUN_0041c3f0(this_00,puVar5);
      *(undefined4 *)&this_00->field_0x46c = 5;
      uVar4 = PTR_00802a38->field_00E4;
      *(undefined4 *)&this_00->field_0x490 = 0;
      *(uint *)&this_00->field_0x49c = uVar4;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case 5:
    if ((*(int *)&local_20->field_0x48c != 0) &&
       (iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)&local_20->field_0x470,(int *)&local_8),
       iVar3 == 0)) {
      thunk_FUN_004e95c0(local_8,(int)this_00);
    }
    *(undefined4 *)&this_00->field_0x46c = 0;
    *(undefined4 *)&this_00->field_0x470 = 0;
    *(undefined4 *)&this_00->field_0x48c = 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

