
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpBuild */

undefined4 __thiscall STGroupBoatC::GrpBuild(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  STGroupBoatC *pSVar4;
  uint *puVar5;
  short sVar6;
  int iVar7;
  STBoatC *pSVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  undefined4 unaff_ESI;
  undefined4 *puVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  STBoatC_CmdToObj_param_1Enum SVar16;
  InternalExceptionFrame local_8c;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  char local_36 [14];
  undefined1 local_28;
  undefined2 local_27;
  STGroupBoatC *local_24;
  undefined4 local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_14 = *(uint *)(this->field_0029 + 0xc);
  local_10 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_24 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_24;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x944,0,iVar7,&DAT_007a4ccc,
                                s_STGroupBoatC__GrpBuild_007abfdc);
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x945);
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar14 = (undefined4 *)&local_24->field_0x89;
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)&local_24->field_0x65 = 0;
    puVar14 = (undefined4 *)&local_24->field_0x137;
    puVar15 = (undefined4 *)&local_24->field_0x276;
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = *(undefined2 *)puVar14;
    *(undefined1 *)((int)puVar15 + 2) = *(undefined1 *)((int)puVar14 + 2);
    local_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_44 = *(undefined2 *)&local_24->field_0x137;
    local_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_42 = *(undefined2 *)&local_24->field_0x139;
    local_3e = *(undefined4 *)&local_24->field_0x13d;
    local_27 = *(undefined2 *)&local_24->field_0x154;
    local_40 = *(undefined2 *)&local_24->field_0x13b;
    local_3a = *(undefined4 *)&local_24->field_0x141;
    Library::MSVCRT::_strncpy(local_36,&local_24->field_0x145,0xe);
    uVar12 = 0;
    local_28 = 0;
    local_c = 0;
    puVar9 = local_1c;
    if (local_14 != 0) {
      do {
        FUN_006acc70(pSVar4->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar8 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar4->field_0024),local_8,
                              CASE_1);
          if (pSVar8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x90f);
          }
          iVar7 = (*pSVar8->vtable->vfunc_2C)();
          if (((iVar7 == 0xc) || (iVar7 = (*pSVar8->vtable->vfunc_2C)(), iVar7 == 0x18)) ||
             (iVar7 = (*pSVar8->vtable->vfunc_2C)(), iVar7 == 0x19)) {
            if (puVar9 == (uint *)0x0) {
              puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_1c = puVar9;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar9,&local_8);
            puVar14 = &local_48;
            SVar16 = CASE_11;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)pSVar8);
            if (iVar7 != 0) {
              if (local_10 == (uint *)0x0) {
                local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_10,&local_8);
              goto LAB_0049cf10;
            }
            puVar14 = &local_20;
            SVar16 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar8,SVar16,puVar14);
        }
LAB_0049cf10:
        local_c = local_c + 1;
        uVar12 = local_c & 0xffff;
      } while (uVar12 < local_14);
    }
    puVar5 = local_10;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar12 >> 8),pSVar4->field_0024),puVar9,local_10);
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    if (puVar5 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar5);
    }
  }
  uVar12 = 0;
  local_c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x32 == 0) {
    sVar6 = *(short *)&pSVar4->field_0x276;
    sVar1 = *(short *)&pSVar4->field_0x27a;
    sVar2 = *(short *)&pSVar4->field_0x278;
    if ((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
        ((sVar2 < 0 || ((DAT_007fb242 <= sVar2 || (sVar1 < 0)))))) || (DAT_007fb244 <= sVar1)) {
      sVar6 = -1;
    }
    else {
      sVar6 = *(short *)(DAT_007fb280 +
                        ((int)sVar2 * (int)DAT_007fb278 + (int)sVar1 * (int)DAT_007fb27e +
                        (int)sVar6) * 2);
    }
    if (sVar6 != 0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_18 = 0;
    if (local_14 != 0) {
      uVar13 = 0;
      do {
        FUN_006acc70(pSVar4->field_0029,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar8 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar4->field_0024),local_8,
                              CASE_1);
          if (pSVar8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x938);
          }
          iVar7 = (*pSVar8->vtable->vfunc_2C)();
          if (((((iVar7 == 0xc) || (iVar7 = (*pSVar8->vtable->vfunc_2C)(), iVar7 == 0x18)) ||
               (iVar7 = (*pSVar8->vtable->vfunc_2C)(), iVar7 == 0x19)) &&
              (iVar7 = thunk_FUN_0045ff10((int)pSVar8), iVar7 == 0x11)) ||
             (uVar13 = STBoatC::CheckPBoxCmd(pSVar8,CASE_11), uVar13 == 1)) {
            local_18 = local_18 + 1;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while (uVar13 < local_14);
    }
    if (local_18 == 0) {
      local_c = 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return local_c;
}

