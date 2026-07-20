
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpDismant */

undefined4 __thiscall STGroupBoatC::GrpDismant(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  STGroupBoatC *pSVar5;
  uint *groupContent;
  int iVar6;
  int iVar7;
  STBoatC *pSVar8;
  uint *groupContent_00;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  uint uVar10;
  undefined4 extraout_EDX;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar12;
  STBoatC_CmdToObj_param_1Enum SVar13;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_2a;
  STGroupBoatC *local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  uint *local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_c = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_24 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_24;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd02,0,iVar6,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpDismant_007ac158);
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd03);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar12 = (undefined4 *)&local_24->field_0x89;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_24->field_02F0 = local_24->field_01BB;
    local_24->field_0065 = 0;
    *(undefined2 *)&local_24->field_0x2ee = *(undefined2 *)&local_24->field_0x1b9;
    *(undefined2 *)&local_24->field_0x2f2 = local_24->field_01BD;
    if (SHORT_007fb244 + -2 < (int)(short)local_24->field_01BD) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0xcc7);
    }
    sVar1 = *(short *)&pSVar5->field_0x2ee;
    sVar2 = *(short *)&pSVar5->field_0x2f2;
    sVar3 = pSVar5->field_02F0;
    if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2)))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_007fb248 +
                      ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                      (int)sVar1) * 8);
    }
    if (((iVar6 == 0) || (*(int *)(iVar6 + 0x20) != 1000)) ||
       ((*(int *)(iVar6 + 0x24) != (int)pSVar5->field_0024 ||
        (iVar7 = thunk_FUN_004b9d90(iVar6), iVar7 == 0)))) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0xccc);
    }
    local_1c = 0;
    *(undefined4 *)&pSVar5->field_0x2f4 = *(undefined4 *)(iVar6 + 0x18);
    local_2e = pSVar5->field_02F0;
    local_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_2c = *(undefined2 *)&pSVar5->field_0x2f2;
    uVar10 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),local_2c);
    local_30 = *(undefined2 *)&pSVar5->field_0x2ee;
    local_2a = *(undefined4 *)&pSVar5->field_0x2f4;
    groupContent_00 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(pSVar5->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar8 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar5->field_0024),local_8,
                              CASE_1);
          if (pSVar8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcd4);
          }
          iVar6 = (*pSVar8->vtable->vfunc_2C)();
          if (((iVar6 == 0xc) || (iVar6 = (*pSVar8->vtable->vfunc_2C)(), iVar6 == 0x18)) ||
             (iVar6 = (*pSVar8->vtable->vfunc_2C)(), iVar6 == 0x1d)) {
            if (groupContent_00 == (uint *)0x0) {
              groupContent_00 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = groupContent_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(groupContent_00,&local_8);
            puVar12 = &local_34;
            SVar13 = CASE_12;
          }
          else {
            iVar6 = thunk_FUN_00490d90((int)pSVar8);
            if (iVar6 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a02d6;
            }
            puVar12 = &local_18;
            SVar13 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar8,SVar13,puVar12);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar10 = local_1c & 0xffff;
      } while (uVar10 < local_10);
    }
    groupContent = local_c;
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar10 >> 8),pSVar5->field_0024),
               groupContent_00,local_c);
    if (groupContent_00 != (uint *)0x0) {
      FUN_006ae110((byte *)groupContent_00);
    }
    if (groupContent != (uint *)0x0) {
      FUN_006ae110((byte *)groupContent);
    }
  }
  uVar10 = 0;
  local_1c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar11 = 0;
      do {
        FUN_006acc70(pSVar5->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar8 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar5->field_0024),local_8,
                              CASE_1);
          if (pSVar8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcf6);
          }
          iVar6 = (*pSVar8->vtable->vfunc_2C)();
          if (((((iVar6 == 0xc) || (iVar6 = (*pSVar8->vtable->vfunc_2C)(), iVar6 == 0x18)) ||
               (iVar6 = (*pSVar8->vtable->vfunc_2C)(), iVar6 == 0x1d)) &&
              (iVar6 = thunk_FUN_0045ff10((int)pSVar8), iVar6 == 0x12)) ||
             (uVar11 = STBoatC::CheckPBoxCmd(pSVar8,CASE_12), uVar11 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while (uVar11 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

