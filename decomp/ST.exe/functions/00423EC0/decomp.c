
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetMessage */

undefined4 __thiscall STGroupC::GetMessage(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *this_00;
  int iVar2;
  undefined2 extraout_var;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame local_50;
  int local_c;
  STGroupC *local_8;
  
  uVar7 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x17c,0,iVar2,&DAT_007a4ccc,
                               s_STGroupC__GetMessage_007a514c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x17d);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (*(int *)(param_1 + 0x10) == 2) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(uint *)(iVar2 + 0xc) < 2) {
      *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      this_00[0x24] = *(STGroupC *)(iVar2 + 4);
      *(undefined2 *)(this_00 + 0x25) = *(undefined2 *)(iVar2 + 0x14);
      *(undefined2 *)(this_00 + 0x27) = *(undefined2 *)(iVar2 + 0x18);
      puVar3 = FUN_006ae310((uint *)0x0,5,2,5,0x4045c5);
      *(uint **)(this_00 + 0x29) = puVar3;
      local_c = *(int *)(iVar2 + 0x1c);
      uVar6 = extraout_var_01;
      if (0 < local_c) {
        puVar8 = (undefined4 *)(iVar2 + 0x24);
        do {
          FUN_006ae140(*(uint **)(this_00 + 0x29),uVar7,puVar8);
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 1;
          uVar6 = extraout_var_02;
        } while ((int)uVar7 < local_c);
      }
      STAllPlayersC::RegisterGroup
                (DAT_007fa174,(char)this_00[0x24],CONCAT22(uVar6,*(undefined2 *)(this_00 + 0x25)),
                 (int)this_00);
      *(int *)(this_00 + 0x31) = *(int *)(this_00 + 0x18) * DAT_00808754;
    }
    else if (*(uint *)(iVar2 + 0xc) == 2) {
      RestoreGrpData(this_00,iVar2);
      STAllPlayersC::RegisterGroup
                (DAT_007fa174,(char)this_00[0x24],
                 CONCAT22(extraout_var,*(undefined2 *)(this_00 + 0x25)),(int)this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    thunk_FUN_00423e00(this_00);
    FUN_006ae110(*(byte **)(this_00 + 0x29));
    *(undefined4 *)(this_00 + 0x29) = 0;
    STAllPlayersC::UnRegisterGroup
              (DAT_007fa174,(char)this_00[0x24],
               CONCAT22(extraout_var_00,*(undefined2 *)(this_00 + 0x25)),(int)this_00);
    if (*(byte **)(this_00 + 0x2d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x2d));
      *(undefined4 *)(this_00 + 0x2d) = 0;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

