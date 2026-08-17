#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GoToRepair
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall GoToRepair(AiFltClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00661B71 RET | 00661BD5 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall AiFltClassTy::GoToRepair(AiFltClassTy *this)

{
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int local_EAX_154;
  ushort *puVar5;
  STGameObjC *this_00;
  int iVar7;
  IMAGE_DOS_HEADER *pIVar8;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  InternalExceptionFrame local_68;
  undefined4 local_24;
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
    /* ST_CALLSITE[0066191E]: CALL 0x0040343b; direct=0040343B AiFltClassTy::sub_0065D9C0 */
    uVar4 = sub_0065D9C0(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar7 = CONCAT22(extraout_var,uVar4);
    if ((0 < iVar7) &&
       /* ST_CALLSITE[00661932]: CALL 0x004057e5; direct=004057E5 AiFltClassTy::sub_00661800 */
       /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
       (local_20 = iVar7, local_c = sub_00661800((AnonShape_0065DA10_8B0AA883 *)this,extraout_EDX),
       (int)this->field_0179 < iVar7 - local_c)) {
      local_18 = thunk_FUN_0068f8f0(this->field_0284,this->field_007B);
      local_8 = nullptr;
      local_10 = nullptr;
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      local_EAX_154 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
      pAVar3 = local_1c;
      if (local_EAX_154 == 0) {
        /* ST_CALLSITE[00661991]: CALL 0x004018cf; direct=004018CF AiFltClassTy::sub_0065DA10 */
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        local_8 = (DArrayTy *)sub_0065DA10(local_1c,extraout_EDX_00);
        if (local_8 != nullptr) {
          local_14 = 0;
          array = local_10;
          if (0 < (int)local_8->count) {
            do {
              if (local_14 < local_8->count) {
                puVar5 = DArrayAt<ushort>(local_8, local_14);
              }
              else {
                puVar5 = nullptr;
              }
              local_24 = STReplaceLowWord((uint32_t)(puVar5), (uint16_t)(*puVar5));
              /* ST_CALLSITE[006619E0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              this_00 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,*(char *)&pAVar3->field_0024,*puVar5,CASE_1
                                  );
              if ((this_00 != nullptr) && ((int)pAVar3->field_0179 < local_20 - local_c))
              {
                /* ST_CALLSITE[00661A0A]: CALL dword ptr [EAX + 0x2c] */
                iVar7 = this_00->vfunc_2C();
                pIVar8 = thunk_FUN_00674fb0(iVar7);
                if ((pAVar3->field_017F & (uint)pIVar8) != 0) {
                  if (pAVar3->field_0039 == 3) {
                    /* ST_CALLSITE[00661A2F]: CALL dword ptr [EDX + 0xc4] */
                    iVar7 = this_00->vfunc_C4();
                  }
                  else {
                    /* ST_CALLSITE[00661A3B]: CALL dword ptr [EAX + 0x7c] */
                    iVar7 = this_00->vfunc_7C();
                  }
                  if (iVar7 < pAVar3->field_0177) {
                    /* ST_CALLSITE[00661A51]: CALL dword ptr [EDX + 0x2c] */
                    iVar7 = this_00->vfunc_2C();
                    if ((iVar7 < 0x32) || (0x73 < iVar7)) {
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
                            TLOBaseTy::thunk_FUN_004c7cc0
                                      ((TLOBaseTy *)this_00,5,0,1,1,0xffffffff,0,0xff,nullptr);
                          }
                        }
                        local_c = local_c + 1;
                      }
                    }
                    /* ST_CALLSITE[00661ADB]: CALL dword ptr [EAX + 0x2c] */
                    iVar7 = this_00->vfunc_2C();
                    if ((iVar7 < 1) || (0x28 < iVar7)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (local_18 != 0)) {
                      if (array == nullptr) {
                        array = Library::DKW::TBL::DArrayCreate(nullptr,10,2,10);
                        local_10 = array;
                      }
                      Library::DKW::TBL::DArrayAppend(array,&local_24);
                      local_c = local_c + 1;
                    }
                  }
                }
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < (int)local_8->count);
          }
          DArrayDestroy(local_8);
          local_8 = nullptr;
          if (array != nullptr) {
            if (array->count != 0) {
              thunk_FUN_0068fa00(pAVar3->field_0284,&array->flags);
            }
            if (array != nullptr) {
              DArrayDestroy(array);
            }
          }
        }
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      if (local_8 != nullptr) {
        DArrayDestroy(local_8);
        local_8 = nullptr;
      }
      if (local_10 != nullptr) {
        DArrayDestroy(local_10);
        local_10 = nullptr;
      }
      iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x6e9,0,local_EAX_154,
                                 "%s","AiFltClassTy::GoToRepair");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(local_EAX_154,0,"E:\\__titans\\ai\\ai_flt.cpp",0x6ea);
    }
  }
  return;
}

