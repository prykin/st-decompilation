
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadRC */

undefined4 __thiscall STGroupBoatC::GrpUnLoadRC(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  STGroupBoatC *pSVar5;
  uint *puVar6;
  int iVar7;
  STBoatC *this_00;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar14;
  undefined4 *puVar15;
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
  
  local_10 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_c = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_2c = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_2c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99a,0,iVar7,&DAT_007a4ccc,
                                s_STGroupBoatC__GrpUnLoadRC_007abff8);
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x99b);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar12 = 0;
    pSVar14 = local_2c + 0x89;
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(local_2c + 0x65) = 0;
    local_20 = 0;
    *(undefined4 *)(local_2c + 0x295) = *(undefined4 *)(local_2c + 0x156);
    *(undefined2 *)(local_2c + 0x299) = *(undefined2 *)(local_2c + 0x15a);
    local_34 = *(undefined2 *)(local_2c + 0x156);
    local_38 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_30 = *(undefined2 *)(local_2c + 0x15a);
    local_32 = *(undefined2 *)(local_2c + 0x158);
    puVar8 = local_14;
    local_24 = local_38;
    if (local_10 != 0) {
      do {
        FUN_006acc70(*(int *)(pSVar5 + 0x29),uVar12,&local_8);
        if ((short)local_8 != -1) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar5[0x24]),
                               local_8,1);
          if (this_00 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x960);
          }
          iVar7 = (**(code **)(*(int *)this_00 + 0x2c))();
          if (((iVar7 == 8) || (iVar7 = (**(code **)(*(int *)this_00 + 0x2c))(), iVar7 == 0x14)) ||
             (iVar7 = (**(code **)(*(int *)this_00 + 0x2c))(), iVar7 == 0x1a)) {
            if (puVar8 == (uint *)0x0) {
              puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = puVar8;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar8,&local_8);
            puVar15 = &local_38;
            iVar7 = 0xd;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)this_00);
            if (iVar7 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_0049d3ca;
            }
            puVar15 = &local_24;
            iVar7 = 3;
          }
          STBoatC::CmdToObj(this_00,iVar7,puVar15);
        }
LAB_0049d3ca:
        local_20 = local_20 + 1;
        uVar12 = local_20 & 0xffff;
      } while (uVar12 < local_10);
    }
    puVar6 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar12 >> 8),pSVar5[0x24]),puVar8,local_c);
    if (puVar8 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar8);
    }
    if (puVar6 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar6);
    }
  }
  local_20 = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 100 == 0) {
    sVar1 = *(short *)(pSVar5 + 0x295);
    sVar2 = *(short *)(pSVar5 + 0x299);
    sVar3 = *(short *)(pSVar5 + 0x297);
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
        ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(DAT_007fb248 +
                        ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                        (int)sVar1) * 8);
    }
    uVar12 = 0;
    if (((piVar9 == (int *)0x0) || (piVar9[9] != (int)(char)pSVar5[0x24])) ||
       ((iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 != 0x3b &&
        (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 != 0x60)))) {
      local_20 = 0;
    }
    else {
      local_28 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_10 != 0) {
        uVar13 = 0;
        do {
          FUN_006acc70(*(int *)(pSVar5 + 0x29),uVar13,&local_8);
          if ((short)local_8 != -1) {
            piVar9 = (int *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar5[0x24]),
                                       local_8,1);
            if (piVar9 == (int *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x989);
            }
            iVar7 = (**(code **)(*piVar9 + 0x2c))();
            if (((iVar7 == 8) || (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 == 0x14)) ||
               (iVar7 = (**(code **)(*piVar9 + 0x2c))(), iVar7 == 0x1a)) {
              local_18 = local_18 + 1;
              local_1c = local_1c +
                         *(int *)((int)piVar9 + 0x7da) + *(int *)((int)piVar9 + 0x7d6) +
                         *(int *)((int)piVar9 + 0x7d2);
              if (0 < local_1c) break;
              iVar7 = thunk_FUN_0045ff10((int)piVar9);
              if (iVar7 == 0xd) {
                local_28 = 1;
                break;
              }
            }
          }
          uVar12 = uVar12 + 1;
          uVar13 = uVar12 & 0xffff;
        } while (uVar13 < local_10);
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

