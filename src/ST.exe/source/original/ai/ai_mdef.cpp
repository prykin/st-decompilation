#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_mdef.cpp

// 00675EA0 _AddObjGrpExch
#line 4 "decomp/ST.exe/functions/00675EA0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 257 | 258 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl st::fn_00675EA0(uint param_1,int *param_2)

{
  bool bVar2;
  bool bVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar4 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x101,0,iVar4,st::mutable_c_string("%s"),
                               "_AddObjGrpExch");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x102);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 == nullptr) {
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((iVar4 < 1) || (0x28 < iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if ((iVar4 < 0x32) || (0x73 < iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar3 = false;
    if (!bVar2) goto LAB_00675f12;
  }
  bVar3 = true;
LAB_00675f12:
  if (bVar3) {
    array = st::fn_006AE290(nullptr,1,2,1);
    st::fn_006AE1C0(array,(void *)((int)param_2 + 0x32));
    st::fn_00402270(param_1,array);
    st::fn_006AE110(array);
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}

// 00675FE0 _AddAllGrpExch
#line 4 "decomp/ST.exe/functions/00675FE0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 280 | 281 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl st::fn_00675FE0(uint param_1)

{
  dword dVar1;
  int iVar3;
  DArrayTy *groupContent;
  ushort *puVar3;
  STGameObjC *pSVar4;
  int iVar6;
  int iVar5;
  uint uVar7;
  uint uVar8;
  char objPtr;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar3 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x118,0,iVar3,st::mutable_c_string("%s"),
                               "_AddAllGrpExch");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x119);
    return;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    objPtr = (char)param_1;
    groupContent = (DArrayTy *)st::fn_00404ABB(objPtr);
    if (groupContent != nullptr) {
      dVar1 = groupContent->count;
      if (dVar1 != 0) {
        uVar8 = 0;
        if (dVar1 != 0) {
          uVar7 = 0;
          if (dVar1 == 0) {
            puVar3 = nullptr;
            goto LAB_00676053;
          }
          do {
            puVar3 = DArrayAt<ushort>(groupContent, uVar7);
LAB_00676053:
            pSVar4 = st::fn_004028BA(g_allPlayers_007FA174,objPtr,*puVar3,CASE_1);
            if (pSVar4 != nullptr) {
              iVar6 = (*pSVar4->vtable->vfunc_2C)();
              if (iVar6 == 0x78) {
                iVar6 = (*pSVar4->vtable->vfunc_2C)();
                if (iVar6 == 0x78) {
                  pSVar4->field_0269 = 0xffffffff;
                }
              }
            }
            uVar8 = uVar8 + 1;
            uVar7 = uVar8 & 0xffff;
          } while (uVar7 < groupContent->count);
        }
        st::fn_0040178F(g_allPlayers_007FA174,objPtr,0,groupContent,nullptr);
      }
      if (groupContent != nullptr) {
        st::fn_006AE110(groupContent);
      }
    }
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}

// 00676170 _GetStaffGrpExch
#line 4 "decomp/ST.exe/functions/00676170/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 293 | 294 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl st::fn_00676170(undefined4 param_1)

{
  int errorCode;
  STGroupBoatC *this;
  uint *puVar2;
  int iVar2;
  uint *puVar3;
  InternalExceptionFrame local_4c;
  uint *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x125,0,errorCode,st::mutable_c_string("%s")
                               ,"_GetStaffGrpExch");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x126);
    return nullptr;
  }
  if (g_allPlayers_007FA174 == nullptr) {
    this = nullptr;
  }
  else {
    this = st::fn_00405CF9((char)param_1,0);
  }
  if (this != nullptr) {
    puVar2 = st::fn_00402DB5((STGroupC *)this);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  return local_8;
}

// 00676260 _GetEmbrTobjGrpExch
#line 4 "decomp/ST.exe/functions/00676260/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 314 | 315 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_00676260(uint param_1,int param_2)

{
  DArrayTy *array;
  int iVar2;
  STGroupBoatC *this;
  ushort *puVar2;
  STGameObjC *pSVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  uVar7 = 0;
  local_c = nullptr;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_allPlayers_007FA174 == nullptr) {
      this = nullptr;
    }
    else {
      this = st::fn_00405CF9((char)param_1,0);
    }
    if (this != nullptr) {
      local_c = (DArrayTy *)st::fn_00402DB5((STGroupC *)this);
    }
    array = local_c;
    if (local_c->count != 0) {
      uVar6 = 0;
      if (local_c->count == 0) {
        puVar2 = nullptr;
        goto LAB_006762e0;
      }
      do {
        puVar2 = DArrayAt<ushort>(array, uVar6);
LAB_006762e0:
        pSVar3 = st::fn_004028BA(g_allPlayers_007FA174,(char)param_1,*puVar2,CASE_1);
        if (pSVar3 != nullptr) {
          iVar5 = (*pSVar3->vtable->vfunc_2C)();
          if (iVar5 == 0x78) {
            iVar5 = pSVar3->field_0259;
          }
          else {
            iVar5 = 0;
          }
          if (param_2 == iVar5) {
            local_8 = local_8 + 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < array->count);
    }
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_c != nullptr) {
    st::fn_006AE110(local_c);
  }
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x13a,0,iVar2,st::mutable_c_string("%s"),
                             "_GetEmbrTobjGrpExch");
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x13b);
    return iVar2;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 006763F0 _GetEmbrGrpTobjGrpExch
#line 4 "decomp/ST.exe/functions/006763F0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 336 | 337 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl st::fn_006763F0(uint param_1,int param_2,int param_3)

{
  DArrayTy *array;
  int iVar2;
  STGroupBoatC *this;
  ushort *puVar2;
  STGameObjC *pSVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  uVar7 = 0;
  local_c = nullptr;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_allPlayers_007FA174 == nullptr) {
      this = nullptr;
    }
    else {
      this = st::fn_00405CF9((char)param_1,0);
    }
    if (this != nullptr) {
      local_c = (DArrayTy *)st::fn_00402DB5((STGroupC *)this);
    }
    array = local_c;
    if (local_c->count != 0) {
      uVar6 = 0;
      if (local_c->count == 0) {
        puVar2 = nullptr;
        goto LAB_00676470;
      }
      do {
        puVar2 = DArrayAt<ushort>(array, uVar6);
LAB_00676470:
        pSVar3 = st::fn_004028BA(g_allPlayers_007FA174,(char)param_1,*puVar2,CASE_1);
        if (pSVar3 != nullptr) {
          iVar5 = (*pSVar3->vtable->vfunc_2C)();
          if (iVar5 == 0x78) {
            iVar5 = pSVar3->field_0259;
          }
          else {
            iVar5 = 0;
          }
          if (param_2 == iVar5) {
            iVar5 = (*pSVar3->vtable->vfunc_2C)();
            if (iVar5 == 0x78) {
              iVar5 = pSVar3->field_0269;
            }
            else {
              iVar5 = -1;
            }
            if (param_3 == iVar5) {
              local_8 = local_8 + 1;
            }
          }
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < array->count);
    }
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_c != nullptr) {
    st::fn_006AE110(local_c);
  }
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x150,0,iVar2,st::mutable_c_string("%s"),
                             "_GetEmbrGrpTobjGrpExch");
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x151);
    return iVar2;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 00676D80 _EnumPlObj
#line 4 "decomp/ST.exe/functions/00676D80/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 659 | 661 | 662 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 12.
   Evidence: 00677290 -> 00676D80 @ 00677314 | 006773B0 -> 00676D80 @ 00677431 | 006774C0 ->
   00676D80 @ 00677544 | 006775E0 -> 00676D80 @ 00677665

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int __cdecl
st::fn_00676D80(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
          short param_7,short param_8,short param_9,short param_10,short param_11,
          undefined *param_12,uint *param_13,undefined *param_14)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  int iVar5;
  dword dVar6;
  dword dVar7;
  IMAGE_DOS_HEADER *pIVar8;
  byte *pbVar9;
  int iVar4;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  DArrayTy *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;

  local_18 = 0;
  if (param_5 == '\b') {
    local_5 = (char)param_1;
  }
  else if ((param_5 < '\0') || (local_5 = param_5, '\b' < param_5)) {
    local_5 = -1;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x295,0,iVar3,st::mutable_c_string("%s"),
                               "_EnumPlObj");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x296);
    return iVar3;
  }
  local_1c = (DArrayTy *)st::fn_00405989((char)param_1);
  if (local_1c == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x293);
  }
  else {
    local_14 = 0;
    if (local_1c->count != 0) {
      uVar10 = 0;
      if (local_1c->count == 0) {
        puVar3 = nullptr;
        goto LAB_00676e12;
      }
      do {
        puVar3 = DArrayAt<undefined4>(local_1c, uVar10);
LAB_00676e12:
        this = (STFishC *)*puVar3;
        if ((this != nullptr) && (iVar5 = (*this->vtable->vfunc_F8)(), iVar5 != 0)) {
          local_10 = 1;
          dVar6 = this->slot_2C();
          if (param_2 != 0) {
            if (dVar6 == 0x78) {
              if ((param_2 & 0x80000000) == 0) {
                if ((param_2 & 0x3fffffff) != 0) {
                  dVar7 = this->slot_2C();
                  if (dVar7 == 0x78) {
                    uVar10 = *(uint *)&this->field_0x259;
                  }
                  else {
                    uVar10 = 0;
                  }
                  if ((param_2 & 0x3fffffff) != uVar10) goto LAB_00676e88;
                }
              }
              else {
LAB_00676e88:
                local_10 = 0;
              }
            }
            else if (((param_2 & 0x40000000) != 0) ||
                    (((param_2 & 0x3fffffff) != 0 && ((param_2 & 0x3fffffff) != dVar6))))
            goto LAB_00676e88;
          }
          if (local_10 == 0) {
LAB_00677024:
            if (param_14 == nullptr) goto LAB_00677041;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar5 = (*(code *)param_14)(param_1,local_14,this,param_13);
          }
          else {
            if (param_3 != 0x3fffffff) {
              if (dVar6 == 0x78) {
                if ((param_3 & 0x80000000) == 0) {
                  dVar6 = this->slot_2C();
                  if (dVar6 == 0x78) {
                    iVar5 = *(int *)&this->field_0x259;
                  }
                  else {
                    iVar5 = 0;
                  }
                  pIVar8 = st::fn_0040410B(iVar5);
joined_r0x00676ef3:
                  if (((uint)pIVar8 & param_3 & 0x3fffffff) != 0) goto LAB_00676efc;
                }
              }
              else if ((param_3 & 0x40000000) == 0) {
                pIVar8 = st::fn_0040410B(dVar6);
                goto joined_r0x00676ef3;
              }
              local_10 = 0;
            }
LAB_00676efc:
            if (local_10 == 0) goto LAB_00677024;
            if ((param_4 != nullptr) && (*param_4 != 0)) {
              (*this->vtable->vfunc_74)((short)local_2c);
              pbVar11 = local_2c;
              pbVar9 = param_4;
              do {
                bVar1 = *pbVar9;
                bVar12 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_00676f47:
                  iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00676f4c;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar12 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_00676f47;
                pbVar9 = pbVar9 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00676f4c:
              if (iVar5 != 0) {
                local_10 = 0;
              }
            }
            if ((local_10 == 0) ||
               ((local_5 != -1 && (iVar5 = this->vfunc_6C(), local_5 != iVar5))))
            goto LAB_00677024;
            if ((0 < param_9) &&
               (((0 < param_10 && (0 < param_11)) &&
                ((st::fn_004018C5(this,&local_8,&local_a,&local_c), local_8 < param_6 ||
                 ((((local_a < param_7 || (local_c < param_8)) ||
                   ((int)param_6 + (int)param_9 <= (int)local_8)) ||
                  (((int)param_7 + (int)param_10 <= (int)local_a ||
                   ((int)param_8 + (int)param_11 <= (int)local_c)))))))))) {
              local_10 = 0;
            }
            if ((local_10 == 0) || (param_12 == nullptr)) goto LAB_00677024;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar5 = (*(code *)param_12)(param_1,local_14,this,param_13);
          }
          if (iVar5 != 0) {
            g_currentExceptionFrame = local_70.previous;
            return -1;
          }
        }
LAB_00677041:
        local_14 = local_14 + 1;
        uVar10 = local_14 & 0xffff;
        if (local_1c->count <= uVar10) {
          g_currentExceptionFrame = local_70.previous;
          return local_18;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return local_18;
}

// 00677290 FUN_00677290
#line 4 "decomp/ST.exe/functions/00677290/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 704 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
st::fn_00677290(undefined4 param_1,uint param_2,char param_3,short param_4,short param_5,short param_6,
            short param_7,short param_8,short param_9,int param_10)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  code *pcVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,2,10);
    pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00401852);
    if (param_10 == 0) {
      pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00403490);
    }
    local_8 = pDVar1;
    st::fn_004012F8(param_1,param_2,0x3fffffff,nullptr,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,st::pointer_boundary_cast<undefined *>(pcVar2),st::pointer_boundary_cast<uint *>(&pDVar1->flags),nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return st::pointer_boundary_cast<uint *>(&pDVar1->flags);
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != nullptr) {
    st::fn_006AE110(local_8);
  }
  local_8 = nullptr;
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x2c0);
  return nullptr;
}

// 006773B0 FUN_006773b0
#line 4 "decomp/ST.exe/functions/006773B0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 727 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
st::fn_006773B0(undefined4 param_1,uint param_2,char param_3,short param_4,short param_5,short param_6,
            short param_7,short param_8,short param_9,int param_10)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  code *pcVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,2,10);
    pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00401852);
    if (param_10 == 0) {
      pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00403490);
    }
    local_8 = pDVar1;
    st::fn_004012F8(param_1,0,param_2,nullptr,param_3,param_4,param_5,param_6,param_7,param_8,param_9
               ,st::pointer_boundary_cast<undefined *>(pcVar2),st::pointer_boundary_cast<uint *>(&pDVar1->flags),nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return st::pointer_boundary_cast<uint *>(&pDVar1->flags);
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != nullptr) {
    st::fn_006AE110(local_8);
  }
  local_8 = nullptr;
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x2d7);
  return nullptr;
}

// 006774C0 FUN_006774c0
#line 4 "decomp/ST.exe/functions/006774C0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 750 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
st::fn_006774C0(undefined4 param_1,byte *param_2,char param_3,short param_4,short param_5,short param_6
            ,short param_7,short param_8,short param_9,int param_10)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  code *pcVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,2,10);
    pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00401852);
    if (param_10 == 0) {
      pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00403490);
    }
    local_8 = pDVar1;
    st::fn_004012F8(param_1,0,0x3fffffff,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               st::pointer_boundary_cast<undefined *>(pcVar2),st::pointer_boundary_cast<uint *>(&pDVar1->flags),nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return st::pointer_boundary_cast<uint *>(&pDVar1->flags);
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != nullptr) {
    st::fn_006AE110(local_8);
  }
  local_8 = nullptr;
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x2ee);
  return nullptr;
}

// 006775E0 FUN_006775e0
#line 4 "decomp/ST.exe/functions/006775E0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 776 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
st::fn_006775E0(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,int param_12)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  code *pcVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,2,10);
    pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00401852);
    if (param_12 == 0) {
      pcVar2 = st::pointer_boundary_cast<code *>(st::fn_00403490);
    }
    local_8 = pDVar1;
    st::fn_004012F8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,st::pointer_boundary_cast<undefined *>(pcVar2),st::pointer_boundary_cast<uint *>(&pDVar1->flags),nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return st::pointer_boundary_cast<uint *>(&pDVar1->flags);
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != nullptr) {
    st::fn_006AE110(local_8);
  }
  local_8 = nullptr;
  st::fn_006A5E40(exceptionCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x308);
  return nullptr;
}

// 00677960 _EnumRCField
#line 4 "decomp/ST.exe/functions/00677960/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 875 | 895 | 896 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
st::fn_00677960(short param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
            short param_7,undefined *param_8,undefined4 param_9)

{
  STFishC *this;
  int iVar2;
  undefined4 *puVar2;
  dword dVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_14 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x37f,0,iVar2,st::mutable_c_string("%s"),
                               "_EnumRCField");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x380);
    return iVar2;
  }
  if (g_array_007FA15C == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x36b);
  }
  uVar6 = st::machine_word_boundary_cast<uint>(g_array_007FA15C->count - 1);
  if (-1 < (int)uVar6) {
    do {
      if (uVar6 < g_array_007FA15C->count) {
        puVar2 = DArrayAt<undefined4>(g_array_007FA15C, uVar6);
      }
      else {
        puVar2 = nullptr;
      }
      this = (STFishC *)*puVar2;
      if ((this != nullptr) &&
         ((local_10 = uVar6, param_1 == 0 ||
          (dVar3 = this->slot_2C(), (int)param_1 == dVar3)))) {
        iVar5 = 1;
        local_18 = 1;
        if ((0 < param_5) &&
           (((0 < param_6 && (0 < param_7)) &&
            ((st::fn_004018C5(this,&local_6,&local_8,&local_a), local_6 < param_2 ||
             ((((local_8 < param_3 || (local_a < param_4)) ||
               ((int)param_2 + (int)param_5 <= (int)local_6)) ||
              (((int)param_3 + (int)param_6 <= (int)local_8 ||
               (iVar5 = local_18, (int)param_4 + (int)param_7 <= (int)local_a)))))))))) {
          iVar5 = 0;
        }
        uVar6 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar5 != 0) && (param_8 != nullptr)) &&
           (iVar5 = (*(code *)param_8)(0,local_10,this,param_9), iVar5 != 0)) {
          g_currentExceptionFrame = local_5c.previous;
          return -1;
        }
      }
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        g_currentExceptionFrame = local_5c.previous;
        return local_14;
      }
    } while( true );
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_14;
}

// 00677BE0 _EnumRCCont
#line 4 "decomp/ST.exe/functions/00677BE0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 924 | 954 | 955 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
st::fn_00677BE0(short param_1,short param_2,byte *param_3,short param_4,short param_5,short param_6,
           short param_7,short param_8,short param_9,undefined *param_10,undefined4 param_11)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar7;
  int iVar6;
  DArrayTy *pDVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x3ba,0,iVar3,st::mutable_c_string("%s"),
                               "_EnumRCCont");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x3bb);
    return iVar3;
  }
  if (g_array_007FA160 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x39c);
  }
  uVar9 = st::machine_word_boundary_cast<uint>(g_array_007FA160->count - 1);
  pDVar8 = g_array_007FA160;
  if ((int)uVar9 < 0) {
    g_currentExceptionFrame = local_70.previous;
    return local_18;
  }
  do {
    if (uVar9 < pDVar8->count) {
      puVar3 = DArrayAt<undefined4>(pDVar8, uVar9);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if (((this != nullptr) &&
        (local_10 = uVar9, local_1c = (*this->vtable[1].vfunc_08)(this), pDVar8 = g_array_007FA160,
        (short)local_1c == param_1)) &&
       ((param_2 == 0 ||
        (iVar4 = (*this->vtable[1].vfunc_0C)(), pDVar8 = g_array_007FA160, iVar4 == param_2)))) {
      iVar4 = 1;
      local_14 = 1;
      if ((param_3 != nullptr) && (*param_3 != 0)) {
        (*this->vtable->vfunc_74)((short)local_2c);
        pbVar10 = local_2c;
        pbVar5 = param_3;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00677ce9:
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00677cee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00677ce9;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00677cee:
        if (iVar7 != 0) {
          iVar4 = 0;
          local_14 = 0;
        }
      }
      pDVar8 = g_array_007FA160;
      uVar9 = local_10;
      if (iVar4 != 0) {
        if ((((0 < param_7) && (0 < param_8)) && (0 < param_9)) &&
           ((((st::fn_00405F0B(this,&local_6,&local_8,&local_a), local_6 < param_4 ||
              (local_8 < param_5)) ||
             ((local_a < param_6 ||
              (((int)param_4 + (int)param_7 <= (int)local_6 ||
               ((int)param_5 + (int)param_8 <= (int)local_8)))))) ||
            (iVar4 = local_14, (int)param_6 + (int)param_9 <= (int)local_a)))) {
          iVar4 = 0;
        }
        pDVar8 = g_array_007FA160;
        uVar9 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar4 != 0) && (param_10 != nullptr)) &&
           (iVar4 = (*(code *)param_10)(local_1c,local_10,this,param_11), pDVar8 = g_array_007FA160,
           uVar9 = local_10, iVar4 != 0)) {
          g_currentExceptionFrame = local_70.previous;
          return -1;
        }
      }
    }
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_18;
    }
  } while( true );
}

// 00677F40 _EnumArt
#line 4 "decomp/ST.exe/functions/00677F40/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 993 | 1020 | 1021 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
st::fn_00677F40(short param_1,byte *param_2,short param_3,short param_4,short param_5,short param_6,
        short param_7,short param_8,undefined *param_9,undefined4 param_10)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x3fc,0,iVar3,st::mutable_c_string("%s"),
                               "_EnumArt");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x3fd);
    return iVar3;
  }
  if (g_array_007FA154 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x3e1);
  }
  local_10 = st::machine_word_boundary_cast<uint>(g_array_007FA154->count - 1);
  if ((int)local_10 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (local_10 < g_array_007FA154->count) {
      puVar3 = DArrayAt<undefined4>(g_array_007FA154, local_10);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if ((this != nullptr) &&
       ((param_1 == 0 || (*(int *)&this[1].field_0xd7 == (int)param_1)))) {
      iVar7 = 1;
      local_14 = 1;
      if ((param_2 != nullptr) && (*param_2 != 0)) {
        (*this->vtable->vfunc_74)((short)local_28);
        pbVar8 = local_28;
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00678031:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678036;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00678031;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00678036:
        if (iVar5 != 0) {
          iVar7 = 0;
          local_14 = 0;
        }
      }
      if (iVar7 != 0) {
        if ((((0 < param_6) && (0 < param_7)) && (0 < param_8)) &&
           ((((st::fn_00405F0B(this,&local_6,&local_8,&local_a), local_6 < param_3 ||
              (local_8 < param_4)) ||
             ((local_a < param_5 ||
              (((int)param_3 + (int)param_6 <= (int)local_6 ||
               ((int)param_4 + (int)param_7 <= (int)local_8)))))) ||
            (iVar7 = local_14, (int)param_5 + (int)param_8 <= (int)local_a)))) {
          iVar7 = 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar7 != 0) && (param_9 != nullptr)) &&
           (iVar7 = (*(code *)param_9)(0,local_10,this,param_10), iVar7 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

// 00678240 _EnumMines
#line 4 "decomp/ST.exe/functions/00678240/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 1055 | 1081 | 1082 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
st::fn_00678240(int param_1,short param_2,char param_3,byte *param_4,short param_5,short param_6,
          short param_7,short param_8,short param_9,short param_10,undefined *param_11,
          undefined4 param_12)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  dword dVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  DArrayTy *pDVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;

  local_18 = 0;
  if (param_3 == '\b') {
    local_5 = (char)param_1;
  }
  else if ((param_3 < '\0') || (local_5 = param_3, '\b' < param_3)) {
    local_5 = -1;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x439,0,iVar3,st::mutable_c_string("%s"),
                               "_EnumMines");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x43a);
    return iVar3;
  }
  if (g_array_007FA158 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x41f);
  }
  uVar9 = st::machine_word_boundary_cast<uint>(g_array_007FA158->count - 1);
  pDVar7 = g_array_007FA158;
  if ((int)uVar9 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (uVar9 < pDVar7->count) {
      puVar3 = DArrayAt<undefined4>(pDVar7, uVar9);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if (((this != nullptr) && (this->field_0024 == param_1)) &&
       ((local_10 = uVar9, dVar4 = this->slot_2C(), param_2 == 0 ||
        (pDVar7 = g_array_007FA158, (int)param_2 == dVar4)))) {
      iVar8 = 1;
      local_14 = 1;
      if ((param_4 != nullptr) && (*param_4 != 0)) {
        (*this->vtable->vfunc_74)((short)local_28);
        pbVar10 = local_28;
        pbVar5 = param_4;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_0067835d:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00678362;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_0067835d;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00678362:
        if (iVar6 != 0) {
          iVar8 = 0;
          local_14 = 0;
        }
      }
      pDVar7 = g_array_007FA158;
      uVar9 = local_10;
      if ((iVar8 != 0) &&
         ((local_5 == -1 ||
          (iVar6 = this->vfunc_6C(), pDVar7 = g_array_007FA158, uVar9 = local_10,
          local_5 == iVar6)))) {
        if ((0 < param_8) &&
           (((0 < param_9 && (0 < param_10)) &&
            ((st::fn_004018C5(this,&local_8,&local_a,&local_c), local_8 < param_5 ||
             ((((local_a < param_6 || (local_c < param_7)) ||
               ((int)param_5 + (int)param_8 <= (int)local_8)) ||
              (((int)param_6 + (int)param_9 <= (int)local_a ||
               (iVar8 = local_14, (int)param_7 + (int)param_10 <= (int)local_c)))))))))) {
          iVar8 = 0;
        }
        pDVar7 = g_array_007FA158;
        uVar9 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar8 != 0) && (param_11 != nullptr)) &&
           (iVar8 = (*(code *)param_11)(param_1,local_10,this,param_12), pDVar7 = g_array_007FA158,
           uVar9 = local_10, iVar8 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

// 006785A0 _EnumDest
#line 4 "decomp/ST.exe/functions/006785A0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 1113 | 1136 | 1137 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
st::fn_006785A0(byte *param_1,char param_2,short param_3,short param_4,short param_5,short param_6,
         short param_7,short param_8,undefined *param_9,undefined4 param_10)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;

  local_18 = 0;
  if ((param_2 < '\0') || (local_5 = param_2, '\a' < param_2)) {
    local_5 = -1;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x470,0,iVar3,st::mutable_c_string("%s"),
                               "_EnumDest");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x471);
    return iVar3;
  }
  if (g_array_007FA164 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_mdef.cpp"),0x459);
  }
  local_10 = st::machine_word_boundary_cast<uint>(g_array_007FA164->count - 1);
  if ((int)local_10 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (local_10 < g_array_007FA164->count) {
      puVar3 = DArrayAt<undefined4>(g_array_007FA164, local_10);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if (this != nullptr) {
      iVar7 = 1;
      local_14 = 1;
      if ((param_1 != nullptr) && (*param_1 != 0)) {
        (*this->vtable->vfunc_74)((short)local_28);
        pbVar8 = local_28;
        pbVar4 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0067868d:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678692;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0067868d;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00678692:
        if (iVar5 != 0) {
          iVar7 = 0;
          local_14 = 0;
        }
      }
      if ((iVar7 != 0) &&
         ((local_5 == -1 || (iVar5 = this->vfunc_6C(), local_5 == iVar5)))) {
        if ((0 < param_6) &&
           (((0 < param_7 && (0 < param_8)) &&
            ((st::fn_004018C5(this,&local_8,&local_a,&local_c), local_8 < param_3 ||
             ((((local_a < param_4 || (local_c < param_5)) ||
               ((int)param_3 + (int)param_6 <= (int)local_8)) ||
              (((int)param_4 + (int)param_7 <= (int)local_a ||
               (iVar7 = local_14, (int)param_5 + (int)param_8 <= (int)local_c)))))))))) {
          iVar7 = 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar7 != 0) && (param_9 != nullptr)) &&
           (iVar7 = (*(code *)param_9)(0,local_10,this,param_10), iVar7 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

