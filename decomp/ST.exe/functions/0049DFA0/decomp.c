#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadObj */

undefined4 __thiscall STGroupBoatC::GrpLoadObj(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  dword dVar4;
  DArrayTy *pDVar5;
  DArrayTy *array;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  STBoatC *pSVar9;
  undefined4 *puVar10;
  uint uVar11;
  InternalExceptionFrame local_84;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  DArrayTy *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  DArrayTy *local_14;
  STBoatC *local_10;
  uint local_c;
  STBoatC *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(STBoatC **)(this->field_0029 + 0xc);
  local_14 = (DArrayTy *)0x0;
  local_24 = (DArrayTy *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 2;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_30 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (iVar3 == -0x5001fff7) {
      return local_18;
    }
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xaa0,0,iVar3,"%s",
                               "STGroupBoatC::GrpLoadObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xaa1);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e26d;
  puVar10 = &local_30->field_0089;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_30->field_0065 = 0;
  iVar3 = FUN_006e62d0(PTR_00802a38,local_30->field_0178,(int *)&local_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(local_8,(undefined2 *)&pSVar2->field_0x2a3,(undefined2 *)&pSVar2->field_0x2a5,
                     (undefined2 *)&pSVar2->field_0x2a7);
  local_20 = 0;
  *(uint *)&pSVar2->field_0x2a9 = local_8->field_0018;
  local_40 = PTR_00802a38->field_00E4;
  pSVar9 = local_8;
  array = local_24;
  local_1c = local_40;
  if (0 < (int)local_10) {
    do {
      DArrayGetElement((DArrayTy *)pSVar2->field_0029,local_20,&local_c);
      if ((short)local_c != -1) {
        local_8 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
        if (local_8 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xa5b);
        }
        iVar3 = (*local_8->vtable->vfunc_F8)();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)local_8);
          if (iVar3 == 0) {
            dVar4 = (*local_8->vtable->slot_2C)(local_8);
            if ((((dVar4 != 7) && (dVar4 != 0x13)) && (dVar4 != 0x1b)) ||
               (iVar3 = thunk_FUN_00492370((int)local_8), iVar3 != 0)) {
              STBoatC::CmdToObj(local_8,CASE_3,&local_1c);
              goto LAB_0049e1aa;
            }
            local_3c = *(undefined2 *)&pSVar2->field_0x2a3;
            local_3a = *(undefined2 *)&pSVar2->field_0x2a5;
            local_38 = *(undefined2 *)&pSVar2->field_0x2a7;
            local_36 = *(undefined4 *)&pSVar2->field_0x2a9;
            STBoatC::CmdToObj(local_8,CASE_F,&local_40);
            pDVar5 = local_14;
            if (local_14 == (DArrayTy *)0x0) {
              pDVar5 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = pDVar5;
            }
          }
          else {
            pDVar5 = array;
            if (array == (DArrayTy *)0x0) {
              array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              pDVar5 = array;
              local_24 = array;
            }
          }
          Library::DKW::TBL::FUN_006ae1c0(&pDVar5->flags,&local_c);
        }
      }
LAB_0049e1aa:
      local_20 = local_20 + 1;
      pSVar9 = local_10;
    } while ((int)local_20 < (int)local_10);
  }
  pDVar5 = local_14;
  if (local_14 == (DArrayTy *)0x0) {
LAB_0049e1de:
    if (array != (DArrayTy *)0x0) {
      local_10 = (STBoatC *)array->count;
      uVar11 = 0;
      if (0 < (int)local_10) {
        do {
          DArrayGetElement(array,uVar11,&local_c);
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
          STBoatC::CmdToObj(local_8,CASE_3,&local_1c);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_10);
      }
      local_18 = 0;
    }
    pDVar5 = local_14;
    if (local_14 != (DArrayTy *)0x0) goto LAB_0049e241;
    if (array == (DArrayTy *)0x0) {
      local_18 = 0;
    }
LAB_0049e23d:
    if (pDVar5 != (DArrayTy *)0x0) goto LAB_0049e241;
  }
  else {
    if (array != (DArrayTy *)0x0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)pSVar9 >> 8),pSVar2->field_0024),
                 &local_14->flags,&array->flags);
      goto LAB_0049e23d;
    }
    if (local_14 == (DArrayTy *)0x0) goto LAB_0049e1de;
LAB_0049e241:
    DArrayDestroy(pDVar5);
  }
  if (array != (DArrayTy *)0x0) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xa86);
LAB_0049e26d:
  if ((uint)PTR_00802a38->field_00E4 % 0x14 == 0) {
    uVar11 = 0;
    if (0 < (int)local_10) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar11,&local_c);
        if ((short)local_c != -1) {
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
          if (local_8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xa8e);
          }
          iVar3 = (*local_8->vtable->vfunc_F8)();
          if ((iVar3 != 0) &&
             (((dVar4 = (*local_8->vtable->slot_2C)(local_8), dVar4 == 7 || (dVar4 == 0x13)) ||
              (dVar4 == 0x1b)))) {
            local_28 = 1;
            iVar3 = thunk_FUN_00492370((int)local_8);
            if (iVar3 == *(int *)&pSVar2->field_0x2a9) {
              local_18 = 0;
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xa95);
            }
            iVar3 = thunk_FUN_0045ff10((int)local_8);
            if ((iVar3 == 0xf) || (uVar6 = STBoatC::CheckPBoxCmd(local_8,CASE_F), uVar6 == 1)) {
              local_2c = 1;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)local_10);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_18 = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_18;
}

