
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *puVar3;
  STBoatC *this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupBoatC *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = *(uint *)(this->field_0029 + 0xc);
  uVar7 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x642,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpMove_007abf3c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x643);
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar8 = (undefined4 *)&local_14->field_0x89;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_14->field_003D = (int)*(short *)&local_14->field_0xdd;
    local_14->field_0045 = (int)*(short *)&local_14->field_0xe1;
    local_14->field_0065 = 0;
    local_14->field_0041 = (int)local_14->field_00DF;
    local_14->field_030E = *(undefined4 *)&local_14->field_0xe3;
    puVar3 = STGroupC::GetGroupContent((STGroupC *)local_14,(int)unaff_EDI);
    InitWay(this_00,(int)puVar3,this_00->field_003D,this_00->field_0041,this_00->field_0045);
    FUN_006ae110((byte *)puVar3);
    local_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_1c = 0xffff;
    local_1a = 0xffff;
    local_18 = 0xffff;
    if (local_10 != 0) {
      uVar6 = 0;
      do {
        FUN_006acc70(this_00->field_0029,uVar6,&local_c);
        if ((short)local_c != -1) {
          this_01 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0024),local_c
                               ,CASE_1);
          if (this_01 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x629);
          }
          STBoatC::CmdToObj(this_01,CASE_1,&local_20);
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < local_10);
    }
    local_8 = 2;
  }
  if (param_1 == 2) {
    if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) {
      uVar6 = 0;
      local_8 = 0;
      uVar7 = 0;
      if (local_10 != 0) {
        do {
          FUN_006acc70(this_00->field_0029,uVar7,&local_c);
          if ((short)local_c != -1) {
            uVar7 = STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0024),
                               local_c,CASE_1);
            if (uVar7 == 0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x638);
            }
            iVar2 = thunk_FUN_0045ff30(uVar7);
            if (iVar2 != 0) goto cf_common_exit_0049A832;
            iVar2 = thunk_FUN_0045ff10(uVar7);
            if (iVar2 == 1) goto cf_common_exit_0049A832;
            iVar2 = thunk_FUN_0045ff10(uVar7);
            if (iVar2 == 0) goto cf_common_exit_0049A832;
          }
          uVar6 = uVar6 + 1;
          uVar7 = uVar6 & 0xffff;
          if (local_10 <= uVar7) {
            g_currentExceptionFrame = local_64.previous;
            return local_8;
          }
        } while( true );
      }
    }
    else {
cf_common_exit_0049A832:
      local_8 = 2;
    }
  }
  g_currentExceptionFrame = local_64.previous;
  return local_8;
}

