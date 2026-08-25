#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004034EA|00423EC0; family_names=STGroupC::GetMessage; ret4=4;
   direct_offsets={10:1,14:2,18:2,1c:1}

   [STDiscriminatedPayloadApplier] Case-local payload view: message->id == MESS_ID_CREATE uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupC_GetMessage_00423EC0_MessagePayload_Case_MESS_ID_CREATE.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

int __thiscall STGroupC::GetMessage(STGroupC *this,STMessage *message)

{
  STGroupC *this_00;
  int iVar2;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint index;
  void *element;
  InternalExceptionFrame local_50;
  int local_c;
  STGroupC *local_8;

  index = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x17c,0,iVar2,"%s",
                               "STGroupC::GetMessage");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x17d);
    return 0xffff;
  }
  FUN_006e5fd0(local_8,message);
  if (message->id == MESS_ID_CREATE) {
    iVar4 = (message->arg0).i32;
    if (STField<uint>(iVar4,0xC) < 2) {
      this_00->field_0020 = STField<undefined4>(iVar4,0x20);
      this_00->field_0024 = ((char *)iVar4)[4];
      this_00->field_0025 = STField<undefined2>(iVar4,0x14);
      this_00->field_0027 = STField<undefined2>(iVar4,0x18);
      puVar2 = Library::DKW::TBL::FUN_006ae310(nullptr,5,2,5,0x4045c5);
      this_00->field_0029 = puVar2;
      local_c = STField<int>(iVar4,0x1C);
      if (0 < local_c) {
        element = (void *)(iVar4 + 0x24);
        do {
          Library::DKW::TBL::DArrayPut((DArrayTy *)this_00->field_0029,index,element);
          index = index + 1;
          element = (void *)((int)element + 4);
        } while ((int)index < local_c);
      }
      /* ST_CALLSITE[0042400B]: CALL 0x004059d9; direct=004059D9 STAllPlayersC::RegisterGroup */
      STAllPlayersC::RegisterGroup
                (g_allPlayers_007FA174,this_00->field_0024,this_00->field_0025,(int)this_00);
      this_00->field_0031 = this_00->field_0018 * DAT_00808754;
    }
    else if (STField<uint>(iVar4,0xC) == 2) {
      /* ST_CALLSITE[00423F7A]: CALL 0x00404f48; direct=00404F48 STGroupC::RestoreGrpData */
      RestoreGrpData(this_00,iVar4);
      /* ST_CALLSITE[00423F8F]: CALL 0x004059d9; direct=004059D9 STAllPlayersC::RegisterGroup */
      STAllPlayersC::RegisterGroup
                (g_allPlayers_007FA174,this_00->field_0024,this_00->field_0025,(int)this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (message->id == MESS_SHARED_0003) {
    thunk_FUN_00423e00(this_00);
    DArrayDestroy((DArrayTy *)this_00->field_0029);
    this_00->field_0029 = nullptr;
    /* ST_CALLSITE[00423F36]: CALL 0x004019ab; direct=004019AB STAllPlayersC::UnRegisterGroup */
    STAllPlayersC::UnRegisterGroup
              (g_allPlayers_007FA174,this_00->field_0024,this_00->field_0025,(int)this_00);
    if ((DArrayTy *)this_00->field_002D != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_002D);
      this_00->field_002D = nullptr;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

