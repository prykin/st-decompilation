#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_dest.cpp

// 00601F80 STDestC::GetMessage
#line 4 "decomp/ST.exe/functions/00601F80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_dest.cpp
   STDestC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004050CE|00601F80; family_names=STDestC::GetMessage; ret4=11;
   direct_offsets={10:1,14:1,18:1,1c:0} */

int __thiscall st::fn_00601F80(STDestC *this,STMessage *message)

{
  STMessageId SVar1;
  AnonShape_00602BE0_B1CC517D *this_00;
  int local_EAX_16;
  int iVar3;
  byte *puVar3;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  byte *puVar6;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  AnonShape_00602BE0_B1CC517D *local_8;

  local_8 = (AnonShape_00602BE0_B1CC517D *)this;
  local_EAX_16 = st::fn_00404F07((STSprGameObjC *)this,message);
  if (local_EAX_16 != 0xffff) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    this_00 = local_8;
    if (iVar3 == 0) {
      SVar1 = message->id;
      if (SVar1 < MESS_TORPHIT) {
        if (SVar1 == MESS_SHARED_010F) {
          local_10 = st::fn_00404D77((STDestC *)local_8,st::pointer_boundary_cast<undefined4 *>(&local_c));
          st::fn_004025F9
                    (g_playSystem_00802A38,*(int **)&this_00->field_0x18,local_10,local_c);
          st::fn_006AB060(&local_10);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        if (SVar1 == MESS_ID_NONE) {
          if ((local_8->field_036E != 0) && (local_8->field_036E != 4)) {
            st::fn_00402CF2((STDestC *)local_8);
          }
          if ((g_playSystem_00802A38->field_00E4 & 0xf) == 0) {
            st::fn_00401483((STDestC *)this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
        }
        else if (SVar1 == MESS_ID_CREATE) {
          puVar3 = (byte *)((message->arg0).ptr);
          if (puVar3[3] != 2) {
            puVar6 = (byte *)&local_8->field_0x231;
            memmove(puVar6, puVar3, 0x13d); /* compiler REP MOVS byte copy */
            iVar5 = st::fn_00403049((STDestC *)local_8);
            if (iVar5 != 0) {
              if ((*(int *)&this_00->field_0x3a7 != 0) && (iVar5 = st::fn_004013ED(), iVar5 == 0)
                 ) {
                st::fn_00401BF4((STDestC *)this_00);
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              if (g_allPlayers_007FA174 == nullptr) {
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
              iVar5 = st::fn_004015DC(g_allPlayers_007FA174,0xffff,this_00);
              if (iVar5 == 0) {
                this_00->field_0x3a5 = 1;
                g_currentExceptionFrame = local_54.previous;
                return 0;
              }
            }
            st::fn_00401BF4((STDestC *)this_00);
            g_currentExceptionFrame = local_54.previous;
            return 0;
          }
          iVar5 = st::fn_00404179((STDestC *)local_8,st::pointer_boundary_cast<undefined4 *>(puVar3));
          if (-1 < iVar5) {
            if (this_00->field_036E == 4) {
              puVar3 = (byte *)(st::fn_00405D30((STDestC *)this_00));
              this_00->field_03AB = st::pointer_boundary_cast<undefined4 *>(puVar3);
              if (puVar3 == nullptr) {
                st::fn_00401BF4((STDestC *)this_00);
              }
            }
            else if ((*(int *)&this_00->field_0x3a7 != 0) && (this_00->field_036E != 0)) {
              st::fn_00402CF2((STDestC *)this_00);
            }
            if (((g_allPlayers_007FA174 != nullptr) && (this_00->field_0x3a5 != '\0'))
               && (iVar5 = st::fn_004015DC
                                     (g_allPlayers_007FA174,*(ushort *)&this_00->field_0x32,this_00)
                  , iVar5 != 0)) {
              st::fn_00401BF4((STDestC *)this_00);
              g_currentExceptionFrame = local_54.previous;
              return 0;
            }
          }
        }
        else if (((SVar1 == MESS_SHARED_0003) &&
                 (st::fn_004021D5((STT3DSprC *)&local_8->field_0x1d5),
                 this_00->field_0x3a5 != '\0')) && (g_allPlayers_007FA174 != nullptr))
        {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          st::fn_00405AC9
                    (g_allPlayers_007FA174,
                     CONCAT22(extraout_var,*(undefined2 *)&this_00->field_0x32),
                     (AnonShape_0044AA20_1EE9340C *)this_00);
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (SVar1 == MESS_STOCTOPUSC_0112) {
        if (-1 < (int)local_8->field_039B) {
          st::fn_00402A90((STT3DSprC *)&local_8->field_0x1d5);
        }
      }
      else if (SVar1 == MESS_STSPRGAMEOBJC_0113) {
        if (-1 < (int)local_8->field_039B) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)&local_8->field_0x1d5)();
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      else if (SVar1 == MESS_HITKILL) {
        st::fn_00403D0F((STT3DSprC *)&local_8->field_0x1d5);
        st::fn_00401BF4((STDestC *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_dest.cpp"),0x95,0,iVar3,st::mutable_c_string("%s"),
                               "STDestC::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_dest.cpp"),0x97);
  }
  return 0xffff;
}

