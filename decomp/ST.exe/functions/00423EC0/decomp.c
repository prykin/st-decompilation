#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004034EA|00423EC0; family_names=STGroupC::GetMessage; ret4=4;
   direct_offsets={10:1,14:2,18:2,1c:1} */

int __thiscall STGroupC::GetMessage(STGroupC *this,STMessage *message)

{
  code *pcVar1;
  STGroupC *this_00;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint *puVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  undefined2 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_50;
  int local_c;
  STGroupC *local_8;

  uVar6 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x17c,0,iVar2,"%s",
                               "STGroupC::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x17d);
    return 0xffff;
  }
  FUN_006e5fd0(local_8,message);
  if (message->id == MESS_ID_CREATE) {
    iVar2 = (message->arg0).i32;
    if (*(uint *)(iVar2 + 0xc) < 2) {
      this_00->field_0020 = *(undefined4 *)(iVar2 + 0x20);
      this_00->field_0024 = *(char *)(iVar2 + 4);
      this_00->field_0025 = *(undefined2 *)(iVar2 + 0x14);
      this_00->field_0027 = *(undefined2 *)(iVar2 + 0x18);
      puVar3 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,5,2,5,0x4045c5);
      this_00->field_0029 = puVar3;
      local_c = *(int *)(iVar2 + 0x1c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar5 = extraout_var_01;
      if (0 < local_c) {
        puVar7 = (undefined4 *)(iVar2 + 0x24);
        do {
          Library::DKW::TBL::FUN_006ae140(this_00->field_0029,uVar6,puVar7);
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 1;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar5 = extraout_var_02;
        } while ((int)uVar6 < local_c);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterGroup
                (g_allPlayers_007FA174,this_00->field_0024,CONCAT22(uVar5,this_00->field_0025),
                 (int)this_00);
      this_00->field_0031 = this_00->field_0018 * DAT_00808754;
    }
    else if (*(uint *)(iVar2 + 0xc) == 2) {
      RestoreGrpData(this_00,iVar2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      STAllPlayersC::RegisterGroup
                (g_allPlayers_007FA174,this_00->field_0024,
                 CONCAT22(extraout_var,this_00->field_0025),(int)this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (message->id == MESS_SHARED_0003) {
    thunk_FUN_00423e00(this_00);
    DArrayDestroy((DArrayTy *)this_00->field_0029);
    this_00->field_0029 = (uint *)0x0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    STAllPlayersC::UnRegisterGroup
              (g_allPlayers_007FA174,this_00->field_0024,
               CONCAT22(extraout_var_00,this_00->field_0025),(int)this_00);
    if ((DArrayTy *)this_00->field_002D != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_002D);
      this_00->field_002D = (uint *)0x0;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

