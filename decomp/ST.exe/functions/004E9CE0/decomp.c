#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_tele.cpp
   TLOBaseTy::teleNone

   [STSwitchEnumApplier] Switch target field_046C uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_046CState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall TLOBaseTy::teleNone(TLOBaseTy *this)

{
  code *pcVar1;
  bool bVar2;
  TLOBaseTy *this_00;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_64;
  TLOBaseTy *local_20;
  int local_1c;
  undefined4 local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  void *local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
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
  switch(local_20->field_046C) {
  case CASE_1:
    if (local_20->field_03DC == 0) {
      if (((local_20->field_05B0 == local_20->field_0474) &&
          (local_20->field_05B4 == local_20->field_0478)) &&
         (local_20->field_05B8 == local_20->field_047C + 1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_20->field_046C = CASE_2;
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      sub_004C6C70(local_20,local_20->field_0474,local_20->field_0478,local_20->field_047C + 1);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_2:
    iVar3 = FUN_006e62d0(g_playSystem_00802A38,local_20->field_0470,(int *)&local_8);
    if (iVar3 != 0) {
      sub_004EA620(this_00);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    iVar3 = thunk_FUN_004e91e0(local_8,(STBoatC *)this_00);
    if (iVar3 != 0) {
      this_00->field_048C = 1;
      this_00->field_046C = CASE_3;
      thunk_FUN_00416270(this_00,local_14,(int *)local_10,(int *)local_c);
      sub_00415B30(this_00,local_14[0],local_10[0],local_c[0],
                   *(short *)&this_00->field_0474 * 0xc9 + 200,
                   *(short *)&this_00->field_0478 * 0xc9 + 200,
                   (*(short *)&this_00->field_047C + 1) * 200,this_00->field_0062);
      thunk_FUN_004e9650(local_8,&this_00->field_0480,&this_00->field_0484,&this_00->field_0488);
      thunk_FUN_004e96c0(local_8,(int *)this_00->field_0018);
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,this_00->field_0480,this_00->field_0484,this_00->field_0488);
      this_00->field_0494 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_3:
    iVar3 = STJellyGunC::sub_00415ED0((STJellyGunC *)local_20,&local_18,&local_1c);
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
      this_00->field_046C = CASE_4;
      uVar9 = 0;
      uVar4 = g_playSystem_00802A38->field_00E4;
      this_00->field_0490 = 0;
      iVar3 = (int)this_00->field_0043;
      this_00->field_049C = uVar4;
      iVar6 = (int)this_00->field_0041;
      iVar8 = 0;
      this_00->field_0498 = 0;
      uVar4 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      thunk_FUN_006377b0(uVar4,iVar8,iVar6,iVar3,iVar7,uVar9);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_4:
    uVar4 = local_20->field_049C;
    uVar9 = g_playSystem_00802A38->field_00E4;
    if ((uVar4 + 0x15 <= uVar9) && (local_20->field_0490 == 0)) {
      iVar3 = 0;
      uVar4 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      if (this_00->field_05FF != (STT3DSprC *)0x0) {
        iVar3 = 0;
        uVar4 = thunk_FUN_004ad650((int)this_00->field_05FF);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      if (this_00->field_0603 != (STT3DSprC *)0x0) {
        iVar3 = 0;
        uVar4 = thunk_FUN_004ad650((int)this_00->field_0603);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      this_00->field_0490 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if ((uVar4 + 100 <= uVar9) && (local_20->field_0498 == 0)) {
      uVar9 = 0;
      iVar6 = (int)(short)(*(short *)&local_20->field_0488 * 200 + 100);
      iVar3 = (int)(short)(*(short *)&local_20->field_0484 * 0xc9 + 100);
      iVar7 = (int)(short)(*(short *)&local_20->field_0480 * 0xc9 + 100);
      iVar8 = 0;
      uVar4 = thunk_FUN_004ad650((int)&local_20->field_01D5);
      thunk_FUN_006377b0(uVar4,iVar8,iVar7,iVar3,iVar6,uVar9);
      this_00->field_0498 = 1;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar4 + 0x79 <= uVar9) {
      if (local_20->field_0494 != 0) {
        thunk_FUN_004d0a80(DAT_00800bcc,local_20->field_0480,local_20->field_0484,
                           local_20->field_0488);
        this_00->field_0494 = 0;
      }
      sub_0041C5A0(this_00);
      this_00->field_05B0 = this_00->field_0480;
      this_00->field_05B8 = this_00->field_0488;
      this_00->field_05B4 = this_00->field_0484;
      iVar3 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_05B0,(short)this_00->field_0484,
                                 (short)this_00->field_0488,1);
      if (iVar3 != 0) {
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_tele.cpp",0x1b3);
      }
      thunk_FUN_0041d900(this_00,*(short *)&this_00->field_05B0,*(short *)&this_00->field_05B4,
                         *(short *)&this_00->field_05B8);
      iVar3 = 1;
      uVar4 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      if (this_00->field_05FF != (STT3DSprC *)0x0) {
        iVar3 = 1;
        uVar4 = thunk_FUN_004ad650((int)this_00->field_05FF);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      if (this_00->field_0603 != (STT3DSprC *)0x0) {
        iVar3 = 1;
        uVar4 = thunk_FUN_004ad650((int)this_00->field_0603);
        FUN_006eabf0((void *)this_00->field_0211,uVar4,iVar3);
      }
      if ((*(int *)(&DAT_00792778 + this_00->field_0235 * 4) == 0) ||
         (iVar3 = thunk_FUN_004e81b0(this_00->field_0024,this_00->field_0235,0), iVar3 == 0)) {
        puVar5 = (undefined *)0x5;
      }
      else {
        puVar5 = (undefined *)thunk_FUN_004e81b0(this_00->field_0024,this_00->field_0235,0);
      }
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this_00,puVar5);
      this_00->field_046C = CASE_5;
      uVar4 = g_playSystem_00802A38->field_00E4;
      this_00->field_0490 = 0;
      this_00->field_049C = uVar4;
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    break;
  case CASE_5:
    if ((local_20->field_048C != 0) &&
       (iVar3 = FUN_006e62d0(g_playSystem_00802A38,local_20->field_0470,(int *)&local_8), iVar3 == 0
       )) {
      thunk_FUN_004e95c0(local_8,(int)this_00);
    }
    this_00->field_046C = 0;
    this_00->field_0470 = 0;
    this_00->field_048C = 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

