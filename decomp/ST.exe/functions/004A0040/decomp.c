
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpDismant */

undefined4 __thiscall STGroupBoatC::GrpDismant(STGroupBoatC *this,int param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  STGroupBoatC *pSVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  STBoatC *pSVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 extraout_ECX;
  uint uVar13;
  undefined4 extraout_EDX;
  uint uVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar15;
  STBoatC_CmdToObj_param_1Enum SVar16;
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
  iVar8 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_24;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar8 == -0x5001fff7) {
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd02,0,iVar8,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpDismant_007ac158);
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd03);
      return 0xffffffff;
    }
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return uVar12;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar15 = (undefined4 *)&local_24->field_0x89;
    for (iVar8 = 0x15; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    uVar1 = *(undefined2 *)&local_24->field_0x1b9;
    *(undefined2 *)((int)&local_24->field_02EE + 2) = *(undefined2 *)&local_24->field_0x1bb;
    *(undefined4 *)&local_24->field_0x65 = 0;
    *(undefined2 *)&local_24->field_02EE = uVar1;
    *(short *)&local_24->field_02F2 = *(short *)&local_24->field_0x1bd;
    if (DAT_007fb244 + -2 < (int)*(short *)&local_24->field_0x1bd) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcc7)
      ;
    }
    sVar2 = *(short *)&pSVar6->field_02EE;
    sVar3 = *(short *)&pSVar6->field_02F2;
    sVar4 = *(short *)((int)&pSVar6->field_02EE + 2);
    if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
       (((DAT_007fb242 <= sVar4 || (sVar3 < 0)) || (DAT_007fb244 <= sVar3)))) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 + (int)sVar2)
                      * 8);
    }
    if (((iVar8 == 0) || (*(int *)(iVar8 + 0x20) != 1000)) ||
       ((*(int *)(iVar8 + 0x24) != (int)(char)pSVar6->field_0024 ||
        (iVar9 = thunk_FUN_004b9d90(iVar8), iVar9 == 0)))) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xccc)
      ;
    }
    local_1c = 0;
    *(undefined4 *)((int)&pSVar6->field_02F2 + 2) = *(undefined4 *)(iVar8 + 0x18);
    local_2e = *(undefined2 *)((int)&pSVar6->field_02EE + 2);
    local_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_2c = *(undefined2 *)&pSVar6->field_02F2;
    uVar13 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),local_2c);
    local_30 = *(undefined2 *)&pSVar6->field_02EE;
    local_2a = *(undefined4 *)((int)&pSVar6->field_02F2 + 2);
    puVar11 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar13 = 0;
      do {
        FUN_006acc70(pSVar6->field_0029,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar10 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar6->field_0024),local_8,
                               CASE_1);
          if (pSVar10 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcd4);
          }
          iVar8 = (*pSVar10->vtable->vfunc_2C)();
          if (((iVar8 == 0xc) || (iVar8 = (*pSVar10->vtable->vfunc_2C)(), iVar8 == 0x18)) ||
             (iVar8 = (*pSVar10->vtable->vfunc_2C)(), iVar8 == 0x1d)) {
            if (puVar11 == (uint *)0x0) {
              puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = puVar11;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar11,&local_8);
            puVar15 = &local_34;
            SVar16 = CASE_12;
          }
          else {
            iVar8 = thunk_FUN_00490d90((int)pSVar10);
            if (iVar8 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a02d6;
            }
            puVar15 = &local_18;
            SVar16 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar10,SVar16,puVar15);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar13 = local_1c & 0xffff;
      } while (uVar13 < local_10);
    }
    puVar7 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar13 >> 8),pSVar6->field_0024),puVar11,local_c);
    if (puVar11 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar11);
    }
    if (puVar7 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar7);
    }
  }
  uVar13 = 0;
  local_1c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar14 = 0;
      do {
        FUN_006acc70(pSVar6->field_0029,uVar14,&local_8);
        if ((short)local_8 != -1) {
          pSVar10 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar6->field_0024),local_8,
                               CASE_1);
          if (pSVar10 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcf6);
          }
          iVar8 = (*pSVar10->vtable->vfunc_2C)();
          if (((((iVar8 == 0xc) || (iVar8 = (*pSVar10->vtable->vfunc_2C)(), iVar8 == 0x18)) ||
               (iVar8 = (*pSVar10->vtable->vfunc_2C)(), iVar8 == 0x1d)) &&
              (iVar8 = thunk_FUN_0045ff10((int)pSVar10), iVar8 == 0x12)) ||
             (uVar14 = STBoatC::CheckPBoxCmd(pSVar10,CASE_12), uVar14 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar13 = uVar13 + 1;
        uVar14 = uVar13 & 0xffff;
      } while (uVar14 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

