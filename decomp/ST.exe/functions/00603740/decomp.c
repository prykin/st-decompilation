#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosion::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E5F|00603740; family_names=STExplosion::GetMessage; ret4=12;
   direct_offsets={10:1,14:1,18:2,1c:12} */

int __thiscall STExplosion::GetMessage(STExplosion *this,STMessage *message)

{
  uint uVar1;
  undefined1 *puVar2;
  STMessageId SVar3;
  AnonShape_00604A90_035626E6 *pAVar4;
  code *pcVar5;
  short sVar6;
  STGameObjC *this_00;
  STGameObjC *this_01;
  int iVar7;
  AnonReceiver_00636260 *this_02;
  int iVar8;
  AnonShape_00604A90_035626E6 *pAVar9;
  undefined4 *puVar10;
  byte **value;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x1bb,0,iVar7,"%s",
                               "STExplosion::GetMessage");
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\nick\\to_Expl.cpp",0x1bd);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = STGameObjC::GetMessage(local_10,message);
  this_01 = local_10;
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  SVar3 = message->id;
  if (SVar3 < MESS_TORPHIT) {
    if (SVar3 != MESS_SHARED_010F) {
      if (SVar3 == MESS_ID_NONE) {
        if (0 < *(int *)&this_00->field_0x2b7) {
          iVar7 = (PTR_00802a38->field_00E4 - *(int *)&this_00->field_0x26e) +
                  *(int *)&this_00->field_0x2b7;
          if ((iVar7 == 0xf) && (this_00->field_0x26d != '\0')) {
            if (*(int *)&this_00->field_0x2bb == 0) {
              this_02 = (AnonReceiver_00636260 *)thunk_FUN_00636200();
              *(AnonReceiver_00636260 **)&this_00->field_0x2bb = this_02;
              if (this_02 != (AnonReceiver_00636260 *)0x0) {
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::thunk_FUN_00636260
                          (this_02,*(uint *)&this_00->field_0x1f1,*(int *)&this_00->field_0x1f5,
                           *(int *)&this_00->field_0x1f9 + -0x28,0x96,0x1e,5,0);
              }
            }
          }
          else if ((0xf < iVar7) &&
                  ((*(int **)&this_00->field_0x2bb != (int *)0x0 &&
                   (iVar7 = thunk_FUN_006372e0(*(int **)&this_00->field_0x2bb), iVar7 != 0)))) {
            thunk_FUN_006366d0(*(AnonShape_006366D0_80B1100F **)&this_00->field_0x2bb);
            Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x2bb);
            *(undefined4 *)&this_00->field_0x2b7 = 0xffffffff;
            *(undefined4 *)&this_00->field_0x2bb = 0;
          }
        }
        if (this_00->field_0x26d == '\0') {
          iVar7 = thunk_FUN_00604350((AnonShape_00604350_448AE2F1 *)this_00);
          if (iVar7 != 0) {
            thunk_FUN_00604820((int)this_00);
            this_00->field_0x26d = 1;
          }
        }
        else {
          thunk_FUN_006057c0((STExplosionC *)this_00);
        }
        thunk_FUN_006048e0((AnonShape_006048E0_C1705B76 *)this_00);
        iVar7 = thunk_FUN_006042d0(this_00,0);
        if (iVar7 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604160(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar3 == MESS_ID_CREATE) {
        uVar1 = this_00->field_001C * 0x41c64e6d + 0x3039;
        this_00->field_001C = uVar1;
        _DAT_00811790 = (uVar1 >> 0x10) % 0x33;
        pAVar4 = (AnonShape_00604A90_035626E6 *)(message->arg0).u32;
        if (*(int *)&pAVar4->field_0xc == 0) {
          pAVar9 = pAVar4;
          puVar10 = (undefined4 *)&this_00->field_0x1d5;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *(undefined4 *)pAVar9;
            pAVar9 = (AnonShape_00604A90_035626E6 *)&pAVar9->field_0x4;
            puVar10 = puVar10 + 1;
          }
          thunk_FUN_00605130((AnonShape_00605130_C97429EC *)local_10);
          puVar2 = &this_01->field_0x272;
          iVar7 = thunk_FUN_00604350((AnonShape_00604350_448AE2F1 *)this_01);
          if (iVar7 != 0) {
            this_01->field_0x26d = 1;
          }
          switch(*(undefined4 *)&pAVar4->field_0x18) {
          case 0:
            iVar7 = *(int *)&pAVar4->field_0x1c;
            sVar6 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar6) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar6) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar2 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar7 = *(int *)&pAVar4->field_0x20;
            if (iVar7 < 0) {
              iVar7 = (short)(iVar7 / 0xc9) + -1;
            }
            else {
              iVar7 = (int)(short)(iVar7 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar7 = thunk_FUN_00606050(this_01,*(int *)&pAVar4->field_0x1c,
                                       *(int *)&pAVar4->field_0x20,*(int *)&pAVar4->field_0x24,
                                       *(int *)&pAVar4->field_0x28,*(uint **)&pAVar4->field_0x34,
                                       *(undefined4 *)&pAVar4->field_0x38,
                                       *(int *)&pAVar4->field_0x3c,
                                       *(undefined4 *)&pAVar4->field_0x30,this_01->field_0x26d);
            this_01->field_0269 = iVar7;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 1:
            iVar7 = *(int *)&pAVar4->field_0x1c;
            sVar6 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar6) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar6) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            break;
          case 2:
            iVar7 = *(int *)&pAVar4->field_0x1c;
            sVar6 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar6) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar6) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar2 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar7 = *(int *)&pAVar4->field_0x20;
            if (iVar7 < 0) {
              iVar7 = (short)(iVar7 / 0xc9) + -1;
            }
            else {
              iVar7 = (int)(short)(iVar7 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar7 = thunk_FUN_00607a60(this_01,*(int *)&pAVar4->field_0x1c,
                                       *(int *)&pAVar4->field_0x20,*(int *)&pAVar4->field_0x24);
            this_01->field_0269 = iVar7;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 3:
            iVar7 = *(int *)&pAVar4->field_0x1c;
            sVar6 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar6) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar6) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar2 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar7 = *(int *)&pAVar4->field_0x20;
            if (iVar7 < 0) {
              iVar7 = (short)(iVar7 / 0xc9) + -1;
            }
            else {
              iVar7 = (int)(short)(iVar7 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar7 = thunk_FUN_00605b60(this_01,*(uint *)&pAVar4->field_0x1c,
                                       *(uint *)&pAVar4->field_0x20,*(int **)&pAVar4->field_0x24,
                                       *(int *)&pAVar4->field_0x28);
            this_01->field_0269 = iVar7;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          case 4:
            iVar7 = *(int *)&pAVar4->field_0x1c;
            sVar6 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar6) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar6) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            *(int *)puVar2 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27a = 5;
            iVar7 = *(int *)&pAVar4->field_0x20;
            if (iVar7 < 0) {
              iVar7 = (short)(iVar7 / 0xc9) + -1;
            }
            else {
              iVar7 = (int)(short)(iVar7 / 0xc9);
            }
            *(int *)&this_01->field_0x276 = iVar7 + -2;
            *(undefined4 *)&this_01->field_0x27e = 5;
            iVar7 = thunk_FUN_00608b50(this_01,*(uint *)&pAVar4->field_0x1c,
                                       *(uint **)&pAVar4->field_0x20,*(uint *)&pAVar4->field_0x24,
                                       *(undefined4 *)&pAVar4->field_0x28,
                                       *(undefined4 *)&pAVar4->field_0x34,
                                       *(int *)&pAVar4->field_0x38,
                                       *(undefined4 *)&pAVar4->field_0x3c,0,this_01->field_0x26d);
            this_01->field_0269 = iVar7;
            g_currentExceptionFrame = local_54.previous;
            return 0;
          default:
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          *(int *)puVar2 = iVar7 + -2;
          *(undefined4 *)&this_01->field_0x27a = 5;
          iVar7 = *(int *)&pAVar4->field_0x20;
          if (iVar7 < 0) {
            iVar7 = (short)(iVar7 / 0xc9) + -1;
          }
          else {
            iVar7 = (int)(short)(iVar7 / 0xc9);
          }
          *(int *)&this_01->field_0x276 = iVar7 + -2;
          *(undefined4 *)&this_01->field_0x27e = 5;
          iVar7 = thunk_FUN_00607200(this_01,*(int *)&pAVar4->field_0x1c,*(int *)&pAVar4->field_0x20
                                     ,*(int *)&pAVar4->field_0x24,*(undefined4 *)&pAVar4->field_0x28
                                    );
          this_01->field_0269 = iVar7;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        thunk_FUN_00604fc0(this_00,pAVar4);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar3 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_00604970(this_00);
      if (this_00->field_0x26d != '\0') {
        thunk_FUN_00605780((int)this_00);
      }
      if (*(AnonShape_006366D0_80B1100F **)&this_00->field_0x2bb !=
          (AnonShape_006366D0_80B1100F *)0x0) {
        thunk_FUN_006366d0(*(AnonShape_006366D0_80B1100F **)&this_00->field_0x2bb);
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x2bb);
        *(undefined4 *)&this_00->field_0x2bb = 0;
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
    if (SVar3 != MESS_ID_ALLCREATE) {
      if (SVar3 == MESS_STOCTOPUSC_0112) {
        thunk_FUN_006042d0(this_00,0x112);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar3 != MESS_STSPRGAMEOBJC_0113) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      thunk_FUN_006042d0(this_00,0x113);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    value = (byte **)&this_00->field_0x2b3;
    if (*(int **)&this_00->field_0x2b3 == (int *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00604ee0(this_00,*(int **)&this_00->field_0x2b3);
  }
  FreeAndNull(value);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

