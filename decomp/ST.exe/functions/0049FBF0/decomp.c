
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Bring */

uint * __thiscall STGroupBoatC::Bring(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  DArrayTy *array;
  void *unaff_EDI;
  undefined4 *puVar9;
  uint uVar10;
  InternalExceptionFrame local_70;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  STGroupBoatC *local_20;
  DArrayTy *local_1c;
  undefined4 local_18;
  DArrayTy *local_14;
  uint local_10;
  DArrayTy *local_c;
  uint local_8;
  
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_14 = (DArrayTy *)0x0;
  local_c = (DArrayTy *)0x0;
  local_1c = (DArrayTy *)0x2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 == -0x5001fff7) {
      return &local_1c->flags;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcb0,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__Bring_007ac140);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      puVar8 = (uint *)(*pcVar1)();
      return puVar8;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcb1);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 0) && (param_1 != 1)) goto LAB_0049fe51;
  puVar9 = (undefined4 *)&local_20->field_0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uVar10 = 0;
  local_20->field_0065 = 0;
  *(undefined4 *)&local_20->field_0x2e8 = local_20->field_01B3;
  local_20->field_02EC = local_20->field_01B7;
  local_28 = *(undefined2 *)&local_20->field_0x2e8;
  local_26 = local_20->field_02EA;
  local_2c = PTR_00802a38->field_00E4;
  local_24 = local_20->field_02EC;
  local_18 = local_2c;
  if (0 < (int)local_10) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar10,&local_8);
      if ((short)local_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)(local_8 >> 8),pSVar2->field_0024),local_8,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0xc79);
        }
        iVar3 = (*pSVar4->vtable->vfunc_2C)();
        if (((iVar3 == 7) || (iVar3 = (*pSVar4->vtable->vfunc_2C)(), iVar3 == 0x13)) ||
           (iVar3 = (*pSVar4->vtable->vfunc_2C)(), iVar3 == 0x1b)) {
          STBoatC::CmdToObj(pSVar4,CASE_17,&local_2c);
          pDVar5 = local_14;
          if (local_14 == (DArrayTy *)0x0) {
            pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            local_14 = pDVar5;
          }
        }
        else {
          iVar3 = thunk_FUN_00490d90((int)pSVar4);
          if (iVar3 == 0) {
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            goto LAB_0049fd94;
          }
          pDVar5 = local_c;
          if (local_c == (DArrayTy *)0x0) {
            pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            local_c = pDVar5;
          }
        }
        Library::DKW::TBL::FUN_006ae1c0(&pDVar5->flags,&local_8);
      }
LAB_0049fd94:
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_10);
  }
  array = local_c;
  pDVar5 = local_14;
  if ((local_14 == (DArrayTy *)0x0) || (local_c == (DArrayTy *)0x0)) {
    if (local_14 == (DArrayTy *)0x0) {
      if (local_c != (DArrayTy *)0x0) {
        uVar10 = local_c->count;
        uVar6 = 0;
        local_10 = uVar10;
        if (0 < (int)uVar10) {
          do {
            iVar3 = DArrayGetElement(local_c,uVar6,&local_8);
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)iVar3 >> 8),pSVar2->field_0024),local_8,CASE_1
                               );
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar10);
        }
        local_1c = (DArrayTy *)0x0;
      }
      array = local_c;
      pDVar5 = local_14;
      if (local_14 == (DArrayTy *)0x0) {
        if (local_c == (DArrayTy *)0x0) {
          local_1c = local_c;
        }
        goto LAB_0049fe22;
      }
    }
LAB_0049fe26:
    DArrayDestroy(pDVar5);
  }
  else {
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_10 >> 8),pSVar2->field_0024),
               &local_14->flags,&local_c->flags);
LAB_0049fe22:
    if (pDVar5 != (DArrayTy *)0x0) goto LAB_0049fe26;
  }
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xca0);
LAB_0049fe51:
  if ((uint)PTR_00802a38->field_00E4 % 0x19 == 7) {
    uVar10 = 0;
    if (0 < (int)local_10) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)(local_8 >> 8),pSVar2->field_0024),local_8,CASE_1);
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xca7);
          }
          iVar3 = thunk_FUN_0045ff10((int)pSVar4);
          if ((iVar3 == 0x17) || (uVar6 = STBoatC::CheckPBoxCmd(pSVar4,CASE_17), uVar6 == 1)) break;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_10);
    }
    if (uVar10 == local_10) {
      local_1c = (DArrayTy *)0x0;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return &local_1c->flags;
}

