
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
  uint *puVar7;
  int iVar8;
  STBoatC *this_00;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 extraout_ECX;
  uint uVar13;
  undefined4 extraout_EDX;
  uint uVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar15;
  STBoatC_CmdToObj_param_1Enum SVar16;
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
  uint *local_c;
  uint local_8;
  
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_2c = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_2c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99a,0,iVar8,&DAT_007a4ccc,
                                s_STGroupBoatC__GrpUnLoadRC_007abff8);
    if (iVar11 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99b);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return uVar12;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar13 = 0;
    puVar15 = (undefined4 *)&local_2c->field_0x89;
    for (iVar8 = 0x15; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    local_2c->field_0065 = 0;
    local_20 = 0;
    uVar5 = local_2c->field_0158;
    *(undefined2 *)&local_2c->field_0x295 = *(undefined2 *)&local_2c->field_0x156;
    local_2c->field_0297 = uVar5;
    local_2c->field_0299 = local_2c->field_015A;
    local_34 = *(undefined2 *)&local_2c->field_0x156;
    local_38 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_30 = local_2c->field_015A;
    local_32 = local_2c->field_0158;
    puVar9 = local_14;
    local_24 = local_38;
    if (local_10 != 0) {
      do {
        FUN_006acc70(pSVar6->field_0029,uVar13,&local_8);
        if ((short)local_8 != -1) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar6->field_0024),local_8,
                               CASE_1);
          if (this_00 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x960);
          }
          iVar8 = (*this_00->vtable->vfunc_2C)();
          if (((iVar8 == 8) || (iVar8 = (*this_00->vtable->vfunc_2C)(), iVar8 == 0x14)) ||
             (iVar8 = (*this_00->vtable->vfunc_2C)(), iVar8 == 0x1a)) {
            if (puVar9 == (uint *)0x0) {
              puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = puVar9;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar9,&local_8);
            puVar15 = &local_38;
            SVar16 = CASE_D;
          }
          else {
            iVar8 = thunk_FUN_00490d90((int)this_00);
            if (iVar8 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_0049d3ca;
            }
            puVar15 = &local_24;
            SVar16 = CASE_3;
          }
          STBoatC::CmdToObj(this_00,SVar16,puVar15);
        }
LAB_0049d3ca:
        local_20 = local_20 + 1;
        uVar13 = local_20 & 0xffff;
      } while (uVar13 < local_10);
    }
    puVar7 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar13 >> 8),pSVar6->field_0024),puVar9,local_c);
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    if (puVar7 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar7);
    }
  }
  local_20 = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 100 == 0) {
    sVar1 = *(short *)&pSVar6->field_0x295;
    sVar2 = pSVar6->field_0299;
    sVar3 = pSVar6->field_0297;
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
        ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                         (int)sVar1) * 8);
    }
    uVar13 = 0;
    if (((piVar10 == (int *)0x0) || (piVar10[9] != (int)pSVar6->field_0024)) ||
       ((iVar8 = (**(code **)(*piVar10 + 0x2c))(), iVar8 != 0x3b &&
        (iVar8 = (**(code **)(*piVar10 + 0x2c))(), iVar8 != 0x60)))) {
      local_20 = 0;
    }
    else {
      local_28 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_10 != 0) {
        uVar14 = 0;
        do {
          FUN_006acc70(pSVar6->field_0029,uVar14,&local_8);
          if ((short)local_8 != -1) {
            piVar10 = (int *)STAllPlayersC::GetObjPtr
                                       (DAT_007fa174,
                                        CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar6->field_0024)
                                        ,local_8,CASE_1);
            if (piVar10 == (int *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x989);
            }
            iVar8 = (**(code **)(*piVar10 + 0x2c))();
            if (((iVar8 == 8) || (iVar8 = (**(code **)(*piVar10 + 0x2c))(), iVar8 == 0x14)) ||
               (iVar8 = (**(code **)(*piVar10 + 0x2c))(), iVar8 == 0x1a)) {
              local_18 = local_18 + 1;
              local_1c = local_1c +
                         *(int *)((int)piVar10 + 0x7da) + *(int *)((int)piVar10 + 0x7d6) +
                         *(int *)((int)piVar10 + 0x7d2);
              if (0 < local_1c) break;
              iVar8 = thunk_FUN_0045ff10((int)piVar10);
              if (iVar8 == 0xd) {
                local_28 = 1;
                break;
              }
            }
          }
          uVar13 = uVar13 + 1;
          uVar14 = uVar13 & 0xffff;
        } while (uVar14 < local_10);
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

