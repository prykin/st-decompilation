#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_dest.cpp
   STDestC::GetMessage */

undefined4 __thiscall STDestC::GetMessage(STDestC *this,AnonShape_0041AF40_F59F8577 *param_1)

{
  uint uVar1;
  code *pcVar2;
  AnonShape_00602BE0_B1CC517D *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 *puVar7;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  AnonShape_00602BE0_B1CC517D *local_8;

  local_8 = (AnonShape_00602BE0_B1CC517D *)this;
  iVar3 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar3 != 0xffff) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    this_00 = local_8;
    if (iVar3 == 0) {
      uVar1 = param_1->field_0010;
      if (uVar1 < 0x110) {
        if (uVar1 == 0x10f) {
          local_10 = thunk_FUN_006025d0(local_8,&local_c);
          STPlaySystemC::SaveObjData
                    (PTR_00802a38,*(undefined4 *)&this_00->field_0x18,local_10,local_c);
          FreeAndNull(&local_10);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (uVar1 == 0) {
          if ((local_8->field_036E != 0) && (local_8->field_036E != 4)) {
            thunk_FUN_00602be0(local_8);
          }
          if ((*(byte *)&PTR_00802a38->field_00E4 & 0xf) == 0) {
            thunk_FUN_00603120((AnonShape_00603120_1977E258 *)this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (uVar1 == 2) {
          puVar4 = param_1->field_0014;
          if (puVar4[3] != 2) {
            puVar7 = (undefined4 *)&local_8->field_0x231;
            for (iVar3 = 0x4f; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            }
            *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
            iVar3 = thunk_FUN_006024b0((int)local_8);
            if (iVar3 != 0) {
              if ((*(int *)&this_00->field_0x3a7 != 0) && (iVar3 = thunk_FUN_006029c0(), iVar3 == 0)
                 ) {
                thunk_FUN_00602440(this_00);
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              iVar3 = STAllPlayersC::RegisterBlot(g_sTAllPlayers_007FA174,0xffff,this_00);
              if (iVar3 == 0) {
                this_00->field_0x3a5 = 1;
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
            }
            thunk_FUN_00602440(this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar3 = thunk_FUN_00602660(local_8,puVar4);
          if (-1 < iVar3) {
            if (this_00->field_036E == 4) {
              puVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00602E90::
                       thunk_FUN_00602e90((AnonReceiver_00602E90 *)this_00);
              this_00->field_03AB = puVar4;
              if (puVar4 == (undefined4 *)0x0) {
                thunk_FUN_00602440(this_00);
              }
            }
            else if ((*(int *)&this_00->field_0x3a7 != 0) && (this_00->field_036E != 0)) {
              thunk_FUN_00602be0(this_00);
            }
            if (((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (this_00->field_0x3a5 != '\0')
                ) && (iVar3 = STAllPlayersC::RegisterBlot
                                        (g_sTAllPlayers_007FA174,*(ushort *)&this_00->field_0x32,
                                         this_00), iVar3 != 0)) {
              thunk_FUN_00602440(this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
          }
        }
        else if (((uVar1 == 3) &&
                 (thunk_FUN_004ad310((STT3DSprC *)&local_8->field_0x1d5),
                 this_00->field_0x3a5 != '\0')) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)
                ) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STAllPlayersC::UnRegisterBlot
                    (g_sTAllPlayers_007FA174,
                     CONCAT22(extraout_var,*(undefined2 *)&this_00->field_0x32),
                     (AnonShape_0044AA20_1EE9340C *)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (uVar1 == 0x112) {
        if (-1 < (int)local_8->field_039B) {
          thunk_FUN_004ad5e0((int)&local_8->field_0x1d5);
        }
      }
      else if (uVar1 == 0x113) {
        if (-1 < (int)local_8->field_039B) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)&local_8->field_0x1d5)();
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (uVar1 == 0x128) {
        thunk_FUN_004ad430((int)&local_8->field_0x1d5);
        thunk_FUN_00602440(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_dest_cpp_007ced34,0x95,0,iVar3,&DAT_007a4ccc,
                               s_STDestC__GetMessage_007ced58);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_dest_cpp_007ced34,0x97);
  }
  return 0xffff;
}

