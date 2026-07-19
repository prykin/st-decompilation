
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
  uint *puVar6;
  int iVar7;
  int iVar8;
  STBoatC *pSVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar14;
  STBoatC_CmdToObj_param_1Enum SVar15;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_24;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar7 == -0x5001fff7) {
      return 0;
    }
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd02,0,iVar7,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpDismant_007ac158);
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd03);
      return 0xffffffff;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar14 = (undefined4 *)&local_24->field_0x89;
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    local_24->field_02F0 = local_24->field_01BB;
    local_24->field_0065 = 0;
    *(undefined2 *)&local_24->field_0x2ee = *(undefined2 *)&local_24->field_0x1b9;
    *(undefined2 *)&local_24->field_0x2f2 = local_24->field_01BD;
    if (DAT_007fb244 + -2 < (int)(short)local_24->field_01BD) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcc7)
      ;
    }
    sVar1 = *(short *)&pSVar5->field_0x2ee;
    sVar2 = *(short *)&pSVar5->field_0x2f2;
    sVar3 = pSVar5->field_02F0;
    if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1)
                      * 8);
    }
    if (((iVar7 == 0) || (*(int *)(iVar7 + 0x20) != 1000)) ||
       ((*(int *)(iVar7 + 0x24) != (int)pSVar5->field_0024 ||
        (iVar8 = thunk_FUN_004b9d90(iVar7), iVar8 == 0)))) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xccc)
      ;
    }
    local_1c = 0;
    *(undefined4 *)&pSVar5->field_0x2f4 = *(undefined4 *)(iVar7 + 0x18);
    local_2e = pSVar5->field_02F0;
    local_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_2c = *(undefined2 *)&pSVar5->field_0x2f2;
    uVar12 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),local_2c);
    local_30 = *(undefined2 *)&pSVar5->field_0x2ee;
    local_2a = *(undefined4 *)&pSVar5->field_0x2f4;
    puVar10 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar12 = 0;
      do {
        FUN_006acc70(pSVar5->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar9 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar5->field_0024),local_8,
                              CASE_1);
          if (pSVar9 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcd4);
          }
          iVar7 = (*pSVar9->vtable->vfunc_2C)();
          if (((iVar7 == 0xc) || (iVar7 = (*pSVar9->vtable->vfunc_2C)(), iVar7 == 0x18)) ||
             (iVar7 = (*pSVar9->vtable->vfunc_2C)(), iVar7 == 0x1d)) {
            if (puVar10 == (uint *)0x0) {
              puVar10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = puVar10;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar10,&local_8);
            puVar14 = &local_34;
            SVar15 = CASE_12;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)pSVar9);
            if (iVar7 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a02d6;
            }
            puVar14 = &local_18;
            SVar15 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar9,SVar15,puVar14);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar12 = local_1c & 0xffff;
      } while (uVar12 < local_10);
    }
    puVar6 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar12 >> 8),pSVar5->field_0024),puVar10,local_c);
    if (puVar10 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar10);
    }
    if (puVar6 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar6);
    }
  }
  uVar12 = 0;
  local_1c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar13 = 0;
      do {
        FUN_006acc70(pSVar5->field_0029,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar9 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar5->field_0024),local_8,
                              CASE_1);
          if (pSVar9 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcf6);
          }
          iVar7 = (*pSVar9->vtable->vfunc_2C)();
          if (((((iVar7 == 0xc) || (iVar7 = (*pSVar9->vtable->vfunc_2C)(), iVar7 == 0x18)) ||
               (iVar7 = (*pSVar9->vtable->vfunc_2C)(), iVar7 == 0x1d)) &&
              (iVar7 = thunk_FUN_0045ff10((int)pSVar9), iVar7 == 0x12)) ||
             (uVar13 = STBoatC::CheckPBoxCmd(pSVar9,CASE_12), uVar13 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while (uVar13 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

