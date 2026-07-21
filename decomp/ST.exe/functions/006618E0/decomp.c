#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GoToRepair */

void __thiscall AiFltClassTy::GoToRepair(AiFltClassTy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar5;
  undefined2 *puVar6;
  STGameObjC *this_00;
  IMAGE_DOS_HEADER *pIVar7;
  DArrayTy *array;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  InternalExceptionFrame local_68;
  uint local_24;
  int local_20;
  AiFltClassTy *local_1c;
  int local_18;
  uint local_14;
  DArrayTy *local_10;
  int local_c;
  DArrayTy *local_8;

  if ((this->field_0203 == 0) || (this->field_0207 + this->field_0203 <= this->field_0280)) {
    this->field_0207 = this->field_0280;
    local_1c = this;
    uVar4 = sub_0065D9C0(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar5 = CONCAT22(extraout_var,uVar4);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if ((0 < iVar5) &&
       (local_20 = iVar5,
       local_c = thunk_FUN_00661800((AnonShape_0065DA10_8B0AA883 *)this,extraout_EDX),
       (int)this->field_0179 < iVar5 - local_c)) {
      local_18 = thunk_FUN_0068f8f0(this->field_0284,this->field_007B);
      local_8 = (DArrayTy *)0x0;
      local_10 = (DArrayTy *)0x0;
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
      pAVar3 = local_1c;
      if (iVar5 == 0) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        local_8 = (DArrayTy *)
                  thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)local_1c,extraout_EDX_00);
        if (local_8 != (DArrayTy *)0x0) {
          local_14 = 0;
          array = local_10;
          if (0 < (int)local_8->count) {
            do {
              if (local_14 < local_8->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, local_14) (runtime stride) */
                puVar6 = (undefined2 *)(local_8->elementSize * local_14 + (int)local_8->data);
              }
              else {
                puVar6 = (undefined2 *)0x0;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_24 = CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6);
              this_00 = STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,*(char *)&pAVar3->field_0024,local_24,
                                   CASE_1);
              if ((this_00 != (STGameObjC *)0x0) && ((int)pAVar3->field_0179 < local_20 - local_c))
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar5 = (**(code **)&this_00->vtable->field_0x2c)();
                pIVar7 = thunk_FUN_00674fb0(iVar5);
                if ((pAVar3->field_017F & (uint)pIVar7) != 0) {
                  if (pAVar3->field_0039 == 3) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar5 = (**(code **)&this_00->vtable->field_0xc4)();
                  }
                  else {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar5 = (**(code **)&this_00->vtable->field_0x7c)();
                  }
                  if (iVar5 < pAVar3->field_0177) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar5 = (**(code **)&this_00->vtable->field_0x2c)();
                    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if (pAVar3->field_0039 == 3) {
LAB_00661a96:
                        bVar2 = false;
                      }
                      else if (this_00->field_0361 == 5) {
                        bVar2 = true;
                      }
                      else {
                        iVar5 = thunk_FUN_004c93e0(this_00,5);
                        if (iVar5 < 1) goto LAB_00661a96;
                        bVar2 = true;
                      }
                      if (!bVar2) {
                        if ((local_18 != 0) || (pAVar3->field_0039 != 3)) {
                          if (pAVar3->field_0039 == 3) {
                            thunk_FUN_004d7270((AnonShape_004D7270_8F0A3C37 *)this_00);
                          }
                          else {
                            thunk_FUN_004c7cc0(this_00,5,0,1,1,0xffffffff,0,0xff,(char *)0x0);
                          }
                        }
                        local_c = local_c + 1;
                      }
                    }
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar5 = (**(code **)&this_00->vtable->field_0x2c)();
                    if ((iVar5 < 1) || (0x28 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (local_18 != 0)) {
                      if (array == (DArrayTy *)0x0) {
                        array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,2,10);
                        local_10 = array;
                      }
                      Library::DKW::TBL::FUN_006ae1c0(&array->flags,&local_24);
                      local_c = local_c + 1;
                    }
                  }
                }
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < (int)local_8->count);
          }
          DArrayDestroy(local_8);
          local_8 = (DArrayTy *)0x0;
          if (array != (DArrayTy *)0x0) {
            if (array->count != 0) {
              thunk_FUN_0068fa00(pAVar3->field_0284,&array->flags);
            }
            if (array != (DArrayTy *)0x0) {
              DArrayDestroy(array);
            }
          }
        }
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      if (local_8 != (DArrayTy *)0x0) {
        DArrayDestroy(local_8);
        local_8 = (DArrayTy *)0x0;
      }
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
        local_10 = (DArrayTy *)0x0;
      }
      iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x6e9,0,iVar5,"%s",
                                 "AiFltClassTy::GoToRepair");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0x6ea);
    }
  }
  return;
}

