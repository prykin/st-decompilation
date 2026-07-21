
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  int iVar4;
  undefined4 uVar5;
  uint index;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  uint uVar7;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar6 = (undefined4 *)&local_14->field_0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      uVar7 = 0;
      local_14->field_0065 = 0;
      local_8 = PTR_00802a38->field_00E4;
      if (local_10 != 0) {
        index = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,index,&local_c);
          if ((short)local_c != -1) {
            this_00 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),
                                 local_c,CASE_1);
            if (this_00 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0x65e);
            }
            STBoatC::CmdToObj(this_00,CASE_3,&local_8);
          }
          uVar7 = uVar7 + 1;
          index = uVar7 & 0xffff;
        } while (index < local_10);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return 2;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x665,0,iVar3,&DAT_007a4ccc,
                             s_STGroupBoatC__GrpMove_007abf3c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x666);
  return 0xffffffff;
}

