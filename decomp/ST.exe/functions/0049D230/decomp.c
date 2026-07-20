
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadRC */

undefined4 __thiscall STGroupBoatC::GrpUnLoadRC(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  undefined2 uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *groupContent;
  int iVar7;
  STBoatC *this_00;
  uint *groupContent_00;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  uint uVar11;
  undefined4 extraout_EDX;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  InternalExceptionFrame local_7c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  STGroupBoatC *local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  uint local_10;
  DArrayTy *local_c;
  uint local_8;
  
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = (DArrayTy *)0x0;
  local_14 = (uint *)0x0;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_2c = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_2c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99a,0,iVar7,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpUnLoadRC_007abff8);
    if (iVar9 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99b);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar11 = 0;
    puVar13 = (undefined4 *)&local_2c->field_0x89;
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    local_2c->field_0065 = 0;
    local_20 = 0;
    uVar5 = local_2c->field_0158;
    *(undefined2 *)&local_2c->field_0x295 = *(undefined2 *)&local_2c->field_0x156;
    local_2c->field_0297 = uVar5;
    local_2c->field_0299 = local_2c->field_015A;
    local_34 = *(undefined2 *)&local_2c->field_0x156;
    local_38 = PTR_00802a38->field_00E4;
    local_30 = local_2c->field_015A;
    local_32 = local_2c->field_0158;
    groupContent_00 = local_14;
    local_24 = local_38;
    if (local_10 != 0) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar6->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar6->field_0024),local_8,
                               CASE_1);
          if (this_00 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0x960);
          }
          iVar7 = (*this_00->vtable->vfunc_2C)();
          if (((iVar7 == 8) || (iVar7 = (*this_00->vtable->vfunc_2C)(), iVar7 == 0x14)) ||
             (iVar7 = (*this_00->vtable->vfunc_2C)(), iVar7 == 0x1a)) {
            if (groupContent_00 == (uint *)0x0) {
              groupContent_00 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = groupContent_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(groupContent_00,&local_8);
            puVar13 = &local_38;
            SVar14 = CASE_D;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)this_00);
            if (iVar7 != 0) {
              if (local_c == (DArrayTy *)0x0) {
                local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              goto LAB_0049d3ca;
            }
            puVar13 = &local_24;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(this_00,SVar14,puVar13);
        }
LAB_0049d3ca:
        local_20 = local_20 + 1;
        uVar11 = local_20 & 0xffff;
      } while (uVar11 < local_10);
    }
    groupContent = local_c;
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar11 >> 8),pSVar6->field_0024),
               groupContent_00,&local_c->flags);
    if (groupContent_00 != (uint *)0x0) {
      FUN_006ae110((byte *)groupContent_00);
    }
    if (groupContent != (DArrayTy *)0x0) {
      FUN_006ae110((byte *)groupContent);
    }
  }
  local_20 = 2;
  if ((uint)PTR_00802a38->field_00E4 % 100 == 0) {
    sVar1 = *(short *)&pSVar6->field_0x295;
    sVar2 = pSVar6->field_0299;
    sVar3 = pSVar6->field_0297;
    if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
        ((sVar3 < 0 || ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (SHORT_007fb244 <= sVar2)) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(DAT_007fb248 +
                        ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                        (int)sVar1) * 8);
    }
    uVar11 = 0;
    if (((piVar8 == (int *)0x0) || (piVar8[9] != (int)pSVar6->field_0024)) ||
       ((iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 != 0x3b &&
        (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 != 0x60)))) {
      local_20 = 0;
    }
    else {
      local_28 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_10 != 0) {
        uVar12 = 0;
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar6->field_0029,uVar12,&local_8);
          if ((short)local_8 != -1) {
            piVar8 = (int *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,
                                       CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar6->field_0024),
                                       local_8,CASE_1);
            if (piVar8 == (int *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0x989);
            }
            iVar7 = (**(code **)(*piVar8 + 0x2c))();
            if (((iVar7 == 8) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x14)) ||
               (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x1a)) {
              local_18 = local_18 + 1;
              local_1c = local_1c +
                         *(int *)((int)piVar8 + 0x7da) + *(int *)((int)piVar8 + 0x7d6) +
                         *(int *)((int)piVar8 + 0x7d2);
              if (0 < local_1c) break;
              iVar7 = thunk_FUN_0045ff10((int)piVar8);
              if (iVar7 == 0xd) {
                local_28 = 1;
                break;
              }
            }
          }
          uVar11 = uVar11 + 1;
          uVar12 = uVar11 & 0xffff;
        } while (uVar12 < local_10);
      }
      if ((local_18 == 0) || ((local_1c == 0 && (local_28 == 0)))) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_20;
}

