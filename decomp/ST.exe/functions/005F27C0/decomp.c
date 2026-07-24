#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_BheShell.cpp
   STBHEShellC::GetMessage

   [STSwitchEnumApplier] Switch target field_0104 uses
   /SubmarineTitans/Recovered/Enums/STBHEShellC_field_0104State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405EDE|005F27C0; family_names=STBHEShellC::GetMessage; ret4=8;
   direct_offsets={10:1,14:1,18:1,1c:2} */

int __thiscall STBHEShellC::GetMessage(STBHEShellC *this,STMessage *message)

{
  STMessageId SVar1;
  STBHEShellC_field_0104State SVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  STBHEShellC *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  code *pcVar12;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  byte *local_20;
  AnonShape_0060EA30_DCEB68AD *local_1c;
  int local_18;
  STBHEShellC *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_BheShell.cpp",0x163,0,iVar5,
                               "%s","STBHEShellC::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_BheShell.cpp",0x165);
    return 0xffff;
  }
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STOCTOPUSC_0112) {
      uVar9 = local_14->field_008F;
      if ((int)uVar9 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((local_14->field_0104 != CASE_0) && (local_14->field_0104 != CASE_2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      pcVar12 = (code *)0x0;
    }
    else {
      if (SVar1 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      uVar9 = local_14->field_008F;
      if ((int)uVar9 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((local_14->field_0104 != CASE_0) && (local_14->field_0104 != CASE_2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      pcVar12 = thunk_FUN_005f3530;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              ((AnonReceiver_004248D0 *)PTR_00807598,uVar9,0,(uint)pcVar12,(uint)local_14);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_20 = sub_005F5A90(local_14,(int *)&local_1c);
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_20,local_1c);
    FreeAndNull(&local_20);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_NONE) {
    if (SVar1 != MESS_ID_CREATE) {
      if (SVar1 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      thunk_FUN_005f3b00(local_14);
      sub_005F53A0(this_00);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    puVar8 = (message->arg0).ptr;
    if (puVar8[3] != 2) {
      puVar10 = (undefined4 *)&local_14->field_0x4d;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
      iVar5 = local_14->field_006D;
      uVar9 = iVar5 - local_14->field_0061;
      if (((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 4) &&
         (uVar7 = local_14->field_0071 - local_14->field_0065,
         (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 4)) {
        iVar6 = local_14->field_0071;
        if (iVar6 == local_14->field_0065) {
          if (iVar5 == local_14->field_0061) {
            local_14->field_006D = iVar5 + 4;
          }
          else if ((int)uVar9 < 1) {
            local_14->field_006D = iVar5 + (uint)(uVar9 != 0) * -4;
          }
          else {
            local_14->field_006D = iVar5 + 4;
          }
        }
        else if ((int)uVar7 < 1) {
          local_14->field_0071 = iVar6 + (uint)(uVar7 != 0) * -4;
        }
        else {
          local_14->field_0071 = iVar6 + 4;
        }
      }
      local_14->field_001C = DAT_00808754;
      sub_005F34B0(local_14);
      this_00->field_0104 = CASE_0;
      sub_005F3BF0(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,'\0');
      sub_005F5C40(this_00,this_00->field_0061,this_00->field_0065,0x489);
      iVar5 = thunk_FUN_005f3940(this_00->field_0061,this_00->field_0065,this_00->field_0069);
      this_00->field_0103 = (char)iVar5;
      if ((char)iVar5 != '\0') {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::sub_005F35F0
                  ((AnonReceiver_005F35F0 *)this_00,this_00->field_0087);
      }
      this_00->field_007D = DAT_007e66d4;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    sub_005F5B80(local_14,puVar8);
    memset(&this_00->field_0x20, 0, 0x2d); /* compiler bulk-zero initialization */
    this_00->field_001C = this_00->field_016D;
    if (this_00->field_0103 == '\0') {
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::sub_005F35F0
              ((AnonReceiver_005F35F0 *)this_00,this_00->field_0087);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  switch(local_14->field_0104) {
  case CASE_0:
    uVar9 = sub_005F4370(local_14,&local_8,&local_10,&local_c,0);
    uVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)&this_00->field_0x20,local_8,local_10,local_c,
                       this_00->field_0093,this_00->field_0097,this_00->field_009B,
                       this_00->field_0051,0x1e,this_00->field_0081,this_00->field_0085,0xb5,0,0);
    if (0 < (int)uVar7) {
      if (uVar7 == 5) {
        sub_005F3470(this_00);
        goto switchD_005f29cb_default;
      }
LAB_005f2b3a:
      sub_005F5D10(this_00,uVar7);
      goto switchD_005f29cb_default;
    }
    if (uVar9 == 0xffffffff) goto LAB_005f3027;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        this_00->field_009F = this_00->field_0093;
        this_00->field_00A3 = this_00->field_0097;
        this_00->field_00A7 = this_00->field_009B;
        this_00->field_0093 = local_8;
        this_00->field_0097 = local_10;
        this_00->field_009B = local_c;
        iVar5 = sub_005F3BF0(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,
                             '\x01');
        this_00->field_0104 = (-(uint)(iVar5 != 0) & 0xfffffffc) + CASE_5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case CASE_1:
    uVar9 = sub_005F4370(local_14,&local_8,&local_10,&local_c,1);
    uVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)&this_00->field_0x20,local_8,local_10,local_c,
                       this_00->field_0093,this_00->field_0097,this_00->field_009B,
                       this_00->field_0051,0x1e,this_00->field_0081,this_00->field_0085,0xb5,0,0);
    if (0 < (int)uVar7) {
      if (uVar7 != 5) goto LAB_005f2b3a;
      goto switchD_005f29cb_caseD_5;
    }
    if (uVar9 == 0xffffffff) goto LAB_005f3027;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        this_00->field_009F = this_00->field_0093;
        this_00->field_00A3 = this_00->field_0097;
        this_00->field_00A7 = this_00->field_009B;
        this_00->field_0093 = local_8;
        this_00->field_0097 = local_10;
        this_00->field_009B = local_c;
        iVar5 = sub_005F3BF0(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,
                             '\x02');
        this_00->field_0104 = (-(uint)(iVar5 != 0) & 0xfffffffd) + CASE_5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case CASE_2:
    uVar9 = sub_005F4370(local_14,&local_8,&local_10,&local_c,2);
    if (uVar9 == 0xffffffff) {
LAB_005f3027:
      this_00->field_0104 = CASE_5;
      goto switchD_005f29cb_default;
    }
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        sub_005F5E30(this_00,local_8,local_10,local_c);
        this_00->field_0104 = CASE_3;
        iVar5 = sub_005F4C50(this_00,(float)this_00->field_0093,this_00->field_0097,
                             this_00->field_009B,4,0x1e,3);
        if (iVar5 != 0) {
          this_00->field_0108 = 1;
        }
      }
      goto switchD_005f29cb_default;
    }
    break;
  case CASE_3:
    if (local_14->field_008F < 0) {
      local_14->field_0104 = CASE_5 - (local_14->field_0108 != '\0');
      goto switchD_005f29cb_default;
    }
    if (0x10 < local_14->field_00AB) {
      if (local_14->field_00AB == 0x11) {
        FUN_006e9cb0(PTR_00807598,(uint *)local_14->field_008F,2);
      }
      FUN_006ea270(PTR_00807598,this_00->field_008F,2,this_00->field_00C0);
      if (this_00->field_00C0 < this_00->field_00BC) {
        this_00->field_00C0 = this_00->field_00C0 + 1;
      }
    }
    if (this_00->field_00BB != '\0') {
      if (this_00->field_00B7 == this_00->field_00B3) {
        this_00->field_00BB = 0;
        FUN_006e9d40(PTR_00807598,(uint *)this_00->field_008F,1);
      }
      else {
        FUN_006ea270(PTR_00807598,this_00->field_008F,1,this_00->field_00B7);
        this_00->field_00B7 = this_00->field_00B7 + 1;
      }
    }
    uVar9 = this_00->field_00AB;
    if ((int)uVar9 < this_00->field_00AF) {
      FUN_006ea270(PTR_00807598,this_00->field_008F,0,uVar9);
LAB_005f2d8b:
      this_00->field_00AB = this_00->field_00AB + 1;
    }
    else if (uVar9 == this_00->field_00AF) {
      if (-1 < this_00->field_008F) {
        FUN_006e9d40(PTR_00807598,(uint *)this_00->field_008F,0);
      }
      goto LAB_005f2d8b;
    }
    FUN_006ea960(PTR_00807598,this_00->field_008F,
                 (float)this_00->field_0093 * _DAT_007904f8 * _DAT_007904f0,
                 (float)this_00->field_0097 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)this_00->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (this_00->field_00C0 == this_00->field_00BC) {
      if (-1 < this_00->field_008F) {
        FUN_006eab60(PTR_00807598,this_00->field_008F);
      }
      this_00->field_0104 = CASE_4;
    }
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar5 = this_00->field_009B;
      sVar3 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        local_18 = (short)(((short)(iVar5 / 200) + sVar3) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_18 = (int)(short)(((short)(iVar5 / 200) + sVar3) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
      }
      iVar5 = this_00->field_0097;
      sVar3 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      iVar6 = this_00->field_0093;
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar5,
                      &local_24,&local_28), local_18 < 0)) || (4 < local_18)) {
        bVar11 = true;
      }
      else {
        if (((local_24 < 0) || (pVVar4->field_0030 <= local_24)) ||
           ((g_centeredOffsets5[local_18] + local_28 < 0 ||
            (pVVar4->field_0034 <= g_centeredOffsets5[local_18] + local_28)))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (pVVar4->field_004C != (byte *)0x0)) {
          bVar11 = pVVar4->field_004C
                   [local_24 + (g_centeredOffsets5[local_18] + local_28) * pVVar4->field_0030] != 0;
        }
        else {
          bVar11 = true;
        }
      }
      if (bVar11) {
        if (this_00->field_00C4 == '\0') {
          FUN_006eaaa0(PTR_00807598,this_00->field_008F,0);
          this_00->field_00C4 = 1;
        }
      }
      else if (this_00->field_00C4 != '\0') {
        FUN_006eab60(PTR_00807598,this_00->field_008F);
        this_00->field_00C4 = 0;
      }
    }
    if (this_00->field_0108 != '\0') {
      sub_005F4FA0(this_00);
      thunk_FUN_005f5440((AnonShape_005F5440_D27C3BDE *)this_00);
    }
    goto switchD_005f29cb_default;
  case CASE_4:
    if (local_14->field_0108 != '\0') {
      iVar5 = sub_005F4FA0(local_14);
      if (iVar5 != 0) {
        if (this_00->field_0103 != '\0') {
          thunk_FUN_005f5440((AnonShape_005F5440_D27C3BDE *)this_00);
        }
        goto switchD_005f29cb_default;
      }
      goto LAB_005f3027;
    }
    goto LAB_005f2b30;
  case CASE_5:
switchD_005f29cb_caseD_5:
LAB_005f2b30:
    sub_005F3470(this_00);
  default:
    goto switchD_005f29cb_default;
  }
  this_00->field_009F = this_00->field_0093;
  this_00->field_00A3 = this_00->field_0097;
  this_00->field_00A7 = this_00->field_009B;
  this_00->field_0093 = local_8;
  this_00->field_0097 = local_10;
  this_00->field_009B = local_c;
switchD_005f29cb_default:
  if (this_00->field_0103 == '\0') {
    iVar5 = thunk_FUN_005f3940(this_00->field_0093,this_00->field_0097,this_00->field_009B);
    this_00->field_0103 = (char)iVar5;
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  SVar2 = this_00->field_0104;
  if (((SVar2 != CASE_5) && (SVar2 != CASE_3)) && (SVar2 != CASE_4)) {
    sub_005F4680(this_00);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

