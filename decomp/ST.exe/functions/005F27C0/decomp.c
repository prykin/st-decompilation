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
  short sVar2;
  VisibleClassTy *pVVar3;
  AnonShape_005F4FA0_36330E3A *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  code *pcVar11;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  byte *local_20;
  AnonShape_0060EA30_DCEB68AD *local_1c;
  int local_18;
  AnonShape_005F4FA0_36330E3A *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = (AnonShape_005F4FA0_36330E3A *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_BheShell.cpp",0x163,0,iVar4,
                               "%s","STBHEShellC::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_BheShell.cpp",0x165);
    return 0xffff;
  }
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STOCTOPUSC_0112) {
      uVar8 = *(uint *)&local_14->field_0x8f;
      if ((int)uVar8 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((*(int *)&local_14->field_0x104 != 0) && (*(int *)&local_14->field_0x104 != 2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      pcVar11 = (code *)0x0;
    }
    else {
      if (SVar1 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      uVar8 = *(uint *)&local_14->field_0x8f;
      if ((int)uVar8 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((*(int *)&local_14->field_0x104 != 0) && (*(int *)&local_14->field_0x104 != 2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      pcVar11 = thunk_FUN_005f3530;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_006e9520
              ((AnonReceiver_00424E10 *)PTR_00807598,uVar8,0,(uint)pcVar11,(uint)local_14);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_20 = sub_005F5A90((STBHEShellC *)local_14,(int *)&local_1c);
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,*(undefined4 *)&this_00->field_0x18,local_20,local_1c);
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
      thunk_FUN_005f3b00((STBHEShellC *)local_14);
      sub_005F53A0((STBHEShellC *)this_00);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    puVar7 = (message->arg0).ptr;
    if (puVar7[3] != 2) {
      puVar9 = (undefined4 *)&local_14->field_0x4d;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
      iVar4 = *(int *)&local_14->field_0x6d;
      uVar8 = iVar4 - *(int *)&local_14->field_0x61;
      if (((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 4) &&
         (uVar6 = *(int *)&local_14->field_0x71 - *(int *)&local_14->field_0x65,
         (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) < 4)) {
        iVar5 = *(int *)&local_14->field_0x71;
        if (iVar5 == *(int *)&local_14->field_0x65) {
          if (iVar4 == *(int *)&local_14->field_0x61) {
            *(int *)&local_14->field_0x6d = iVar4 + 4;
          }
          else if ((int)uVar8 < 1) {
            *(uint *)&local_14->field_0x6d = iVar4 + (uint)(uVar8 != 0) * -4;
          }
          else {
            *(int *)&local_14->field_0x6d = iVar4 + 4;
          }
        }
        else if ((int)uVar6 < 1) {
          *(uint *)&local_14->field_0x71 = iVar5 + (uint)(uVar6 != 0) * -4;
        }
        else {
          *(int *)&local_14->field_0x71 = iVar5 + 4;
        }
      }
      *(undefined4 *)&local_14->field_0x1c = DAT_00808754;
      sub_005F34B0((STBHEShellC *)local_14);
      *(undefined4 *)&this_00->field_0x104 = 0;
      sub_005F3BF0((STBHEShellC *)this_00,*(int *)&this_00->field_0x6d,*(int *)&this_00->field_0x71,
                   *(undefined4 *)&this_00->field_0x75,'\0');
      sub_005F5C40((STBHEShellC *)this_00,*(int *)&this_00->field_0x61,*(int *)&this_00->field_0x65,
                   0x489);
      iVar4 = thunk_FUN_005f3940(*(int *)&this_00->field_0x61,*(int *)&this_00->field_0x65,
                                 *(int *)&this_00->field_0x69);
      this_00->field_0103 = (char)iVar4;
      if ((char)iVar4 != '\0') {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::sub_005F35F0
                  ((AnonReceiver_005F35F0 *)this_00,*(int *)&this_00->field_0x87);
      }
      *(undefined4 *)&this_00->field_0x7d = DAT_007e66d4;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    sub_005F5B80((STBHEShellC *)local_14,puVar7);
    memset(&this_00->field_0x20, 0, 0x2d); /* compiler bulk-zero initialization */
    *(undefined4 *)&this_00->field_0x1c = *(undefined4 *)&this_00->field_0x16d;
    if (this_00->field_0103 == '\0') {
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::sub_005F35F0
              ((AnonReceiver_005F35F0 *)this_00,*(int *)&this_00->field_0x87);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  switch(*(undefined4 *)&local_14->field_0x104) {
  case 0:
    uVar8 = sub_005F4370((STBHEShellC *)local_14,&local_8,&local_10,&local_c,0);
    uVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)&this_00->field_0x20,local_8,local_10,local_c,
                       *(int *)&this_00->field_0x93,*(int *)&this_00->field_0x97,
                       *(int *)&this_00->field_0x9b,*(int *)&this_00->field_0x51,0x1e,
                       *(int *)&this_00->field_0x81,*(undefined2 *)&this_00->field_0x85,0xb5,0,0);
    if (0 < (int)uVar6) {
      if (uVar6 == 5) {
        sub_005F3470((STBHEShellC *)this_00);
        goto switchD_005f29cb_default;
      }
LAB_005f2b3a:
      sub_005F5D10((STBHEShellC *)this_00,uVar6);
      goto switchD_005f29cb_default;
    }
    if (uVar8 == 0xffffffff) goto LAB_005f3027;
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        *(undefined4 *)&this_00->field_0x9f = *(undefined4 *)&this_00->field_0x93;
        *(undefined4 *)&this_00->field_0xa3 = *(undefined4 *)&this_00->field_0x97;
        *(undefined4 *)&this_00->field_0xa7 = *(undefined4 *)&this_00->field_0x9b;
        *(int *)&this_00->field_0x93 = local_8;
        *(int *)&this_00->field_0x97 = local_10;
        *(int *)&this_00->field_0x9b = local_c;
        iVar4 = sub_005F3BF0((STBHEShellC *)this_00,*(int *)&this_00->field_0x6d,
                             *(int *)&this_00->field_0x71,*(undefined4 *)&this_00->field_0x75,'\x01'
                            );
        *(uint *)&this_00->field_0x104 = (-(uint)(iVar4 != 0) & 0xfffffffc) + 5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case 1:
    uVar8 = sub_005F4370((STBHEShellC *)local_14,&local_8,&local_10,&local_c,1);
    uVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)&this_00->field_0x20,local_8,local_10,local_c,
                       *(int *)&this_00->field_0x93,*(int *)&this_00->field_0x97,
                       *(int *)&this_00->field_0x9b,*(int *)&this_00->field_0x51,0x1e,
                       *(int *)&this_00->field_0x81,*(undefined2 *)&this_00->field_0x85,0xb5,0,0);
    if (0 < (int)uVar6) {
      if (uVar6 != 5) goto LAB_005f2b3a;
      goto switchD_005f29cb_caseD_5;
    }
    if (uVar8 == 0xffffffff) goto LAB_005f3027;
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        *(undefined4 *)&this_00->field_0x9f = *(undefined4 *)&this_00->field_0x93;
        *(undefined4 *)&this_00->field_0xa3 = *(undefined4 *)&this_00->field_0x97;
        *(undefined4 *)&this_00->field_0xa7 = *(undefined4 *)&this_00->field_0x9b;
        *(int *)&this_00->field_0x93 = local_8;
        *(int *)&this_00->field_0x97 = local_10;
        *(int *)&this_00->field_0x9b = local_c;
        iVar4 = sub_005F3BF0((STBHEShellC *)this_00,*(int *)&this_00->field_0x6d,
                             *(int *)&this_00->field_0x71,*(undefined4 *)&this_00->field_0x75,'\x02'
                            );
        *(uint *)&this_00->field_0x104 = (-(uint)(iVar4 != 0) & 0xfffffffd) + 5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case 2:
    uVar8 = sub_005F4370((STBHEShellC *)local_14,&local_8,&local_10,&local_c,2);
    if (uVar8 == 0xffffffff) {
LAB_005f3027:
      *(undefined4 *)&this_00->field_0x104 = 5;
      goto switchD_005f29cb_default;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        sub_005F5E30((STBHEShellC *)this_00,local_8,local_10,local_c);
        *(undefined4 *)&this_00->field_0x104 = 3;
        iVar4 = sub_005F4C50((STBHEShellC *)this_00,*(float *)&this_00->field_0x93,
                             *(undefined4 *)&this_00->field_0x97,*(int *)&this_00->field_0x9b,4,0x1e
                             ,3);
        if (iVar4 != 0) {
          this_00->field_0x108 = 1;
        }
      }
      goto switchD_005f29cb_default;
    }
    break;
  case 3:
    if ((int)*(uint **)&local_14->field_0x8f < 0) {
      *(uint *)&local_14->field_0x104 = 5 - (uint)(local_14->field_0x108 != '\0');
      goto switchD_005f29cb_default;
    }
    if (0x10 < *(int *)&local_14->field_0xab) {
      if (*(int *)&local_14->field_0xab == 0x11) {
        FUN_006e9cb0(PTR_00807598,*(uint **)&local_14->field_0x8f,2);
      }
      FUN_006ea270(PTR_00807598,*(uint *)&this_00->field_0x8f,2,*(uint *)&this_00->field_0xc0);
      if (*(int *)&this_00->field_0xc0 < *(int *)&this_00->field_0xbc) {
        *(int *)&this_00->field_0xc0 = *(int *)&this_00->field_0xc0 + 1;
      }
    }
    if (this_00->field_0xbb != '\0') {
      if (*(uint *)&this_00->field_0xb7 == *(uint *)&this_00->field_0xb3) {
        this_00->field_0xbb = 0;
        FUN_006e9d40(PTR_00807598,*(uint **)&this_00->field_0x8f,1);
      }
      else {
        FUN_006ea270(PTR_00807598,*(uint *)&this_00->field_0x8f,1,*(uint *)&this_00->field_0xb7);
        *(int *)&this_00->field_0xb7 = *(int *)&this_00->field_0xb7 + 1;
      }
    }
    uVar8 = *(uint *)&this_00->field_0xab;
    if ((int)uVar8 < (int)*(uint *)&this_00->field_0xaf) {
      FUN_006ea270(PTR_00807598,*(uint *)&this_00->field_0x8f,0,uVar8);
LAB_005f2d8b:
      *(int *)&this_00->field_0xab = *(int *)&this_00->field_0xab + 1;
    }
    else if (uVar8 == *(uint *)&this_00->field_0xaf) {
      if (-1 < (int)*(uint **)&this_00->field_0x8f) {
        FUN_006e9d40(PTR_00807598,*(uint **)&this_00->field_0x8f,0);
      }
      goto LAB_005f2d8b;
    }
    FUN_006ea960(PTR_00807598,*(uint *)&this_00->field_0x8f,
                 (float)*(int *)&this_00->field_0x93 * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&this_00->field_0x97 * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&this_00->field_0x9b * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                );
    if (*(int *)&this_00->field_0xc0 == *(int *)&this_00->field_0xbc) {
      if (-1 < (int)*(uint *)&this_00->field_0x8f) {
        FUN_006eab60(PTR_00807598,*(uint *)&this_00->field_0x8f);
      }
      *(undefined4 *)&this_00->field_0x104 = 4;
    }
    pVVar3 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar4 = *(int *)&this_00->field_0x9b;
      sVar2 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        local_18 = (short)(((short)(iVar4 / 200) + sVar2) -
                          (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_18 = (int)(short)(((short)(iVar4 / 200) + sVar2) -
                               (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
      }
      iVar4 = *(int *)&this_00->field_0x97;
      sVar2 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) -
                       (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                            (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
      }
      iVar5 = *(int *)&this_00->field_0x93;
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar4,
                      &local_24,&local_28), local_18 < 0)) || (4 < local_18)) {
        bVar10 = true;
      }
      else {
        if (((local_24 < 0) || (pVVar3->field_0030 <= local_24)) ||
           ((g_centeredOffsets5[local_18] + local_28 < 0 ||
            (pVVar3->field_0034 <= g_centeredOffsets5[local_18] + local_28)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((bVar10) && (pVVar3->field_004C != (byte *)0x0)) {
          bVar10 = pVVar3->field_004C
                   [local_24 + (g_centeredOffsets5[local_18] + local_28) * pVVar3->field_0030] != 0;
        }
        else {
          bVar10 = true;
        }
      }
      if (bVar10) {
        if (this_00->field_0xc4 == '\0') {
          FUN_006eaaa0(PTR_00807598,*(uint *)&this_00->field_0x8f,0);
          this_00->field_0xc4 = 1;
        }
      }
      else if (this_00->field_0xc4 != '\0') {
        FUN_006eab60(PTR_00807598,*(uint *)&this_00->field_0x8f);
        this_00->field_0xc4 = 0;
      }
    }
    if (this_00->field_0x108 != '\0') {
      sub_005F4FA0((STBHEShellC *)this_00);
      thunk_FUN_005f5440((AnonShape_005F5440_D27C3BDE *)this_00);
    }
    goto switchD_005f29cb_default;
  case 4:
    if (local_14->field_0x108 != '\0') {
      iVar4 = sub_005F4FA0((STBHEShellC *)local_14);
      if (iVar4 != 0) {
        if (this_00->field_0103 != '\0') {
          thunk_FUN_005f5440((AnonShape_005F5440_D27C3BDE *)this_00);
        }
        goto switchD_005f29cb_default;
      }
      goto LAB_005f3027;
    }
    goto LAB_005f2b30;
  case 5:
switchD_005f29cb_caseD_5:
LAB_005f2b30:
    sub_005F3470((STBHEShellC *)this_00);
  default:
    goto switchD_005f29cb_default;
  }
  *(undefined4 *)&this_00->field_0x9f = *(undefined4 *)&this_00->field_0x93;
  *(undefined4 *)&this_00->field_0xa3 = *(undefined4 *)&this_00->field_0x97;
  *(undefined4 *)&this_00->field_0xa7 = *(undefined4 *)&this_00->field_0x9b;
  *(int *)&this_00->field_0x93 = local_8;
  *(int *)&this_00->field_0x97 = local_10;
  *(int *)&this_00->field_0x9b = local_c;
switchD_005f29cb_default:
  if (this_00->field_0103 == '\0') {
    iVar4 = thunk_FUN_005f3940(*(int *)&this_00->field_0x93,*(int *)&this_00->field_0x97,
                               *(int *)&this_00->field_0x9b);
    this_00->field_0103 = (char)iVar4;
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  iVar4 = *(int *)&this_00->field_0x104;
  if (((iVar4 != 5) && (iVar4 != 3)) && (iVar4 != 4)) {
    sub_005F4680((STBHEShellC *)this_00);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

