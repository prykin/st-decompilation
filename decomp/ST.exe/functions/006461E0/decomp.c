#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::GetMessage

   [STSwitchEnumApplier] Switch target field_00A9 uses
   /SubmarineTitans/Recovered/Enums/STVolcanoC_field_00A9State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004038D2|006461E0; family_names=STVolcanoC::GetMessage; ret4=17;
   direct_offsets={10:1,14:1,18:1,1c:1} */

int __thiscall STVolcanoC::GetMessage(STVolcanoC *this,STMessage *message)

{
  uint uVar1;
  STMessageId SVar2;
  code *pcVar3;
  STVolcanoC *this_00;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STVolcanoC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_volc.cpp",0x121,0,iVar4,"%s",
                               "STVolcanoC::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_volc.cpp",0x123);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar2 = message->id;
  if (SVar2 < 4) {
    if (SVar2 == MESS_SHARED_0003) {
      thunk_FUN_006479e0((int)local_8);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      switch(local_8->field_00A9) {
      case CASE_1:
        if (local_8->field_00A4 < (uint)PTR_00802a38->field_00E4) {
          local_8->field_009C = PTR_00802a38->field_00E4;
          thunk_FUN_00647370((AnonShape_00647370_C4EFCC30 *)local_8);
          iVar4 = thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (iVar4 != 0) {
            this_00->field_00A8 = 1;
          }
          this_00->field_0071 = 0x29;
          this_00->field_0075 = 0x2e;
          this_00->field_008A = 10;
          this_00->field_008E = 0xf;
          if (this_00->field_00A8 != '\0') {
            LoadImagVolcano(this_00,0);
          }
          this_00->field_00A9 = CASE_4;
          thunk_FUN_00647a60(this_00,0x4b5);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_2:
        if ((((local_8->field_0058 & 1) != 0) && ((uint)PTR_00802a38->field_00E4 % 3 == 0)) &&
           (iVar4 = local_8->field_0071 + 1, local_8->field_0071 = iVar4,
           local_8->field_0075 <= iVar4)) {
          local_8->field_0071 = 0;
          local_8->field_0075 = 10;
          local_8->field_00A9 = CASE_1;
          uVar1 = local_8->field_00B1 * 0x41c64e6d + 0x3039;
          local_8->field_00B1 = uVar1;
          local_8->field_00A4 = (uVar1 >> 0x10) % 0x2711 + 20000 + PTR_00802a38->field_00E4;
          if (local_8->field_005C == '\0') {
            if (local_8->field_0061 != 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              FUN_006e9000(PTR_00807598,*(undefined4 *)(*(int *)(local_8->field_0061 + 0x21) + 0xa0)
                           ,0x5a,0x2f,(float)local_8->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                           (float)local_8->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                           (float)local_8->field_006D * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              this_00->field_005C = 1;
              thunk_FUN_006479e0((int)this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
            puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                               (DAT_00806764,CASE_1D,"expl_vol",0xffffffff,0,1,0,
                                (undefined4 *)0x0);
            this_00->field_0061 = puVar5;
            if (puVar5 != (ushort *)0x0) {
              FUN_006e9000(PTR_00807598,*(undefined4 *)(*(int *)((int)puVar5 + 0x21) + 0xa0),0x5a,
                           0x2f,(float)this_00->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_006D * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              this_00->field_005C = 1;
              this_00->field_0061 = 0;
            }
          }
          thunk_FUN_006479e0((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (((local_8->field_0058 & 2) != 0) && ((uint)PTR_00802a38->field_00E4 % 3 == 0)) {
          iVar4 = local_8->field_007E + 1;
          local_8->field_007E = iVar4;
          if (local_8->field_0082 <= iVar4) {
            local_8->field_007E = 0;
            FUN_006eab60(PTR_00807598,local_8->field_007A);
          }
          iVar4 = this_00->field_008A + 1;
          this_00->field_008A = iVar4;
          if (this_00->field_008E <= iVar4) {
            this_00->field_008A = 0;
            FUN_006eab60(PTR_00807598,this_00->field_0086);
          }
        }
        if ((((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0) && (2 < this_00->field_0071)) &&
           ((this_00->field_0071 < (this_00->field_0075 << 1) / 3 &&
            (uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039, this_00->field_00B1 = uVar1,
            (uVar1 & 0x70000) == 0x10000)))) {
          thunk_FUN_006473e0(this_00,0);
        }
        if (this_00->field_00A8 == '\0') {
          iVar4 = thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
          if (iVar4 != 0) {
            this_00->field_00A8 = 1;
            LoadImagVolcano(this_00,2);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (this_00->field_00A9 == CASE_2) {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_3:
        if (((local_8->field_0058 & 1) != 0) && ((uint)PTR_00802a38->field_00E4 % 3 == 0)) {
          iVar4 = local_8->field_0071 + 1;
          local_8->field_0071 = iVar4;
          if ((local_8->field_0075 <= iVar4) &&
             (local_8->field_0071 = 0, local_8->field_00A4 < (uint)PTR_00802a38->field_00E4)) {
            local_8->field_00A9 = CASE_2;
            thunk_FUN_00647a60(local_8,0x4b6);
            if (this_00->field_00A8 != '\0') {
              LoadImagVolcano(this_00,1);
            }
            this_00->field_0071 = 10;
            this_00->field_0075 = 0x29;
            this_00->field_0058 = this_00->field_0058 | 3;
            this_00->field_007E = 0;
            this_00->field_0082 = 0x1f;
          }
          iVar4 = this_00->field_008A + 1;
          this_00->field_008A = iVar4;
          if (this_00->field_008E <= iVar4) {
            this_00->field_008A = 0;
          }
        }
        uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039;
        this_00->field_00B1 = uVar1;
        if ((uVar1 & 0xf0000) == 0x10000) {
          thunk_FUN_006473e0(this_00,1);
        }
        if (this_00->field_00A8 != '\0') {
          thunk_FUN_00647960((int)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar4 = thunk_FUN_00646e00(this_00->field_0065,this_00->field_0069,this_00->field_006D);
        if (iVar4 != 0) {
          this_00->field_00A8 = 1;
          LoadImagVolcano(this_00,0);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        break;
      case CASE_4:
        if ((uint)PTR_00802a38->field_00E4 % 5 == 0) {
          iVar4 = local_8->field_0071 + 1;
          local_8->field_0071 = iVar4;
          if (local_8->field_0075 <= iVar4) {
            uVar1 = local_8->field_00B1 * 0x41c64e6d + 0x3039;
            local_8->field_00B1 = uVar1;
            iVar4 = PTR_00802a38->field_00E4;
            local_8->field_00A9 = CASE_3;
            local_8->field_0058 = local_8->field_0058 | 1;
            local_8->field_0071 = 0;
            local_8->field_0075 = 10;
            local_8->field_008A = 0;
            local_8->field_008E = 10;
            local_8->field_00A4 = (uVar1 >> 0x10) % 0x1f5 + 500 + iVar4;
          }
          iVar4 = local_8->field_008A + 1;
          local_8->field_008A = iVar4;
          if (local_8->field_008E <= iVar4) {
            local_8->field_008A = 0;
          }
          if (local_8->field_00A8 != '\0') {
            thunk_FUN_00647960((int)local_8);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar4 = thunk_FUN_00646e00(local_8->field_0065,local_8->field_0069,local_8->field_006D);
          if (iVar4 != 0) {
            this_00->field_00A8 = 1;
            LoadImagVolcano(this_00,0);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        break;
      case CASE_5:
        thunk_FUN_00646d00(local_8);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      case CASE_6:
        local_8->field_00A9 = CASE_1;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if (SVar2 == MESS_ID_CREATE) {
      puVar7 = (message->arg0).ptr;
      if (puVar7[3] == 2) {
        thunk_FUN_00646db0(local_8,puVar7);
        this_00->field_00B1 = this_00->field_00AD;
        this_00->field_00A8 = 0;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      puVar8 = (undefined4 *)&local_8->field_0x1c;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_8->field_00B1 = DAT_00808754;
      iVar4 = thunk_FUN_006472b0((AnonShape_006472B0_8CB9F6B2 *)local_8);
      if (iVar4 != 0) {
        uVar1 = this_00->field_00B1 * 0x41c64e6d + 0x3039;
        this_00->field_00B1 = uVar1;
        this_00->field_00A9 = CASE_6;
        this_00->field_00A4 = (uVar1 >> 0x10) % 0x2711 + 20000;
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00646d00(this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_10 = (byte *)thunk_FUN_00646d40(local_8,&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

