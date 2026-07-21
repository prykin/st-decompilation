#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosion::GetMessage */

undefined4 __thiscall
STExplosion::GetMessage(STExplosion *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  AnonShape_006366D0_80B1100F *pAVar3;
  AnonShape_00604A90_035626E6 *pAVar4;
  int *piVar5;
  code *pcVar6;
  short sVar7;
  STGameObjC *this_00;
  STGameObjC *this_01;
  int iVar8;
  AnonReceiver_00636260 *this_02;
  int iVar9;
  undefined4 uVar10;
  AnonShape_00604A90_035626E6 *pAVar11;
  undefined4 *puVar12;
  byte **value;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar8 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x1bb,0,iVar8,&DAT_007a4ccc,
                               s_STExplosion__GetMessage_007cf654);
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x1bd);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar8 = STGameObjC::GetMessage(local_10,param_1);
  this_01 = local_10;
  if (iVar8 == 0xffff) {
    return 0xffff;
  }
  uVar2 = param_1->field_0010;
  if (uVar2 < 0x110) {
    if (uVar2 != 0x10f) {
      if (uVar2 == 0) {
        if (0 < *(int *)&this_00[1].field_0xe6) {
          iVar8 = (PTR_00802a38->field_00E4 - *(int *)&this_00[1].field_0x9d) +
                  *(int *)&this_00[1].field_0xe6;
          if ((iVar8 == 0xf) && (this_00[1].field_0x9c != '\0')) {
            if (*(int *)((int)&this_00[1].field_00E8 + 2) == 0) {
              this_02 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
              *(AnonReceiver_00636260 **)((int)&this_00[1].field_00E8 + 2) = this_02;
              if (this_02 != (AnonReceiver_00636260 *)0x0) {
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::thunk_FUN_00636260
                          (this_02,this_00[1].field_0020,this_00[1].field_0024,
                           this_00[1].field_0028 + -0x28,0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar8) &&
                  ((piVar5 = *(int **)((int)&this_00[1].field_00E8 + 2), piVar5 != (int *)0x0 &&
                   (iVar8 = thunk_FUN_006372e0(piVar5), iVar8 != 0)))) {
            thunk_FUN_006366d0(*(AnonShape_006366D0_80B1100F **)((int)&this_00[1].field_00E8 + 2));
            Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)&this_00[1].field_00E8 + 2));
            *(undefined4 *)&this_00[1].field_0xe6 = 0xffffffff;
            *(undefined4 *)((int)&this_00[1].field_00E8 + 2) = 0;
          }
        }
        if (this_00[1].field_0x9c == '\0') {
          iVar8 = thunk_FUN_00604350((AnonShape_00604350_448AE2F1 *)this_00);
          if (iVar8 != 0) {
            thunk_FUN_00604820((int)this_00);
            this_00[1].field_0x9c = 1;
          }
        }
        else {
          thunk_FUN_006057c0((STExplosionC *)this_00);
        }
        thunk_FUN_006048e0((AnonShape_006048E0_C1705B76 *)this_00);
        iVar8 = thunk_FUN_006042d0(this_00,0);
        if (iVar8 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604160((STJellyGunC *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 == 2) {
        uVar2 = this_00->field_001C * 0x41c64e6d + 0x3039;
        this_00->field_001C = uVar2;
        _DAT_00811790 = (uVar2 >> 0x10) % 0x33;
        pAVar4 = (AnonShape_00604A90_035626E6 *)param_1->field_0014;
        if (*(int *)&pAVar4->field_0xc == 0) {
          pAVar11 = pAVar4;
          puVar12 = (undefined4 *)&this_00[1].field_0x4;
          for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = *(undefined4 *)pAVar11;
            pAVar11 = (AnonShape_00604A90_035626E6 *)&pAVar11->field_0x4;
            puVar12 = puVar12 + 1;
          }
          thunk_FUN_00605130((AnonShape_00605130_C97429EC *)local_10);
          puVar1 = &this_01[1].field_0xa1;
          iVar8 = thunk_FUN_00604350((AnonShape_00604350_448AE2F1 *)this_01);
          if (iVar8 != 0) {
            this_01[1].field_0x9c = 1;
          }
          switch(*(undefined4 *)&pAVar4->field_0x18) {
          case 0:
            iVar8 = *(int *)&pAVar4->field_0x1c;
            sVar7 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xa9 = 5;
            iVar8 = *(int *)&pAVar4->field_0x20;
            if (iVar8 < 0) {
              iVar8 = (short)(iVar8 / 0xc9) + -1;
            }
            else {
              iVar8 = (int)(short)(iVar8 / 0xc9);
            }
            *(int *)&this_01[1].field_0xa5 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xad = 5;
            iVar8 = thunk_FUN_00606050(this_01,*(int *)&pAVar4->field_0x1c,
                                       *(int *)&pAVar4->field_0x20,*(int *)&pAVar4->field_0x24,
                                       *(int *)&pAVar4->field_0x28,*(uint **)&pAVar4->field_0x34,
                                       *(undefined4 *)&pAVar4->field_0x38,
                                       *(int *)&pAVar4->field_0x3c,
                                       *(undefined4 *)&pAVar4->field_0x30,this_01[1].field_0x9c);
            *(int *)&this_01[1].field_0x98 = iVar8;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 1:
            iVar8 = *(int *)&pAVar4->field_0x1c;
            sVar7 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            break;
          case 2:
            iVar8 = *(int *)&pAVar4->field_0x1c;
            sVar7 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xa9 = 5;
            iVar8 = *(int *)&pAVar4->field_0x20;
            if (iVar8 < 0) {
              iVar8 = (short)(iVar8 / 0xc9) + -1;
            }
            else {
              iVar8 = (int)(short)(iVar8 / 0xc9);
            }
            *(int *)&this_01[1].field_0xa5 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xad = 5;
            iVar8 = thunk_FUN_00607a60(this_01,*(int *)&pAVar4->field_0x1c,
                                       *(int *)&pAVar4->field_0x20,*(int *)&pAVar4->field_0x24);
            *(int *)&this_01[1].field_0x98 = iVar8;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 3:
            iVar8 = *(int *)&pAVar4->field_0x1c;
            sVar7 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xa9 = 5;
            iVar8 = *(int *)&pAVar4->field_0x20;
            if (iVar8 < 0) {
              iVar8 = (short)(iVar8 / 0xc9) + -1;
            }
            else {
              iVar8 = (int)(short)(iVar8 / 0xc9);
            }
            *(int *)&this_01[1].field_0xa5 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xad = 5;
            iVar8 = thunk_FUN_00605b60(this_01,*(uint *)&pAVar4->field_0x1c,
                                       *(uint *)&pAVar4->field_0x20,*(int **)&pAVar4->field_0x24,
                                       *(int *)&pAVar4->field_0x28);
            *(int *)&this_01[1].field_0x98 = iVar8;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 4:
            iVar8 = *(int *)&pAVar4->field_0x1c;
            sVar7 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar7) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar7) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar1 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xa9 = 5;
            iVar8 = *(int *)&pAVar4->field_0x20;
            if (iVar8 < 0) {
              iVar8 = (short)(iVar8 / 0xc9) + -1;
            }
            else {
              iVar8 = (int)(short)(iVar8 / 0xc9);
            }
            *(int *)&this_01[1].field_0xa5 = iVar8 + -2;
            *(undefined4 *)&this_01[1].field_0xad = 5;
            iVar8 = thunk_FUN_00608b50(this_01,*(uint *)&pAVar4->field_0x1c,
                                       *(uint **)&pAVar4->field_0x20,*(uint *)&pAVar4->field_0x24,
                                       *(undefined4 *)&pAVar4->field_0x28,
                                       *(undefined4 *)&pAVar4->field_0x34,
                                       *(int *)&pAVar4->field_0x38,
                                       *(undefined4 *)&pAVar4->field_0x3c,0,this_01[1].field_0x9c);
            *(int *)&this_01[1].field_0x98 = iVar8;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          default:
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          *(int *)puVar1 = iVar8 + -2;
          *(undefined4 *)&this_01[1].field_0xa9 = 5;
          iVar8 = *(int *)&pAVar4->field_0x20;
          if (iVar8 < 0) {
            iVar8 = (short)(iVar8 / 0xc9) + -1;
          }
          else {
            iVar8 = (int)(short)(iVar8 / 0xc9);
          }
          *(int *)&this_01[1].field_0xa5 = iVar8 + -2;
          *(undefined4 *)&this_01[1].field_0xad = 5;
          iVar8 = thunk_FUN_00607200(this_01,*(int *)&pAVar4->field_0x1c,*(int *)&pAVar4->field_0x20
                                     ,*(int *)&pAVar4->field_0x24,*(undefined4 *)&pAVar4->field_0x28
                                    );
          *(int *)&this_01[1].field_0x98 = iVar8;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604fc0(this_00,pAVar4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 != 3) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00604970(this_00);
      if (this_00[1].field_0x9c != '\0') {
        thunk_FUN_00605780((int)this_00);
      }
      pAVar3 = *(AnonShape_006366D0_80B1100F **)((int)&this_00[1].field_00E8 + 2);
      if (pAVar3 != (AnonShape_006366D0_80B1100F *)0x0) {
        thunk_FUN_006366d0(pAVar3);
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)((int)&this_00[1].field_00E8 + 2));
        *(undefined4 *)((int)&this_00[1].field_00E8 + 2) = 0;
      }
      thunk_FUN_00604120((int)this_00);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    local_c = (byte *)STExplosionC::SaveObj((STExplosionC *)this_00,(uint *)&local_8);
    if (local_c == (byte *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_c,local_8);
    value = &local_c;
  }
  else {
    if (uVar2 != 0x111) {
      if (uVar2 == 0x112) {
        thunk_FUN_006042d0(this_00,0x112);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar2 != 0x113) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_006042d0(this_00,0x113);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    value = (byte **)&this_00[1].field_0xe2;
    if (*(int **)&this_00[1].field_0xe2 == (int *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00604ee0(this_00,*(int **)&this_00[1].field_0xe2);
  }
  FreeAndNull(value);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

