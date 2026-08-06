#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_jbomb_m.cpp

// 00617640 JumpManagC::GetMessage
#line 1 "decomp/ST.exe/functions/00617640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040260D|00617640; family_names=JumpManagC::GetMessage; ret4=5;
   direct_offsets={10:1,14:1,18:1,1c:1} */

int __thiscall st::fn_00617640(JumpManagC *this,STMessage *message)

{
  STMessageId SVar1;
  JumpManagC *this_00;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  JumpManagC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\nick\\to_jbomb_m.Cpp",0x4b,0,iVar3,"%s"
                               ,"JumpManagC::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\nick\\to_jbomb_m.Cpp",0x4d);
    return 0xffff;
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_CREATE) {
    puVar5 = (byte *)((message->arg0).ptr);
    if (puVar5[3] != 2) {
      puVar6 = (byte *)&local_8->field_0x1c;
      memmove(puVar6, puVar5, 0x3e); /* compiler REP MOVS byte copy */
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_00405119(local_8,puVar5);
    st::fn_00404D09(this_00);
  }
  else if (SVar1 == MESS_SHARED_0003) {
    st::fn_00401A46(local_8);
    if (this_00->field_005E != nullptr) {
      st::fn_006AE110(this_00->field_005E);
      this_00->field_005E = nullptr;
    }
    if (this_00->field_0062 != nullptr) {
      st::fn_006AE110(this_00->field_0062);
      this_00->field_0062 = nullptr;
    }
    if (this_00->field_0066 != nullptr) {
      st::fn_006AE110(this_00->field_0066);
      this_00->field_0066 = nullptr;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_010F) {
    local_10 = st::fn_004015F5(local_8,(int *)&local_c);
    st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
    st::fn_006AB060(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 006178C0 JumpManagC::CheckSystrm
#line 1 "decomp/ST.exe/functions/006178C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::CheckSystrm
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall CheckSystrm(JumpManagC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00617988 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_006178C0(JumpManagC *this)

{
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  bool bVar7;
  int local_8;

  pDVar2 = this->field_005E;
  iVar4 = 1;
  if (pDVar2 != nullptr) {
    uVar6 = 0;
    if (0 < (int)pDVar2->count) {
      bVar7 = pDVar2->count != 0;
      do {
        if ((bVar7) &&
           (pvVar5 = DArrayAt<void>(pDVar2, uVar6),
           pvVar5 != nullptr)) {
          if (STField<int>(pvVar5,0x18) == 0) {
            iVar4 = -2;
          }
          else {
            iVar3 = st::fn_006E62D0
                              (g_playSystem_00802A38,
                               STField<AnonShape_005EFAE0_B406B78B *>(pvVar5,0x1c),&local_8);
            if (iVar3 == -4) {
              iVar4 = -3;
            }
            else if (STField<int>(pvVar5,0x18) == local_8) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)(local_8 + 0x8b) != STField<int>(pvVar5,0x20)) {
                iVar4 = -5;
              }
            }
            else {
              iVar4 = -4;
            }
          }
        }
        else {
          iVar4 = -1;
        }
        uVar6 = uVar6 + 1;
        pDVar2 = this->field_005E;
        bVar7 = uVar6 < pDVar2->count;
      } while ((int)uVar6 < (int)pDVar2->count);
      if (iVar4 == 0) {
        iVar4 = st::fn_006AD4D0("E:\\__titans\\nick\\to_jbomb_m.Cpp",0x8a,0,0,
                                   "JumpManagC::CheckSystrm CheckProblem =  %d",0);
        if (iVar4 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
  }
  return;
}

