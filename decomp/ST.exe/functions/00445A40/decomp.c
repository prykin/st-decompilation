
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterPGPair */

void __thiscall
STAllPlayersC::RegisterPGPair(STAllPlayersC *this,uint param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  STBoatC *this_00;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  STAllPlayersC *this_01;
  void *unaff_EDI;
  uint uVar9;
  bool bVar10;
  InternalExceptionFrame local_88;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  int local_38;
  STAllPlayersC *local_34;
  uint local_30;
  undefined4 local_2c;
  uint *local_28;
  int *local_24;
  uint local_20;
  short local_1a;
  uint *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_38 = 0;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_34 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_88.previous;
    if (local_28 != (uint *)0x0) {
      FUN_006ae110((byte *)local_28);
    }
    if (local_18 != (uint *)0x0) {
      FUN_006ae110((byte *)local_18);
    }
    if (local_14 != (uint *)0x0) {
      FUN_006ae110((byte *)local_14);
    }
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x28a2,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RegisterPGPair_007a836c);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x28a3);
    }
    return;
  }
  if ((((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) ||
      (uVar8 = param_2[3], local_10 = uVar8, uVar8 == 0)) || (local_c = param_3[3], local_c == 0)) {
    uVar8 = local_10;
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2837);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_18,param_2);
  Library::DKW::TBL::FUN_006afe40((int *)&local_14,param_3);
  uVar9 = 0;
  this_01 = local_34;
  if (0 < (int)uVar8) {
    do {
      FUN_006acc70((int)local_18,uVar9,&local_8);
      this_01 = local_34;
      piVar4 = (int *)GetObjPtr(local_34,param_1,local_8,CASE_1);
      if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 0xf8))(), iVar3 == 0)) {
        FUN_006b0c70((int)local_18,uVar9);
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 - 1;
        local_10 = uVar8;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar8);
  }
  if (uVar8 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2842);
  }
  uVar8 = 0;
  if (0 < (int)local_c) {
    do {
      FUN_006acc70((int)local_14,uVar8,&local_8);
      piVar4 = (int *)GetObjPtr(this_01,param_1,local_8,CASE_1);
      if (((piVar4 == (int *)0x0) || (iVar3 = thunk_FUN_00490d90((int)piVar4), iVar3 == 0)) ||
         ((iVar3 = (**(code **)(*piVar4 + 0xf8))(), iVar3 == 0 || ((short)piVar4[0xc] == -1)))) {
        FUN_006b0c70((int)local_14,uVar8);
        local_c = local_c - 1;
        uVar8 = uVar8 - 1;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_c);
  }
  if (local_c == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x284d);
  }
  uVar8 = 0;
  puVar5 = local_28;
  if (0 < (int)local_10) {
    do {
      FUN_006acc70((int)local_18,uVar8,&local_8);
      uVar9 = 0;
      if (0 < (int)local_c) {
        do {
          FUN_006acc70((int)local_14,uVar9,(undefined4 *)&local_1a);
          if ((short)local_8 == local_1a) {
            if (puVar5 == (uint *)0x0) {
              puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_28 = puVar5;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar5,&local_8);
            FUN_006b0c70((int)local_18,uVar8);
            local_10 = local_10 - 1;
            uVar8 = uVar8 - 1;
            FUN_006b0c70((int)local_14,uVar9);
            local_c = local_c - 1;
            uVar9 = uVar9 - 1;
            if ((local_10 == 0) || (local_c == 0)) {
              local_38 = 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_c);
      }
      this_01 = local_34;
    } while ((local_38 != 1) && (uVar8 = uVar8 + 1, (int)uVar8 < (int)local_10));
  }
  cVar7 = (char)param_1;
  if (puVar5 == (uint *)0x0) goto LAB_00445e36;
  if ((local_10 == 0) && (local_c == 0)) {
    local_30 = puVar5[3];
    local_20 = 0;
    if (0 < (int)local_30) {
      local_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
      do {
        FUN_006acc70((int)puVar5,local_20,&local_8);
        this_00 = (STBoatC *)GetObjPtr(this_01,param_1,local_8,CASE_1);
        local_2c = *(undefined4 *)(DAT_00802a38 + 0xe4);
        STBoatC::CmdToObj(this_00,CASE_21,&local_2c);
        if ((*local_24 != 0) &&
           (iVar3 = _DeleteGuardBoat(this_01,param_1,(short)local_8,1), iVar3 == -1)) {
          _DeleteGuardBoat(this_01,param_1,(short)local_8,0);
        }
        local_20 = local_20 + 1;
      } while ((int)local_20 < (int)local_30);
    }
    if (*(int *)((int)&DAT_007f5816 + cVar7 * 0xa62) != 0) {
      OptimizeGuardBoats(this_01,cVar7);
      DistributeGuardBoats(this_01,param_1);
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2872);
  }
  if (local_10 == 0) {
    bVar10 = local_c == 0;
    if (!bVar10) {
      Library::DKW::TBL::FUN_006afe40((int *)&local_18,puVar5);
      goto LAB_00445db2;
    }
  }
  else {
LAB_00445db2:
    bVar10 = local_c == 0;
  }
  if (bVar10) {
    if (local_10 != 0) {
      Library::DKW::TBL::FUN_006afe40((int *)&local_14,puVar5);
      goto LAB_00445dca;
    }
  }
  else {
LAB_00445dca:
    if ((local_10 != 0) && (local_c != 0)) {
      local_30 = puVar5[3];
      local_20 = 0;
      if (0 < (int)local_30) {
        do {
          FUN_006acc70((int)puVar5,local_20,&local_8);
          Library::DKW::TBL::FUN_006ae1c0(local_14,&local_8);
          local_20 = local_20 + 1;
        } while ((int)local_20 < (int)local_30);
      }
    }
  }
  local_10 = local_18[3];
  local_c = local_14[3];
  FUN_006ae110((byte *)puVar5);
  local_28 = (uint *)0x0;
LAB_00445e36:
  uVar8 = 0;
  if (0 < (int)local_c) {
    local_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
    do {
      if (*local_24 == 0) break;
      FUN_006acc70((int)local_14,uVar8,&local_8);
      iVar3 = _DeleteGuardBoat(this_01,param_1,(short)local_8,1);
      if (iVar3 == -1) {
        _DeleteGuardBoat(this_01,param_1,(short)local_8,0);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_c);
  }
  uVar8 = 0;
  if (0 < (int)local_10) {
    local_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
    do {
      if (*local_24 == 0) break;
      FUN_006acc70((int)local_18,uVar8,&local_8);
      _DeleteGuardBoat(this_01,param_1,(short)local_8,1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_10);
  }
  local_44 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_10,2,1);
  Library::DKW::TBL::FUN_006afe40((int *)&local_44,local_18);
  local_40 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_c,2,1);
  Library::DKW::TBL::FUN_006afe40((int *)&local_40,local_14);
  local_3c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
  puVar1 = (undefined4 *)((int)&DAT_007f5816 + cVar7 * 0xa62);
  if (*(int *)((int)&DAT_007f5816 + cVar7 * 0xa62) == 0) {
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,0xc,1);
    *puVar1 = puVar5;
  }
  Library::DKW::TBL::FUN_006ae1c0((uint *)*puVar1,&local_44);
  OptimizeGuardBoats(this_01,cVar7);
  DistributeGuardBoats(this_01,param_1);
  if (local_18 != (uint *)0x0) {
    FUN_006ae110((byte *)local_18);
  }
  if (local_14 != (uint *)0x0) {
    FUN_006ae110((byte *)local_14);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

