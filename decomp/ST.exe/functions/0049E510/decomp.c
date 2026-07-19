
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadObj */

uint * __thiscall STGroupBoatC::GrpUnLoadObj(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint *puVar11;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  STGroupBoatC *local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  undefined4 local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  local_14 = *(uint *)(this->field_0029 + 0xc);
  local_10 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_24 = 0;
  local_1c = (uint *)0x2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 == -0x5001fff7) {
      return local_1c;
    }
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb01,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpUnLoadObj_007ac094);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb02);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e7c1;
  puVar10 = (undefined4 *)&local_28->field_0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_30 = *(undefined2 *)&local_28->field_0x17c;
  *(undefined4 *)&local_28->field_0x65 = 0;
  *(undefined2 *)&local_28->field_0x2ad = local_30;
  local_2e = *(undefined2 *)&local_28->field_0x17e;
  *(undefined2 *)&local_28->field_0x2af = local_2e;
  local_2c = *(undefined2 *)&local_28->field_0x180;
  *(undefined2 *)&local_28->field_0x2b1 = local_2c;
  local_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  local_20 = 0;
  local_18 = local_34;
  if (0 < (int)local_14) {
    do {
      FUN_006acc70(pSVar2->field_0029,local_20,&local_8);
      if ((short)local_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2->field_0024),local_8,
                            CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xabe);
        }
        iVar3 = (*pSVar4->vtable->vfunc_F8)();
        if (iVar3 != 0) {
          iVar3 = (*pSVar4->vtable->vfunc_2C)();
          if ((((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) &&
             (iVar3 = thunk_FUN_00492370((int)pSVar4), iVar3 != 0)) {
            STBoatC::CmdToObj(pSVar4,CASE_10,&local_34);
            if (((*(short *)&pSVar2->field_0x2ad != -1) || (*(short *)&pSVar2->field_0x2af != -1))
               || (*(short *)&pSVar2->field_0x2b1 != -1)) {
              puVar5 = local_10;
              if (local_10 == (uint *)0x0) {
                puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                local_10 = puVar5;
              }
LAB_0049e6f6:
              Library::DKW::TBL::FUN_006ae1c0(puVar5,&local_8);
            }
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)pSVar4);
            if (iVar3 == 0) {
              STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            }
            else if (((*(short *)&pSVar2->field_0x2ad != -1) ||
                     (*(short *)&pSVar2->field_0x2af != -1)) ||
                    (*(short *)&pSVar2->field_0x2b1 != -1)) {
              puVar5 = local_c;
              if (local_c == (uint *)0x0) {
                puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                local_c = puVar5;
              }
              goto LAB_0049e6f6;
            }
          }
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < (int)local_14);
  }
  puVar11 = local_c;
  puVar5 = local_10;
  if ((local_10 == (uint *)0x0) || (local_c == (uint *)0x0)) {
    if (local_10 == (uint *)0x0) {
      if (local_c != (uint *)0x0) {
        uVar9 = local_c[3];
        uVar7 = 0;
        local_14 = uVar9;
        if (0 < (int)uVar9) {
          do {
            uVar6 = FUN_006acc70((int)local_c,uVar7,&local_8);
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(uVar6 >> 8),pSVar2->field_0024),local_8
                                ,CASE_1);
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar9);
        }
        local_1c = (uint *)0x0;
      }
      puVar5 = local_10;
      puVar11 = local_c;
      if (local_10 == (uint *)0x0) {
        if (local_c == (uint *)0x0) {
          local_1c = local_c;
        }
        goto LAB_0049e790;
      }
    }
LAB_0049e794:
    FUN_006ae110((byte *)puVar5);
  }
  else {
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_14 >> 8),pSVar2->field_0024),local_10,local_c);
LAB_0049e790:
    if (puVar5 != (uint *)0x0) goto LAB_0049e794;
  }
  if (puVar11 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar11);
  }
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xae9);
LAB_0049e7c1:
  uVar9 = 0;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x32 == 0) {
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(pSVar2->field_0029,uVar9,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,CONCAT31((int3)(local_8 >> 8),pSVar2->field_0024),local_8
                              ,CASE_1);
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xaf1);
          }
          iVar3 = (*pSVar4->vtable->vfunc_F8)();
          if ((iVar3 != 0) &&
             ((((iVar3 = (*pSVar4->vtable->vfunc_2C)(), iVar3 == 7 || (iVar3 == 0x13)) ||
               (iVar3 == 0x1b)) &&
              ((iVar3 = thunk_FUN_0045ff10((int)pSVar4), iVar3 == 0x10 ||
               (uVar7 = STBoatC::CheckPBoxCmd(pSVar4,CASE_10), uVar7 == 1)))))) {
            local_24 = 1;
            break;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_14);
    }
    if (local_24 == 0) {
      local_1c = (uint *)0x0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

