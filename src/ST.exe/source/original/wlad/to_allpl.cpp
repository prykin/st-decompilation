#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/to_allpl.cpp

// 0042AB00 STAllPlayersC::GetGObjFromZone
#line 4 "decomp/ST.exe/functions/0042AB00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromZone

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0042AB00
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6,int *param_7)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  STAllPlayersC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_004028FB(local_8,param_1,param_2,param_3,param_4,param_5,param_6,nullptr,nullptr,
                     param_7,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
                     nullptr,nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x6a,0,errorCode,"%s"
                             ,"STAllPlayersC::GetGObjFromZone");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x6b);
  return;
}

// 0042ABE0 STAllPlayersC::GetGObjFromZone2
#line 4 "decomp/ST.exe/functions/0042ABE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromZone2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0042ABE0
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
          int *param_12,int *param_13,int *param_14,int *param_15,int *param_16,int *param_17)

{
  uint uVar1;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  InternalExceptionFrame local_54;
  int local_10;
  short *local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x10e,0,iVar3,
                                 "%s","STAllPlayersC::GetGObjFromZone2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x10f);
    }
    return;
  }
  if (((((param_6 == nullptr) && (param_7 == nullptr)) && (param_8 == nullptr)) &&
      ((((param_9 == nullptr && (param_10 == nullptr)) &&
        ((param_11 == nullptr && ((param_12 == nullptr && (param_13 == nullptr)))))) &&
       (param_14 == nullptr)))) &&
     (((param_15 == nullptr && (param_16 == nullptr)) && (param_17 == nullptr)))) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0xb7
              );
  }
  if ((param_6 != nullptr) && (*param_6 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_6 = (int)pDVar4;
  }
  if ((param_7 != nullptr) && (*param_7 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_7 = (int)pDVar4;
  }
  if ((param_8 != nullptr) && (*param_8 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_8 = (int)pDVar4;
  }
  if ((param_9 != nullptr) && (*param_9 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_9 = (int)pDVar4;
  }
  if ((param_10 != nullptr) && (*param_10 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_10 = (int)pDVar4;
  }
  if ((param_11 != nullptr) && (*param_11 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_11 = (int)pDVar4;
  }
  if ((param_12 != nullptr) && (*param_12 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_12 = (int)pDVar4;
  }
  if ((param_13 != nullptr) && (*param_13 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_13 = (int)pDVar4;
  }
  if ((param_14 != nullptr) && (*param_14 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_14 = (int)pDVar4;
  }
  if ((param_15 != nullptr) && (*param_15 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_15 = (int)pDVar4;
  }
  if ((param_16 != nullptr) && (*param_16 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_16 = (int)pDVar4;
  }
  if ((param_17 != nullptr) && (*param_17 == 0)) {
    pDVar4 = st::fn_006AE290(nullptr,0,2,5);
    *param_17 = (int)pDVar4;
  }
  st::fn_006EAD90
            (g_sT3DSMAPContext_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
  iVar3 = 0;
  if (0 < local_8) {
    local_10 = 0;
    do {
      piVar7 = *(int **)(iVar3 + 4 + (int)local_c);
      uVar1 = piVar7[8];
      if (uVar1 < 0x1a5) {
        if (uVar1 == 0x1a4) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((param_16 != nullptr) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            piVar6 = param_16;
LAB_0042b01f:
            pDVar4 = (DArrayTy *)*piVar6;
            goto cf_common_join_0042B022;
          }
        }
        else if (uVar1 == 0x14) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar5 = (**(code **)(*piVar7 + 0xec))();
          if (iVar5 == 1) {
            if (piVar7[9] != (int)param_1) {
              piVar6 = param_8;
              if (param_7 != nullptr) {
                st::fn_006AE1C0((DArrayTy *)*param_7,(void *)((int)piVar7 + 0x32));
              }
              goto joined_r0x0042b01c;
            }
            if (param_6 != nullptr) {
              piVar7 = (int *)((int)piVar7 + 0x32);
              pDVar4 = (DArrayTy *)*param_6;
              goto cf_common_join_0042B022;
            }
          }
        }
        else if (uVar1 == 0x5a) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((param_14 != nullptr) &&
              (*(int *)(iVar3 + (int)local_c) == STField<int>(piVar7,0x1ed))) &&
             (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar4 = (DArrayTy *)*param_14;
            goto cf_common_join_0042B022;
          }
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        else if (((uVar1 == 0x172) && (param_15 != nullptr)) &&
                (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
          piVar7 = (int *)((int)piVar7 + 0x32);
          piVar6 = param_15;
          goto LAB_0042b01f;
        }
      }
      else if (uVar1 < 0x1b9) {
        if (uVar1 == 0x1b8) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((param_17 != nullptr) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar4 = (DArrayTy *)*param_17;
            goto cf_common_join_0042B022;
          }
        }
        else if (uVar1 == 0x1ae) {
          if (piVar7[9] == (int)param_1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            if ((param_12 != nullptr) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
              piVar7 = (int *)((int)piVar7 + 0x32);
              pDVar4 = (DArrayTy *)*param_12;
cf_common_join_0042B022:
              st::fn_006AE1C0(pDVar4,piVar7);
            }
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          else if ((param_13 != nullptr) && (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)
                  ) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar4 = (DArrayTy *)*param_13;
            goto cf_common_join_0042B022;
          }
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      else if (((999 < uVar1) && (uVar1 < 0x3ea)) &&
              (iVar5 = (**(code **)(*piVar7 + 0xec))(), iVar5 == 1)) {
        if (piVar7[9] == (int)param_1) {
          if (param_9 != nullptr) {
            piVar7 = (int *)((int)piVar7 + 0x32);
            pDVar4 = (DArrayTy *)*param_9;
            goto cf_common_join_0042B022;
          }
        }
        else {
          piVar6 = param_11;
          if (param_10 != nullptr) {
            st::fn_006AE1C0((DArrayTy *)*param_10,(void *)((int)piVar7 + 0x32));
          }
joined_r0x0042b01c:
          piVar7 = piVar7 + 9;
          if (piVar6 != nullptr) goto LAB_0042b01f;
        }
      }
      local_10 = local_10 + 1;
      iVar3 = iVar3 + 0x14;
    } while (local_10 < local_8);
    st::fn_006A5E90(local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 0042B1F0 STAllPlayersC::GetGObjFromBox
#line 4 "decomp/ST.exe/functions/0042B1F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromBox

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0042B1F0
          (STAllPlayersC *this,char param_1,short param_2,short param_3,short param_4,short param_5,
          short param_6,short param_7,int *param_8,int *param_9,int *param_10,int *param_11)

{
  int *piVar1;
  int *piVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = (int)param_2;
  local_14 = param_5 + -1 + local_8;
  local_c = (int)param_3;
  local_10 = param_6 + -1 + local_c;
  local_18 = (int)param_4;
  local_1c = param_7 + -1 + local_18;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar4 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x155,0,iVar4,
                                 "%s","STAllPlayersC::GetGObjFromBox");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x156);
    }
    return;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar4 = g_worldGrid.sizeX + -1;
  if (iVar4 < local_14) {
    local_14 = iVar4;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  iVar4 = g_worldGrid.sizeY + -1;
  if (iVar4 < local_10) {
    local_10 = iVar4;
  }
  if (local_18 < 0) {
    local_18 = 0;
  }
  iVar6 = local_18;
  iVar4 = g_worldGrid.sizeZ + -1;
  if (iVar4 < local_1c) {
    local_1c = iVar4;
  }
  iVar4 = local_1c;
  if ((((g_worldGrid.sizeX < local_8) || (g_worldGrid.sizeY < local_c)) ||
      (g_worldGrid.sizeZ < local_18)) ||
     (((local_14 < local_8 || (local_10 < local_c)) || (local_1c < local_18)))) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x133);
  }
  if (param_8 == nullptr) {
    if (((param_9 == nullptr) && (param_10 == nullptr)) && (param_11 == nullptr)) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x135);
    }
  }
  else if (*param_8 == 0) {
    pDVar5 = st::fn_006AE290(nullptr,7,2,5);
    *param_8 = (int)pDVar5;
  }
  if ((param_9 != nullptr) && (*param_9 == 0)) {
    pDVar5 = st::fn_006AE290(nullptr,7,2,5);
    *param_9 = (int)pDVar5;
  }
  if (param_10 != nullptr) {
    *param_10 = 0;
  }
  if (param_11 != nullptr) {
    *param_11 = 0;
  }
  iVar7 = g_worldGrid.sizeX * local_c + local_8 + (iVar6 + -1) * (int)g_worldGrid.planeStride;
  if (iVar6 <= iVar4) {
    local_24 = (iVar4 - iVar6) + 1;
    iVar4 = local_c;
    do {
      iVar7 = iVar7 + g_worldGrid.planeStride;
      local_2c = iVar7 - g_worldGrid.sizeX;
      if (iVar4 <= local_10) {
        local_20 = (local_10 - iVar4) + 1;
        local_28 = iVar7;
        do {
          local_2c = local_2c + g_worldGrid.sizeX;
          if (local_8 <= local_14) {
            iVar6 = (local_14 - local_8) + 1;
            iVar4 = local_2c * 8 + -8;
            do {
              piVar1 = *(int **)((int)g_worldGrid.cells[1].objects + iVar4);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if (((piVar1 != nullptr) && (piVar1[9] == (int)param_1)) &&
                 (iVar7 = (**(code **)(*piVar1 + 0xf8))(), iVar7 == 1)) {
                iVar7 = piVar1[8];
                if (iVar7 == 0x14) {
                  piVar3 = param_10;
                  if (param_8 != nullptr) {
                    st::fn_006AE1C0
                              ((DArrayTy *)*param_8,(void *)((int)piVar1 + 0x32));
                  }
                }
                else {
                  if ((iVar7 != 1000) && (iVar7 != 0x3e9)) goto LAB_0042b469;
                  piVar3 = param_11;
                  if (param_9 != nullptr) {
                    st::fn_006AE1C0
                              ((DArrayTy *)*param_9,(void *)((int)piVar1 + 0x32));
                  }
                }
                if (piVar3 != nullptr) {
                  *piVar3 = *piVar3 + 1;
                }
              }
LAB_0042b469:
              iVar6 = iVar6 + -1;
              iVar7 = local_28;
              iVar4 = iVar4 + 8;
            } while (iVar6 != 0);
          }
          local_20 = local_20 + -1;
          iVar4 = local_c;
        } while (local_20 != 0);
      }
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 0042B620 STAllPlayersC::GetObjPtr
#line 4 "decomp/ST.exe/functions/0042B620/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetObjPtr

   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00435060 -> 0042B620 @ 0043513F | 00435060 -> 0042B620 @ 00435244 | 0043AE40 ->
   0042B620 @ 0043B99C | 0049E510 -> 0042B620 @ 0049E761 | 0049FBF0 -> 0042B620 @ 0049FDF3 |
   004A0FA0 -> 0042B620 @ 004A1160 | 004A0FA0 -> 0042B620 @ 004A136D | 004A0FA0 -> 0042B620 @
   004A20FE | 004A0FA0 -> 0042B620 @ 004A2723 | 004A3430 -> 0042B620 @ 004A3686 | 004A3430 ->
   0042B620 @ 004A3787 | 004A3430 -> 0042B620 @ 004A3996 | 004A3CD0 -> 0042B620 @ 004A3E62 |
   004DE820 -> 0042B620 @ 004DE8BF | 006406D0 -> 0042B620 @ 00640BE2

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0042D980 -> 0042B620 @ 0042DA3C | 0042D980 -> 0042B620 @ 0042DA7B | 0042D980 ->
   0042B620 @ 0042DC2B | 0042D980 -> 0042B620 @ 0042DCF7 | 00435060 -> 0042B620 @ 004350F4 |
   00435060 -> 0042B620 @ 004351D5 | 00435060 -> 0042B620 @ 004351FF | 00435060 -> 0042B620 @
   004352BA | 00435060 -> 0042B620 @ 004352DC | 00436F20 -> 0042B620 @ 00436F8D | 00439100 ->
   0042B620 @ 0043958F | 00439100 -> 0042B620 @ 0043978D | 00439100 -> 0042B620 @ 00439D4E |
   00439100 -> 0042B620 @ 00439EF8 | 00439100 -> 0042B620 @ 0043A1D1 | 0043AE40 -> 0042B620 @
   0043B0FC | 0043AE40 -> 0042B620 @ 0043B1DE | 0043AE40 -> 0042B620 @ 0043B309 | 0043AE40 ->
   0042B620 @ 0043B4EF | 0043AE40 -> 0042B620 @ 0043B5A3 | 0043AE40 -> 0042B620 @ 0043B70C |
   0043AE40 -> 0042B620 @ 0043B99C | 0043BEB0 -> 0042B620 @ 0043D44A | 0043BEB0 -> 0042B620 @
   0043D5B7 | 0043BEB0 -> 0042B620 @ 0043D8D0 | 0043EED0 -> 0042B620 @ 0043EF4C | 0044B5F0 ->
   0042B620 @ 0044B6FB | 0044B5F0 -> 0042B620 @ 0044BAE3 | 0044EE30 -> 0042B620 @ 0044F694 |
   0044EE30 -> 0042B620 @ 0045A5CE | 004608B0 -> 0042B620 @ 00460E1B | 004608B0 -> 0042B620 @
   00461313 | 004608B0 -> 0042B620 @ 0046164A | 004608B0 -> 0042B620 @ 004618DF | 00462180 ->
   0042B620 @ 004621FF | 00471AC0 -> 0042B620 @ 00471FC7 | 00471AC0 -> 0042B620 @ 004724FA |
   00471AC0 -> 0042B620 @ 004727C8 | 00471AC0 -> 0042B620 @ 004729F7 | 00476CE0 -> 0042B620 @
   00476DF2 | 00476CE0 -> 0042B620 @ 00476E90 | 00476CE0 -> 0042B620 @ 004773FA | 00476CE0 ->
   0042B620 @ 0047750D | 00478030 -> 0042B620 @ 00478237 | 00483300 -> 0042B620 @ 0048335E |
   00492FC0 -> 0042B620 @ 00492FED | 0049F100 -> 0042B620 @ 0049F31C | 005825C0 -> 0042B620 @
   005826A5 | 005825C0 -> 0042B620 @ 005829C3 | 005825C0 -> 0042B620 @ 00582D12 | 005825C0 ->
   0042B620 @ 00582E7E | 00584060 -> 0042B620 @ 0058408C | 00586AF0 -> 0042B620 @ 00586C64 |
   00586AF0 -> 0042B620 @ 00586DD6 | 0058E570 -> 0042B620 @ 0058E862 | 0058E570 -> 0042B620 @
   0058EB66 | 005EAF10 -> 0042B620 @ 005EB5F4 | 005EAF10 -> 0042B620 @ 005EB87D | 005EF6C0 ->
   0042B620 @ 005EF6E6 | 005FB640 -> 0042B620 @ 005FBD4F | 005FB640 -> 0042B620 @ 005FBFA4 |
   005FF430 -> 0042B620 @ 005FF48F | 0061C5F0 -> 0042B620 @ 0061C644 | 006406D0 -> 0042B620 @
   00640BE2 | 006406D0 -> 0042B620 @ 0064158E | 006406D0 -> 0042B620 @ 006419BA | 00643E20 ->
   0042B620 @ 00643FA4 | 0065BD70 -> 0042B620 @ 0065BFAD | 0065BD70 -> 0042B620 @ 0065C0A5 |
   0065BD70 -> 0042B620 @ 0065C1C8 | 0065BD70 -> 0042B620 @ 0065C382 | 0065BD70 -> 0042B620 @
   0065C4D0 | 0065D940 -> 0042B620 @ 0065D97B | 0065DA50 -> 0042B620 @ 0065DB53 | 0065DC00 ->
   0042B620 @ 0065DC81 | 0065DD30 -> 0042B620 @ 0065DDB9 | 0065E070 -> 0042B620 @ 0065E120 |
   0065E3B0 -> 0042B620 @ 0065E3F3 | 0065E450 -> 0042B620 @ 0065E4EA | 0065E700 -> 0042B620 @
   0065E773 | 00660F70 -> 0042B620 @ 00661208 | 00661800 -> 0042B620 @ 0066184F | 006618E0 ->
   0042B620 @ 006619E0 | 00661CA0 -> 0042B620 @ 00661CCA | 00662240 -> 0042B620 @ 006624AB |
   00662240 -> 0042B620 @ 00662B4B | 00662240 -> 0042B620 @ 00662DDE | 00662240 -> 0042B620 @
   006630F9 | 00662240 -> 0042B620 @ 00663370 | 00662240 -> 0042B620 @ 00663733 | 00662240 ->
   0042B620 @ 006638CF | 00662240 -> 0042B620 @ 00663CA4 | 00664960 -> 0042B620 @ 00666EFA |
   00675DC0 -> 0042B620 @ 00675E0E | 00675FE0 -> 0042B620 @ 00676063 | 00676260 -> 0042B620 @
   006762F0 | 006763F0 -> 0042B620 @ 00676480 | 0067B520 -> 0042B620 @ 0067B7B1 | 0067BE20 ->
   0042B620 @ 0067BE5F | 0067C7E0 -> 0042B620 @ 0067CAEE | 0068F020 -> 0042B620 @ 0068F101 |
   0068F360 -> 0042B620 @ 0068F415 | 0068F660 -> 0042B620 @ 0068F6E1
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B637 MOVSX EAX,byte ptr [EBP + 0x8] | 0042B6C9 MOVSX
   ECX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042B6A8 MOV EDX,dword ptr [EBP + 0xc];
   first-use mask | 0042B6C6 MOV EAX,dword ptr [EBP + 0xc]; first-use mask */

STGameObjC * __thiscall
st::fn_0042B620
          (STAllPlayersC *this,char objPtr,ushort param_2,
          STAllPlayersC_GetObjPtr_param_3Enum param_3)

{
  int iVar2;
  STGameObjC *pSVar3;
  DArrayTy *array;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000a;

  switch(param_3) {
  case CASE_1:
    array = (DArrayTy *)g_packedRecords_A62x8[objPtr].field3_0x9;
    if (array == nullptr) {
      return nullptr;
    }
    break;
  case CASE_2:
    array = g_array_007FA154;
    if (g_array_007FA154 == nullptr) {
      return nullptr;
    }
    break;
  case CASE_3:
    array = g_array_007FA158;
    if (g_array_007FA158 == nullptr) {
      return nullptr;
    }
    break;
  case CASE_4:
    array = g_array_007FA15C;
    if (g_array_007FA15C == nullptr) {
      return nullptr;
    }
    break;
  case CASE_5:
    array = g_array_007FA160;
    if (g_array_007FA160 == nullptr) {
      return nullptr;
    }
    break;
  case CASE_6:
    array = g_array_007FA164;
    if (g_array_007FA164 == nullptr) {
      return nullptr;
    }
    break;
  default:
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x17a,0,0,
                               "STAllPlayersC::GetObjPtr player=%d num=%d",(int)objPtr,param_2);
    if (iVar2 == 0) {
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar2 = st::fn_006ACC70(array,(uint)param_2,&objPtr);
  return (STGameObjC *)(-(uint)(iVar2 != -4) & _objPtr);
}

// 0042B7D0 STAllPlayersC::AddObjsToGroup
#line 4 "decomp/ST.exe/functions/0042B7D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjsToGroup

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00436F20 -> 0042B7D0 @ 0043756E | 0044EE30 -> 0042B7D0 @ 004505CF | 0044EE30 ->
   0042B7D0 @ 00450662 | 00490F60 -> 0042B7D0 @ 00491001
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B7E4 MOVSX EAX,byte ptr [EBP + 0x8] | 0042B942 MOVSX
   ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
st::fn_0042B7D0
          (STAllPlayersC *this,char param_1,ushort param_2,uint *groupContent,undefined2 *param_4)

{
  dword dVar1;
  DArrayTy *array;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_90;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  DArrayTy *local_14;
  STGroupC *local_10;
  STGroupC *local_c;
  undefined1 local_5;

  uVar7 = groupContent[3];
  uVar6 = 0;
  local_20 = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  if (0 < (int)uVar7) {
    do {
      st::fn_006ACC70((DArrayTy *)groupContent,uVar6,local_18);
      iVar3 = st::fn_00404606(param_1,STPiece<0,2>(local_18));
      if (iVar3 == 0) {
        return 0xaffe0002;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  uVar6 = 0;
  uVar7 = local_14->count;
  local_24 = uVar7;
  if (0 < (int)uVar7) {
    do {
      st::fn_006ACC70(local_14,uVar6,&local_c);
      if (local_c != nullptr) {
        iVar3 = st::fn_004031E8(local_c,groupContent);
        if (iVar3 == 1) {
          local_5 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(local_c->vtable + 8))(0x65,&local_5);
        }
        if (uVar6 == param_2) {
          local_20 = 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar3 = st::fn_0072D7F0(local_90.jumpBuffer,0);
  array = local_14;
  if (iVar3 == 0) {
    uVar6 = local_24;
    uVar7 = local_24;
    if ((param_2 == 0xfffe) || (local_20 == 0)) {
      while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
        st::fn_006ACC70(array,uVar7,&local_c);
        if (local_c == nullptr) {
          uVar6 = uVar7;
        }
      }
      local_48 = (int)param_1;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_40 = 1;
      local_38 = uVar6 & 0xffff;
      g_playSystem_00802A38->vfunc_08(0x10ff,(short)local_1c,(short)&local_10,(short)local_4c,0);
      st::fn_006AE140(array,uVar6 & 0xffff,&local_10);
      st::fn_00403A80(local_10,(DArrayTy *)groupContent,0);
      local_5 = 2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(local_10->vtable + 8))(0x65,&local_5);
      if (param_4 != nullptr) {
        *param_4 = (short)uVar6;
      }
    }
    else {
      st::fn_006ACC70(local_14,(uint)param_2,&local_c);
      st::fn_00403A80(local_c,(DArrayTy *)groupContent,1);
      local_5 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(local_c->vtable + 8))(0x65,&local_5);
    }
    dVar1 = array->count;
    uVar7 = 0;
    local_24 = dVar1;
    if (0 < (int)dVar1) {
      do {
        st::fn_006ACC70(array,uVar7,&local_c);
        if (((local_c != nullptr) && (local_c->field_0027 == 0)) &&
           (iVar3 = st::fn_00405452((int)local_c), iVar3 == 0)) {
          st::fn_0040432C(g_playSystem_00802A38,*(uint *)&local_c->field_0x8);
          local_c = nullptr;
          st::fn_006AE140(array,uVar7,&local_c);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)dVar1);
    }
    g_currentExceptionFrame = local_90.previous;
    return 0;
  }
  g_currentExceptionFrame = local_90.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1d8,0,iVar3,"%s",
                             "STAllPlayersC::AddObjsToGroup");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1d9);
  return 0xffffffff;
}

// 0042BB30 STAllPlayersC::AddObjToTmp
#line 4 "decomp/ST.exe/functions/0042BB30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042BC1A MOVSX ECX,byte ptr [EBP + 0x14] | 0042BC42 MOVSX
   EDX,byte ptr [EBP + 0x14] */

undefined4 __thiscall
st::fn_0042BB30
          (STAllPlayersC *this,char param_1,int param_2,int param_3,char param_4,uint param_5)

{
  uint index;
  int iVar2;
  DArrayTy *pDVar3;
  STGameObjC *this_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  Global_sub_0043FC50_param_1Enum GVar7;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  STAllPlayersC *local_c;
  short local_6;

  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (iVar2 == -0x5001fff7) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x21d,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp invalid panel number");
      if (iVar2 == 0) {
        return local_18;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (iVar2 == -0x5001ffff) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x219,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp coincide value");
      if (iVar2 == 0) {
        return 0xaffe0001;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x215,0,iVar2,"%s",
                               "STAllPlayersC::AddObjToTmp");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x216);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_2 == 0) {
    local_10 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
    if (param_3 != 0) goto LAB_0042bc00;
    st::fn_00404C55(CASE_1,0);
    GVar7 = CASE_2;
  }
  else {
    if (param_2 != 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x1f8);
      goto LAB_0042bc00;
    }
    local_10 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    if (param_3 != 0) goto LAB_0042bc00;
    st::fn_00404C55(CASE_4,0);
    GVar7 = CASE_5;
  }
  st::fn_00404C55(GVar7,param_3);
LAB_0042bc00:
  piVar6 = (int *)(param_3 * 0x10 + local_10);
  if (*piVar6 == 0) {
    pDVar3 = st::fn_006AE290(nullptr,0,2,1);
    STField<DArrayTy *>(piVar6,10) = pDVar3;
    STField<undefined2>(piVar6,0xe) = 0;
    piVar6[1] = (int)param_4;
    if (param_2 == 0) {
      *piVar6 = 0x3c;
    }
    else if (param_2 == 1) {
      *piVar6 = 0x19a;
    }
  }
  if (piVar6[1] != (int)param_4) {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x210,0,0,"%s",
                               "STAllPlayersC::AddObjToTmp something wrong...");
    if (iVar2 == 0) {
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pDVar3 = STField<DArrayTy *>(piVar6,10);
  local_14 = pDVar3->count;
  index = local_14;
  while (index = index - 1, -1 < (int)index) {
    st::fn_006ACC70(pDVar3,index,&local_6);
    if (local_6 == -1) {
      local_14 = index;
    }
    if (local_6 == (short)param_5) {
      st::fn_006A5E40
                (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x209);
    }
  }
  st::fn_006AE140(pDVar3,local_14,&param_5);
  STField<short>(piVar6,0xe) = STField<short>(piVar6,0xe) + 1;
  this_00 = st::fn_004028BA(local_c,param_4,(ushort)param_5,CASE_1);
  this_00->vfunc_E8(1);
  g_currentExceptionFrame = local_5c.previous;
  return local_18;
}

// 0042BEA0 STAllPlayersC::AddObjToTmp2
#line 4 "decomp/ST.exe/functions/0042BEA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp2 */

undefined4 __thiscall
st::fn_0042BEA0
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,uint param_5,
          uint param_6)

{
  int iVar2;
  undefined4 uVar3;
  STGameObjC *this_00;
  char objPtr;
  int *piVar4;
  Global_sub_0043FC50_param_1Enum GVar5;
  InternalExceptionFrame local_58;
  int local_14;
  undefined4 local_10;
  STAllPlayersC *local_c;
  STAllPlayersC_GetObjPtr_param_3Enum local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      return local_10;
    }
    local_10 = 0xaffe0001;
    if (iVar2 == -0x5001ffff) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x251,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp2 coincide value");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x252,0,0,"%s",
                                 "STAllPlayersC::AddObjToTmp2");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    return 0xaffe0001;
  }
  if (param_2 == 0) {
    local_14 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
    if (param_3 == 0) {
      st::fn_00404C55(CASE_1,0);
      GVar5 = CASE_2;
LAB_0042bf8b:
      st::fn_00404C55(GVar5,param_3);
    }
  }
  else if (param_2 == 1) {
    local_14 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    if (param_3 == 0) {
      st::fn_00404C55(CASE_4,0);
      GVar5 = CASE_5;
      goto LAB_0042bf8b;
    }
  }
  else {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x23b,0,0,"%s",
                               "STAllPlayersC::AddObjToTmp2 invalid panel number");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x23c);
  }
  piVar4 = (int *)(param_3 * 0x10 + local_14);
  objPtr = (char)param_5;
  if (((*piVar4 == param_4) && (piVar4[1] == (int)objPtr)) &&
     (*(ushort *)(piVar4 + 2) == (ushort)param_6)) {
    st::fn_006A5E40
              (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x23f);
  }
  *piVar4 = param_4;
  piVar4[1] = (int)objPtr;
  *(ushort *)(piVar4 + 2) = (ushort)param_6;
  if (param_4 < 0x1a5) {
    if (param_4 == 0x1a4) {
      local_8 = CASE_5;
      goto cf_common_exit_0042C072;
    }
    if (param_4 == 0x5a) {
      local_8 = CASE_4;
      goto cf_common_exit_0042C072;
    }
    if (param_4 == 0x172) {
      local_8 = CASE_2;
      goto cf_common_exit_0042C072;
    }
  }
  else {
    if (param_4 == 0x1ae) {
      local_8 = CASE_3;
      goto cf_common_exit_0042C072;
    }
    if (param_4 == 0x1b8) {
      local_8 = CASE_6;
      goto cf_common_exit_0042C072;
    }
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x249,0,0,"%s",
                             "STAllPlayersC::AddObjToTmp2 invalid game type");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40
            (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0x24a);
cf_common_exit_0042C072:
  this_00 = st::fn_004028BA(local_c,objPtr,(ushort)param_6,local_8);
  this_00->vfunc_E8(1);
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

// 0042C1C0 STAllPlayersC::AddObjsToTmp
#line 4 "decomp/ST.exe/functions/0042C1C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjsToTmp */

undefined4 __thiscall
st::fn_0042C1C0
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,DArrayTy *param_4)

{
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  uint index;
  InternalExceptionFrame local_54;
  dword local_10;
  STAllPlayersC *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x266);
    }
    local_10 = param_4->count;
    index = 0;
    if (0 < (int)local_10) {
      do {
        st::fn_006ACC70(param_4,index,&local_8);
        if ((short)local_8 != -1) {
          st::fn_00404098(local_c,(char)param_1,param_2,param_3,(char)param_1,local_8);
        }
        index = index + 1;
      } while ((int)index < (int)local_10);
    }
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    if (errorCode != -0x5001fff7) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x26e,0,errorCode,
                                 "%s","STAllPlayersC::AddObjsToTmp");
      if (iVar2 == 0) {
        st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x26f);
        return 0xffffffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0;
}

// 0042C300 FUN_0042c300
#line 4 "decomp/ST.exe/functions/0042C300/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\to_allpl.cpp
   Diagnostic line evidence: 655 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00422E20 -> 0042C300 @ 00422EAB | 00422E20 -> 0042C300 @ 00422ED1
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042C337 MOVSX EAX,byte ptr [EBP + 0x8] | 0042C369 MOVSX
   EAX,byte ptr [EBP + 0x8] */

undefined4 st::fn_0042C300(char param_1,uint param_2,int param_3,char param_4,uint param_5)

{
  DArrayTy *array;
  int iVar1;
  STGameObjC *this;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int *piVar2;
  int iVar3;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000011;
  Global_sub_0043FC50_param_1Enum GVar4;

  iVar1 = param_3;
  iVar3 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
    if (param_3 == 0) {
      st::fn_00404C55(CASE_1,0);
      GVar4 = CASE_2;
    }
    else {
      GVar4 = CASE_E;
    }
  }
  else {
    if (param_2 != 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x28f);
      goto LAB_0042c3a0;
    }
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    if (param_3 == 0) {
      st::fn_00404C55(CASE_4,0);
      GVar4 = CASE_5;
    }
    else {
      GVar4 = CASE_F;
    }
  }
  st::fn_00404C55(GVar4,0);
LAB_0042c3a0:
  piVar2 = (int *)(iVar1 * 0x10 + iVar3);
  if (((*piVar2 == 0x3c) || (*piVar2 == 0x19a)) && (piVar2[1] == (int)param_4)) {
    array = STField<DArrayTy *>(piVar2,10);
    index = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = array->count;
    if (0 < (int)param_2) {
      do {
        st::fn_006ACC70(array,index,&param_1);
        if (_param_1 == (ushort)param_5) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          this = st::fn_004028BA(in_ECX,(char)_param_4,(ushort)param_5,CASE_1);
          this->vfunc_E8(0);
          _param_1 = 0xffff;
          st::fn_006AE140(array,index,&param_1);
          STField<short>(piVar2,0xe) = STField<short>(piVar2,0xe) + -1;
          if (STField<short>(piVar2,0xe) == 0) {
            st::fn_006AE110(STField<DArrayTy *>(piVar2,10));
            STField<undefined4>(piVar2,10) = 0;
            *piVar2 = 0;
          }
          return 0;
        }
        index = index + 1;
      } while ((int)index < (int)param_2);
    }
  }
  return 0xffffffff;
}

// 0042C4B0 STAllPlayersC::DelObjsFromTmp
#line 4 "decomp/ST.exe/functions/0042C4B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DelObjsFromTmp */

undefined4 __thiscall
st::fn_0042C4B0
          (STAllPlayersC *this,undefined4 param_1,uint param_2,int param_3,DArrayTy *param_4)

{
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  uint index;
  InternalExceptionFrame local_54;
  dword local_10;
  STAllPlayersC *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2b4);
    }
    local_10 = param_4->count;
    index = 0;
    if (0 < (int)local_10) {
      do {
        st::fn_006ACC70(param_4,index,&local_8);
        if ((short)local_8 != -1) {
          st::fn_004024E1((char)param_1,param_2,param_3,(char)param_1,local_8);
        }
        index = index + 1;
      } while ((int)index < (int)local_10);
    }
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    if (errorCode != -0x5001fff7) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",700,0,errorCode,
                                 "%s","STAllPlayersC::DelObjsFromTmp");
      if (iVar2 == 0) {
        st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2bd);
        return 0xffffffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0;
}

// 0042C5F0 STAllPlayersC::DelObjFromTmps
#line 4 "decomp/ST.exe/functions/0042C5F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DelObjFromTmps
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042C7D0 MOVSX EDX,byte ptr [EBP + 0x10] | 0042CB31 MOVSX
   EDX,byte ptr [EBP + 0x10] */

undefined4 __thiscall
st::fn_0042C5F0
          (STAllPlayersC *this,char param_1,int param_2,char param_3,uint param_4)

{
  undefined4 *puVar1;
  DArrayTy *pDVar2;
  dword dVar3;
  STGameObjC *pSVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  Global_sub_0043FC50_param_1Enum GVar10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0xffffffff;
  if (param_2 < 0x1a5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1a4) {
      iVar8 = 0;
      iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar6);
        if (((*(int *)(iVar8 * 0x10 + iVar6) == 0x1a4) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_5);
          pSVar5->vfunc_E8(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            st::fn_00404C55(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          st::fn_00404C55(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x14) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
      iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
      do {
        puVar1 = (undefined4 *)(param_2 * 0x10 + iVar6);
        if ((*(int *)(param_2 * 0x10 + iVar6) == 0x3c) && (puVar1[1] == (int)param_3)) {
          pDVar2 = STField<DArrayTy *>(puVar1,10);
          uVar9 = 0;
          dVar3 = pDVar2->count;
          if (0 < (int)dVar3) {
            do {
              st::fn_006ACC70(pDVar2,uVar9,&local_8);
              if ((ushort)local_8 == (ushort)param_4) {
                pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_1);
                pSVar5->vfunc_E8(0);
                local_8 = 0xffff;
                st::fn_006AE140(pDVar2,uVar9,&local_8);
                STField<short>(puVar1,0xe) = STField<short>(puVar1,0xe) + -1;
                if (STField<short>(puVar1,0xe) == 0) {
                  st::fn_006AE110(STField<DArrayTy *>(puVar1,10));
                  STField<undefined4>(puVar1,10) = 0;
                  *puVar1 = 0;
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                if (param_2 == 0) {
                  st::fn_00404C55(CASE_1,0);
                  GVar10 = CASE_2;
                }
                else {
                  GVar10 = CASE_E;
                }
                st::fn_00404C55(GVar10,0);
                local_c = 0;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)dVar3);
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + 1;
        if (4 < param_2) {
          return local_c;
        }
      } while( true );
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x5a) {
      iVar8 = 0;
      iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar6);
        if (((*(int *)(iVar8 * 0x10 + iVar6) == 0x5a) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_4);
          pSVar5->vfunc_E8(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            st::fn_00404C55(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          st::fn_00404C55(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x172) {
      iVar8 = 0;
      iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar6);
        if (((*(int *)(iVar8 * 0x10 + iVar6) == 0x172) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_2);
          pSVar5->vfunc_E8(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            st::fn_00404C55(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          st::fn_00404C55(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
  }
  else if (param_2 < 0x1b9) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1b8) {
      iVar8 = 0;
      iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar6);
        if (((*(int *)(iVar8 * 0x10 + iVar6) == 0x1b8) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_6);
          pSVar5->vfunc_E8(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            st::fn_00404C55(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          st::fn_00404C55(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1ae) {
      iVar8 = 0;
      iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar6);
        if (((*(int *)(iVar8 * 0x10 + iVar6) == 0x1ae) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_3);
          pSVar5->vfunc_E8(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            st::fn_00404C55(CASE_1,0);
            GVar10 = CASE_2;
          }
          else {
            GVar10 = CASE_E;
          }
          st::fn_00404C55(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
  }
  else if ((999 < param_2) && (param_2 < 0x3ea)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    iVar6 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    do {
      puVar1 = (undefined4 *)(param_2 * 0x10 + iVar6);
      if ((*(int *)(param_2 * 0x10 + iVar6) == 0x19a) && (puVar1[1] == (int)param_3)) {
        pDVar2 = STField<DArrayTy *>(puVar1,10);
        uVar9 = 0;
        dVar3 = pDVar2->count;
        if (0 < (int)dVar3) {
          do {
            st::fn_006ACC70(pDVar2,uVar9,&local_8);
            if ((ushort)local_8 == (ushort)param_4) {
              pSVar5 = st::fn_004028BA(this,param_3,(ushort)param_4,CASE_1);
              pSVar5->vfunc_E8(0);
              local_8 = 0xffff;
              st::fn_006AE140(pDVar2,uVar9,&local_8);
              STField<short>(puVar1,0xe) = STField<short>(puVar1,0xe) + -1;
              if (STField<short>(puVar1,0xe) == 0) {
                st::fn_006AE110(STField<DArrayTy *>(puVar1,10));
                STField<undefined4>(puVar1,10) = 0;
                *puVar1 = 0;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (param_2 == 0) {
                st::fn_00404C55(CASE_4,0);
                GVar10 = CASE_5;
              }
              else {
                GVar10 = CASE_F;
              }
              st::fn_00404C55(GVar10,0);
              local_c = 0;
              break;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)dVar3);
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 1;
      if (4 < param_2) {
        return local_c;
      }
    } while( true );
  }
  iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x352,0,0,"%s",
                             "STAllPlayersC::DelObjFromTmps invalid game type");
  if (iVar6 == 0) {
    return 0xffffffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0042CDE0 STAllPlayersC::PushTV
#line 4 "decomp/ST.exe/functions/0042CDE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042CE1F MOVSX EAX,byte ptr [EBP + 0x8] | 0042CE3A MOVSX
   EAX,byte ptr [EBP + 0x8] */

undefined4 st::fn_0042CDE0(char param_1,int param_2,int param_3,char param_4,short param_5)

{
  DArrayTy *array;
  dword dVar1;
  int iVar3;
  undefined4 uVar4;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;

  if (param_2 == 0) {
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
  }
  else {
    if (param_2 != 1) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x36a,0,0,"%s",
                                 "STAllPlayersC::PushTV");
      if (iVar3 == 0) {
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
  }
  iVar3 = iVar3 + param_3 * 0x10;
  if (*(int *)(iVar3 + 4) == (int)param_4) {
    array = *(DArrayTy **)(iVar3 + 10);
    index = 0;
    dVar1 = array->count;
    if (0 < (int)dVar1) {
      do {
        st::fn_006ACC70(array,index,&stack0x00000006);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if (in_stack_00000006 == param_5) {
          return 1;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return 0;
    }
  }
  return 0;
}

// 0042CEF0 STAllPlayersC::DelObjFromSaveTmps
#line 4 "decomp/ST.exe/functions/0042CEF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DelObjFromSaveTmps

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0042CEF0(STAllPlayersC *this,int param_1,char param_2,short param_3)

{
  int iVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  int local_8;

  uVar5 = (uint)DAT_0080874d;
  if (0x1a4 < param_1) {
    if (param_1 < 0x1b9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((param_1 == 0x1b8) || (param_1 == 0x1ae)) goto LAB_0042d011;
    }
    else if ((999 < param_1) && (param_1 < 0x3ea)) {
      piVar4 = &g_packedRecords_A62x8[uVar5].field204_0x211;
      local_8 = 10;
      do {
        if ((*(int *)((int)piVar4 + -10) == 0x19a) && (*(int *)((int)piVar4 + -6) == (int)param_2))
        {
          uVar5 = 0;
          iVar2 = *(int *)(*piVar4 + 0xc);
          if (0 < iVar2) {
            do {
              st::fn_006ACC70((DArrayTy *)*piVar4,uVar5,&param_1);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if ((short)param_1 == param_3) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = 0xffff;
                st::fn_006AE140((DArrayTy *)*piVar4,uVar5,&param_1);
                *(short *)(piVar4 + 1) = (short)piVar4[1] + -1;
                if ((short)piVar4[1] == 0) {
                  st::fn_006AE110((DArrayTy *)*piVar4);
                  *piVar4 = 0;
                  *(undefined4 *)((int)piVar4 + -10) = 0;
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < iVar2);
          }
        }
        piVar4 = piVar4 + 4;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
LAB_0042cf42:
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3bb,0,0,"%s",
                               "STAllPlayersC::DelObjFromSaveTmps invalid game type");
    if (iVar2 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 != 0x1a4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0x14) {
      piVar4 = &g_packedRecords_A62x8[uVar5].field204_0x211;
      local_8 = 10;
      do {
        if ((*(int *)((int)piVar4 + -10) == 0x3c) && (*(int *)((int)piVar4 + -6) == (int)param_2)) {
          uVar5 = 0;
          iVar2 = *(int *)(*piVar4 + 0xc);
          if (0 < iVar2) {
            do {
              st::fn_006ACC70((DArrayTy *)*piVar4,uVar5,&param_1);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if ((short)param_1 == param_3) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = 0xffff;
                st::fn_006AE140((DArrayTy *)*piVar4,uVar5,&param_1);
                *(short *)(piVar4 + 1) = (short)piVar4[1] + -1;
                if ((short)piVar4[1] == 0) {
                  st::fn_006AE110((DArrayTy *)*piVar4);
                  *piVar4 = 0;
                  *(undefined4 *)((int)piVar4 + -10) = 0;
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < iVar2);
          }
        }
        piVar4 = piVar4 + 4;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
    if ((param_1 != 0x5a) && (param_1 != 0x172)) goto LAB_0042cf42;
  }
LAB_0042d011:
  iVar2 = 0;
  psVar3 = &g_packedRecords_A62x8[uVar5].field203_0x20f;
  while (((*(int *)(psVar3 + -4) != param_1 || (*(int *)(psVar3 + -2) != (int)param_2)) ||
         (*psVar3 != param_3))) {
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 8;
    if (9 < iVar2) {
      return;
    }
  }
  *(undefined4 *)(iVar2 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, uVar5, 0x207)) = 0;
  return;
}

// 0042D190 STAllPlayersC::ResetActivityFromObjs
#line 4 "decomp/ST.exe/functions/0042D190/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromObjs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0042D190
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4,int param_5)

{
  dword dVar1;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  char objPtr;
  ushort uVar5;
  STAllPlayersC_GetObjPtr_param_3Enum SVar6;

  objPtr = (char)param_1;
  uVar5 = (ushort)param_4;
  if (param_2 < 0x19b) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x19a) {
LAB_0042d1f8:
      index = 0;
      dVar1 = param_3->count;
      if ((int)dVar1 < 1) {
        return;
      }
      do {
        st::fn_006ACC70(param_3,index,&param_4);
        if ((((ushort)param_4 != 0xffff) &&
            (pSVar3 = st::fn_004028BA(this,objPtr,(ushort)param_4,CASE_1), pSVar3 != nullptr))
           && (pSVar3->vfunc_E8(0), param_5 != 0)) {
          st::fn_0040321F(pSVar3);
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return;
    }
    if (param_2 < 0x5b) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0x5a) {
        SVar6 = CASE_4;
LAB_0042d1c3:
        pSVar3 = st::fn_004028BA(this,objPtr,uVar5,SVar6);
        if (pSVar3 == nullptr) {
          return;
        }
        pSVar3->vfunc_E8(0);
        goto LAB_0042d2c3;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0) {
        return;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 0x172) {
      SVar6 = CASE_2;
      goto LAB_0042d1c3;
    }
LAB_0042d270:
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x406,0,0,"%s",
                               "STAllPlayersC::ResetActivityFromObjs invalid type");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1a4) {
      pSVar3 = st::fn_004028BA(this,objPtr,uVar5,CASE_5);
      if (pSVar3 == nullptr) {
        return;
      }
      pSVar3->vfunc_E8(0);
      if (param_5 == 0) {
        return;
      }
      st::fn_0040321F(pSVar3);
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1ae) {
      SVar6 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      SVar6 = CASE_6;
    }
    pSVar3 = st::fn_004028BA(this,objPtr,uVar5,SVar6);
    if (pSVar3 == nullptr) {
      return;
    }
    pSVar3->vfunc_E8(0);
LAB_0042d2c3:
    if (param_5 != 0) {
      st::fn_0040321F(pSVar3);
      return;
    }
  }
  return;
}

// 0042D370 STAllPlayersC::SetActivityToObjs
#line 4 "decomp/ST.exe/functions/0042D370/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivityToObjs */

void __thiscall
st::fn_0042D370
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4)

{
  STGameObjC *pSVar2;
  int iVar3;
  uint index;
  char objPtr;
  STAllPlayersC_GetObjPtr_param_3Enum SVar4;

  objPtr = (char)param_1;
  if (0x19a < param_2) {
    if (param_2 == 0x1a4) {
      pSVar2 = st::fn_004028BA(this,objPtr,(ushort)param_4,CASE_5);
      if (pSVar2 == nullptr) {
        return;
      }
      pSVar2->vfunc_E8(1);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar4 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d41b;
      SVar4 = CASE_6;
    }
    goto cf_common_exit_0042D44C;
  }
  if (param_2 == 0x19a) {
LAB_0042d3b2:
    index = 0;
    param_4 = param_3->count;
    if ((int)param_4 < 1) {
      return;
    }
    do {
      st::fn_006ACC70(param_3,index,&param_1);
      if (((ushort)param_1 != 0xffff) &&
         (pSVar2 = st::fn_004028BA(this,objPtr,(ushort)param_1,CASE_1), pSVar2 != nullptr)) {
        pSVar2->vfunc_E8(1);
      }
      index = index + 1;
    } while ((int)index < (int)param_4);
    return;
  }
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      SVar4 = CASE_4;
cf_common_exit_0042D44C:
      pSVar2 = st::fn_004028BA(this,objPtr,(ushort)param_4,SVar4);
      if (pSVar2 == nullptr) {
        return;
      }
      pSVar2->vfunc_E8(1);
      return;
    }
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 0x3c) goto LAB_0042d3b2;
  }
  else if (param_2 == 0x172) {
    SVar4 = CASE_2;
    goto cf_common_exit_0042D44C;
  }
LAB_0042d41b:
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x43d,0,0,"%s",
                             "STAllPlayersC::SetActivityToObjs invalid type");
  if (iVar3 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0042D4F0 STAllPlayersC::ResetActivityFromTmp
#line 4 "decomp/ST.exe/functions/0042D4F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromTmp

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=45, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0042D4F0
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  int *piVar3;
  DArrayTy *pDVar4;
  uint uVar5;

  if (param_2 == 0) {
    iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
  }
  else {
    if (param_2 != 1) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x44d,0,0,"%s",
                                 "STAllPlayersC::ResetActivityFromTmp invalid panel number");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
  }
  piVar3 = (int *)(param_3 * 0x10 + iVar2);
  iVar2 = *piVar3;
  if (iVar2 < 0x19b) {
    if (iVar2 != 0x19a) {
      if (iVar2 < 0x5b) {
        if (iVar2 != 0x5a) {
          if (iVar2 == 0) goto LAB_0042d5ff;
          if (iVar2 != 0x3c) goto cf_common_exit_0042D5BC;
          goto LAB_0042d599;
        }
      }
      else if (iVar2 != 0x172) goto cf_common_exit_0042D5BC;
      goto LAB_0042d5e8;
    }
LAB_0042d599:
    pDVar4 = STField<DArrayTy *>(piVar3,10);
    uVar5 = 0xffff;
  }
  else {
    if (((iVar2 != 0x1a4) && (iVar2 != 0x1ae)) && (iVar2 != 0x1b8)) {
cf_common_exit_0042D5BC:
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x45f,0,0,"%s",
                                 "STAllPlayersC::ResetActivityFromTmp invalid type");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
LAB_0042d5e8:
    uVar5 = STReplaceLowWord((uint32_t)(param_4), (uint16_t)((short)piVar3[2]));
    pDVar4 = nullptr;
  }
  st::fn_004027C0
            (this,STReplaceLowByte((uint32_t)(iVar2), (uint8_t)((char)piVar3[1])),iVar2,pDVar4,uVar5,param_4);
LAB_0042d5ff:
  if (param_3 == 0) {
    if (param_2 == 0) {
      st::fn_00404C55(CASE_1,0);
      st::fn_00404C55(CASE_2,0);
      return;
    }
    if (param_2 == 1) {
      st::fn_00404C55(CASE_5,0);
      st::fn_00404C55(CASE_4,0);
    }
  }
  return;
}

// 0042D6B0 STAllPlayersC::RemoveActiveTV
#line 4 "decomp/ST.exe/functions/0042D6B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RemoveActiveTV */

void st::fn_0042D6B0(char param_1)

{
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar3;
  undefined4 *puVar4;

  iVar3 = (int)param_1;
  iVar2 = g_packedRecords_A62x8[iVar3].field200_0x203;
  if (iVar2 == 0) {
    puVar4 = &g_packedRecords_A62x8[iVar3].field96_0x163;
  }
  else {
    if (iVar2 != 1) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x470,0,0,"%s",
                                 "STAllPlayersC::RemoveActiveTV wrong panel number");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    puVar4 = &g_packedRecords_A62x8[iVar3].field149_0x1b3;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_004032E7(in_ECX,param_1,iVar2,0,1);
  if (STField<DArrayTy *>(puVar4,10) != nullptr) {
    st::fn_006AE110(STField<DArrayTy *>(puVar4,10));
    STField<undefined4>(puVar4,10) = 0;
  }
  *puVar4 = 0;
  return;
}

// 0042D980 STAllPlayersC::GetActiveCenter
#line 4 "decomp/ST.exe/functions/0042D980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetActiveCenter */

undefined4 __thiscall
st::fn_0042D980
          (STAllPlayersC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  DArrayTy *pDVar1;
  dword dVar2;
  int iVar4;
  undefined4 uVar5;
  STGameObjC *pSVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_1c;
  uint local_18;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;

  uVar7 = (uint)DAT_0080874d;
  if (g_packedRecords_A62x8[uVar7].field200_0x203 == 0) {
    iVar4 = g_packedRecords_A62x8[uVar7].field96_0x163;
    if (iVar4 == 0) {
      if (param_1 != nullptr) {
        *param_1 = 0xffff;
      }
      if (param_2 != nullptr) {
        *param_2 = 0xffff;
      }
      if (param_3 == nullptr) {
        return 0xffffffff;
      }
      *param_3 = 0xffff;
      return 0xffffffff;
    }
    if (iVar4 == 0x3c) {
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar7].field102_0x16d;
      iVar8 = 0;
      iVar4 = 0;
      dVar2 = pDVar1->count;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)dVar2) {
        do {
          st::fn_006ACC70(pDVar1,local_18,local_14);
          if (STPiece<0,2>(local_14) != 0xffff) {
            local_1c = local_1c + 1;
            pSVar6 = st::fn_004028BA(g_allPlayers_007FA174,
                               g_packedRecords_A62x8[DAT_0080874d].field97_0x167,STPiece<0,2>(local_14),
                               CASE_1);
            st::fn_004018C5
                      ((STFishC *)pSVar6,(short *)&local_8,(undefined2 *)&local_c,
                       (undefined2 *)&local_10);
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar4 = iVar4 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)dVar2);
        if (0 < local_1c) {
          if (param_1 != nullptr) {
            *param_1 = (short)((int)(short)iVar8 / local_1c);
          }
          if (param_2 != nullptr) {
            *param_2 = (short)((int)(short)iVar9 / local_1c);
          }
          if (param_3 == nullptr) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar4 / local_1c);
          return 0;
        }
      }
      if (param_1 != nullptr) {
        *param_1 = 0xffff;
      }
joined_r0x0042de37:
      if (param_2 != nullptr) {
        *param_2 = 0xffff;
      }
      if (param_3 == nullptr) {
        return 0;
      }
      *param_3 = 0xffff;
      return 0;
    }
    if (iVar4 == 0x1ae) {
      pSVar6 = st::fn_004028BA(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar7].field97_0x167,
                         g_packedRecords_A62x8[uVar7].field101_0x16b,CASE_3);
      st::fn_004018C5
                ((STFishC *)pSVar6,(short *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10);
      if (param_1 != nullptr) {
        *param_1 = (undefined2)local_8;
      }
      if (param_2 != nullptr) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 != nullptr) {
        *param_3 = (undefined2)local_10;
      }
      return 0;
    }
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x4e5,0,0,"%s",
                               "STAllPlayersC::GetActiveCenter ACT_LEFT invalid game type");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_1 != nullptr) {
      *param_1 = 0xffff;
    }
    goto joined_r0x0042dcbd;
  }
  if (g_packedRecords_A62x8[uVar7].field200_0x203 == 1) {
    iVar4 = g_packedRecords_A62x8[uVar7].field149_0x1b3;
    if (0x19a < iVar4) {
      if (iVar4 == 0x1a4) {
        SVar10 = CASE_5;
LAB_0042da27:
        pSVar6 = st::fn_004028BA(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar7].field150_0x1b7,
                           g_packedRecords_A62x8[uVar7].field154_0x1bb,SVar10);
        st::fn_004018C5
                  ((STFishC *)pSVar6,(short *)&local_8,(undefined2 *)&local_c,
                   (undefined2 *)&local_10);
      }
      else {
        if (iVar4 != 0x1b8) {
LAB_0042dbdf:
          iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x537,0,0,
                                     "%s","STAllPlayersC::GetActiveCenter ACT_RIGHT invalid game type");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto joined_r0x0042dc09;
        }
        pSVar6 = st::fn_004028BA(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar7].field150_0x1b7,
                           g_packedRecords_A62x8[uVar7].field154_0x1bb,CASE_6);
        st::fn_004018C5
                  ((STFishC *)pSVar6,(short *)&local_8,(undefined2 *)&local_c,
                   (undefined2 *)&local_10);
      }
      if (param_1 != nullptr) {
        *param_1 = (undefined2)local_8;
      }
joined_r0x0042dc56:
      if (param_2 != nullptr) {
        *param_2 = (undefined2)local_c;
      }
      if (param_3 == nullptr) {
        return 0;
      }
      *param_3 = (undefined2)local_10;
      return 0;
    }
    if (iVar4 == 0x19a) {
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar7].field155_0x1bd;
      iVar8 = 0;
      iVar4 = 0;
      dVar2 = pDVar1->count;
      iVar9 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0 < (int)dVar2) {
        do {
          st::fn_006ACC70(pDVar1,local_18,local_14);
          if (STPiece<0,2>(local_14) != 0xffff) {
            local_1c = local_1c + 1;
            pSVar6 = st::fn_004028BA(g_allPlayers_007FA174,
                               g_packedRecords_A62x8[DAT_0080874d].field150_0x1b7,STPiece<0,2>(local_14),
                               CASE_1);
            st::fn_004018C5
                      ((STFishC *)pSVar6,(short *)&local_8,(undefined2 *)&local_c,
                       (undefined2 *)&local_10);
            iVar8 = iVar8 + local_8;
            iVar9 = iVar9 + local_c;
            iVar4 = iVar4 + local_10;
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)dVar2);
        if (0 < local_1c) {
          if (param_1 != nullptr) {
            *param_1 = (short)((int)(short)iVar8 / local_1c);
          }
          if (param_2 != nullptr) {
            *param_2 = (short)((int)(short)iVar9 / local_1c);
          }
          if (param_3 == nullptr) {
            return 0;
          }
          *param_3 = (short)((int)(short)iVar4 / local_1c);
          return 0;
        }
      }
      if (param_1 != nullptr) {
        *param_1 = 0xffff;
      }
      goto joined_r0x0042de37;
    }
    if (iVar4 != 0) {
      if (iVar4 == 0x5a) {
        pSVar6 = st::fn_004028BA(g_allPlayers_007FA174,g_packedRecords_A62x8[uVar7].field150_0x1b7,
                           g_packedRecords_A62x8[uVar7].field154_0x1bb,CASE_4);
        st::fn_004018C5
                  ((STFishC *)pSVar6,(short *)&local_8,(undefined2 *)&local_c,
                   (undefined2 *)&local_10);
        if (param_1 != nullptr) {
          *param_1 = (undefined2)local_8;
        }
        goto joined_r0x0042dc56;
      }
      if (iVar4 != 0x172) goto LAB_0042dbdf;
      SVar10 = CASE_2;
      goto LAB_0042da27;
    }
  }
  else {
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x53e,0,0,"%s",
                               "STAllPlayersC::GetActiveCenter");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
joined_r0x0042dc09:
  if (param_1 != nullptr) {
    *param_1 = 0xffff;
  }
joined_r0x0042dcbd:
  if (param_2 != nullptr) {
    *param_2 = 0xffff;
  }
  if (param_3 == nullptr) {
    return 0xffffffff;
  }
  *param_3 = 0xffff;
  return 0xffffffff;
}

// 0042DFE0 STAllPlayersC::PrepareToCmd
#line 4 "decomp/ST.exe/functions/0042DFE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PrepareToCmd */

uint __thiscall st::fn_0042DFE0(STAllPlayersC *this,undefined4 *param_1,uint *param_2)

{
  DArrayTy *array;
  dword dVar1;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  STGameObjC *pSVar6;
  byte *puVar7;
  byte *puVar9;
  uint *local_10;
  int local_c;
  DArrayTy *local_8;

  puVar3 = param_2;
  local_c = 0xffff;
  local_10 = (uint *)0xffff;
  local_8 = nullptr;
  if (param_1 != nullptr) {
    *param_1 = 0;
  }
  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  uVar5 = (uint)DAT_0080874d;
  if (g_packedRecords_A62x8[uVar5].field200_0x203 == 0) {
    if (*(uint *)&g_packedRecords_A62x8[uVar5].field97_0x167 == uVar5) {
      if (g_packedRecords_A62x8[uVar5].field96_0x163 == 0x3c) {
        local_10 = (uint *)st::fn_004053A8(DAT_0080874d,(int *)&local_8);
        local_c = 0;
        if ((short)local_10 == 0x7fff) {
          uVar5 = local_8->count * local_8->elementSize;
          if (puVar3 != nullptr) {
            *puVar3 = uVar5;
          }
          if (param_1 != nullptr) {
            puVar7 = (byte *)(st::fn_006AAC70(uVar5));
            *param_1 = puVar7;
            puVar9 = (byte *)(local_8->data);
            memmove(puVar7, puVar9, uVar5); /* compiler REP MOVS byte copy */
            uVar5 = 0;
          }
        }
        st::fn_006AE110(local_8);
      }
      else if (g_packedRecords_A62x8[uVar5].field96_0x163 == 0x1ae) {
        local_c = 2;
        local_10 = (uint *)(uint)(ushort)g_packedRecords_A62x8[uVar5].field101_0x16b;
      }
    }
  }
  else if (g_packedRecords_A62x8[uVar5].field200_0x203 == 1) {
    if ((*(uint *)&g_packedRecords_A62x8[uVar5].field150_0x1b7 == uVar5) &&
       (g_packedRecords_A62x8[uVar5].field149_0x1b3 == 0x19a)) {
      array = (DArrayTy *)g_packedRecords_A62x8[uVar5].field155_0x1bd;
      uVar5 = 0;
      dVar1 = array->count;
      if (0 < (int)dVar1) {
        do {
          st::fn_006ACC70(array,uVar5,&param_2);
          if (((ushort)param_2 != 0xffff) &&
             (pSVar6 = st::fn_004028BA(this,DAT_0080874d,(ushort)param_2,CASE_1),
             (*(byte *)&pSVar6->field_01D1 & 4) == 0)) {
            local_c = 1;
            local_10 = param_2;
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)dVar1);
      }
    }
  }
  else {
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x58f,0,0,"%s",
                               "STAllPlayersC::PrepareToCmd invalid panel number");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return local_c << 0x10 | (uint)local_10 & 0xffff;
}

// 0042E210 STAllPlayersC::RegisterObject
#line 4 "decomp/ST.exe/functions/0042E210/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042E21D MOVSX ECX,byte ptr [EBP + 0x8] | 0042EB6F MOVSX
   EAX,byte ptr [EBP + 0x8] | 0042EC4D MOVSX ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
st::fn_0042E210
          (STAllPlayersC *this,char param_1,uint param_2,uint param_3,int *param_4,int param_5,
          int param_6)

{
  uint uVar2;
  MoneyTy *pMVar3;
  DArrayTy *pDVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  InternalExceptionFrame local_94;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  DArrayTy *local_28;
  DArrayTy *local_24;
  uint local_20;
  DArrayTy *local_1c;
  STAllPlayersC *local_18;
  uint local_14;
  undefined1 local_10 [4];
  STGroupBoatC *local_c;
  short local_6;

  iVar9 = (int)param_1;
  local_1c = (DArrayTy *)g_packedRecords_A62x8[iVar9].field2_0x5;
  local_28 = (DArrayTy *)g_packedRecords_A62x8[iVar9].field3_0x9;
  local_24 = (DArrayTy *)g_packedRecords_A62x8[iVar9].field355_0x2e7;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  local_18 = this;
  iVar9 = st::fn_0072D7F0(local_94.jumpBuffer,0);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_94.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x67e,0,iVar9,"%s",
                               "STAllPlayersC::RegisterObject");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar9,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x67f);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_4 == nullptr) {
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x5bd);
  }
  pDVar4 = local_28;
  if ((ushort)param_3 == 0xffff) {
    uVar12 = local_28->count;
  }
  else {
    iVar9 = st::fn_00404606(param_1,(ushort)param_3);
    if (iVar9 == 1) {
      st::fn_006A5E40
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x5c0);
    }
    uVar12 = param_3 & 0xffff;
  }
  local_20 = uVar12;
  st::fn_006AE140(pDVar4,uVar12,&param_4);
  st::fn_004013E8(param_4,(ushort)uVar12);
  if (param_4[8] == 0x14) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar9 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar9 + 0x41U) & 0x1f))
        == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar9 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar9 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar9 + 0x41U) & 0x1f)
          ) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar9 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar9 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) goto LAB_0042e3eb;
        piVar5 = &g_packedRecords_A62x8[param_1].field20_0x33;
      }
      else {
        piVar5 = &g_packedRecords_A62x8[param_1].field19_0x2f;
      }
    }
    else {
      piVar5 = &g_packedRecords_A62x8[param_1].field18_0x2b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e3eb:
  if (param_4[8] == 1000) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar9 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar9 - 0x32U) & 0x1f))
        == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar9 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar9 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar9 - 0x32U) & 0x1f)
          ) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar9 = (**(code **)(*param_4 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((*(uint *)(&DAT_008014a0 + (iVar9 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0) &&
           (iVar9 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar9 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0)) goto LAB_0042e4fd;
        piVar5 = &g_packedRecords_A62x8[param_1].field24_0x43;
      }
      else {
        piVar5 = &g_packedRecords_A62x8[param_1].field23_0x3f;
      }
    }
    else {
      piVar5 = &g_packedRecords_A62x8[param_1].field22_0x3b;
    }
    *piVar5 = *piVar5 + 1;
  }
LAB_0042e4fd:
  iVar9 = param_5;
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 0x14) {
    iVar6 = (int)param_1;
    g_packedRecords_A62x8[iVar6].field4_0xd = g_packedRecords_A62x8[iVar6].field4_0xd + 1;
    if (pMVar3 != nullptr) {
      st::fn_0040161D(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar6].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (iVar7 != 0x19) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar7 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar7 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar7 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar7 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar7 + 0x41U) & 0x1f)) == 0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar7 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f))
                        == 0) {
                      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x613,0,0,
                                                 "%s",
                                                 "STAllPlayersC::RegisterObject unknown boat type");
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar6].field54_0xbb =
                           g_packedRecords_A62x8[iVar6].field54_0xbb + 1;
                      if (iVar9 == 0) {
                        g_packedRecords_A62x8[iVar6].field55_0xbf =
                             g_packedRecords_A62x8[iVar6].field55_0xbf + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar6].field50_0xab =
                         g_packedRecords_A62x8[iVar6].field50_0xab + 1;
                    if (iVar9 == 0) {
                      g_packedRecords_A62x8[iVar6].field51_0xaf =
                           g_packedRecords_A62x8[iVar6].field51_0xaf + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar6].field46_0x9b =
                       g_packedRecords_A62x8[iVar6].field46_0x9b + 1;
                  if (iVar9 == 0) {
                    g_packedRecords_A62x8[iVar6].field47_0x9f =
                         g_packedRecords_A62x8[iVar6].field47_0x9f + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar6].field42_0x8b =
                     g_packedRecords_A62x8[iVar6].field42_0x8b + 1;
                if (iVar9 == 0) {
                  g_packedRecords_A62x8[iVar6].field43_0x8f =
                       g_packedRecords_A62x8[iVar6].field43_0x8f + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar6].field38_0x7b =
                   g_packedRecords_A62x8[iVar6].field38_0x7b + 1;
              if (iVar9 == 0) {
                g_packedRecords_A62x8[iVar6].field39_0x7f =
                     g_packedRecords_A62x8[iVar6].field39_0x7f + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar6].field34_0x6b =
                 g_packedRecords_A62x8[iVar6].field34_0x6b + 1;
            if (iVar9 == 0) {
              g_packedRecords_A62x8[iVar6].field35_0x6f =
                   g_packedRecords_A62x8[iVar6].field35_0x6f + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar6].field30_0x5b = g_packedRecords_A62x8[iVar6].field30_0x5b + 1;
          if (iVar9 == 0) {
            g_packedRecords_A62x8[iVar6].field31_0x5f =
                 g_packedRecords_A62x8[iVar6].field31_0x5f + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar6].field26_0x4b = g_packedRecords_A62x8[iVar6].field26_0x4b + 1;
        if (iVar9 == 0) {
          g_packedRecords_A62x8[iVar6].field27_0x4f = g_packedRecords_A62x8[iVar6].field27_0x4f + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 1000) {
    iVar6 = (int)param_1;
    g_packedRecords_A62x8[iVar6].field4_0xd = g_packedRecords_A62x8[iVar6].field4_0xd + 1;
    if (pMVar3 != nullptr) {
      st::fn_0040161D(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar6].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (iVar7 == 0x33) {
      g_packedRecords_A62x8[iVar6].field94_0x15b = g_packedRecords_A62x8[iVar6].field94_0x15b + 1;
    }
    else if (iVar7 == 0x62) {
      g_packedRecords_A62x8[iVar6].field95_0x15f = g_packedRecords_A62x8[iVar6].field95_0x15f + 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar7 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar7 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar7 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f)) ==
                      0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar7 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar7 - 0x32U >> 5] & 1 << ((byte)(iVar7 - 0x32U) & 0x1f))
                        == 0) {
                      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x653,0,0,
                                                 "%s",
                                                 "STAllPlayersC::RegisterObject unknown object type");
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar6].field90_0x14b =
                           g_packedRecords_A62x8[iVar6].field90_0x14b + 1;
                      if (iVar9 == 0) {
                        g_packedRecords_A62x8[iVar6].field91_0x14f =
                             g_packedRecords_A62x8[iVar6].field91_0x14f + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar6].field86_0x13b =
                         g_packedRecords_A62x8[iVar6].field86_0x13b + 1;
                    if (iVar9 == 0) {
                      g_packedRecords_A62x8[iVar6].field87_0x13f =
                           g_packedRecords_A62x8[iVar6].field87_0x13f + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar6].field82_0x12b =
                       g_packedRecords_A62x8[iVar6].field82_0x12b + 1;
                  if (iVar9 == 0) {
                    g_packedRecords_A62x8[iVar6].field83_0x12f =
                         g_packedRecords_A62x8[iVar6].field83_0x12f + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar6].field78_0x11b =
                     g_packedRecords_A62x8[iVar6].field78_0x11b + 1;
                if (iVar9 == 0) {
                  g_packedRecords_A62x8[iVar6].field79_0x11f =
                       g_packedRecords_A62x8[iVar6].field79_0x11f + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar6].field74_0x10b =
                   g_packedRecords_A62x8[iVar6].field74_0x10b + 1;
              if (iVar9 == 0) {
                g_packedRecords_A62x8[iVar6].field75_0x10f =
                     g_packedRecords_A62x8[iVar6].field75_0x10f + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar6].field70_0xfb =
                 g_packedRecords_A62x8[iVar6].field70_0xfb + 1;
            if (iVar9 == 0) {
              g_packedRecords_A62x8[iVar6].field71_0xff =
                   g_packedRecords_A62x8[iVar6].field71_0xff + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar6].field66_0xeb = g_packedRecords_A62x8[iVar6].field66_0xeb + 1;
          if (iVar9 == 0) {
            g_packedRecords_A62x8[iVar6].field67_0xef =
                 g_packedRecords_A62x8[iVar6].field67_0xef + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar6].field62_0xdb = g_packedRecords_A62x8[iVar6].field62_0xdb + 1;
        if (iVar9 == 0) {
          g_packedRecords_A62x8[iVar6].field63_0xdf = g_packedRecords_A62x8[iVar6].field63_0xdf + 1;
        }
      }
    }
    else {
      g_packedRecords_A62x8[iVar6].field58_0xcb = g_packedRecords_A62x8[iVar6].field58_0xcb + 1;
      if (iVar9 == 0) {
        g_packedRecords_A62x8[iVar6].field59_0xcf = g_packedRecords_A62x8[iVar6].field59_0xcf + 1;
      }
    }
  }
  uVar10 = (ushort)param_2;
  if (uVar10 == 0xfffe) {
LAB_0042eb3e:
    uVar12 = local_1c->count;
    local_14 = uVar12;
    uVar2 = uVar12;
    if (uVar12 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        st::fn_006ACC70(local_1c,uVar2,&local_c);
        if (local_c == nullptr) {
          uVar12 = uVar2;
          local_14 = uVar2;
        }
      }
    }
    local_4c = (int)param_1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_44 = 1;
    local_3c = uVar12;
    g_playSystem_00802A38->vfunc_08(0x10ff,(short)local_10,(short)&local_c,(short)local_50,0);
    st::fn_006AE140(local_1c,uVar12,&local_c);
    iVar9 = param_5;
  }
  else {
    if (((uVar10 != 0xffff) && (iVar9 == 0)) &&
       (local_c = st::fn_00405CF9(param_1,uVar10), local_c == nullptr)) {
      param_2 = 0xfffe;
    }
    uVar12 = local_14;
    if ((short)param_2 == -2) goto LAB_0042eb3e;
  }
  uVar10 = (ushort)param_2;
  if (uVar10 == 0xfffe) {
LAB_0042ebe7:
    uVar11 = (ushort)uVar12;
    if (uVar10 != 0xffff) goto LAB_0042ebf6;
  }
  else if (uVar10 != 0xffff) {
    local_c = st::fn_00405CF9(param_1,uVar10);
    uVar12 = param_2 & 0xffff;
    local_14 = uVar12;
    goto LAB_0042ebe7;
  }
  uVar11 = 0xffff;
  local_14 = 0xffff;
LAB_0042ebf6:
  st::fn_004033BE(param_4,uVar11);
  if (((iVar9 == 0) || (param_6 == 1)) && (uVar10 != 0xffff)) {
    st::fn_0040340E((STGroupC *)local_c,local_20,(uint)(uVar10 != 0xfffe));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar9 = (**(code **)(*param_4 + 0x2c))();
  if (iVar9 == 0x1d) {
    if (local_24 == nullptr) {
      local_24 = st::fn_006AE290(nullptr,1,2,1);
      g_packedRecords_A62x8[param_1].field355_0x2e7 = local_24;
    }
    pDVar4 = local_24;
    uVar12 = local_24->count;
    uVar2 = uVar12;
    if (uVar12 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        st::fn_006ACC70(pDVar4,uVar2,&local_6);
        if (local_6 == -1) {
          uVar12 = uVar2;
        }
      }
    }
    st::fn_006AE140(pDVar4,uVar12,(void *)((int)param_4 + 0x32));
  }
  g_currentExceptionFrame = local_94.previous;
  return 0;
}

// 0042EFD0 STAllPlayersC::RegisterGroup
#line 4 "decomp/ST.exe/functions/0042EFD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterGroup
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042F03A MOV ESI,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __thiscall
st::fn_0042EFD0(STAllPlayersC *this,char param_1,ushort param_2,int param_3)

{
  DArrayTy *array;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  local_c = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x690);
    }
    array = local_c;
    iVar2 = st::fn_006ACC70(local_c,(uint)param_2,&local_8);
    if ((iVar2 != -4) && (local_8 != 0)) {
      st::fn_006A5E40
                (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x692);
    }
    st::fn_006AE140(array,(uint)param_2,&param_3);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x695,0,iVar2,"%s",
                             "STAllPlayersC::RegisterGroup");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x696);
  return 0xffffffff;
}

// 0042F140 STAllPlayersC::UnRegisterGroup
#line 4 "decomp/ST.exe/functions/0042F140/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterGroup
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0042F1AF MOV ESI,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __thiscall
st::fn_0042F140(STAllPlayersC *this,char param_1,ushort param_2,int param_3)

{
  DArrayTy *array;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  local_c = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x6a7);
    }
    array = local_c;
    iVar2 = st::fn_006ACC70(local_c,(uint)param_2,&local_8);
    if ((iVar2 == -4) || (local_8 != param_3)) {
      st::fn_006A5E40
                (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x6a9);
    }
    local_8 = 0;
    st::fn_006AE140(array,(uint)param_2,&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x6ad,0,iVar2,"%s",
                             "STAllPlayersC::UnRegisterGroup");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x6ae);
  return 0xffffffff;
}

// 0042F2B0 STAllPlayersC::UnRegisterObject
#line 4 "decomp/ST.exe/functions/0042F2B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042F2BA MOVSX ECX,byte ptr [EBP + 0x8] | 0042F37C MOVSX
   ECX,byte ptr [EBP + 0x8] | 0042F3C7 MOVSX ECX,byte ptr [EBP + 0x8] | 0042F40F MOVSX ECX,byte ptr
   [EBP + 0x8] | 0042F468 MOVSX ECX,byte ptr [EBP + 0x8] | 0042F4B3 MOVSX ECX,byte ptr [EBP + 0x8] |
   0042F527 MOVSX ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
st::fn_0042F2B0
          (STAllPlayersC *this,char param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int *piVar1;
  MoneyTy *pMVar3;
  STAllPlayersC *this_00;
  STGroupBoatC *pSVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  STGameObjC *pSVar8;
  DArrayTy *pDVar9;
  int iVar10;
  uint uVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_68;
  dword local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  STAllPlayersC *local_18;
  DArrayTy *local_14;
  STGroupBoatC *local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar10 = (int)param_1;
  local_c = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[iVar10].field3_0x9;
  local_1c = (DArrayTy *)g_packedRecords_A62x8[iVar10].field2_0x5;
  local_20 = (DArrayTy *)g_packedRecords_A62x8[iVar10].field355_0x2e7;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar10 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar10 == -0x5001fff7) {
      return 0;
    }
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x7cd,0,iVar10,"%s"
                               ,"STAllPlayersC::UnRegisterObject");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar10,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x7ce);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((ushort)param_3 == 0xffff) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x6cd);
  }
  if (param_4[8] == 0x14) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar10 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar10 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar10 + 0x41U) & 0x1f)
        ) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar10 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar10 + 0x41U >> 5) * 4) &
          1 << ((byte)(iVar10 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar10 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar10 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar10 + 0x41U) & 0x1f)) == 0) goto LAB_0042f42f;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field20_0x33 =
             g_packedRecords_A62x8[param_1].field20_0x33 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field19_0x2f =
             g_packedRecords_A62x8[param_1].field19_0x2f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar10 = param_1 * 0xa62;
      g_packedRecords_A62x8[param_1].field18_0x2b = g_packedRecords_A62x8[param_1].field18_0x2b + -1
      ;
    }
    piVar1 = (int *)((int)&g_packedRecords_A62x8[0].field21_0x37 + iVar10);
    *piVar1 = *piVar1 + 1;
  }
LAB_0042f42f:
  if (param_4[8] == 1000) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar10 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar10 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar10 - 0x32U) & 0x1f)
        ) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar10 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar10 - 0x32U >> 5) * 4) &
          1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar10 = (**(code **)(*param_4 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((*(uint *)(&DAT_008014a0 + (iVar10 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0) &&
           (iVar10 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar10 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar10 - 0x32U) & 0x1f)) == 0)) goto LAB_0042f547;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field24_0x43 =
             g_packedRecords_A62x8[param_1].field24_0x43 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        iVar10 = param_1 * 0xa62;
        g_packedRecords_A62x8[param_1].field23_0x3f =
             g_packedRecords_A62x8[param_1].field23_0x3f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar10 = param_1 * 0xa62;
      g_packedRecords_A62x8[param_1].field22_0x3b = g_packedRecords_A62x8[param_1].field22_0x3b + -1
      ;
    }
    piVar1 = (int *)((int)&g_packedRecords_A62x8[0].field25_0x47 + iVar10);
    *piVar1 = *piVar1 + 1;
  }
LAB_0042f547:
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 0x14) {
    iVar10 = (int)param_1;
    g_packedRecords_A62x8[iVar10].field4_0xd = g_packedRecords_A62x8[iVar10].field4_0xd + -1;
    if (pMVar3 != nullptr) {
      st::fn_0040161D(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar10].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (iVar6 != 0x19) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar6 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar6 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar6 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar6 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar6 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar6 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f))
                        == 0) {
                      iVar10 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x73c,0,0
                                                  ,"%s",
                                                  "STAllPlayersC::UnRegisterObject unknown boat type");
                      if (iVar10 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar10].field54_0xbb =
                           g_packedRecords_A62x8[iVar10].field54_0xbb + -1;
                      if ((param_5 != 0xfe) &&
                         (g_packedRecords_A62x8[iVar10].field56_0xc3 =
                               g_packedRecords_A62x8[iVar10].field56_0xc3 + 1, param_5 != 0xff)) {
                        g_packedRecords_A62x8[param_5].field57_0xc7 =
                             g_packedRecords_A62x8[param_5].field57_0xc7 + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar10].field50_0xab =
                         g_packedRecords_A62x8[iVar10].field50_0xab + -1;
                    if ((param_5 != 0xfe) &&
                       (g_packedRecords_A62x8[iVar10].field52_0xb3 =
                             g_packedRecords_A62x8[iVar10].field52_0xb3 + 1, param_5 != 0xff)) {
                      g_packedRecords_A62x8[param_5].field53_0xb7 =
                           g_packedRecords_A62x8[param_5].field53_0xb7 + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar10].field46_0x9b =
                       g_packedRecords_A62x8[iVar10].field46_0x9b + -1;
                  if ((param_5 != 0xfe) &&
                     (g_packedRecords_A62x8[iVar10].field48_0xa3 =
                           g_packedRecords_A62x8[iVar10].field48_0xa3 + 1, param_5 != 0xff)) {
                    g_packedRecords_A62x8[param_5].field49_0xa7 =
                         g_packedRecords_A62x8[param_5].field49_0xa7 + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar10].field42_0x8b =
                     g_packedRecords_A62x8[iVar10].field42_0x8b + -1;
                if ((param_5 != 0xfe) &&
                   (g_packedRecords_A62x8[iVar10].field44_0x93 =
                         g_packedRecords_A62x8[iVar10].field44_0x93 + 1, param_5 != 0xff)) {
                  g_packedRecords_A62x8[param_5].field45_0x97 =
                       g_packedRecords_A62x8[param_5].field45_0x97 + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar10].field38_0x7b =
                   g_packedRecords_A62x8[iVar10].field38_0x7b + -1;
              if ((param_5 != 0xfe) &&
                 (g_packedRecords_A62x8[iVar10].field40_0x83 =
                       g_packedRecords_A62x8[iVar10].field40_0x83 + 1, param_5 != 0xff)) {
                g_packedRecords_A62x8[param_5].field41_0x87 =
                     g_packedRecords_A62x8[param_5].field41_0x87 + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar10].field34_0x6b =
                 g_packedRecords_A62x8[iVar10].field34_0x6b + -1;
            if ((param_5 != 0xfe) &&
               (g_packedRecords_A62x8[iVar10].field36_0x73 =
                     g_packedRecords_A62x8[iVar10].field36_0x73 + 1, param_5 != 0xff)) {
              g_packedRecords_A62x8[param_5].field37_0x77 =
                   g_packedRecords_A62x8[param_5].field37_0x77 + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar10].field30_0x5b =
               g_packedRecords_A62x8[iVar10].field30_0x5b + -1;
          if ((param_5 != 0xfe) &&
             (g_packedRecords_A62x8[iVar10].field32_0x63 =
                   g_packedRecords_A62x8[iVar10].field32_0x63 + 1, param_5 != 0xff)) {
            g_packedRecords_A62x8[param_5].field33_0x67 =
                 g_packedRecords_A62x8[param_5].field33_0x67 + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar10].field26_0x4b = g_packedRecords_A62x8[iVar10].field26_0x4b + -1
        ;
        if ((param_5 != 0xfe) &&
           (g_packedRecords_A62x8[iVar10].field28_0x53 =
                 g_packedRecords_A62x8[iVar10].field28_0x53 + 1, param_5 != 0xff)) {
          g_packedRecords_A62x8[param_5].field29_0x57 =
               g_packedRecords_A62x8[param_5].field29_0x57 + 1;
        }
      }
    }
  }
  pMVar3 = g_money_008016D4;
  if (param_4[8] == 1000) {
    iVar10 = (int)param_1;
    g_packedRecords_A62x8[iVar10].field4_0xd = g_packedRecords_A62x8[iVar10].field4_0xd + -1;
    if (pMVar3 != nullptr) {
      st::fn_0040161D(pMVar3,param_1,(uint)(ushort)g_packedRecords_A62x8[iVar10].field4_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (iVar6 == 0x33) {
      g_packedRecords_A62x8[iVar10].field94_0x15b = g_packedRecords_A62x8[iVar10].field94_0x15b + -1
      ;
    }
    else if (iVar6 == 0x62) {
      g_packedRecords_A62x8[iVar10].field95_0x15f = g_packedRecords_A62x8[iVar10].field95_0x15f + -1
      ;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar6 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar6 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar6 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar6 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) ==
                      0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar6 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f))
                        == 0) {
                      iVar10 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x797,0,0
                                                  ,"%s",
                                                  "STAllPlayersC::UnRegisterObject unknown object type");
                      if (iVar10 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      g_packedRecords_A62x8[iVar10].field90_0x14b =
                           g_packedRecords_A62x8[iVar10].field90_0x14b + -1;
                      if ((param_5 != 0xfe) &&
                         (g_packedRecords_A62x8[iVar10].field92_0x153 =
                               g_packedRecords_A62x8[iVar10].field92_0x153 + 1, param_5 != 0xff)) {
                        g_packedRecords_A62x8[param_5].field93_0x157 =
                             g_packedRecords_A62x8[param_5].field93_0x157 + 1;
                      }
                    }
                  }
                  else {
                    g_packedRecords_A62x8[iVar10].field86_0x13b =
                         g_packedRecords_A62x8[iVar10].field86_0x13b + -1;
                    if ((param_5 != 0xfe) &&
                       (g_packedRecords_A62x8[iVar10].field88_0x143 =
                             g_packedRecords_A62x8[iVar10].field88_0x143 + 1, param_5 != 0xff)) {
                      g_packedRecords_A62x8[param_5].field89_0x147 =
                           g_packedRecords_A62x8[param_5].field89_0x147 + 1;
                    }
                  }
                }
                else {
                  g_packedRecords_A62x8[iVar10].field82_0x12b =
                       g_packedRecords_A62x8[iVar10].field82_0x12b + -1;
                  if ((param_5 != 0xfe) &&
                     (g_packedRecords_A62x8[iVar10].field84_0x133 =
                           g_packedRecords_A62x8[iVar10].field84_0x133 + 1, param_5 != 0xff)) {
                    g_packedRecords_A62x8[param_5].field85_0x137 =
                         g_packedRecords_A62x8[param_5].field85_0x137 + 1;
                  }
                }
              }
              else {
                g_packedRecords_A62x8[iVar10].field78_0x11b =
                     g_packedRecords_A62x8[iVar10].field78_0x11b + -1;
                if ((param_5 != 0xfe) &&
                   (g_packedRecords_A62x8[iVar10].field80_0x123 =
                         g_packedRecords_A62x8[iVar10].field80_0x123 + 1, param_5 != 0xff)) {
                  g_packedRecords_A62x8[param_5].field81_0x127 =
                       g_packedRecords_A62x8[param_5].field81_0x127 + 1;
                }
              }
            }
            else {
              g_packedRecords_A62x8[iVar10].field74_0x10b =
                   g_packedRecords_A62x8[iVar10].field74_0x10b + -1;
              if ((param_5 != 0xfe) &&
                 (g_packedRecords_A62x8[iVar10].field76_0x113 =
                       g_packedRecords_A62x8[iVar10].field76_0x113 + 1, param_5 != 0xff)) {
                g_packedRecords_A62x8[param_5].field77_0x117 =
                     g_packedRecords_A62x8[param_5].field77_0x117 + 1;
              }
            }
          }
          else {
            g_packedRecords_A62x8[iVar10].field70_0xfb =
                 g_packedRecords_A62x8[iVar10].field70_0xfb + -1;
            if ((param_5 != 0xfe) &&
               (g_packedRecords_A62x8[iVar10].field72_0x103 =
                     g_packedRecords_A62x8[iVar10].field72_0x103 + 1, param_5 != 0xff)) {
              g_packedRecords_A62x8[param_5].field73_0x107 =
                   g_packedRecords_A62x8[param_5].field73_0x107 + 1;
            }
          }
        }
        else {
          g_packedRecords_A62x8[iVar10].field66_0xeb =
               g_packedRecords_A62x8[iVar10].field66_0xeb + -1;
          if ((param_5 != 0xfe) &&
             (g_packedRecords_A62x8[iVar10].field68_0xf3 =
                   g_packedRecords_A62x8[iVar10].field68_0xf3 + 1, param_5 != 0xff)) {
            g_packedRecords_A62x8[param_5].field69_0xf7 =
                 g_packedRecords_A62x8[param_5].field69_0xf7 + 1;
          }
        }
      }
      else {
        g_packedRecords_A62x8[iVar10].field62_0xdb = g_packedRecords_A62x8[iVar10].field62_0xdb + -1
        ;
        if ((param_5 != 0xfe) &&
           (g_packedRecords_A62x8[iVar10].field64_0xe3 =
                 g_packedRecords_A62x8[iVar10].field64_0xe3 + 1, param_5 != 0xff)) {
          g_packedRecords_A62x8[param_5].field65_0xe7 =
               g_packedRecords_A62x8[param_5].field65_0xe7 + 1;
        }
      }
    }
    else {
      g_packedRecords_A62x8[iVar10].field58_0xcb = g_packedRecords_A62x8[iVar10].field58_0xcb + -1;
      if ((param_5 != 0xfe) &&
         (g_packedRecords_A62x8[iVar10].field60_0xd3 =
               g_packedRecords_A62x8[iVar10].field60_0xd3 + 1, param_5 != 0xff)) {
        g_packedRecords_A62x8[param_5].field61_0xd7 =
             g_packedRecords_A62x8[param_5].field61_0xd7 + 1;
      }
    }
  }
  this_00 = local_18;
  pSVar8 = st::fn_004028BA(local_18,param_1,(ushort)param_3,CASE_1);
  if (pSVar8 != (STGameObjC *)param_4) {
    st::fn_006A5E40
              (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x7a3);
  }
  if ((ushort)param_2 != 0xffff) {
    local_10 = st::fn_00405CF9(param_1,(ushort)param_2);
    if (local_10 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a5);
    }
    iVar10 = st::fn_00402F9F(local_10,(ushort)param_3);
    if (iVar10 == 0) {
      st::fn_006A5E40
                (-0x5001fffd,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a6);
    }
  }
  st::fn_00402653(_param_1,param_3);
  st::fn_004021A3(this_00,DAT_0080874d,param_4[8],param_1,param_3);
  st::fn_00403643(this_00,param_4[8],param_1,(ushort)param_3);
  pSVar4 = local_10;
  pDVar9 = local_14;
  uVar11 = param_3;
  if ((ushort)param_2 != 0xffff) {
    local_10->vfunc_04((ushort)param_3);
    st::fn_006AE140(local_14,param_3 & 0xffff,&local_c);
    sVar5 = st::fn_00401735(pSVar4);
    if ((sVar5 != 0) || (iVar10 = st::fn_00405452((int)pSVar4), iVar10 != 0)) goto LAB_00430018;
    st::fn_0040432C(g_playSystem_00802A38,pSVar4->field_0008);
    pDVar9 = local_1c;
    uVar11 = param_2;
  }
  st::fn_006AE140(pDVar9,uVar11 & 0xffff,&local_c);
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00430018:
  iVar10 = (**(code **)(*param_4 + 0x2c))();
  pDVar9 = local_20;
  if ((iVar10 == 0x1d) && (local_20 != nullptr)) {
    local_24 = local_20->count;
    uVar11 = 0;
    if (0 < (int)local_24) {
      while( true ) {
        st::fn_006ACC70(pDVar9,uVar11,&local_8);
        if ((ushort)local_8 == (ushort)param_3) break;
        uVar11 = uVar11 + 1;
        if ((int)local_24 <= (int)uVar11) {
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      local_8 = 0xffff;
      st::fn_006AE140(pDVar9,uVar11,&local_8);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

// 00430470 STAllPlayersC::RegisterTorpedo
#line 4 "decomp/ST.exe/functions/00430470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterTorpedo */

undefined4 __thiscall st::fn_00430470(STAllPlayersC *this,int param_1,short param_2)

{
  uint index;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint index_00;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_2 == -1) {
      if (param_1 == 0) {
        st::fn_006A5E40
                  (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x7e2);
      }
      index_00 = g_array_007FA130->count;
      index = index_00;
      if (index_00 != 0) {
        while (index = index - 1, -1 < (int)index) {
          st::fn_006ACC70(g_array_007FA130,index,&local_8);
          if (local_8 == 0) {
            index_00 = index;
          }
        }
      }
    }
    else {
      index_00 = (uint)param_2;
      if ((index_00 < g_array_007FA130->count) &&
         (st::fn_006ACC70(g_array_007FA130,index_00,&local_8), local_8 != 0)) {
        st::fn_006A5E40
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x7f0);
      }
    }
    st::fn_006AE140(g_array_007FA130,index_00,&param_1);
    DAT_007fa134 = DAT_007fa134 + 1;
    g_currentExceptionFrame = local_4c.previous;
    return STReplaceLowWord((uint32_t)(DAT_007fa134), (uint16_t)((short)index_00));
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x7f6,0,errorCode,
                             "%s","STAllPlayersC::RegisterTorpedo");
  if (iVar2 == 0) {
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x7f7);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return CONCAT22(extraout_var,0xffff);
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 00430620 STAllPlayersC::IsTorpLive
#line 4 "decomp/ST.exe/functions/00430620/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::IsTorpLive */

undefined4 __thiscall st::fn_00430620(STAllPlayersC *this,short param_1,int param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar2 != -0x5001fff7) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x80b,0,iVar2,
                                 "%s","STAllPlayersC::IsTorpLive");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x80c);
    }
    return local_c;
  }
  iVar2 = st::fn_006ACC70(g_array_007FA130,(int)param_1,&local_8);
  if (iVar2 != -4) {
    if (local_8 == 0) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x806);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(local_8 + 0x18) == param_2) {
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_c;
}

// 00430750 FUN_00430750
#line 4 "decomp/ST.exe/functions/00430750/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00430750_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_9B=155;CASE_9C=156;CASE_9D=157;CASE_9E=158;CASE_9F=159;CASE_A0=160;CASE_A1=161;CASE_A3=163;CASE_A4=164;CASE_A5=165;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B4=180;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185;CASE_BA=186;CASE_BF=191

   [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\to_allpl.cpp
   Diagnostic line evidence: 2151 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined1 st::fn_00430750(Global_sub_00430750_param_1Enum param_1)

{
  undefined1 uVar2;
  int iVar3;

  switch(param_1) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
  case CASE_D:
  case CASE_E:
  case CASE_F:
  case CASE_10:
  case CASE_11:
  case CASE_12:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_16:
  case CASE_17:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1C:
  case CASE_1D:
  case CASE_1E:
  case CASE_1F:
  case CASE_20:
  case CASE_21:
  case CASE_22:
  case CASE_23:
  case CASE_24:
  case CASE_25:
  case CASE_26:
  case CASE_27:
  case CASE_28:
    return (&DAT_007dfc6c)[param_1 * 4];
  case CASE_96:
  case CASE_97:
  case CASE_98:
  case CASE_99:
  case CASE_9A:
  case CASE_A1:
  case CASE_AC:
  case CASE_B4:
  case CASE_B7:
  case CASE_B8:
    return 0x30;
  case CASE_9B:
  case CASE_9C:
  case CASE_9D:
  case CASE_9E:
  case CASE_A5:
    return 0xc9;
  case CASE_9F:
  case CASE_A0:
  case CASE_A3:
  case CASE_AE:
  case CASE_BF:
    return 0x60;
  case CASE_A4:
  case CASE_AD:
  case CASE_B6:
  case CASE_BA:
    return 0x48;
  case CASE_AB:
    return 6;
  case CASE_B9:
    return 0x3c;
  }
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x867,0,0,"%s",
                             "GetSpeed: Warning - unknown object type");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 1;
}

// 00430960 STAllPlayersC::UnRegisterTorpedo
#line 4 "decomp/ST.exe/functions/00430960/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterTorpedo */

undefined4 __thiscall
st::fn_00430960(STAllPlayersC *this,short param_1,int param_2)

{
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (g_array_007FA130 != nullptr) {
      st::fn_006ACC70(g_array_007FA130,(int)param_1,&local_8);
      if (local_8 != param_2) {
        st::fn_006A5E40
                  (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x883);
      }
      local_8 = 0;
      st::fn_006AE140(g_array_007FA130,(int)param_1,&local_8);
      DAT_007fa134 = DAT_007fa134 + -1;
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x888,0,errorCode,
                             "%s","STAllPlayersC::UnRegisterTorpedo");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x889);
  return 0xffffffff;
}

// 00430A90 STAllPlayersC::GetMessage
#line 4 "decomp/ST.exe/functions/00430A90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405CA4|00430A90; family_names=STAllPlayersC::GetMessage; ret4=7;
   direct_offsets={10:2,14:0,18:0,1c:0} */

int __thiscall st::fn_00430A90(STAllPlayersC *this,STMessage *message)

{
  byte bVar1;
  STMessageId SVar2;
  DArrayTy *array;
  DArrayTy *array_00;
  dword dVar3;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  int iVar8;
  PackedRecord_A62x8 *pPVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  char cVar14;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  dword local_24;
  int local_20;
  uint local_1c;
  int local_18;
  byte *local_14;
  STAllPlayersC *local_10;
  ushort *local_c;
  int local_8;

  local_c = nullptr;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xa05,0,iVar5,"%s",
                               "STAllPlayersC::GetMessage");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0xa06);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006E5FD0(local_10,message);
  SVar2 = message->id;
  if (SVar2 < 4) {
    if (SVar2 == MESS_SHARED_0003) {
      st::fn_00404F7A();
      local_20 = 0;
      local_14 = (byte *)&g_packedRecords_A62x8[0].field3_0x9;
      do {
        uVar11 = 0;
        array = *(DArrayTy **)((int)local_14 + -4);
        array_00 = *(DArrayTy **)local_14;
        local_24 = array->count;
        local_28 = array_00;
        if (0 < (int)local_24) {
          do {
            st::fn_006ACC70(array,uVar11,&local_18);
            if (local_18 != 0) {
              st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_18 + 8));
              local_18 = 0;
              st::fn_006AE140(array,uVar11,&local_18);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_24);
        }
        dVar3 = array_00->count;
        uVar11 = 0;
        if (0 < (int)dVar3) {
          do {
            st::fn_006ACC70(array_00,uVar11,&local_8);
            if (local_8 != 0) {
              st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_8 + 8));
              local_8 = 0;
              st::fn_006AE140(array_00,uVar11,&local_8);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)dVar3);
        }
        iVar5 = local_20;
        cVar14 = (char)local_20;
        st::fn_0040299B(cVar14);
        st::fn_00403071(cVar14);
        local_20 = iVar5 + 1;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (byte *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar11 = 0;
      dVar3 = g_array_007FA154->count;
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(g_array_007FA154,uVar11,&local_8);
          if (local_8 != 0) {
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            st::fn_006AE140(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA158->count;
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(g_array_007FA158,uVar11,&local_8);
          if (local_8 != 0) {
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            st::fn_006AE140(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA15C->count;
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(g_array_007FA15C,uVar11,&local_8);
          if (local_8 != 0) {
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            st::fn_006AE140(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA160->count;
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(g_array_007FA160,uVar11,&local_8);
          if (local_8 != 0) {
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            st::fn_006AE140(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA164->count;
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(g_array_007FA164,uVar11,&local_8);
          if (local_8 != 0) {
            st::fn_0040432C(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            st::fn_006AE140(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      local_14 = (byte *)&g_packedRecords_A62x8[0].field2_0x5;
      do {
        pbVar6 = local_14;
        st::fn_006AE110(STField<DArrayTy *>(local_14,4));
        st::fn_006AE110(*(DArrayTy **)pbVar6);
        st::fn_006AE110(STField<DArrayTy *>(pbVar6,0x2e2));
        puVar12 = (undefined4 *)((int)pbVar6 + 10);
        iVar5 = 4;
        do {
          st::fn_006AE110((DArrayTy *)*puVar12);
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 5;
        puVar12 = (undefined4 *)((int)local_14 + 0x168);
        do {
          if ((DArrayTy *)*puVar12 != nullptr) {
            st::fn_006AE110((DArrayTy *)*puVar12);
            *puVar12 = 0;
            *(undefined4 *)((int)puVar12 + -10) = 0;
          }
          if ((DArrayTy *)puVar12[0x14] != nullptr) {
            st::fn_006AE110((DArrayTy *)puVar12[0x14]);
            puVar12[0x14] = 0;
            STField<undefined4>(puVar12,0x46) = 0;
          }
          puVar12 = puVar12 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 10;
        puVar12 = (undefined4 *)((int)local_14 + 0x20c);
        do {
          if ((DArrayTy *)*puVar12 != nullptr) {
            st::fn_006AE110((DArrayTy *)*puVar12);
            *puVar12 = 0;
            *(undefined4 *)((int)puVar12 + -10) = 0;
          }
          puVar12 = puVar12 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (byte *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      st::fn_006AE110(g_array_007FA130);
      g_array_007FA130 = nullptr;
      st::fn_006AE110(g_array_007FA154);
      g_array_007FA154 = nullptr;
      st::fn_006AE110(g_array_007FA158);
      g_array_007FA158 = nullptr;
      st::fn_006AE110(g_array_007FA15C);
      g_array_007FA15C = nullptr;
      st::fn_006AE110(g_array_007FA160);
      g_array_007FA160 = nullptr;
      st::fn_006AE110(g_array_007FA164);
      g_array_007FA164 = nullptr;
      if (g_array_007FA150 != nullptr) {
        st::fn_006AE110(g_array_007FA150);
        g_array_007FA150 = nullptr;
      }
      if (DAT_007fa168 != nullptr) {
        st::fn_006AB060(&DAT_007fa168);
      }
      g_allPlayers_007FA174 = nullptr;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      iVar5 = 0;
      local_14 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      piVar13 = &g_packedRecords_A62x8[0].field1981_0xa0a;
      do {
        cVar14 = (char)iVar5;
        if (0x18 < g_playSystem_00802A38->field_00E4 - *piVar13) {
          st::fn_004017FD(this_00,cVar14);
          st::fn_0040100A(this_00,cVar14);
        }
        if ((*local_14 != 0xff) &&
           (st::fn_004059C5(this_00,iVar5), g_playSystem_00802A38->field_00E4 % 10 == 0)) {
          st::fn_004028F6(cVar14);
        }
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        piVar13 = (int *)((int)piVar13 + 0xa62);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 0x51;
      } while ((int)piVar13 < 0x7fab3a);
      st::fn_004050E7(this_00);
      st::fn_004035CB();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_CREATE) {
      pPVar9 = g_packedRecords_A62x8;
      pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0021;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 0x51;
        pPVar9->field0_0x0 = bVar1;
        pPVar9 = pPVar9 + 1;
      } while ((int)pbVar6 < 0x808a70);
      g_array_007FA154 = (DArrayTy *)st::fn_006AE310(nullptr,0,4,1,0x40307b);
      g_array_007FA158 = (DArrayTy *)st::fn_006AE310(nullptr,0,4,1,0x40307b);
      g_array_007FA15C = (DArrayTy *)st::fn_006AE310(nullptr,0,4,1,0x40307b);
      g_array_007FA160 = (DArrayTy *)st::fn_006AE310(nullptr,0,4,1,0x40307b);
      g_array_007FA164 = (DArrayTy *)st::fn_006AE310(nullptr,0,4,1,0x40307b);
      g_array_007FA130 = (DArrayTy *)st::fn_006AE310(nullptr,0,4,1,0x40307b);
      DAT_007fa134 = 0;
      if (g_cMf32_00806754 != nullptr) {
        local_c = st::fn_006F2D90(g_cMf32_00806754,"allplsave",0,0);
      }
      if (local_c == nullptr) {
        piVar13 = nullptr;
        pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        puVar12 = &g_packedRecords_A62x8[0].field2_0x5;
        do {
          puVar7 = st::fn_006AE310(nullptr,0xf,4,5,0x40307b);
          puVar12[1] = puVar7;
          puVar7 = st::fn_006AE310(nullptr,0xf,4,5,0x40307b);
          *puVar12 = puVar7;
          if (*pbVar6 != 0xff) {
            st::fn_004045C0((int)piVar13);
            st::fn_00401FC8(local_10,(int)piVar13);
            cVar14 = (char)piVar13;
            st::fn_0040517D(cVar14);
            st::fn_00403E90(cVar14);
            st::fn_004035EE(piVar13,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));
            st::fn_004030EE((uint)piVar13,DAT_00808a90 >> 8 & 0xff);
            st::fn_004028F6(cVar14);
          }
          /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
          puVar12 = (undefined4 *)((int)puVar12 + 0xa62);
          piVar13 = (int *)((int)piVar13 + 1);
          pbVar6 = pbVar6 + 0x51;
        } while ((int)puVar12 < 0x7fa135);
        st::fn_00403364(0);
        st::fn_00401F37(DAT_00808a90 & 0xff);
        DAT_007fa168 = st::fn_006AAC70((int)g_worldGrid.planeStride);
        uVar10 = (uint)g_worldGrid.planeStride;
        puVar12 = DAT_007fa168;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar12 = 0x50505050;
          puVar12 = puVar12 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar12 = 0x50;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      cVar14 = '\0';
      puVar12 = &g_packedRecords_A62x8[0].field2_0x5;
      do {
        puVar7 = st::fn_006AE310(nullptr,0xf,4,5,0x40307b);
        puVar12[1] = puVar7;
        puVar7 = st::fn_006AE310(nullptr,0xf,4,5,0x40307b);
        *puVar12 = puVar7;
        st::fn_00403E90(cVar14);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        puVar12 = (undefined4 *)((int)puVar12 + 0xa62);
        cVar14 = cVar14 + '\x01';
      } while ((int)puVar12 < 0x7fa135);
      st::fn_00405A92(this_00,local_c);
      st::fn_006F20E0(g_cMf32_00806754,(uint *)&local_c);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_c = (ushort *)st::fn_004058AD(this_00,(int *)&local_1c);
    st::fn_00401078
              (g_playSystem_00802A38,"allplsave",(byte *)local_c,local_1c,0xc);
    st::fn_006AB060(&local_c);
  }
  else if (SVar2 == MESS_ID_ALLCREATE) {
    if (g_cMf32_00806754 == nullptr) {
      iVar5 = 0;
      do {
        st::fn_00405CC2(this_00,(char)iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
    }
    else {
      local_c = st::fn_006F2D90(g_cMf32_00806754,"allplsave",0,0);
      if (local_c == nullptr) {
        iVar5 = 0;
        do {
          st::fn_00405CC2(this_00,(char)iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
      else {
        st::fn_006F20E0(g_cMf32_00806754,(uint *)&local_c);
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00404B8D(*(char *)(this_00->field_0010 + 0x112d));
    uVar11 = 0;
    do {
      st::fn_00401893(uVar11);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

// 004314E0 STAllPlayersC::FramePick
#line 4 "decomp/ST.exe/functions/004314E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::FramePick */

void __thiscall
st::fn_004314E0
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar2;
  int iVar3;
  STGameObjC *pSVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_01;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_06;
  undefined4 uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  char playerId;
  uint uVar7;
  short sVar8;
  InternalExceptionFrame local_90;
  int local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  DArrayTy *local_40;
  DArrayTy *local_3c;
  DArrayTy *local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  DArrayTy *local_14;
  DArrayTy *local_10;
  char local_c [4];
  uint local_8;

  local_10 = nullptr;
  local_18 = nullptr;
  local_3c = nullptr;
  local_14 = nullptr;
  local_1c = nullptr;
  local_40 = nullptr;
  local_34 = nullptr;
  local_2c = nullptr;
  local_20 = nullptr;
  local_28 = nullptr;
  local_30 = nullptr;
  local_38 = nullptr;
  local_24 = nullptr;
  local_44 = nullptr;
  local_48 = nullptr;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar2 = st::fn_0072D7F0(local_90.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_90.previous;
    if (iVar2 == -0x5001fff7) {
      if (local_10 != nullptr) {
        st::fn_006AE110(local_10);
      }
      if (local_18 != nullptr) {
        st::fn_006AE110(local_18);
      }
      if (local_3c != nullptr) {
        st::fn_006AE110(local_3c);
      }
      if (local_14 != nullptr) {
        st::fn_006AE110(local_14);
      }
      if (local_1c != nullptr) {
        st::fn_006AE110(local_1c);
      }
      if (local_40 != nullptr) {
        st::fn_006AE110(local_40);
      }
      if (local_34 != nullptr) {
        st::fn_006AE110(local_34);
      }
      if (local_2c != nullptr) {
        st::fn_006AE110(local_2c);
      }
      if (local_20 != nullptr) {
        st::fn_006AE110(local_20);
      }
      if (local_28 != nullptr) {
        st::fn_006AE110(local_28);
      }
      if (local_30 != nullptr) {
        st::fn_006AE110(local_30);
      }
      if (local_38 != nullptr) {
        st::fn_006AE110(local_38);
      }
      st::fn_004027DE(this);
      return;
    }
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xdd1,0,iVar2,"%s",
                               "STAllPlayersC::FramePick");
    if (iVar3 == 0) {
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0xdd2);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  playerId = (char)param_1;
  st::fn_004028FB(this,playerId,param_2,param_3,param_4,param_5,(int *)&local_10,(int *)&local_18,
                   (int *)&local_3c,(int *)&local_14,(int *)&local_1c,(int *)&local_40,
                   (int *)&local_34,(int *)&local_2c,(int *)&local_20,(int *)&local_28,
                   (int *)&local_30,(int *)&local_38);
  if (local_10->count != 0) {
    iVar2 = (int)playerId;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      iVar3 = g_packedRecords_A62x8[iVar2].field96_0x163;
      if (iVar3 == 0) {
LAB_00431886:
        iVar3 = st::fn_0040196F(playerId,0,0x3c,playerId,local_10,0);
        if (iVar3 < 1) goto cf_error_exit_004318A9;
        st::fn_0040317F(this,playerId,0,iVar3);
LAB_004318b5:
        g_packedRecords_A62x8[iVar2].field96_0x163 = 0x3c;
      }
      else if (iVar3 == 0x3c) {
        if (param_6 == 1) {
          if (*(int *)&g_packedRecords_A62x8[iVar2].field97_0x167 == iVar2) {
            st::fn_004020D6(this,playerId,0,0,&local_10->flags,nullptr,(int *)&local_44,
                         (int *)&local_48);
            st::fn_004027C0(this,param_1,0x3c,local_44,0,0);
            st::fn_00403F0D(this,param_1,0,0,local_44);
            st::fn_00405BBE(this,param_1,0,0,local_48);
            st::fn_006AE110(local_44);
            st::fn_006AE110(local_48);
          }
        }
        else {
          iVar3 = st::fn_0040196F(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              st::fn_00405920(playerId,0);
              if (g_packedRecords_A62x8[iVar2].field105_0x177 == (int)playerId) {
                st::fn_004020D6(this,playerId,0,1,&local_10->flags,(int *)&local_24,nullptr,
                             nullptr);
                st::fn_004027C0(this,param_1,0x3c,local_24,0,0);
                st::fn_006AE110(local_24);
              }
              else {
                st::fn_004032E7(this,playerId,0,1,0);
              }
              goto cf_error_exit_004318A9;
            }
          }
          else {
            st::fn_0040317F(this,playerId,0,iVar3);
          }
        }
      }
      else if (iVar3 == 0x1ae) {
        if (param_6 != 1) {
          iVar3 = st::fn_0040196F(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 1) {
            st::fn_00405920(playerId,0);
            st::fn_004032E7(this,playerId,0,1,0);
            goto cf_error_exit_004318A9;
          }
          st::fn_0040317F(this,playerId,0,iVar3);
        }
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xa60,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BOAT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      if (param_6 != 1) {
        g_packedRecords_A62x8[iVar2].field200_0x203 = 0;
        st::fn_004032E7(this,playerId,1,0,0);
        iVar3 = g_packedRecords_A62x8[iVar2].field96_0x163;
        if (iVar3 == 0) goto LAB_00431886;
        if (iVar3 == 0x3c) {
          iVar3 = st::fn_0040196F(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 0) {
            st::fn_00405920(playerId,0);
cf_error_exit_004318A9:
            st::fn_00405BBE(this,param_1,0,0,local_10);
            goto LAB_004318b5;
          }
          st::fn_0040317F(this,playerId,0,iVar3);
        }
        else if (iVar3 == 0x1ae) {
          iVar3 = st::fn_0040196F(playerId,0,0x3c,playerId,local_10,0);
          if (iVar3 < 1) {
            st::fn_00405920(playerId,0);
            goto cf_error_exit_004318A9;
          }
          st::fn_0040317F(this,playerId,0,iVar3);
        }
        else {
          iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xa88,0,0,
                                     "%s","STAllPlayersC::FramePick GAMETYPE_BOAT ACT_RIGHT");
          if (iVar2 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xa8c,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_BOAT wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xa8e);
  }
  if (local_34->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xa92);
    }
    st::fn_006ACC70(local_34,0,&local_8);
    local_34->count = 0;
    st::fn_006AE1C0(local_34,&local_8);
    pSVar4 = st::fn_004028BA(this,'\0',(ushort)local_8,CASE_3);
    if (pSVar4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xa95);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      iVar2 = g_packedRecords_A62x8[iVar2].field96_0x163;
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
cf_error_exit_00431A49:
          st::fn_00403E31(this,playerId,0,0,pSVar4->field_0020,
                       STReplaceLowByte((uint32_t)(iVar2), (uint8_t)(*(undefined1 *)&pSVar4->field_0024)),local_8
                      );
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
LAB_00431c38:
          st::fn_00405920(playerId,0);
          st::fn_004032E7(this,playerId,0,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EAX_00;
          goto cf_error_exit_00431A49;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431c38;
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xaba,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      g_packedRecords_A62x8[iVar2].field200_0x203 = 0;
      st::fn_004032E7(this,playerId,1,0,0);
      iVar2 = *(int *)((int)&g_packedRecords_A62x8[0].field96_0x163 + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) goto cf_error_exit_00431A49;
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
LAB_00431a3f:
          st::fn_00405920(playerId,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EAX;
          goto cf_error_exit_00431A49;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 0) goto LAB_00431a3f;
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xade,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xae2,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_MINESET wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xae4);
  }
  if (local_28->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xae8);
    }
    st::fn_006ACC70(local_28,0,&local_8);
    local_28->count = 0;
    st::fn_006AE1C0(local_28,&local_8);
    pSVar4 = st::fn_004028BA(this,-1,(ushort)local_8,CASE_2);
    if (pSVar4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xaeb);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar2].field200_0x203 = 1;
      st::fn_004032E7(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) goto LAB_00431ec7;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431e9e;
            goto LAB_00431e77;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX;
          if (iVar2 < 1) goto LAB_00431ed1;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431e9e:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 0) {
LAB_00431ec7:
          st::fn_00405920(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_00;
LAB_00431ed1:
          uVar5 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
          uVar7 = pSVar4->field_0020;
LAB_00431edd:
          st::fn_00403E31(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00431e77:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xb3a,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_ARTEFACT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      iVar2 = g_packedRecords_A62x8[iVar2].field149_0x1b3;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) {
LAB_00431da2:
            st::fn_00405920(playerId,1);
            st::fn_004032E7(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_EDX_00;
LAB_00431dba:
            uVar5 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
            uVar7 = pSVar4->field_0020;
            goto LAB_00431edd;
          }
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431d70;
            goto LAB_00431d42;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_EDX;
          if (iVar2 < 1) goto LAB_00431dba;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431d70:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431da2;
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00431d42:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xb13,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_ARTEFACT ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xb3e,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_ARTEFACT wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xb40);
  }
  if (local_30->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xb44);
    }
    st::fn_006ACC70(local_30,0,&local_8);
    local_30->count = 0;
    st::fn_006AE1C0(local_30,&local_8);
    pSVar4 = st::fn_004028BA(this,-1,(ushort)local_8,CASE_5);
    if (pSVar4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xb47);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar2].field200_0x203 = 1;
      st::fn_004032E7(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) goto LAB_004321f3;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004321ca;
            goto LAB_004321a3;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) goto LAB_004321fd;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_004321ca:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 0) {
LAB_004321f3:
          st::fn_00405920(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EAX_01;
LAB_004321fd:
          uVar5 = STReplaceLowByte((uint32_t)(iVar2), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
          uVar7 = pSVar4->field_0020;
LAB_00432209:
          st::fn_00403E31(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_004321a3:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xb96,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_CONTAINER ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      iVar2 = g_packedRecords_A62x8[iVar2].field149_0x1b3;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) {
LAB_004320ce:
            st::fn_00405920(playerId,1);
            st::fn_004032E7(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_ECX_02;
LAB_004320e6:
            uVar5 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
            uVar7 = pSVar4->field_0020;
            goto LAB_00432209;
          }
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043209c;
            goto LAB_0043206e;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_01;
          if (iVar2 < 1) goto LAB_004320e6;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_0043209c:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_004320ce;
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_0043206e:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xb6f,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_CONTAINER ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xb9a,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_CONTAINER wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xb9c);
  }
  if (local_14->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xba0);
    }
    st::fn_006ACC70(local_14,0,&local_8);
    local_14->count = 0;
    st::fn_006AE1C0(local_14,&local_8);
    if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
      g_packedRecords_A62x8[playerId].field200_0x203 = 1;
      st::fn_004032E7(this,playerId,0,0,0);
      iVar2 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,0x19a,playerId,local_14,0);
          if (-1 < iVar2) {
            st::fn_0040317F(this,playerId,1,iVar2);
            goto LAB_00432582;
          }
          st::fn_00405920(playerId,1);
cf_error_exit_0043256B:
          st::fn_00404098(this,playerId,1,0,playerId,local_8);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432536;
            goto LAB_0043250f;
          }
          iVar2 = st::fn_0040196F(playerId,1,0x19a,playerId,local_14,0);
          if (iVar2 < 1) goto cf_error_exit_0043256B;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
LAB_00432578:
        g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432536:
        iVar2 = st::fn_0040196F(playerId,1,0x19a,playerId,local_14,0);
        if (iVar2 < 1) {
          st::fn_00405920(playerId,1);
          goto cf_error_exit_0043256B;
        }
        st::fn_0040317F(this,playerId,1,iVar2);
      }
      else {
LAB_0043250f:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xbfb,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_OBJECT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[playerId].field200_0x203 == 1) {
      iVar2 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,0x19a,playerId,local_14,0);
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              st::fn_00405920(playerId,1);
              if (g_packedRecords_A62x8[playerId].field158_0x1c7 == (int)playerId) {
                st::fn_004020D6(this,playerId,1,1,&local_14->flags,(int *)&local_24,nullptr,
                             nullptr);
                st::fn_004027C0(this,param_1,0x19a,local_24,0,0);
                st::fn_006AE110(local_24);
              }
              else {
                st::fn_004032E7(this,playerId,1,1,0);
              }
              goto cf_error_exit_0043256B;
            }
          }
          else {
            st::fn_0040317F(this,playerId,1,iVar2);
          }
        }
        else {
          if (iVar2 == 0) {
            iVar2 = st::fn_0040196F(playerId,1,0x19a,playerId,local_14,0);
            if (0 < iVar2) {
              st::fn_0040317F(this,playerId,1,iVar2);
              goto LAB_00432578;
            }
            goto cf_error_exit_0043256B;
          }
          if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043240a;
LAB_004323dc:
          iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xbd1,0,0,
                                     "%s","STAllPlayersC::FramePick GAMETYPE_OBJECT ACT_RIGHT");
          if (iVar2 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      else {
        if ((iVar2 != 0x1a4) && (iVar2 != 0x1b8)) goto LAB_004323dc;
LAB_0043240a:
        iVar2 = st::fn_0040196F(playerId,1,0x19a,playerId,local_14,0);
        if (iVar2 < 1) {
          st::fn_00405920(playerId,1);
          st::fn_004032E7(this,playerId,1,1,0);
          goto cf_error_exit_0043256B;
        }
        st::fn_0040317F(this,playerId,1,iVar2);
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xbff,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_OBJECT wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
LAB_00432582:
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xc01);
  }
  if (local_20->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc05);
    }
    st::fn_006ACC70(local_20,0,&local_8);
    local_20->count = 0;
    st::fn_006AE1C0(local_20,&local_8);
    pSVar4 = st::fn_004028BA(this,-1,(ushort)local_8,CASE_4);
    if (pSVar4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc08);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar2].field200_0x203 = 1;
      st::fn_004032E7(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) goto LAB_0043288b;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432862;
            goto LAB_0043283b;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_03;
          if (iVar2 < 1) goto LAB_00432895;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432862:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 0) {
LAB_0043288b:
          st::fn_00405920(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_04;
LAB_00432895:
          uVar5 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
          uVar7 = pSVar4->field_0020;
LAB_004328a1:
          st::fn_00403E31(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_0043283b:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xc57,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_RESOURCE ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      iVar2 = g_packedRecords_A62x8[iVar2].field149_0x1b3;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) {
LAB_00432766:
            st::fn_00405920(playerId,1);
            st::fn_004032E7(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_EDX_02;
LAB_0043277e:
            uVar5 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
            uVar7 = pSVar4->field_0020;
            goto LAB_004328a1;
          }
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432734;
            goto LAB_00432706;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_EDX_01;
          if (iVar2 < 1) goto LAB_0043277e;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432734:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432766;
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00432706:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xc30,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_RESOURCE ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xc5b,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_RESOURCE wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xc5d);
  }
  if (local_38->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc61);
    }
    st::fn_006ACC70(local_38,0,&local_8);
    local_38->count = 0;
    st::fn_006AE1C0(local_38,&local_8);
    pSVar4 = st::fn_004028BA(this,-1,(ushort)local_8,CASE_6);
    if (pSVar4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xc64);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      g_packedRecords_A62x8[iVar2].field200_0x203 = 1;
      st::fn_004032E7(this,playerId,0,0,0);
      iVar2 = *(int *)((int)&g_packedRecords_A62x8[0].field149_0x1b3 + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) goto LAB_00432bb7;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432b8e;
            goto LAB_00432b67;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) goto LAB_00432bc1;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432b8e:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 0) {
LAB_00432bb7:
          st::fn_00405920(playerId,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EAX_02;
LAB_00432bc1:
          uVar5 = STReplaceLowByte((uint32_t)(iVar2), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
          uVar7 = pSVar4->field_0020;
LAB_00432bcd:
          st::fn_00403E31(this,playerId,1,0,uVar7,uVar5,local_8);
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00432b67:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xcb3,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BLOT ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      iVar2 = g_packedRecords_A62x8[iVar2].field149_0x1b3;
      sVar8 = (short)local_8;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          if (iVar2 < 1) {
LAB_00432a92:
            st::fn_00405920(playerId,1);
            st::fn_004032E7(this,playerId,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = extraout_ECX_06;
LAB_00432aaa:
            uVar5 = STReplaceLowByte((uint32_t)(uVar6), (uint8_t)(*(undefined1 *)&pSVar4->field_0024));
            uVar7 = pSVar4->field_0020;
            goto LAB_00432bcd;
          }
          st::fn_0040317F(this,playerId,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432a60;
            goto LAB_00432a32;
          }
          iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,
                            nullptr,sVar8);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar6 = extraout_ECX_05;
          if (iVar2 < 1) goto LAB_00432aaa;
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432a60:
        iVar2 = st::fn_0040196F(playerId,1,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432a92;
        }
        else {
          st::fn_0040317F(this,playerId,1,iVar2);
        }
      }
      else {
LAB_00432a32:
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xc8c,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BLOT ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xcb7,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_BLOT wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xcb9);
  }
  if (local_18->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xcbd);
    }
    st::fn_006ACC70(local_18,0,&local_8);
    local_18->count = 0;
    st::fn_006AE1C0(local_18,&local_8);
    st::fn_006ACC70(local_3c,0,local_c);
    local_3c->count = 0;
    st::fn_006AE1C0(local_3c,local_c);
    if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
      iVar2 = g_packedRecords_A62x8[playerId].field96_0x163;
      if (iVar2 == 0) {
LAB_00432e7f:
        iVar2 = st::fn_0040196F(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
cf_error_exit_00432EAE:
          st::fn_00404098(this,playerId,0,0,local_c[0],local_8);
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
        g_packedRecords_A62x8[playerId].field96_0x163 = 0x3c;
      }
      else if (iVar2 == 0x3c) {
        iVar2 = st::fn_0040196F(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            st::fn_00405920(playerId,0);
            st::fn_004032E7(this,playerId,0,1,0);
            goto cf_error_exit_00432EAE;
          }
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = st::fn_0040196F(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
          st::fn_00405920(playerId,0);
          st::fn_004032E7(this,playerId,0,1,0);
          goto cf_error_exit_00432EAE;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xce7,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[playerId].field200_0x203 == 1) {
      g_packedRecords_A62x8[playerId].field200_0x203 = 0;
      st::fn_004032E7(this,playerId,1,0,0);
      iVar2 = g_packedRecords_A62x8[playerId].field96_0x163;
      if (iVar2 == 0) goto LAB_00432e7f;
      if (iVar2 == 0x3c) {
        iVar2 = st::fn_0040196F(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 0) {
          st::fn_00405920(playerId,0);
          goto cf_error_exit_00432EAE;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = st::fn_0040196F(playerId,0,0x3c,local_c[0],local_18,0);
        if (iVar2 < 1) {
          st::fn_00405920(playerId,0);
          goto cf_error_exit_00432EAE;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xd0e,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xd12,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_BOAT (enemy) wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xd14);
  }
  if (local_2c->count != 0) {
    if (param_6 == 1) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xd18);
    }
    st::fn_006ACC70(local_2c,0,&local_8);
    local_2c->count = 0;
    st::fn_006AE1C0(local_2c,&local_8);
    pSVar4 = st::fn_004028BA(this,'\0',(ushort)local_8,CASE_3);
    if (pSVar4 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0xd1b);
    }
    iVar2 = (int)playerId;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_4c = iVar2 * 0xa62;
    if (g_packedRecords_A62x8[iVar2].field200_0x203 == 0) {
      iVar2 = g_packedRecords_A62x8[iVar2].field96_0x163;
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
cf_error_exit_00433050:
          st::fn_00403E31(this,playerId,0,0,pSVar4->field_0020,
                       STReplaceLowByte((uint32_t)(iVar2), (uint8_t)(*(undefined1 *)&pSVar4->field_0024)),local_8
                      );
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
LAB_0043322b:
          st::fn_00405920(playerId,0);
          st::fn_004032E7(this,playerId,0,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EAX_04;
          goto cf_error_exit_00433050;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_0043322b;
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xd40,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) ACT_LEFT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else if (g_packedRecords_A62x8[iVar2].field200_0x203 == 1) {
      g_packedRecords_A62x8[iVar2].field200_0x203 = 0;
      st::fn_004032E7(this,playerId,1,0,0);
      iVar2 = *(int *)((int)&g_packedRecords_A62x8[0].field96_0x163 + local_4c);
      sVar8 = (short)local_8;
      if (iVar2 == 0) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) goto cf_error_exit_00433050;
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
LAB_00433046:
          st::fn_00405920(playerId,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EAX_03;
          goto cf_error_exit_00433050;
        }
        st::fn_0040317F(this,playerId,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = st::fn_0040196F(playerId,0,pSVar4->field_0020,*(char *)&pSVar4->field_0024,nullptr
                          ,sVar8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00433046;
        }
        else {
          st::fn_0040317F(this,playerId,0,iVar2);
        }
      }
      else {
        iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xd66,0,0,"%s",
                                   "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) ACT_RIGHT");
        if (iVar2 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
    else {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xd6a,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_MINESET (enemy) wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xd6c);
  }
  if (local_1c->count == 0) goto cf_error_exit_004334F5;
  if (param_6 == 1) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0xd70);
  }
  st::fn_006ACC70(local_1c,0,&local_8);
  local_1c->count = 0;
  st::fn_006AE1C0(local_1c,&local_8);
  st::fn_006ACC70(local_40,0,local_c);
  local_40->count = 0;
  st::fn_006AE1C0(local_40,local_c);
  if (g_packedRecords_A62x8[playerId].field200_0x203 != 0) {
    if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xdcb,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) wrong panel number");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_error_exit_004334F5;
    }
    iVar2 = g_packedRecords_A62x8[playerId].field149_0x1b3;
    if (iVar2 < 0x19b) {
      if (iVar2 == 0x19a) {
        iVar2 = st::fn_0040196F(playerId,1,0x19a,local_c[0],local_1c,0);
        if (0 < iVar2) {
          st::fn_0040317F(this,playerId,1,iVar2);
          goto cf_error_exit_004334F5;
        }
        if (-1 < iVar2) goto cf_error_exit_004334F5;
        st::fn_00405920(playerId,1);
        st::fn_004032E7(this,playerId,1,1,0);
        goto cf_error_exit_004334DF;
      }
      if (iVar2 == 0) goto LAB_004333f5;
      if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00433363;
    }
    else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00433363:
      iVar2 = st::fn_0040196F(playerId,1,0x19a,local_c[0],local_1c,0);
      if (0 < iVar2) {
        st::fn_0040317F(this,playerId,1,iVar2);
        goto cf_error_exit_004334F5;
      }
      st::fn_00405920(playerId,1);
      st::fn_004032E7(this,playerId,1,1,0);
      goto cf_error_exit_004334DF;
    }
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xd9d,0,0,"%s",
                               "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) ACT_RIGHT");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    goto cf_error_exit_004334F5;
  }
  g_packedRecords_A62x8[playerId].field200_0x203 = 1;
  st::fn_004032E7(this,playerId,0,0,0);
  iVar2 = g_packedRecords_A62x8[playerId].field149_0x1b3;
  if (iVar2 < 0x19b) {
    if (iVar2 == 0x19a) {
      iVar2 = st::fn_0040196F(playerId,1,0x19a,local_c[0],local_1c,0);
      if (-1 < iVar2) {
        st::fn_0040317F(this,playerId,1,iVar2);
        goto cf_error_exit_004334F5;
      }
      st::fn_00405920(playerId,1);
      goto cf_error_exit_004334DF;
    }
    if (iVar2 != 0) {
      if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004334a3;
      goto LAB_0043347c;
    }
LAB_004333f5:
    iVar2 = st::fn_0040196F(playerId,1,0x19a,local_c[0],local_1c,0);
    if (iVar2 < 1) goto cf_error_exit_004334DF;
    st::fn_0040317F(this,playerId,1,iVar2);
  }
  else {
    if ((iVar2 != 0x1a4) && (iVar2 != 0x1b8)) {
LAB_0043347c:
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xdc7,0,0,"%s",
                                 "STAllPlayersC::FramePick GAMETYPE_OBJECT (enemy) ACT_LEFT");
      if (iVar2 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_error_exit_004334F5;
    }
LAB_004334a3:
    iVar2 = st::fn_0040196F(playerId,1,0x19a,local_c[0],local_1c,0);
    if (0 < iVar2) {
      st::fn_0040317F(this,playerId,1,iVar2);
      goto cf_error_exit_004334F5;
    }
    st::fn_00405920(playerId,1);
cf_error_exit_004334DF:
    st::fn_00404098(this,playerId,1,0,local_c[0],local_8);
  }
  g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
cf_error_exit_004334F5:
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0xdce);
  g_currentExceptionFrame = local_90.previous;
  return;
}

// 00433E90 STAllPlayersC::PointPick
#line 4 "decomp/ST.exe/functions/00433E90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PointPick

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00433E90 -> 0044AB90 @ 0043402D | 00433E90 -> 0044AB90 @ 00434084 | 00433E90 ->
   0044AB90 @ 00434126 | 00433E90 -> 0044AB90 @ 00434221 | 00433E90 -> 0044AB90 @ 004342C8 |
   00433E90 -> 0044AB90 @ 004349DA | 00433E90 -> 0044AB90 @ 00434A25 | 00433E90 -> 0044AB90 @
   00434B10 | 00433E90 -> 0044AB90 @ 00434BE9 | 00433E90 -> 0044AB90 @ 00434C72 | 005449B0 ->
   00433E90 @ 005473F1 */

void __thiscall
st::fn_00433E90(STAllPlayersC *this,uint *objectIds,int param_2,int param_3,int param_4)

{
  int *piVar2;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX_00;
  uint uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  undefined2 uVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_03;
  char ownerPlayerId;
  char playerId;
  short objectId;
  DArrayTy *local_8;
  int uVar4;

  local_8 = nullptr;
  piVar2 = (int *)st::fn_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
  playerId = (char)objectIds;
  if (piVar2 == nullptr) {
    st::fn_004052E5(playerId);
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*piVar2 + 0xec))();
  if (iVar3 != 1) {
    return;
  }
  uVar4 = piVar2[8];
  if (0x1a4 < (uint)uVar4) {
    if ((uint)uVar4 < 0x1b9) {
      if (uVar4 == 0x1b8) goto LAB_004345cf;
      if (uVar4 != 0x1ae) {
        return;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_4 == 1) {
        return;
      }
      if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
        iVar3 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar3 != 0) {
          if (iVar3 == 0x3c) {
            iVar3 = st::fn_0040196F(playerId,0,0x1ae,(char)piVar2[9],nullptr,
                              STField<short>(piVar2,0x32));
            if (0 < iVar3) {
              st::fn_0040317F(this,playerId,0,iVar3);
              st::fn_004027DE(this);
              return;
            }
            PushTV(playerId,0);
            st::fn_004032E7(this,playerId,0,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar5 = CONCAT22(extraout_var_11,STField<undefined2>(piVar2,0x32));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = STReplaceLowByte((uint32_t)(extraout_EAX_00), (uint8_t)((char)piVar2[9]));
            iVar3 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          if (iVar3 != 0x1ae) {
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1003,0,0,
                                       "%s","STAllPlayersC::PointPick GAMETYPE_MINESET ACT_LEFT");
            if (iVar3 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar3 = st::fn_0040196F(playerId,0,0x1ae,(char)piVar2[9],nullptr,
                            STField<short>(piVar2,0x32));
          if (0 < iVar3) {
            st::fn_0040317F(this,playerId,0,iVar3);
            st::fn_004027DE(this);
            return;
          }
          if (iVar3 < 0) {
            PushTV(playerId,0);
            st::fn_004032E7(this,playerId,0,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar5 = CONCAT22(extraout_var,STField<undefined2>(piVar2,0x32));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar6 = STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)((char)piVar2[9]));
            iVar3 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          goto cf_common_exit_00434CBD;
        }
        objectId = STField<short>(piVar2,0x32);
        ownerPlayerId = (char)piVar2[9];
        iVar3 = 0x1ae;
LAB_004345a2:
        iVar3 = st::fn_0040196F(playerId,0,iVar3,ownerPlayerId,nullptr,objectId);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_EDX_00;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_02;
        if (0 < iVar3) {
LAB_004345b4:
          st::fn_0040317F(this,playerId,0,iVar3);
          st::fn_004027DE(this);
          return;
        }
      }
      else {
        if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x102e,0,0,
                                     "%s","STAllPlayersC::PointPick GAMETYPE_MINESET wrong panel number");
          if (iVar3 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        g_packedRecords_A62x8[playerId].field200_0x203 = 0;
        st::fn_004032E7(this,playerId,1,0,0);
        iVar3 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar3 == 0) {
          objectId = STField<short>(piVar2,0x32);
          ownerPlayerId = (char)piVar2[9];
          iVar3 = piVar2[8];
          goto LAB_004345a2;
        }
        if (iVar3 == 0x3c) {
          iVar3 = st::fn_0040196F(playerId,0,piVar2[8],(char)piVar2[9],nullptr,
                            STField<short>(piVar2,0x32));
          if (0 < iVar3) {
            st::fn_0040317F(this,playerId,0,iVar3);
            st::fn_004027DE(this);
            return;
          }
        }
        else {
          if (iVar3 != 0x1ae) {
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x102a,0,0,
                                       "%s","STAllPlayersC::PointPick GAMETYPE_MINESET ACT_RIGHT");
            if (iVar3 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar3 = st::fn_0040196F(playerId,0,0x1ae,(char)piVar2[9],nullptr,
                            STField<short>(piVar2,0x32));
          if (-1 < iVar3) goto LAB_004345b4;
        }
        PushTV(playerId,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_EDX;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_01;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = CONCAT22(uVar8,STField<undefined2>(piVar2,0x32));
      uVar6 = STReplaceLowByte((uint32_t)(uVar7), (uint8_t)((char)piVar2[9]));
      iVar3 = piVar2[8];
cf_common_exit_0043440E:
      st::fn_00403E31(this,playerId,0,0,iVar3,uVar6,uVar5);
      st::fn_004027DE(this);
      return;
    }
    if ((uint)uVar4 < 1000) {
      return;
    }
    if (0x3e9 < (uint)uVar4) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_4 == 1) {
      return;
    }
    if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
      g_packedRecords_A62x8[playerId].field200_0x203 = 1;
      st::fn_004032E7(this,playerId,0,0,0);
      iVar3 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
          objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
          st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
          iVar3 = st::fn_0040196F(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
          if (-1 < iVar3) {
            st::fn_0040317F(this,playerId,1,iVar3);
            goto cf_common_exit_00434CB8;
          }
          goto LAB_00434c88;
        }
        if (iVar3 != 0) {
          if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434c12;
          goto LAB_00434c44;
        }
LAB_004349ac:
        objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
        st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
        iVar3 = st::fn_0040196F(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (iVar3 < 1) goto LAB_00434c92;
        st::fn_0040317F(this,playerId,1,iVar3);
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00434c12:
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xfd1,0,0,
                                     "%s","STAllPlayersC::PointPick GAMETYPE_OBJECT ACT_LEFT");
          if (iVar3 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
LAB_00434c44:
        objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
        st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
        iVar3 = st::fn_0040196F(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          st::fn_0040317F(this,playerId,1,iVar3);
          goto cf_common_exit_00434CB8;
        }
LAB_00434c88:
        PushTV(playerId,1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar3 = extraout_EAX_02;
LAB_00434c92:
        st::fn_00404098(this,playerId,1,0,(char)piVar2[9],
                    STReplaceLowWord((uint32_t)(iVar3), (uint16_t)(STField<undefined2>(piVar2,0x32))));
      }
      g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
    }
    else {
      if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xfd5,0,0,"%s",
                                   "STAllPlayersC::PointPick GAMETYPE_OBJECT wrong panel number");
        if (iVar3 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = g_packedRecords_A62x8[playerId].field149_0x1b3;
      if (iVar3 < 0x19b) {
        if (iVar3 != 0x19a) {
          if (iVar3 == 0) goto LAB_004349ac;
          if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434ab0;
          goto LAB_00434ae2;
        }
        objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
        st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
        iVar3 = st::fn_0040196F(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          st::fn_0040317F(this,playerId,1,iVar3);
          goto cf_common_exit_00434CB8;
        }
        if (-1 < iVar3) goto cf_common_exit_00434CB8;
        PushTV(playerId,1);
        if (g_packedRecords_A62x8[playerId].field158_0x1c7 != piVar2[9]) goto LAB_00434b39;
        st::fn_004020D6(this,playerId,1,1,objectIds,(int *)&local_8,nullptr,nullptr);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        st::fn_004027C0
                  (this,STReplaceLowByte((uint32_t)(extraout_EDX_03), (uint8_t)((char)piVar2[9])),0x19a,local_8,0
                   ,0);
        st::fn_006AE110(local_8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_05;
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00434ab0:
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xf9a,0,0,
                                     "%s","STAllPlayersC::PointPick GAMETYPE_OBJECT ACT_RIGHT");
          if (iVar3 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
LAB_00434ae2:
        objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
        st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
        iVar3 = st::fn_0040196F(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          st::fn_0040317F(this,playerId,1,iVar3);
          goto cf_common_exit_00434CB8;
        }
        PushTV(playerId,1);
LAB_00434b39:
        st::fn_004032E7(this,playerId,1,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_06;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_00404098(this,playerId,1,0,(char)piVar2[9],
                  CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
      g_packedRecords_A62x8[playerId].field149_0x1b3 = 0x19a;
    }
cf_common_exit_00434CB8:
    st::fn_006AE110((DArrayTy *)objectIds);
    goto cf_common_exit_00434CBD;
  }
  if (uVar4 != 0x1a4) {
    if (uVar4 == 0x14) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((param_4 == 1) && (playerId != (char)piVar2[9])) {
        return;
      }
      if (g_packedRecords_A62x8[playerId].field200_0x203 == 0) {
        iVar3 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar3 != 0) {
          if (iVar3 == 0x3c) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_4 == 1) {
              if (*(int *)&g_packedRecords_A62x8[playerId].field97_0x167 != (int)(char)piVar2[9]) {
                return;
              }
              iVar3 = PushTV(playerId,0,0,playerId,STField<short>(piVar2,0x32));
              if (iVar3 == 1) {
                st::fn_004024E1(playerId,0,0,playerId,(uint)STField<ushort>(piVar2,0x32));
                st::fn_004027DE(this);
                return;
              }
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              st::fn_00404098(this,playerId,0,0,playerId,
                          CONCAT22(extraout_var_00,STField<undefined2>(piVar2,0x32)));
              st::fn_004027DE(this);
              return;
            }
            objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
            st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
            iVar3 = st::fn_0040196F(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
            if (iVar3 < 1) {
              if (iVar3 < 0) {
                PushTV(playerId,0);
                if (g_packedRecords_A62x8[playerId].field105_0x177 != piVar2[9]) goto LAB_0043414f;
                st::fn_004020D6(this,playerId,0,1,objectIds,(int *)&local_8,nullptr,nullptr);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                st::fn_004027C0
                          (this,STReplaceLowByte((uint32_t)(extraout_EAX), (uint8_t)((char)piVar2[9])),0x3c,
                           local_8,0,0);
                st::fn_006AE110(local_8);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                uVar8 = extraout_var_09;
                goto LAB_0043415b;
              }
            }
            else {
              st::fn_0040317F(this,playerId,0,iVar3);
            }
          }
          else {
            if (iVar3 != 0x1ae) {
              iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xf1e,0,0,
                                         "%s","STAllPlayersC::PointPick GAMETYPE_BOAT ACT_LEFT");
              if (iVar3 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_4 == 1) {
              return;
            }
            objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
            st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
            iVar3 = st::fn_0040196F(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
            if (iVar3 < 1) {
              PushTV(playerId,0);
LAB_0043414f:
              st::fn_004032E7(this,playerId,0,1,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              uVar8 = extraout_var_08;
              goto LAB_0043415b;
            }
            st::fn_0040317F(this,playerId,0,iVar3);
          }
          goto cf_common_exit_00434CB8;
        }
LAB_0043429d:
        objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
        st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
        iVar3 = st::fn_0040196F(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_10;
        if (iVar3 < 1) goto LAB_0043415b;
        st::fn_0040317F(this,playerId,0,iVar3);
      }
      else {
        if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xf56,0,0,
                                     "%s","STAllPlayersC::PointPick GAMETYPE_BOAT wrong panel number");
          if (iVar3 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_4 == 1) {
          return;
        }
        g_packedRecords_A62x8[playerId].field200_0x203 = 0;
        st::fn_004032E7(this,playerId,1,0,0);
        iVar3 = g_packedRecords_A62x8[playerId].field96_0x163;
        if (iVar3 == 0) goto LAB_0043429d;
        if (iVar3 == 0x3c) {
          objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
          st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
          iVar3 = st::fn_0040196F(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
          if (iVar3 < 0) goto LAB_0043404a;
          st::fn_0040317F(this,playerId,0,iVar3);
          goto cf_common_exit_00434CB8;
        }
        if (iVar3 != 0x1ae) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0xf52,0,0,
                                     "%s","STAllPlayersC::PointPick GAMETYPE_BOAT ACT_RIGHT");
          if (iVar3 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        objectIds = &st::fn_006AE290(nullptr,0,2,1)->flags;
        st::fn_006AE1C0((DArrayTy *)objectIds,(void *)((int)piVar2 + 0x32));
        iVar3 = st::fn_0040196F(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          st::fn_0040317F(this,playerId,0,iVar3);
          goto cf_common_exit_00434CB8;
        }
LAB_0043404a:
        PushTV(playerId,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_07;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043415b:
        st::fn_00404098(this,playerId,0,0,(char)piVar2[9],
                    CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
      }
      g_packedRecords_A62x8[playerId].field96_0x163 = 0x3c;
      goto cf_common_exit_00434CB8;
    }
    if ((uVar4 != 0x5a) && (uVar4 != 0x172)) {
      return;
    }
  }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_004345cf:
  if (param_4 == 1) {
    return;
  }
  if (g_packedRecords_A62x8[playerId].field200_0x203 != 0) {
    if (g_packedRecords_A62x8[playerId].field200_0x203 != 1) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1090,0,0,"%s",
                                 "STAllPlayersC::PointPick GAMETYPE_MINESET wrong panel number");
      if (iVar3 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar3 = g_packedRecords_A62x8[playerId].field149_0x1b3;
    if (iVar3 < 0x19b) {
      if (iVar3 != 0x19a) {
        if (iVar3 == 0) {
          iVar3 = st::fn_0040196F(playerId,1,uVar4,(char)piVar2[9],nullptr,
                            STField<short>(piVar2,0x32));
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar8 = extraout_var_12;
          if (0 < iVar3) {
            st::fn_0040317F(this,playerId,1,iVar3);
            st::fn_004027DE(this);
            return;
          }
          goto LAB_00434768;
        }
        if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_004346e3;
        goto LAB_00434715;
      }
      iVar3 = st::fn_0040196F(playerId,1,uVar4,(char)piVar2[9],nullptr,
                        STField<short>(piVar2,0x32));
      if (0 < iVar3) {
        st::fn_0040317F(this,playerId,1,iVar3);
        st::fn_004027DE(this);
        return;
      }
    }
    else {
      if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_004346e3:
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1062,0,0,"%s"
                                   ,"STAllPlayersC::PointPick GAMETYPE_RESOURCE ACT_RIGHT");
        if (iVar3 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
LAB_00434715:
      iVar3 = st::fn_0040196F(playerId,1,uVar4,(char)piVar2[9],nullptr,
                        STField<short>(piVar2,0x32));
      if (0 < iVar3) {
        st::fn_0040317F(this,playerId,1,iVar3);
        st::fn_004027DE(this);
        return;
      }
      if (-1 < iVar3) {
cf_common_exit_00434CBD:
        st::fn_004027DE(this);
        return;
      }
    }
    PushTV(playerId,1);
    st::fn_004032E7(this,playerId,1,1,0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar3 = extraout_EAX_01;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar8 = extraout_var_13;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00434768:
    st::fn_00403E31(this,playerId,1,0,piVar2[8],STReplaceLowByte((uint32_t)(iVar3), (uint8_t)((char)piVar2[9])),
                 CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
    st::fn_004027DE(this);
    return;
  }
  g_packedRecords_A62x8[playerId].field200_0x203 = 1;
  st::fn_004032E7(this,playerId,0,0,0);
  iVar3 = g_packedRecords_A62x8[playerId].field149_0x1b3;
  if (iVar3 < 0x19b) {
    if (iVar3 != 0x19a) {
      if (iVar3 == 0) {
        iVar3 = st::fn_0040196F(playerId,1,piVar2[8],(char)piVar2[9],nullptr,
                          STField<short>(piVar2,0x32));
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_EDX_01;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_var_03;
        if (0 < iVar3) {
          st::fn_0040317F(this,playerId,1,iVar3);
          st::fn_004027DE(this);
          return;
        }
        goto LAB_004348d7;
      }
      if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434863;
      goto LAB_00434895;
    }
    iVar3 = st::fn_0040196F(playerId,1,piVar2[8],(char)piVar2[9],nullptr,
                      STField<short>(piVar2,0x32));
    if (0 < iVar3) {
      st::fn_0040317F(this,playerId,1,iVar3);
      st::fn_004027DE(this);
      return;
    }
  }
  else {
    if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00434863:
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x108c,0,0,"%s",
                                 "STAllPlayersC::PointPick GAMETYPE_RESOURCE ACT_LEFT");
      if (iVar3 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
LAB_00434895:
    iVar3 = st::fn_0040196F(playerId,1,piVar2[8],(char)piVar2[9],nullptr,
                      STField<short>(piVar2,0x32));
    if (-1 < iVar3) {
      st::fn_0040317F(this,playerId,1,iVar3);
      st::fn_004027DE(this);
      return;
    }
  }
  PushTV(playerId,1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar7 = extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar8 = extraout_var_04;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004348d7:
  st::fn_00403E31(this,playerId,1,0,piVar2[8],STReplaceLowByte((uint32_t)(uVar7), (uint8_t)((char)piVar2[9])),
               CONCAT22(uVar8,STField<undefined2>(piVar2,0x32)));
  st::fn_004027DE(this);
  return;
}

// 00435060 STAllPlayersC::SelfCheckObjControl
#line 4 "decomp/ST.exe/functions/00435060/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelfCheckObjControl */

void __thiscall st::fn_00435060(STAllPlayersC *this)

{
  int iVar1;
  int iVar2;
  int iVar4;
  STGameObjC *pSVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_c [4];
  int local_8;

  if (DAT_0080874d != 0xff) {
    local_8 = 4;
    iVar1 = STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x163);
    do {
      iVar2 = *(int *)(local_8 * 0x10 + iVar1);
      iVar4 = local_8 * 0x10 + iVar1;
      if (iVar2 != 0) {
        if (iVar2 == 0x3c) {
          if (*(int *)(iVar4 + 10) != 0) {
            iVar2 = *(int *)(*(int *)(iVar4 + 10) + 0xc);
            uVar6 = 0;
            if (0 < iVar2) {
              do {
                st::fn_006ACC70(*(DArrayTy **)(iVar4 + 10),uVar6,local_c);
                pSVar5 = st::fn_004028BA(this,*(char *)(iVar4 + 4),STPiece<0,2>(local_c),CASE_1);
                if (pSVar5 != nullptr) {
                  if (local_8 == 0) {
                    st::fn_004042C8(pSVar5);
                  }
                  else {
                    st::fn_0040321F(pSVar5);
                  }
                }
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < iVar2);
            }
          }
        }
        else if (iVar2 == 0x1ae) {
          pSVar5 = st::fn_004028BA(this,-1,*(ushort *)(iVar4 + 8),CASE_3);
          if (pSVar5 != nullptr) {
            if (local_8 == 0) {
              st::fn_004042C8(pSVar5);
            }
            else {
              st::fn_0040321F(pSVar5);
            }
          }
        }
        else {
          iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x10bb,0,0,
                                     "%s","STAllPlayersC::SelfCheckObjControl ACT_LEFT invalid game type");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      local_8 = local_8 + -1;
    } while (-1 < local_8);
    local_8 = 4;
    iVar1 = STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x1B3);
    do {
      iVar7 = local_8;
      iVar4 = local_8 * 0x10 + iVar1;
      iVar2 = *(int *)(local_8 * 0x10 + iVar1);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          if (*(int *)(iVar4 + 10) != 0) {
            iVar2 = *(int *)(*(int *)(iVar4 + 10) + 0xc);
            uVar6 = 0;
            if (0 < iVar2) {
              do {
                st::fn_006ACC70(*(DArrayTy **)(iVar4 + 10),uVar6,local_c);
                pSVar5 = st::fn_004028BA(this,*(char *)(iVar4 + 4),STPiece<0,2>(local_c),CASE_1);
                if (pSVar5 != nullptr) {
                  if (local_8 == 0) {
                    st::fn_004042C8(pSVar5);
                  }
                  else {
                    st::fn_0040321F(pSVar5);
                  }
                }
                uVar6 = uVar6 + 1;
                iVar7 = local_8;
              } while ((int)uVar6 < iVar2);
            }
          }
        }
        else if (iVar2 != 0) {
          if (iVar2 == 0x5a) {
            pSVar5 = st::fn_004028BA(this,-1,*(ushort *)(iVar4 + 8),CASE_4);
            if (pSVar5 != nullptr) {
              if (iVar7 != 0) goto LAB_004352f5;
              st::fn_004042C8(pSVar5);
            }
          }
          else {
            if (iVar2 != 0x172) goto LAB_00435287;
            pSVar5 = st::fn_004028BA(this,-1,*(ushort *)(iVar4 + 8),CASE_2);
            if (pSVar5 != nullptr) {
              if (iVar7 != 0) goto LAB_004352f5;
              st::fn_004042C8(pSVar5);
            }
          }
        }
      }
      else if (iVar2 == 0x1a4) {
        pSVar5 = st::fn_004028BA(this,-1,*(ushort *)(iVar4 + 8),CASE_5);
        if (pSVar5 != nullptr) {
          if (iVar7 == 0) {
            st::fn_004042C8(pSVar5);
          }
          else {
LAB_004352f5:
            st::fn_0040321F(pSVar5);
          }
        }
      }
      else if (iVar2 == 0x1b8) {
        pSVar5 = st::fn_004028BA(this,-1,*(ushort *)(iVar4 + 8),CASE_6);
        if (pSVar5 != nullptr) {
          if (iVar7 != 0) goto LAB_004352f5;
          st::fn_004042C8(pSVar5);
        }
      }
      else {
LAB_00435287:
        iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x10ec,0,0,"%s"
                                   ,"STAllPlayersC::SelfCheckObjControl ACT_RIGHT invalid game type");
        if (iVar4 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      local_8 = iVar7 + -1;
    } while (-1 < local_8);
  }
  return;
}

// 004354E0 STAllPlayersC::ReplaceObject
#line 4 "decomp/ST.exe/functions/004354E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ReplaceObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0043553B MOVSX ECX,byte ptr [EBP + 0x8] | 00435596 MOVSX
   EAX,byte ptr [EBP + 0x8] */

void __thiscall
st::fn_004354E0(STAllPlayersC *this,char param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *pDVar1;
  dword dVar2;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint index;
  int *piVar7;
  int iVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_64;
  DArrayTy *local_20 [3];
  dword local_14;
  DArrayTy *local_10;
  void *local_c;
  undefined4 local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar4 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (iVar4 != -0x5001fff7) {
      iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x117c,0,iVar4,
                                 "%s","STAllPlayersC::ReplaceObject");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x117d);
    }
    return;
  }
  local_10 = nullptr;
  do {
    uVar6 = (uint)DAT_0080874d;
    if ((*(int *)((int)&g_packedRecords_A62x8[uVar6].field201_0x207 + (int)local_10) == 0x19a) &&
       (*(int *)((int)&g_packedRecords_A62x8[uVar6].field202_0x20b + (int)local_10) == (int)param_1)
       ) {
      pDVar1 = *(DArrayTy **)((int)&g_packedRecords_A62x8[uVar6].field204_0x211 + (int)local_10);
      uVar6 = 0;
      dVar2 = pDVar1->count;
      if (0 < (int)dVar2) {
        do {
          st::fn_006ACC70(pDVar1,uVar6,&local_8);
          if ((short)local_8 == (short)param_2) {
            local_8 = param_3;
            st::fn_006AE140(pDVar1,uVar6,&local_8);
            break;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)dVar2);
      }
    }
    local_10 = (DArrayTy *)((int)local_10 + 0x10);
  } while ((int)local_10 < 0x91);
  local_10 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  if (((local_10 != nullptr) && (local_14 = local_10->count, local_14 != 0)) &&
     (uVar6 = 0, 0 < (int)local_14)) {
    do {
      st::fn_006ACC70(local_10,uVar6,local_20);
      if (local_20[0] != nullptr) {
        dVar2 = local_20[0]->count;
        index = 0;
        if (0 < (int)dVar2) {
          do {
            st::fn_006ACC70(local_20[0],index,&local_8);
            if ((short)local_8 == (short)param_2) {
              st::fn_006AE140(local_20[0],index,&param_3);
              break;
            }
            index = index + 1;
          } while ((int)index < (int)dVar2);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_14);
  }
  local_10 = (DArrayTy *)&g_packedRecords_A62x8[0].field2_0x5;
  do {
    pDVar1 = *(DArrayTy **)local_10;
    uVar6 = 0;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        st::fn_006ACC70(pDVar1,uVar6,&local_c);
        if (local_c != nullptr) {
          st::fn_00403B20(local_c,param_1,(short)param_2,(ushort)param_3);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar2);
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_10 = (DArrayTy *)((int)local_10 + 0xa62);
  } while ((int)local_10 < 0x7fa135);
  piVar5 = &g_packedRecords_A62x8[0].field3_0x9;
  do {
    iVar4 = *piVar5;
    if (((iVar4 != 0) && (iVar8 = *(int *)(iVar4 + 0xc), iVar8 != 0)) &&
       (piVar7 = *(int **)(iVar4 + 0x1c), 0 < iVar8)) {
      do {
        if ((int *)*piVar7 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)*piVar7 + 0x8c))(_param_1,param_2,param_3);
        }
        piVar7 = piVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    piVar5 = (int *)((int)piVar5 + 0xa62);
  } while ((int)piVar5 < 0x7fa139);
  g_currentExceptionFrame = local_64.previous;
  return;
}

// 00435930 STAllPlayersC::GetCursorType
#line 4 "decomp/ST.exe/functions/00435930/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCursorType

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00435945 MOV EAX,dword ptr [EDI + 0x20] classifies dword parameter loaded at 00435939
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=short __thiscall
   GetCursorType(STAllPlayersC * this, undefined4 param_1, AnonShape_00435930_AC276C8C * param_2,
   undefined4 param_3, int * param_4) Evidence: every machine RET purges exactly 16 explicit stack
   bytes; current signature describes 24; removed trailing parameter slots have no listing
   references; ret_sites=00435A2B RET 0x10 | 00435A5D RET 0x10 | 00435A9C RET 0x10 | 00435AD1 RET
   0x10 | 00435B0B RET 0x10 */

short __thiscall
st::fn_00435930
          (STAllPlayersC *this,Global_sub_00435B90_param_3Enum param_1,
          AnonShape_00435930_AC276C8C *param_2,undefined4 param_3,int *param_4)

{
  DArrayTy *array;
  dword dVar1;
  short sVar3;
  uint uVar4;
  int iVar5;
  STGameObjC *pSVar6;
  undefined4 uVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  uint index;
  undefined1 local_8 [4];

  if ((param_2 != nullptr) &&
     ((((iVar5 = param_2->field_0020, iVar5 == 0x14 || (iVar5 == 1000)) || (iVar5 == 0x3e9)) ||
      ((iVar5 == 0x172 || (iVar5 == 0x1a4)))))) {
    st::fn_004034CC((int)param_2);
    /* ST_PSEUDO[unresolved_register_input,return_width_artifact]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate call-output artifact: verify return width, clobbers, or x87 state */
    in_EDX = extraout_EDX;
  }
  uVar4 = (uint)DAT_0080874d;
  if (g_packedRecords_A62x8[uVar4].field200_0x203 == 0) {
    if (g_packedRecords_A62x8[uVar4].field96_0x163 != 0) {
      if (g_packedRecords_A62x8[uVar4].field96_0x163 != 0x3c) {
        return 0;
      }
      if (*(uint *)&g_packedRecords_A62x8[uVar4].field97_0x167 != uVar4) {
        return 0;
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      sVar3 = st::fn_0040369D(STReplaceLowByte((uint32_t)(in_EDX), (uint8_t)(DAT_0080874d)),
                                 (DArrayTy *)g_packedRecords_A62x8[uVar4].field102_0x16d,param_1,
                                 (int *)param_2,param_3,param_4);
      return sVar3;
    }
  }
  else if (g_packedRecords_A62x8[uVar4].field200_0x203 == 1) {
    if (g_packedRecords_A62x8[uVar4].field149_0x1b3 != 0) {
      if (g_packedRecords_A62x8[uVar4].field149_0x1b3 != 0x19a) {
        return 0;
      }
      if (*(uint *)&g_packedRecords_A62x8[uVar4].field150_0x1b7 != uVar4) {
        return 0;
      }
      if (g_packedRecords_A62x8[uVar4].field156_0x1c1 != 1) {
        return 0;
      }
      array = (DArrayTy *)g_packedRecords_A62x8[uVar4].field155_0x1bd;
      index = 0;
      dVar1 = array->count;
      if ((int)dVar1 < 1) {
        return 0;
      }
      do {
        st::fn_006ACC70(array,index,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = st::fn_004028BA(this,g_packedRecords_A62x8[uVar4].field150_0x1b7,STPiece<0,2>(local_8),CASE_1);
          uVar7 = (*pSVar6->vtable->vfunc_28)(param_1,param_2,param_3,param_4);
          return (short)uVar7;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return 0;
    }
  }
  else {
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x11ea,0,0,"%s",
                               "STAllPlayersC::GetCursorType invalid active panel");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if ((param_2 != nullptr) && (param_2->field_0024 == (uint)DAT_0080874d)
     ) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((param_2->field_0020 == 0x14) &&
       (iVar5 = (**(code **)(*(int *)param_2 + 0xec))(), iVar5 == 1)) {
      return 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((param_2->field_0020 == 1000) || (param_2->field_0020 == 0x3e9)) &&
       (iVar5 = (**(code **)(*(int *)param_2 + 0xec))(), iVar5 == 1)) {
      return 4;
    }
  }
  return 0;
}

// 00436F20 STAllPlayersC::CmdToPlsObj
#line 4 "decomp/ST.exe/functions/00436F20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x14]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x4c]:10 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData1;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x5c]:16 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData10;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x98]:10 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData11;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xa0]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xa8]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xb0]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderDataE;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xb8]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xc0]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xc8]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xd0]:8 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData4;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xdc]:8 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData6;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xe4]:7 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderDataF;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x124]:10 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderDataD;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x174]:31 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData9;
   replacement=unconstrained_ssa_stack_storage */

void __thiscall st::fn_00436F20(STAllPlayersC *this,void *command)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  byte bVar11;
  undefined2 uVar12;
  short sVar13;
  uint uVar14;
  STGameObjC *pSVar15;
  DArrayTy *pDVar16;
  STGroupBoatC *pSVar17;
  DArrayTy *pDVar18;
  byte *puVar19;
  STWorldObject *pSVar20;
  dword dVar21;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  undefined4 uVar22;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX_04;
  STGroupBoatCVTable *pSVar23;
  ushort uVar24;
  int iVar25;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  byte *puVar26;
  undefined2 arg_1;
  undefined2 arg_2;
  undefined4 local_1fc;
  AnonShape_005EFAE0_B406B78B *local_1f6;
  undefined4 local_1b8 [17];
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  uint uStack_16a;
  undefined1 uStack_166;
  undefined2 uStack_157;
  dword local_154;
  undefined4 local_150;
  uint local_14c;
  DArrayTy *local_148;
  undefined4 local_138;
  DArrayTy *local_134;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined4 uStack_11e;
  undefined1 local_118 [4];
  undefined4 local_114;
  DArrayTy *local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  undefined2 local_104;
  undefined2 local_102;
  int local_100;
  undefined4 local_fc;
  DArrayTy *local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  int local_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined4 uStack_e1;
  DArrayTy *pDStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined4 uStack_d0;
  DArrayTy *pDStack_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  ushort uStack_b0;
  ushort uStack_ae;
  ushort uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  short sStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  AnonShape_0041AF40_F59F8577 local_8c;
  DArrayTy *local_74;
  DArrayTy *local_6c;
  ushort *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 auStack_48 [4];
  int *local_40;
  int local_3c;
  undefined4 local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  int local_24;
  STAllPlayersC *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 auStack_10 [2];
  DArrayTy *local_c;
  STGameObjC *local_8;
  char bVar1;

  bVar1 = STField<char>(command,8);
  uVar24 = STField<ushort>(command,10);
  local_38 = STReplaceLowWord((uint32_t)(this), (uint16_t)(uVar24));
  local_8 = nullptr;
  uVar14 = STField<uint>(command,10) >> 0x10;
  pDVar16 = (DArrayTy *)g_packedRecords_A62x8[(byte)bVar1].field1_0x1;
  local_30 = pDVar16;
  local_20 = this;
  if (uVar14 != 0) {
    if (uVar14 != 1) {
      if (uVar14 != 2) {
        return;
      }
      if (uVar24 == 0xffff) {
        return;
      }
      pSVar15 = st::fn_004028BA(g_allPlayers_007FA174,bVar1,uVar24,CASE_3);
      if (pSVar15 == nullptr) {
        return;
      }
      if (STField<char>(command,0xe) != '\x15') {
        if (STField<char>(command,0xe) != '*') {
          return;
        }
        st::fn_0040108C(pSVar15,0x2a,command);
        return;
      }
      local_24 = 4 - (uint)*STField<byte *>(command,0x17);
      st::fn_0040108C(pSVar15,0x15,(undefined1 *)&local_24);
      return;
    }
    if (uVar24 == 0xffff) {
      return;
    }
    local_8 = st::fn_004028BA(g_allPlayers_007FA174,bVar1,uVar24,CASE_1);
    if (local_8 == nullptr) {
      return;
    }
    local_8c.field_0010 = 0x4401;
    switch(STField<undefined1>(command,0xe)) {
    case 8:
    case 9:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x2a:
      goto cf_common_exit_00437191;
    default:
      return;
    case 0x14:
      local_68 = STField<ushort *>(command,0x17);
      uVar24 = local_68[2];
      uVar2 = *local_68;
      local_34 = (DArrayTy *)(uint)uVar2;
      uVar3 = local_68[4];
      local_2c = (DArrayTy *)(uint)uVar3;
      local_6c = (DArrayTy *)(int)(short)uVar24;
      local_30 = (DArrayTy *)(int)(short)uVar3;
      iVar25 = (int)(short)uVar2;
      if ((STGridAt3D(g_pathingGrid, iVar25, local_6c, local_30) != 0) &&
         ((((((((short)uVar2 < 0 || (g_worldGrid.sizeX <= (short)uVar2)) || ((short)uVar24 < 0)) ||
             ((g_worldGrid.sizeY <= (short)uVar24 || ((short)uVar3 < 0)))) ||
            (g_worldGrid.sizeZ <= (short)uVar3)) ||
           (STGridAt3D(g_worldGrid, iVar25, local_6c, local_30).objects[0] ==
            nullptr)) && (local_28 = local_2c, (short)uVar3 < 5)))) {
        while( true ) {
          sVar13 = (short)local_28;
          if (STGridAt3D(g_pathingGrid, iVar25, local_6c, sVar13) == 0) break;
          if (((((-1 < (short)uVar2) && ((short)uVar2 < g_worldGrid.sizeX)) &&
               ((-1 < (short)uVar24 &&
                ((((short)uVar24 < g_worldGrid.sizeY && (-1 < sVar13)) &&
                 (sVar13 < g_worldGrid.sizeZ)))))) &&
              (STGridAt3D(g_worldGrid, iVar25, uVar24, sVar13).objects[0] !=
               nullptr)) ||
             (local_28 = (DArrayTy *)((int)&local_28->flags + 1), 4 < (short)local_28))
          goto cf_common_exit_00437191;
        }
        *(int *)(local_68 + 4) = (int)sVar13;
      }
cf_common_exit_00437191:
      local_8c.field_0014 = command;
      local_8->GetMessage(&local_8c);
      return;
    case 0x29:
      if (*STField<char *>(command,0x17) == '\0') {
        if (pDVar16 == nullptr) {
          return;
        }
        pDVar18 = st::fn_006AE290(nullptr,1,2,1);
        st::fn_006AE1C0(pDVar18,&local_38);
        local_8c.field_0014 = (undefined4 *)((uint)STPiece<2,2>(local_8c.field_0014) << 0x10);
      }
      else {
        if (pDVar16 == nullptr) {
          return;
        }
        pDVar18 = st::fn_006AE290(nullptr,1,2,1);
        st::fn_006AE1C0(pDVar18,&local_38);
        local_8c.field_0014 = (undefined4 *)STReplaceLowWord((uint32_t)(local_8c.field_0014), (uint16_t)(1));
      }
      local_8c.field_0010 = 0x5d98;
      local_74 = pDVar18;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pDVar16->flags)(&local_8c);
      st::fn_006AE110(pDVar18);
      return;
    }
  }
  if (uVar24 == 0xffff) {
    return;
  }
  local_1c = local_38;
  if (STField<char>(command,0xe) == '\x17') {
    puVar6 = STField<undefined1 *>(command,0x17);
    switch(*puVar6) {
    case 0x11:
      if (STField<int>(command,0x13) == 0) {
        pSVar17 = st::fn_00405CF9(bVar1,uVar24);
        if (pSVar17 == nullptr) {
          return;
        }
        local_c = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar17);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_ECX_04;
      }
      else {
        iVar25 = STField<int>(command,0xf);
        local_c = st::fn_006AE290(nullptr,0,2,1);
        sVar13 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_ECX_03;
        if (0 < (short)(STField<uint>(command,0x13) >> 1)) {
          do {
            st::fn_006AE1C0(local_c,puVar6 + sVar13 * 2 + iVar25);
            sVar13 = sVar13 + 1;
            uVar14 = STField<uint>(command,0x13) >> 1;
          } while (sVar13 < (short)uVar14);
        }
      }
      pDVar16 = local_c;
      st::fn_004010F0(STReplaceLowByte((uint32_t)(uVar14), (uint8_t)(STField<undefined1>(command,8))),local_c,
                         *(int *)(STField<int>(command,0x17) + 0x1d));
      st::fn_006AE110(pDVar16);
      return;
    case 0x15:
      if (STField<int>(command,0x13) == 0) {
        pSVar17 = st::fn_00405CF9(bVar1,uVar24);
        if (pSVar17 == nullptr) {
          return;
        }
        pDVar16 = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar17);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_ECX_01;
      }
      else {
        iVar25 = STField<int>(command,0xf);
        pDVar16 = st::fn_006AE290(nullptr,0,2,1);
        sVar13 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_ECX;
        if (0 < (short)(STField<uint>(command,0x13) >> 1)) {
          do {
            st::fn_006AE1C0(pDVar16,puVar6 + sVar13 * 2 + iVar25);
            sVar13 = sVar13 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar22 = extraout_ECX_00;
          } while (sVar13 < (short)(STField<uint>(command,0x13) >> 1));
        }
      }
      st::fn_00403CFB(STReplaceLowByte((uint32_t)(uVar22), (uint8_t)(STField<undefined1>(command,8))),
                         &pDVar16->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      st::fn_00405A74(STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(STField<undefined1>(command,8)))
                         ,&pDVar16->flags,0);
      st::fn_006AE110(pDVar16);
      return;
    case 0x16:
      if (STField<int>(command,0x13) == 0) {
        pSVar17 = st::fn_00405CF9(bVar1,uVar24);
        if (pSVar17 == nullptr) {
          return;
        }
        local_c = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar17);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_EDX_02;
      }
      else {
        iVar25 = STField<int>(command,0xf);
        local_c = st::fn_006AE290(nullptr,0,2,1);
        sVar13 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_EDX_00;
        if (0 < (short)(STField<uint>(command,0x13) >> 1)) {
          do {
            st::fn_006AE1C0(local_c,puVar6 + sVar13 * 2 + iVar25);
            sVar13 = sVar13 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar22 = extraout_EDX_01;
          } while (sVar13 < (short)(STField<uint>(command,0x13) >> 1));
        }
      }
      pDVar16 = local_c;
      st::fn_00403CFB(STReplaceLowByte((uint32_t)(uVar22), (uint8_t)(STField<undefined1>(command,8))),
                         &local_c->flags,0);
      st::fn_006AE110(pDVar16);
      return;
    case 0x17:
      if (STField<int>(command,0x13) == 0) {
        pSVar17 = st::fn_00405CF9(bVar1,uVar24);
        if (pSVar17 == nullptr) {
          return;
        }
        pDVar16 = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar17);
      }
      else {
        iVar25 = STField<int>(command,0xf);
        pDVar16 = st::fn_006AE290(nullptr,0,2,1);
        sVar13 = 0;
        if (0 < (short)(STField<uint>(command,0x13) >> 1)) {
          do {
            st::fn_006AE1C0(pDVar16,puVar6 + sVar13 * 2 + iVar25);
            sVar13 = sVar13 + 1;
          } while (sVar13 < (short)(STField<uint>(command,0x13) >> 1));
        }
      }
      if (*(int *)(STField<int>(command,0x17) + 0x1d) != 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_00405A74(CONCAT31((int3)((uint)STField<int>(command,0x17) >> 8),
                                    STField<undefined1>(command,8)),&pDVar16->flags,0);
        st::fn_006AE110(pDVar16);
        return;
      }
      st::fn_00405A74((uint)STField<byte>(command,8),&pDVar16->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      st::fn_00403CFB(STReplaceLowByte((uint32_t)(extraout_ECX_02), (uint8_t)(STField<undefined1>(command,8))),&pDVar16->flags,0);
      st::fn_006AE110(pDVar16);
      return;
    }
  }
  if (STField<int>(command,0x13) != 0) {
    iVar25 = STField<int>(command,0x17);
    iVar7 = STField<int>(command,0xf);
    local_c = st::fn_006AE290(nullptr,0,2,1);
    sVar13 = 0;
    if (0 < (short)(STField<uint>(command,0x13) >> 1)) {
      do {
        st::fn_006AE1C0(local_c,(void *)(iVar25 + iVar7 + sVar13 * 2));
        sVar13 = sVar13 + 1;
      } while (sVar13 < (short)(STField<uint>(command,0x13) >> 1));
    }
    pDVar16 = local_c;
    st::fn_0040178F(local_20,STField<char>(command,8),0xfffe,&local_c->flags,
                   (undefined2 *)&local_1c);
    st::fn_006AE110(pDVar16);
  }
  pDVar16 = local_30;
  if (((local_30 != nullptr) &&
      (pSVar17 = st::fn_00405CF9(STField<char>(command,8),(ushort)local_1c),
      pSVar17 != nullptr)) && (pSVar17->field_001C != 0)) {
    if ((STField<char>(command,0xe) == ')') && (*STField<char *>(command,0x17) == '\x01')) {
      return;
    }
    pDVar18 = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar17);
    st::fn_0040178F(local_20,STField<char>(command,8),0xfffe,(uint *)pDVar18,
                   (undefined2 *)&local_1c);
    st::fn_006AE110(pDVar18);
  }
  pSVar17 = st::fn_00405CF9(STField<char>(command,8),(ushort)local_1c);
  if (pSVar17 == nullptr) {
    return;
  }
  st::fn_00403A71(pSVar17);
  switch(STField<undefined1>(command,0xe)) {
  case 10:
    goto cf_common_exit_0043824D;
  case 0x14:
    iVar25 = st::fn_004021BC(pSVar17);
    if (iVar25 != 0) {
      pDVar16 = st::fn_006AE290(nullptr,1,6,1);
      uStack_14 = *STField<undefined2 *>(command,0x17);
      uStack_12 = (STField<undefined2 *>(command,0x17))[2];
      st::fn_004019D8(pSVar17,nullptr,nullptr,auStack_10);
      st::fn_006AE1C0(pDVar16,&uStack_14);
      uStack_d8 = 1;
      pDStack_dc = pDVar16;
      pSVar17->sub_00498D20(6,(short)&pDStack_dc);
      st::fn_006AE110(pDVar16);
      return;
    }
    uStack_4c = *STField<undefined2 *>(command,0x17);
    uStack_4a = (STField<undefined2 *>(command,0x17))[2];
    st::fn_004019D8(pSVar17,nullptr,nullptr,auStack_48);
    pSVar17->sub_00498D20(1,(short)&uStack_4c);
    return;
  case 0x15:
    local_24 = 4 - (uint)*STField<byte *>(command,0x17);
    pSVar17->sub_00498D20(7,(short)&local_24);
    return;
  case 0x16:
    puVar6 = STField<undefined1 *>(command,0x17);
    switch(*puVar6) {
    case 0:
    case 5:
      st::fn_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar6 + 1),(int *)&local_8
                );
      if (local_8 == nullptr) {
        return;
      }
      pDVar16 = st::fn_006AE290(nullptr,1,4,1);
      local_18 = *(undefined1 *)&local_8->field_0024;
      local_16 = local_8->field_0032;
      uVar14 = local_8->field_0020;
      if (uVar14 < 0x1af) {
        if (uVar14 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar14 != 0x14) {
          return;
        }
      }
      else {
        if (uVar14 < 1000) {
          return;
        }
        if (0x3e9 < uVar14) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      st::fn_006AE1C0(pDVar16,&local_18);
      local_14c = (uint)(*STField<char *>(command,0x17) != '\0');
      local_150 = 0;
      local_148 = pDVar16;
      pSVar17->sub_00498D20(2,(short)&local_150);
      st::fn_006AE110(pDVar16);
      return;
    case 1:
      st::fn_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar6 + 1),(int *)&local_8
                );
      if (local_8 != nullptr) {
        uStack_e4 = *(undefined1 *)&local_8->field_0024;
        uStack_e3 = local_8->field_0032;
        uStack_e1 = local_8->field_0018;
        pSVar17->sub_00498D20(0xf,(short)&uStack_e4);
        return;
      }
      break;
    case 2:
      uStack_b0 = (ushort)(byte)puVar6[5];
      uStack_ae = (ushort)(byte)puVar6[6];
      uStack_ac = (ushort)(byte)puVar6[7];
      pSVar17->sub_00498D20(0xe,(short)&uStack_b0);
      return;
    }
    break;
  case 0x17:
    puVar6 = STField<undefined1 *>(command,0x17);
    switch(*puVar6) {
    case 1:
      st::fn_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar6 + 0x1d),
                 (int *)&local_8);
      if (local_8 != nullptr) {
        pDVar16 = st::fn_006AE290(nullptr,1,2,1);
        st::fn_006AE1C0(pDVar16,&local_8->field_0032);
        local_138 = 0;
        local_134 = pDVar16;
        pSVar17->sub_00498D20(5,(short)&local_138);
        st::fn_006AE110(pDVar16);
        return;
      }
      break;
    case 2:
      pDVar16 = st::fn_006AE290(nullptr,1,6,1);
      uStack_14 = *(undefined2 *)(STField<int>(command,0x17) + 1);
      uStack_12 = *(undefined2 *)(STField<int>(command,0x17) + 5);
      st::fn_004019D8(pSVar17,nullptr,nullptr,auStack_10);
      st::fn_006AE1C0(pDVar16,&uStack_14);
      st::fn_004019D8(pSVar17,&uStack_14,&uStack_12,nullptr);
      st::fn_006AE1C0(pDVar16,&uStack_14);
      uStack_d8 = 0;
      pDStack_dc = pDVar16;
      pSVar17->sub_00498D20(6,(short)&pDStack_dc);
      st::fn_006AE110(pDVar16);
      return;
    case 3:
      sVar13 = *(short *)(puVar6 + 9);
      sVar4 = *(short *)(puVar6 + 5);
      sVar5 = *(short *)(puVar6 + 1);
      if (((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) &&
         ((((-1 < sVar4 && ((sVar4 < g_worldGrid.sizeY && (-1 < sVar13)))) &&
           (sVar13 < g_worldGrid.sizeZ)) &&
          (pSVar20 = STGridAt3D(g_worldGrid, sVar5, sVar4, sVar13).objects[0],
          pSVar20 != nullptr)))) {
        pDVar16 = st::fn_006AE290(nullptr,1,2,1);
        st::fn_006AE1C0(pDVar16,&pSVar20[1].field_0xe);
        uStack_d0 = 0;
        pDStack_cc = pDVar16;
        pSVar17->sub_00498D20(4,(short)&uStack_d0);
        st::fn_006AE110(pDVar16);
        return;
      }
      break;
    case 10:
      uStack_d0 = 1;
      pDStack_cc = nullptr;
      pSVar17->sub_00498D20(4,(short)&uStack_d0);
      return;
    case 0x10:
      uStack_b8 = *(undefined2 *)(puVar6 + 1);
      uStack_b6 = *(undefined2 *)(puVar6 + 5);
      uStack_b4 = *(undefined2 *)(puVar6 + 9);
      pSVar17->sub_00498D20(0x14,(short)&uStack_b8);
      return;
    case 0x13:
      sVar13 = *(short *)(puVar6 + 1);
      sVar4 = *(short *)(puVar6 + 9);
      sVar5 = *(short *)(puVar6 + 5);
      if ((((-1 < sVar13) && (sVar13 < g_worldGrid.sizeX)) &&
          ((-1 < sVar5 &&
           (((sVar5 < g_worldGrid.sizeY && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeZ)))))) &&
         (STGridAt3D(g_worldGrid, sVar13, sVar5, sVar4).objects[0] != nullptr)) {
        uStack_98 = 0;
        uStack_94 = *(undefined2 *)(puVar6 + 1);
        uStack_92 = *(undefined2 *)(puVar6 + 5);
        uStack_90 = *(undefined2 *)(puVar6 + 9);
        pSVar17->sub_00498D20(0x11,(short)&uStack_98);
        return;
      }
      break;
    case 0x14:
      uStack_98 = 1;
      uStack_90 = 0;
      uStack_92 = 0;
      uStack_94 = 0;
      pSVar17->sub_00498D20(0x11,(short)&uStack_98);
      return;
    case 0x18:
      uStack_a8 = *(undefined2 *)(puVar6 + 1);
      uStack_a6 = *(undefined2 *)(puVar6 + 5);
      uStack_a4 = *(undefined2 *)(puVar6 + 9);
      pSVar17->sub_00498D20(0x13,(short)&uStack_a8);
      return;
    }
    break;
  case 0x18:
    puVar6 = STField<undefined1 *>(command,0x17);
    arg_1 = SUB42(pSVar17,0);
    switch(*puVar6) {
    case 1:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 1;
      break;
    case 2:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 2;
      break;
    case 3:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 4;
      break;
    case 4:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 5;
      break;
    case 5:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 3;
      break;
    case 6:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 0xfffd;
      break;
    case 7:
      uVar12 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar23 = pSVar17->vtable;
      uVar24 = (ushort)(byte)puVar6[0x11];
      arg_2 = 0xfffe;
      break;
    case 8:
      (*pSVar17->vtable->vfunc_18)(arg_1,0,0,0);
      st::fn_00404C55(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar23 = pSVar17->vtable;
      dVar21 = (*pSVar23->slot_24)(pSVar17);
      uVar12 = (undefined2)dVar21;
      dVar21 = pSVar17->slot_20();
      (*pSVar23->vfunc_18)(arg_1,0xffff,(short)dVar21 + 1,uVar12);
      goto switchD_004384bc_default;
    case 10:
      pSVar23 = pSVar17->vtable;
      dVar21 = (*pSVar23->slot_24)(pSVar17);
      uVar12 = (undefined2)dVar21;
      dVar21 = pSVar17->slot_20();
      (*pSVar23->vfunc_18)(arg_1,0xffff,(short)dVar21 + -1,uVar12);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar23 = pSVar17->vtable;
      dVar21 = (*pSVar23->slot_24)(pSVar17);
      sVar13 = (short)dVar21 + 0x2d;
      dVar21 = pSVar17->slot_20();
      (*pSVar23->vfunc_18)(arg_1,0xffff,(short)dVar21,sVar13);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar23 = pSVar17->vtable;
      dVar21 = (*pSVar23->slot_24)(pSVar17);
      sVar13 = (short)dVar21 + -0x2d;
      dVar21 = pSVar17->slot_20();
      (*pSVar23->vfunc_18)(arg_1,0xffff,(short)dVar21,sVar13);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar23->vfunc_18)(arg_1,arg_2,uVar24,uVar12);
switchD_004384bc_default:
    puVar6 = STField<undefined1 *>(command,0x17);
    switch(*puVar6) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uStack_4c = *(undefined2 *)(puVar6 + 1);
      uStack_4a = *(undefined2 *)(puVar6 + 5);
      st::fn_004019D8(pSVar17,nullptr,nullptr,auStack_48);
      pSVar17->sub_00498D20(1,(short)&uStack_4c);
      return;
    case 8:
cf_common_exit_0043824D:
      pSVar17->sub_00498D20(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      st::fn_004019D8(pSVar17,&uStack_4c,&uStack_4a,auStack_48);
      pSVar17->sub_00498D20(1,(short)&uStack_4c);
      return;
    }
    break;
  case 0x19:
    puVar9 = STField<undefined2 *>(command,0x17);
    uStack_124 = *puVar9;
    uStack_122 = puVar9[2];
    uStack_120 = puVar9[4];
    uStack_11e = 0xffffffff;
    pSVar17->sub_00498D20(0xd,(short)&uStack_124);
    return;
  case 0x1a:
    pcVar8 = STField<char *>(command,0x17);
    if (*pcVar8 == '\x01') {
      uStack_5c = 2;
      sStack_58 = 0;
      sStack_56 = 0;
      sStack_54 = 0;
      uStack_52 = *(undefined2 *)(pcVar8 + 1);
      uStack_50 = *(undefined2 *)(pcVar8 + 5);
      uStack_4e = *(undefined2 *)(pcVar8 + 9);
      pSVar17->sub_00498D20(0x10,(short)&uStack_5c);
      return;
    }
    if (*pcVar8 == '\x02') {
      sStack_58 = *(short *)(pcVar8 + 1);
      sStack_56 = *(short *)(pcVar8 + 5);
      sStack_54 = *(short *)(pcVar8 + 9);
      if ((((-1 < sStack_58) && (sStack_58 < g_worldGrid.sizeX)) &&
          ((-1 < sStack_56 &&
           (((sStack_56 < g_worldGrid.sizeY && (-1 < sStack_54)) && (sStack_54 < g_worldGrid.sizeZ))
           )))) && ((pSVar20 = STGridAt3D(g_worldGrid, sStack_58, sStack_56, sStack_54).objects[0]
                    , pSVar20 != nullptr && (pSVar20->value_20 == 1000)))) {
        iVar25 = pSVar20->GetObjectTypeId();
        if (iVar25 == 0x37) {
          uStack_5c = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
        }
        else {
          iVar25 = pSVar20->GetObjectTypeId();
          if (iVar25 != 0x6c) {
            return;
          }
          iVar25 = st::fn_00402FD6(pSVar20,(undefined4 *)&uStack_52,(undefined4 *)&uStack_50,
                                      (undefined4 *)&uStack_4e);
          if (iVar25 != 1) {
            return;
          }
          uStack_5c = 1;
        }
        pSVar17->sub_00498D20(0x10,(short)&uStack_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar8 = STField<char *>(command,0x17);
    sStack_a0 = *(short *)(pcVar8 + 1);
    sVar13 = *(short *)(pcVar8 + 5);
    sVar4 = *(short *)(pcVar8 + 3);
    if (sStack_a0 < 0) {
      return;
    }
    if (g_worldGrid.sizeX <= sStack_a0) {
      return;
    }
    if (sVar4 < 0) {
      return;
    }
    if (g_worldGrid.sizeY <= sVar4) {
      return;
    }
    if (sVar13 < 0) {
      return;
    }
    if (g_worldGrid.sizeZ <= sVar13) {
      return;
    }
    pSVar20 = STGridAt3D(g_worldGrid, sStack_a0, sVar4, sVar13).objects[0];
    if (pSVar20 == nullptr) {
      return;
    }
    if (*pcVar8 == '\x03') {
      uStack_9e = *(undefined2 *)(pcVar8 + 3);
      uStack_9c = *(undefined2 *)(pcVar8 + 5);
      pSVar17->sub_00498D20(0x12,(short)&sStack_a0);
      return;
    }
    if (*pcVar8 == '\x01') {
      pDVar16 = st::fn_006AE290(nullptr,1,2,1);
      local_c = pDVar16;
      st::fn_006AE1C0(pDVar16,&pSVar20[1].field_0xe);
      local_114 = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = pDVar16;
      local_100 = pSVar20->GetObjectTypeId();
      local_fc = 1;
      local_f8 = nullptr;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar17->sub_00498D20(8,(short)&local_114);
      st::fn_006AE110(local_c);
      return;
    }
    local_c = (DArrayTy *)st::fn_00402DB5((STGroupC *)pSVar17);
    dVar21 = local_c->count;
    local_154 = dVar21;
    local_6c = st::fn_006AE290(nullptr,0,2,1);
    local_34 = st::fn_006AE290(nullptr,0,2,1);
    local_2c = st::fn_006AE290(nullptr,0,2,1);
    local_30 = st::fn_006AE290(nullptr,0,2,1);
    local_3c = 0;
    local_68 = nullptr;
    local_d4 = 0;
    local_28 = nullptr;
    if ((int)dVar21 < 1) {
cf_common_exit_00437E03:
      iVar25 = STField<int>(command,0x17);
      uStack_c0 = *(undefined2 *)(iVar25 + 1);
      uStack_be = *(undefined2 *)(iVar25 + 3);
      uStack_bc = *(undefined2 *)(iVar25 + 5);
      pSVar17->sub_00498D20(10,(short)&uStack_c0);
      pDVar16 = local_30;
    }
    else {
      uVar14 = 0;
      do {
        st::fn_006ACC70(local_c,uVar14,local_118);
        pSVar15 = st::fn_004028BA(g_allPlayers_007FA174,pSVar17->field_0024,STPiece<0,2>(local_118),CASE_1);
        iVar25 = (*pSVar15->vtable->vfunc_2C)();
        if ((((iVar25 == 8) || (iVar25 = (*pSVar15->vtable->vfunc_2C)(), iVar25 == 0x14)) ||
            (iVar25 = (*pSVar15->vtable->vfunc_2C)(), iVar25 == 0x1a)) &&
           (iVar25 = st::fn_00402EDC(pSVar15), iVar25 == 0xc)) {
          puVar19 = (byte *)st::fn_004024CD(pSVar15,local_1b8);
          puVar26 = (byte *)(&local_1fc);
          memmove(puVar26, puVar19, 0x42); /* compiler REP MOVS byte copy */
          iVar25 = st::fn_006E62D0(g_playSystem_00802A38,local_1f6,(int *)&local_40);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar25 == 0) && (iVar25 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar25)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar16 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (ushort *)((int)local_68 + 1);
              pDVar16 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar25 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x14ca,0,0,
                                            "%s",
                                            "STAllPlayersC::CmdToPlsObj, CMDTY_RC - unknown resource type");
                if (iVar25 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar16 = local_2c;
            }
            st::fn_006AE1C0(pDVar16,(void *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = (DArrayTy *)((int)local_28 + 1);
        uVar14 = (uint)(short)local_28;
      } while ((int)uVar14 < (int)local_154);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar25 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar25 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar25 = 2;
      }
LAB_00437cb5:
      local_114 = 0;
      if (iVar25 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar25 == 1) {
        local_110 = local_34;
        bVar11 = st::fn_004049B7(pSVar17->field_0024);
        local_100 = (-(uint)(bVar11 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar25 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pDVar16 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      iVar25 = STField<int>(command,0x17);
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar13 = *(short *)(iVar25 + 5);
      sVar4 = *(short *)(iVar25 + 3);
      sVar5 = *(short *)(iVar25 + 1);
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar4 < 0)) ||
          ((g_worldGrid.sizeY <= sVar4 || (sVar13 < 0)))) || (g_worldGrid.sizeZ <= sVar13)) {
        pSVar20 = nullptr;
      }
      else {
        pSVar20 = STGridAt3D(g_worldGrid, sVar5, sVar4, sVar13).objects[0];
      }
      st::fn_006AE1C0(local_30,&pSVar20[1].field_0xe);
      local_f8 = pDVar16;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar17->sub_00498D20(8,(short)&local_114);
    }
    st::fn_006AE110(local_c);
    st::fn_006AE110(local_6c);
    st::fn_006AE110(local_34);
    st::fn_006AE110(local_2c);
    st::fn_006AE110(pDVar16);
    return;
  case 0x21:
    pcVar8 = STField<char *>(command,0x17);
    cVar1 = *pcVar8;
    if (cVar1 == '\x01') {
      local_64 = *(undefined4 *)(pcVar8 + 1);
      pSVar17->sub_00498D20(0x15,(short)&local_64);
      return;
    }
    if (cVar1 == '\x03') {
      uStack_c4 = 0xffff;
      uStack_c6 = 0xffff;
      uStack_c8 = 0xffff;
      pSVar17->sub_00498D20(0xc,(short)&uStack_c8);
      return;
    }
    if (cVar1 == '\x04') {
      local_60 = *(undefined4 *)(pcVar8 + 1);
      pSVar17->sub_00498D20(0xb,(short)&local_60);
      return;
    }
    break;
  case 0x23:
    puVar19 = (byte *)(STField<undefined4 *>(command,0x17));
    uStack_174 = *(undefined2 *)(puVar19 + 1);
    uStack_172 = *(undefined2 *)(puVar19 + 2);
    uStack_170 = *(undefined2 *)(puVar19 + 3);
    uStack_16e = *puVar19;
    uStack_16a = (uint)STField<byte>(command,8);
    uStack_166 = 0;
    uStack_157 = 0xffff;
    pSVar17->sub_00498D20(9,(short)&uStack_174);
    return;
  case 0x28:
    if (*STField<char *>(command,0x17) == '\0') {
      st::fn_004040BB(pSVar17,0);
    }
    else if (*STField<char *>(command,0x17) == '\x01') {
      st::fn_004040BB(pSVar17,1);
      return;
    }
    break;
  case 0x29:
    if (*STField<char *>(command,0x17) != '\0') {
      if (pDVar16 == nullptr) {
        return;
      }
      local_8c.field_0010 = 0x5d98;
      local_8c.field_0014 = (undefined4 *)STReplaceLowWord((uint32_t)(local_8c.field_0014), (uint16_t)(1));
      local_74 = (DArrayTy *)pSVar17->field_0029;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pDVar16->flags)(&local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    puVar6 = STField<undefined1 *>(command,0x17);
    switch(*puVar6) {
    case 1:
    case 2:
      local_14c = (uint)(puVar6[3] != '\x01');
      sVar13 = 0;
      local_150 = 0;
      local_148 = st::fn_006AE290(nullptr,0,4,1);
      if (*(short *)(puVar6 + 1) != 0) {
        iVar25 = 0;
        do {
          st::fn_006AE1C0(local_148,puVar6 + iVar25 * 4 + 4);
          sVar13 = sVar13 + 1;
          iVar25 = (int)sVar13;
        } while (iVar25 < (int)(uint)*(ushort *)(puVar6 + 1));
      }
      pSVar17->sub_00498D20(2,(short)&local_150);
      st::fn_006AE110(local_148);
      return;
    case 3:
      sVar13 = 0;
      local_138 = 0;
      local_134 = st::fn_006AE290(nullptr,0,2,1);
      if (*(short *)(puVar6 + 1) != 0) {
        iVar25 = 0;
        do {
          st::fn_006AE1C0(local_134,puVar6 + iVar25 * 2 + 4);
          sVar13 = sVar13 + 1;
          iVar25 = (int)sVar13;
        } while (iVar25 < (int)(uint)*(ushort *)(puVar6 + 1));
      }
      pSVar17->sub_00498D20(5,(short)&local_138);
      st::fn_006AE110(local_134);
      return;
    case 4:
      break;
    default:
      iVar25 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1427,0,0,"%s",
                                  "STAllPlayersC::CmdToPlsObj CMDTY_LPTR");
      if (iVar25 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

// 00438E30 STAllPlayersC::SaveTmp
#line 4 "decomp/ST.exe/functions/00438E30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveTmp */

void __thiscall st::fn_00438E30(STAllPlayersC *this,int param_1)

{
  int *piVar1;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  int *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x16fd,0,0,"%s",
                                 "STAllPlayersC::SaveTmp");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x16fe);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x16d8);
  }
  uVar5 = (uint)DAT_0080874d;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar4 = uVar5 * 0xa62;
  if (g_packedRecords_A62x8[uVar5].field200_0x203 == 0) {
    local_8 = &g_packedRecords_A62x8[uVar5].field96_0x163;
  }
  else if (g_packedRecords_A62x8[uVar5].field200_0x203 == 1) {
    local_8 = &g_packedRecords_A62x8[uVar5].field149_0x1b3;
  }
  else {
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x16dd,0,0,"%s",
                               "STAllPlayersC::SaveTmp invalid panel number");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x16de);
  }
  piVar3 = local_8;
  if (*local_8 != 0) {
    local_c = (undefined4 *)(param_1 * 0x10 + 0x7f5027 + iVar4);
    if (STField<DArrayTy *>(local_c,10) != nullptr) {
      st::fn_006AE110(STField<DArrayTy *>(local_c,10));
      STField<undefined4>(local_c,10) = 0;
      *local_c = 0;
    }
  }
  iVar6 = *piVar3;
  if (0x19a < iVar6) {
    if (((iVar6 == 0x1a4) || (iVar6 == 0x1ae)) || (iVar6 == 0x1b8)) goto cf_common_exit_00438FE7;
    goto LAB_00438fb0;
  }
  if (iVar6 == 0x19a) {
LAB_00438f65:
    piVar1 = (int *)(param_1 * 0x10 + 0x7f5027 + iVar4);
    *piVar1 = iVar6;
    piVar1[1] = piVar3[1];
    STField<undefined2>(piVar1,0xe) = STField<undefined2>(piVar3,0xe);
    st::fn_006AFE40((int *)((int)piVar1 + 10),STField<uint *>(piVar3,10));
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  if (iVar6 < 0x5b) {
    if (iVar6 == 0x5a) {
cf_common_exit_00438FE7:
      piVar1 = (int *)(param_1 * 0x10 + 0x7f5027 + iVar4);
      *piVar1 = iVar6;
      piVar1[1] = piVar3[1];
      *(short *)(piVar1 + 2) = (short)piVar3[2];
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar6 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar6 == 0x3c) goto LAB_00438f65;
  }
  else if (iVar6 == 0x172) goto cf_common_exit_00438FE7;
LAB_00438fb0:
  iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x16f9,0,0,"%s",
                             "STAllPlayersC::SaveTmp invalid game type");
  if (iVar4 == 0) {
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 00439100 STAllPlayersC::RestoreTmp
#line 4 "decomp/ST.exe/functions/00439100/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RestoreTmp */

void __thiscall st::fn_00439100(STAllPlayersC *this,int param_1)

{
  AnonShape_00439100_AC816B12 *pAVar1;
  STAllPlayersC *this_00;
  int iVar3;
  STGameObjC *pSVar4;
  uint uVar5;
  STGameObjC *pSVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_00;
  uint uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX_02;
  uint uVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EAX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX_04;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  undefined4 uVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  undefined2 uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  char cVar12;
  uint uVar13;
  InternalExceptionFrame local_70;
  STAllPlayersC *local_2c;
  AnonShape_00439100_AC816B12 *local_28;
  int local_24;
  STGameObjC *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(DAT_0080874d));
  local_c = nullptr;
  local_24 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_2c = this;
  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 != -0x5001fff7) {
      iVar9 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x19ab,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x19ac);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x170e);
  }
  this_00 = local_2c;
  pSVar4 = (STGameObjC *)(int)(char)local_8;
  iVar3 = *(int *)(param_1 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (int)pSVar4, 0x207));
  pAVar1 = (AnonShape_00439100_AC816B12 *)(param_1 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (int)pSVar4, 0x207));
  local_28 = pAVar1;
  local_20 = pSVar4;
  if (iVar3 < 0x19b) {
    if (iVar3 == 0x19a) {
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 == 0) {
        g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 1;
        st::fn_004032E7(local_2c,(char)local_8,0,0,0);
        iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
        cVar12 = (char)local_8;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) {
            iVar3 = st::fn_0040196F(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
            if (-1 < iVar3) {
              st::fn_0040317F(this_00,(char)local_8,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            st::fn_00405920((char)local_8,1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar3 = extraout_EAX_01;
LAB_00439c32:
            cVar12 = pAVar1->field_0x4;
            uVar5 = STReplaceLowWord((uint32_t)(iVar3), (uint16_t)(*(undefined2 *)pAVar1->field_000A->data));
          }
          else {
            if (iVar3 != 0) {
              if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439c87;
              goto LAB_00439c59;
            }
            iVar3 = st::fn_0040196F(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar11 = extraout_var_10;
            if (0 < iVar3) {
              st::fn_0040317F(this_00,(char)local_8,1,iVar3);
              g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3 = 0x19a;
              goto cf_common_exit_0043A47C;
            }
LAB_00439aaa:
            cVar12 = pAVar1->field_0x4;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439c59:
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x17d3,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_OBJECT ACT_LEFT");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
LAB_00439c87:
          iVar3 = st::fn_0040196F(cVar12,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,(char)local_8,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          st::fn_00405920((char)local_8,1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_02;
LAB_00439cc7:
          cVar12 = pAVar1->field_0x4;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
        }
        st::fn_00404098(this_00,(char)local_8,1,0,cVar12,uVar5);
        g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3 = 0x19a;
        goto cf_common_exit_0043A47C;
      }
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x17d7,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_OBJECT wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
          iVar3 = st::fn_0040196F((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,(char)local_8,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          if (iVar3 < 0) {
            st::fn_00405920((char)local_8,1);
            st::fn_004032E7(this_00,(char)local_8,1,1,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar11 = extraout_var_09;
            goto LAB_00439aaa;
          }
cf_common_join_0043A107:
          local_24 = 1;
          goto cf_common_exit_0043A47C;
        }
        if (iVar3 == 0) {
          iVar3 = st::fn_0040196F((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,(char)local_8,1,iVar3);
            g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3 = 0x19a;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439c32;
        }
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439b10;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439b10:
        iVar3 = st::fn_0040196F((char)local_8,1,0x19a,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,(char)local_8,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        st::fn_00405920((char)local_8,1);
        st::fn_004032E7(this_00,(char)local_8,1,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_01;
        goto LAB_00439cc7;
      }
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x17a9,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp GAMETYPE_OBJECT ACT_RIGHT");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    if (0x5a < iVar3) {
      if (iVar3 == 0x172) {
        pSVar6 = st::fn_004028BA(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_2);
        uVar5 = local_8;
        cVar12 = (char)local_8;
        if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 0) {
          if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x18df,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT wrong panel number");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
          iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
          if (iVar3 < 0x19b) {
            if (iVar3 == 0x19a) goto LAB_004397fb;
            if (iVar3 == 0) goto LAB_0043a394;
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043986a;
          }
          else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043986a:
            iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,
                              nullptr,pSVar6->field_0032);
            if (0 < iVar3) {
              st::fn_0040317F(this_00,cVar12,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            if (iVar3 < 0) goto LAB_00439672;
            goto cf_common_join_0043A107;
          }
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x18b4,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT ACT_RIGHT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 1;
        st::fn_004032E7(this_00,cVar12,0,0,0);
        uVar5 = local_8;
        iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) goto LAB_004396d1;
          if (iVar3 == 0) goto LAB_004398e7;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439956;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439956:
          cVar12 = (char)local_8;
          iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr
                            ,pSVar6->field_0032);
          if (-1 < iVar3) {
            st::fn_0040317F(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439986;
        }
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x18db,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_ARTEFACT ACT_LEFT");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439cfb:
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1998,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp invalid game type");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x1999);
      goto cf_common_exit_0043A47C;
    }
    if (iVar3 != 0x5a) {
      if (iVar3 == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x1713);
      }
      else if (iVar3 != 0x3c) goto LAB_00439cfb;
      cVar12 = (char)local_8;
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 == 0) {
        iVar3 = g_packedRecords_A62x8[(int)pSVar4].field96_0x163;
        if (iVar3 == 0) {
LAB_00439369:
          iVar3 = st::fn_0040196F((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,(char)local_8,0,iVar3);
            g_packedRecords_A62x8[(int)pSVar4].field96_0x163 = 0x3c;
            goto cf_common_exit_0043A47C;
          }
LAB_0043953a:
          pSVar6 = *(STGameObjC **)&pAVar1->field_0x4;
          if (pSVar6 == local_20) {
            st::fn_00405BBE(this_00,local_8,0,0,pAVar1->field_000A);
            g_packedRecords_A62x8[(int)pSVar4].field96_0x163 = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439566;
        }
        if (iVar3 == 0x3c) {
          iVar3 = st::fn_0040196F(cVar12,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,(char)local_8,0,iVar3);
            goto cf_common_exit_0043A47C;
          }
          if (-1 < iVar3) goto cf_common_join_0043A107;
          st::fn_00405920((char)local_8,0);
          if (((STGameObjC *)g_packedRecords_A62x8[(int)pSVar4].field105_0x177 == local_20) &&
             (*(STGameObjC **)&pAVar1->field_0x4 == local_20)) {
            st::fn_004020D6(this_00,(char)local_8,0,1,&pAVar1->field_000A->flags,(int *)&local_c,
                         nullptr,nullptr);
            st::fn_004027C0(this_00,local_8,0x3c,local_c,0,0);
            st::fn_006AE110(local_c);
          }
          else {
            st::fn_004032E7(this_00,(char)local_8,0,1,0);
          }
          goto LAB_0043953a;
        }
        if (iVar3 != 0x1ae) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1748,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT ACT_LEFT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = st::fn_0040196F(cVar12,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,(char)local_8,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        st::fn_00405920((char)local_8,0);
        st::fn_004032E7(this_00,(char)local_8,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_07;
        if (*(STGameObjC **)&pAVar1->field_0x4 == local_20) {
          st::fn_00405BBE(this_00,local_8,0,0,pAVar1->field_000A);
          g_packedRecords_A62x8[(int)pSVar4].field96_0x163 = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439469:
        cVar12 = pAVar1->field_0x4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = CONCAT22(uVar11,*(undefined2 *)pAVar1->field_000A->data);
      }
      else {
        if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1778,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT wrong panel number");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 0;
        st::fn_004032E7(this_00,cVar12,1,0,0);
        iVar3 = g_packedRecords_A62x8[(int)pSVar4].field96_0x163;
        if (iVar3 == 0) goto LAB_00439369;
        if (iVar3 != 0x3c) {
          if (iVar3 != 0x1ae) {
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1774,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_BOAT ACT_RIGHT");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
          iVar3 = st::fn_0040196F((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,(char)local_8,0,iVar3);
            goto cf_common_exit_0043A47C;
          }
          st::fn_00405920((char)local_8,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_06;
          if (*(STGameObjC **)&pAVar1->field_0x4 == local_20) {
            st::fn_00405BBE(this_00,local_8,0,0,pAVar1->field_000A);
            g_packedRecords_A62x8[(int)pSVar4].field96_0x163 = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439469;
        }
        iVar3 = st::fn_0040196F((char)local_8,0,0x3c,pAVar1->field_0x4,pAVar1->field_000A,0);
        if (-1 < iVar3) {
          st::fn_0040317F(this_00,(char)local_8,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        st::fn_00405920((char)local_8,0);
        pSVar6 = *(STGameObjC **)&pAVar1->field_0x4;
        if (pSVar6 == local_20) {
          st::fn_00405BBE(this_00,local_8,0,0,pAVar1->field_000A);
          g_packedRecords_A62x8[(int)pSVar4].field96_0x163 = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439566:
        cVar12 = pAVar1->field_0x4;
        uVar5 = STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(*(undefined2 *)pAVar1->field_000A->data));
      }
      st::fn_00404098(this_00,(char)local_8,0,0,cVar12,uVar5);
      g_packedRecords_A62x8[(int)pSVar4].field96_0x163 = 0x3c;
      goto cf_common_exit_0043A47C;
    }
    pSVar6 = st::fn_004028BA(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_4);
    uVar5 = local_8;
    cVar12 = (char)local_8;
    if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 0) {
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1885,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
LAB_004397fb:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr
                            ,pSVar6->field_0032);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
LAB_00439672:
          st::fn_00405920((char)uVar5,1);
          st::fn_004032E7(this_00,(char)uVar5,1,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar3 = extraout_EAX;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_08;
          goto LAB_0043a463;
        }
        if (iVar3 == 0) goto LAB_0043a394;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043963c;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043963c:
        iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                          pSVar6->field_0032);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < iVar3) goto cf_common_join_0043A107;
        goto LAB_00439672;
      }
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x185a,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE ACT_RIGHT");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 1;
    st::fn_004032E7(this_00,cVar12,0,0,0);
    uVar5 = local_8;
    iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
    if (iVar3 < 0x19b) {
      if (iVar3 == 0x19a) {
LAB_004396d1:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                          pSVar6->field_0032);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        goto LAB_00439986;
      }
      if (iVar3 != 0) {
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439740;
        goto LAB_00439712;
      }
LAB_004398e7:
      uVar5 = local_8;
      cVar12 = (char)local_8;
      iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                        pSVar6->field_0032);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar10 = extraout_ECX;
      if (0 < iVar3) {
        st::fn_0040317F(this_00,cVar12,1,iVar3);
        goto cf_common_exit_0043A47C;
      }
    }
    else {
      if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439712:
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1881,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_RESOURCE ACT_LEFT");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439740:
      cVar12 = (char)local_8;
      iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                        pSVar6->field_0032);
      if (-1 < iVar3) {
        st::fn_0040317F(this_00,cVar12,1,iVar3);
        goto cf_common_exit_0043A47C;
      }
LAB_00439986:
      st::fn_00405920((char)uVar5,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar3 = extraout_EAX_00;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar10 = extraout_ECX_00;
    }
    uVar7 = STReplaceLowWord((uint32_t)(iVar3), (uint16_t)(pSVar6->field_0032));
    uVar8 = STReplaceLowByte((uint32_t)(uVar10), (uint8_t)(*(undefined1 *)&pSVar6->field_0024));
    uVar13 = pSVar6->field_0020;
LAB_0043a470:
    iVar3 = 1;
  }
  else {
    if (iVar3 == 0x1a4) {
      pSVar6 = st::fn_004028BA(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_5);
      uVar5 = local_8;
      cVar12 = (char)local_8;
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 0) {
        if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1939,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER wrong panel number");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) {
LAB_0043a27b:
            uVar5 = local_8;
            cVar12 = (char)local_8;
            iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,
                              nullptr,pSVar6->field_0032);
            if (0 < iVar3) {
              st::fn_0040317F(this_00,cVar12,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            goto LAB_0043a320;
          }
          if (iVar3 != 0) {
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a2ea;
            goto LAB_0043a2bc;
          }
LAB_0043a247:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr
                            ,pSVar6->field_0032);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar10 = extraout_EDX_00;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_04;
          if (0 < iVar3) {
            st::fn_0040317F(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a2bc:
            iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x190e,0,0,
                                       "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_RIGHT");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            goto cf_common_exit_0043A47C;
          }
LAB_0043a2ea:
          iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr
                            ,pSVar6->field_0032);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
joined_r0x0043a31a:
          if (-1 < iVar3) goto cf_common_join_0043A107;
LAB_0043a320:
          st::fn_00405920((char)uVar5,1);
          st::fn_004032E7(this_00,(char)uVar5,1,1,0);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar10 = extraout_EDX_01;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar11 = extraout_var_05;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar7 = CONCAT22(uVar11,pSVar6->field_0032);
        uVar8 = STReplaceLowByte((uint32_t)(uVar10), (uint8_t)(*(undefined1 *)&pSVar6->field_0024));
        uVar13 = pSVar6->field_0020;
        goto LAB_0043a470;
      }
      g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 1;
      st::fn_004032E7(this_00,cVar12,0,0,0);
      uVar5 = local_8;
      iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
LAB_0043a3c8:
          uVar5 = local_8;
          cVar12 = (char)local_8;
          iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr
                            ,pSVar6->field_0032);
          if (0 < iVar3) {
            st::fn_0040317F(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        if (iVar3 != 0) {
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a42c;
          goto LAB_0043a405;
        }
LAB_0043a394:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                          pSVar6->field_0032);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_13;
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a405:
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1935,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_LEFT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
LAB_0043a42c:
        cVar12 = (char)local_8;
        iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                          pSVar6->field_0032);
        if (-1 < iVar3) {
          st::fn_0040317F(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
LAB_0043a459:
        st::fn_00405920((char)uVar5,1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar3 = extraout_EAX_04;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_var_14;
      }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_0043a463:
      uVar7 = CONCAT22(uVar11,pSVar6->field_0032);
      uVar8 = STReplaceLowByte((uint32_t)(iVar3), (uint8_t)(*(undefined1 *)&pSVar6->field_0024));
      uVar13 = pSVar6->field_0020;
      goto LAB_0043a470;
    }
    if (iVar3 != 0x1ae) {
      if (iVar3 != 0x1b8) goto LAB_00439cfb;
      pSVar6 = st::fn_004028BA(local_2c,-1,*(ushort *)&pAVar1->field_0x8,CASE_6);
      uVar5 = local_8;
      cVar12 = (char)local_8;
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 == 0) {
        g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 1;
        st::fn_004032E7(this_00,cVar12,0,0,0);
        uVar5 = local_8;
        iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) goto LAB_0043a3c8;
          if (iVar3 == 0) goto LAB_0043a394;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439eb7;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439eb7:
          cVar12 = (char)local_8;
          iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr
                            ,pSVar6->field_0032);
          if (-1 < iVar3) {
            st::fn_0040317F(this_00,cVar12,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x198f,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_LEFT");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1993,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = g_packedRecords_A62x8[(int)pSVar4].field149_0x1b3;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) goto LAB_0043a27b;
        if (iVar3 == 0) goto LAB_0043a247;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439dfb;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439dfb:
        iVar3 = st::fn_0040196F(cVar12,1,pSVar6->field_0020,*(char *)&pSVar6->field_0024,nullptr,
                          pSVar6->field_0032);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        goto joined_r0x0043a31a;
      }
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1968,0,0,"%s",
                                 "STAllPlayersC::RestoreTmp GAMETYPE_CONTAINER ACT_RIGHT");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0043A47C;
    }
    local_20 = st::fn_004028BA(local_2c,pAVar1->field_0x4,*(ushort *)&pAVar1->field_0x8,CASE_3);
    uVar5 = local_8;
    cVar12 = (char)local_8;
    if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 == 0) {
      iVar3 = g_packedRecords_A62x8[(int)pSVar4].field96_0x163;
      if (iVar3 == 0) {
LAB_0043a177:
        uVar5 = local_8;
        cVar12 = (char)local_8;
        iVar3 = st::fn_0040196F(cVar12,0,local_20->field_0020,pAVar1->field_0x4,nullptr,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_03,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
      else if (iVar3 == 0x3c) {
        iVar3 = st::fn_0040196F(cVar12,0,local_20->field_0020,pAVar1->field_0x4,nullptr,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        st::fn_00405920(cVar12,0);
        st::fn_004032E7(this_00,cVar12,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_12,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = STReplaceLowByte((uint32_t)(extraout_EAX_03), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1803,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_MINESET ACT_LEFT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = st::fn_0040196F(cVar12,0,local_20->field_0020,pAVar1->field_0x4,nullptr,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < iVar3) goto cf_common_join_0043A107;
        st::fn_00405920(cVar12,0);
        st::fn_004032E7(this_00,cVar12,0,1,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_00,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = STReplaceLowByte((uint32_t)(extraout_ECX_02), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
    }
    else {
      if (g_packedRecords_A62x8[(int)pSVar4].field200_0x203 != 1) {
        iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x182b,0,0,"%s"
                                   ,"STAllPlayersC::RestoreTmp GAMETYPE_MINESET wrong panel number");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0043A47C;
      }
      g_packedRecords_A62x8[(int)pSVar4].field200_0x203 = 0;
      st::fn_004032E7(this_00,cVar12,1,0,0);
      uVar5 = local_8;
      iVar3 = g_packedRecords_A62x8[(int)pSVar4].field96_0x163;
      if (iVar3 == 0) goto LAB_0043a177;
      cVar12 = (char)local_8;
      if (iVar3 == 0x3c) {
        iVar3 = st::fn_0040196F(cVar12,0,local_20->field_0020,pAVar1->field_0x4,nullptr,
                          *(short *)&pAVar1->field_0x8);
        if (0 < iVar3) {
          st::fn_0040317F(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        st::fn_00405920(cVar12,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var_11,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = STReplaceLowByte((uint32_t)(extraout_EAX_02), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1827,0,0,
                                     "%s","STAllPlayersC::RestoreTmp GAMETYPE_MINESET ACT_RIGHT");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = st::fn_0040196F(cVar12,0,local_20->field_0020,pAVar1->field_0x4,nullptr,
                          *(short *)&pAVar1->field_0x8);
        if (-1 < iVar3) {
          st::fn_0040317F(this_00,cVar12,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        st::fn_00405920(cVar12,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = CONCAT22(extraout_var,*(undefined2 *)&pAVar1->field_0x8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = STReplaceLowByte((uint32_t)(extraout_ECX_01), (uint8_t)(pAVar1->field_0x4));
        uVar13 = local_20->field_0020;
        iVar3 = 0;
      }
    }
  }
  st::fn_00403E31(this_00,(char)uVar5,iVar3,0,uVar13,uVar8,uVar7);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
cf_common_exit_0043A47C:
  if (((local_24 == 1) &&
      (uVar5 = CONCAT22((short)((uint)&local_14 >> 0x10),*(undefined2 *)&local_28->field_0x8),
      iVar3 = st::fn_004024F0((short)*(undefined4 *)local_28,
                          STReplaceLowByte((uint32_t)(uVar5), (uint8_t)(local_28->field_0x4)),local_28->field_000A,
                          uVar5,&local_18,&local_14,&local_10,&local_1c), iVar3 == 0)) &&
     (iVar3 = st::fn_006EB230
                        (g_sT3DSMAPContext_00807598,local_1c,DAT_00807410,DAT_00807414,DAT_00807418,
                         DAT_0080741c), iVar3 != 1)) {
    st::fn_0040386E(local_18,local_14,local_10);
    st::fn_00405547(1);
    st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    st::fn_00403058(g_cursorClass_00802A30);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
  }
  st::fn_004027DE(this_00);
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 0043AAF0 STAllPlayersC::GetCamPoint
#line 4 "decomp/ST.exe/functions/0043AAF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCamPoint

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0043AE40 -> 0043AAF0 @ 0043AFDF | 0043AE40 -> 0043AAF0 @ 0043B3A5 | 0043AE40 ->
   0043AAF0 @ 0043B82D | 0043AE40 -> 0043AAF0 @ 0043BAA0
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0043AC63 MOVSX EDX,word ptr [EBP + 0x8] | 0043AC7B
   MOVSX EDX,word ptr [EBP + 0x8] | 0043AD55 MOVSX ECX,word ptr [EBP + 0x8] */

undefined4
st::fn_0043AAF0
          (short param_1,uint param_2,DArrayTy *param_3,uint param_4,int *param_5,int *param_6,
          int *param_7,uint *param_8)

{
  dword dVar1;
  int iVar3;
  undefined4 uVar4;
  STGameObjC *pSVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_14;
  undefined1 local_10 [4];
  uint local_c;
  int local_8;

  uVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  local_14 = 10000;
  if ((((param_5 == nullptr) && (param_6 == nullptr)) && (param_7 == nullptr)) &&
     (param_8 == nullptr)) {
    return 0xffffffff;
  }
  if (_param_1 < 0x19b) {
    if ((_param_1 == 0x19a) || (_param_1 == 0x3c)) {
      if (param_3 == nullptr) {
        return 0xffffffff;
      }
      dVar1 = param_3->count;
      local_c = 0;
      if (0 < (int)dVar1) {
        do {
          st::fn_006ACC70(param_3,local_c,local_10);
          if (STPiece<0,2>(local_10) != 0xffff) {
            uVar6 = uVar6 + 1;
            pSVar5 = st::fn_004028BA(g_allPlayers_007FA174,(char)param_2,STPiece<0,2>(local_10),CASE_1);
            st::fn_004018C5
                      ((STFishC *)pSVar5,&param_1,(undefined2 *)&local_8,
                       (undefined2 *)((int)&param_4 + 2));
            iVar7 = iVar7 + _param_1;
            iVar8 = iVar8 + local_8;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)dVar1);
        if (uVar6 != 0) {
          local_c = 0;
          do {
            st::fn_006ACC70(param_3,local_c,local_10);
            if (STPiece<0,2>(local_10) != 0xffff) {
              pSVar5 = st::fn_004028BA(g_allPlayers_007FA174,(char)param_2,STPiece<0,2>(local_10),CASE_1);
              st::fn_004018C5
                        ((STFishC *)pSVar5,&param_1,(undefined2 *)&local_8,
                         (undefined2 *)((int)&param_4 + 2));
              iVar3 = st::fn_006ACF90((int)param_1,(int)(short)local_8,
                                   (int)(short)((int)(short)iVar7 / (int)(uint)uVar6),
                                   (int)(short)((int)(short)iVar8 / (int)(uint)uVar6));
              bVar9 = (ushort)iVar3 < (ushort)local_14;
              if (bVar9) {
                if (param_5 != nullptr) {
                  *param_5 = (int)param_1;
                }
                if (param_6 != nullptr) {
                  *param_6 = (int)(short)local_8;
                }
                if (param_7 != nullptr) {
                  *param_7 = (int)STPiece<2,2>(param_4);
                }
                local_14 = iVar3;
                if (param_8 != nullptr) {
                  *param_8 = pSVar5->field_01ED;
                }
              }
            }
            local_c = local_c + 1;
          } while ((int)local_c < (int)dVar1);
          return 0;
        }
      }
      return 0xffffffff;
    }
    if (_param_1 == 0x5a) {
      SVar10 = CASE_4;
    }
    else {
      if (_param_1 != 0x172) {
LAB_0043acdb:
        iVar7 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x19fb,0,0,"%s"
                                   ,"STAllPlayersC::GetCamPoint invalid game type");
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      SVar10 = CASE_2;
    }
  }
  else if (_param_1 == 0x1a4) {
    SVar10 = CASE_5;
  }
  else if (_param_1 == 0x1ae) {
    SVar10 = CASE_3;
  }
  else {
    if (_param_1 != 0x1b8) goto LAB_0043acdb;
    SVar10 = CASE_6;
  }
  pSVar5 = st::fn_004028BA(g_allPlayers_007FA174,(char)param_2,(ushort)param_4,SVar10);
  st::fn_004018C5
            ((STFishC *)pSVar5,&param_1,(undefined2 *)&local_8,(undefined2 *)((int)&param_4 + 2));
  if (param_5 != nullptr) {
    *param_5 = (int)param_1;
  }
  if (param_6 != nullptr) {
    *param_6 = (int)(short)local_8;
  }
  if (param_7 != nullptr) {
    *param_7 = (int)STPiece<2,2>(param_4);
  }
  if (param_8 != nullptr) {
    *param_8 = pSVar5->field_01ED;
  }
  return 0;
}

// 0043AE40 STAllPlayersC::SetActivePanel
#line 4 "decomp/ST.exe/functions/0043AE40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivePanel

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0043AE40 -> 0043AAF0 @ 0043AFDF | 0043AE40 -> 0043AAF0 @ 0043B3A5 | 0043AE40 ->
   0043AAF0 @ 0043B82D | 0043AE40 -> 0043AAF0 @ 0043BAA0 */

void __thiscall
st::fn_0043AE40(STAllPlayersC *this,uint *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar4;
  int iVar5;
  int iVar6;
  STGameObjC *pSVar7;
  uint uVar8;
  STAllPlayersC_GetObjPtr_param_3Enum SVar9;
  int local_10;
  int local_c;
  int local_8;

  iVar5 = param_2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_1 == nullptr) {
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar6 = (uint)DAT_0080874d * 0xa62;
    if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 == 0) {
      if (param_2 == 0) {
        return;
      }
      piVar1 = (int *)(param_2 * 0x10 + 0x7f4f83 + iVar6);
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 != 0x3c) {
        if (iVar6 == 0x1ae) {
          if (param_3 == 1) {
            pSVar7 = st::fn_004028BA(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),CASE_3);
            st::fn_004018C5
                      ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,
                       (undefined2 *)&local_8);
            iVar5 = st::fn_006EB230
                              (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,
                               DAT_00807414,DAT_00807418,DAT_0080741c);
            if (iVar5 != 1) {
              st::fn_0040386E(local_10,local_c,local_8);
              st::fn_00405547(1);
              st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff
                                );
              st::fn_00403058(g_cursorClass_00802A30);
              DAT_0080674c = 2;
              DAT_0080745d = 0;
            }
          }
          st::fn_0040317F(this,DAT_0080874d,0,param_2);
          return;
        }
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1a3b,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_LEFT ACT_LEFT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((param_3 == 1) &&
          (iVar6 = st::fn_004024F0(0x3c,STReplaceLowByte((uint32_t)(piVar1), (uint8_t)((char)piVar1[1])),
                               STField<DArrayTy *>(piVar1,10),
                               CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),&local_10,
                               &local_c,&local_8,(uint *)&param_1), iVar6 == 0)) &&
         (iVar6 = st::fn_006EB230
                            (g_sT3DSMAPContext_00807598,(uint)param_1,DAT_00807410,DAT_00807414,
                             DAT_00807418,DAT_0080741c), iVar6 != 1)) {
        st::fn_0040386E(local_10,local_c,local_8);
        st::fn_00405547(1);
        st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
        st::fn_00403058(g_cursorClass_00802A30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
    }
    else {
      if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 != 1) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1a6b,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto LAB_0043aee4;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(param_2 * 0x10 + 0x7f4f83 + iVar6);
      iVar6 = param_2 * 0x10 + 0x7f4f83 + iVar6;
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 == 0x3c) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (((param_3 == 1) &&
            (uVar8 = CONCAT22((short)((uint)&local_c >> 0x10),*(undefined2 *)(iVar6 + 8)),
            iVar6 = st::fn_004024F0(0x3c,STReplaceLowByte((uint32_t)(uVar8), (uint8_t)(*(undefined1 *)(iVar6 + 4))),
                                *(DArrayTy **)(iVar6 + 10),uVar8,&local_10,&local_c,&local_8,
                                (uint *)&param_1), iVar6 == 0)) &&
           (iVar6 = st::fn_006EB230
                              (g_sT3DSMAPContext_00807598,(uint)param_1,DAT_00807410,DAT_00807414,
                               DAT_00807418,DAT_0080741c), iVar6 != 1)) {
          st::fn_0040386E(local_10,local_c,local_8);
          st::fn_00405547(1);
          st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          st::fn_00403058(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        bVar4 = DAT_0080874d;
        g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 0;
        st::fn_004032E7(this,bVar4,1,0,0);
        st::fn_0040317F(this,DAT_0080874d,0,iVar5);
        return;
      }
      if (iVar2 != 0x1ae) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1a67,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_LEFT ACT_RIGHT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 == 1) {
        pSVar7 = st::fn_004028BA(this,*(char *)(iVar6 + 4),*(ushort *)(iVar6 + 8),CASE_3);
        st::fn_004018C5
                  ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,
                   (undefined2 *)&local_8);
        iVar5 = st::fn_006EB230
                          (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                           DAT_00807418,DAT_0080741c);
        if (iVar5 != 1) {
          st::fn_0040386E(local_10,local_c,local_8);
          st::fn_00405547(1);
          st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          st::fn_00403058(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
      bVar4 = DAT_0080874d;
      g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 0;
      st::fn_004032E7(this,bVar4,1,0,0);
      iVar5 = param_2;
    }
    iVar6 = 0;
    goto cf_common_exit_0043BB49;
  }
  if (param_1 != (uint *)0x1) {
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1b2b,0,0,"%s",
                               "STAllPlayersC::SetActivePanel invalid panel number");
    if (iVar5 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0043aee4:
  iVar5 = param_2;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar6 = (uint)DAT_0080874d * 0xa62;
  if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 != 0) {
    if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 != 1) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1b27,0,0,"%s",
                                 "STAllPlayersC::SetActivePanel");
      if (iVar5 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (param_2 == 0) {
      return;
    }
    piVar1 = (int *)(param_2 * 0x10 + 0x7f4fd3 + iVar6);
    iVar6 = *piVar1;
    if (iVar6 < 0x19b) {
      if (iVar6 == 0x19a) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (((param_3 == 1) &&
            (uVar8 = CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),
            iVar6 = st::fn_004024F0(0x19a,STReplaceLowByte((uint32_t)(uVar8), (uint8_t)((char)piVar1[1])),
                                STField<DArrayTy *>(piVar1,10),uVar8,&local_10,&local_c,&local_8,
                                (uint *)&param_1), iVar6 == 0)) &&
           (iVar6 = st::fn_006EB230
                              (g_sT3DSMAPContext_00807598,(uint)param_1,DAT_00807410,DAT_00807414,
                               DAT_00807418,DAT_0080741c), iVar6 != 1)) {
          st::fn_0040386E(local_10,local_c,local_8);
          st::fn_00405547(1);
          st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          st::fn_00403058(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
        st::fn_0040317F(this,DAT_0080874d,1,iVar5);
        return;
      }
      if (iVar6 == 0) {
        return;
      }
      if (iVar6 == 0x5a) {
        if (param_3 == 1) {
          SVar9 = CASE_4;
LAB_0043b0f1:
          pSVar7 = st::fn_004028BA(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),SVar9);
          st::fn_004018C5
                    ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,
                     (undefined2 *)&local_8);
          iVar5 = st::fn_006EB230
                            (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414
                             ,DAT_00807418,DAT_0080741c);
          if (iVar5 != 1) {
            st::fn_0040386E(local_10,local_c,local_8);
            st::fn_00405547(1);
            st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
            st::fn_00403058(g_cursorClass_00802A30);
            DAT_0080674c = 2;
            DAT_0080745d = 0;
            iVar6 = 1;
            iVar5 = param_2;
            goto cf_common_exit_0043BB49;
          }
        }
        goto cf_common_exit_0043B686;
      }
      if (iVar6 != 0x172) {
LAB_0043b0af:
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1ac4,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_RIGHT ACT_RIGHT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 != 1) goto cf_common_exit_0043B294;
      SVar9 = CASE_2;
    }
    else {
      if (iVar6 != 0x1a4) {
        if (iVar6 != 0x1b8) goto LAB_0043b0af;
        if (param_3 == 1) {
          SVar9 = CASE_6;
          goto LAB_0043b0f1;
        }
        goto cf_common_exit_0043B686;
      }
      if (param_3 != 1) goto cf_common_exit_0043B294;
      SVar9 = CASE_5;
    }
    pSVar7 = st::fn_004028BA(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),SVar9);
    st::fn_004018C5
              ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    iVar5 = st::fn_006EB230
                      (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                       DAT_00807418,DAT_0080741c);
    if (iVar5 != 1) {
      st::fn_0040386E(local_10,local_c,local_8);
      st::fn_00405547(1);
      st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
      st::fn_00403058(g_cursorClass_00802A30);
      DAT_0080674c = 2;
      DAT_0080745d = 0;
    }
cf_common_exit_0043B294:
    st::fn_0040317F(this,DAT_0080874d,1,param_2);
    return;
  }
  piVar1 = (int *)(param_2 * 0x10 + 0x7f4fd3 + iVar6);
  iVar6 = *piVar1;
  if (iVar6 < 0x19b) {
    if (iVar6 == 0x19a) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (((param_3 == 1) &&
          (uVar8 = CONCAT22((short)((uint)&local_c >> 0x10),(short)piVar1[2]),
          iVar6 = st::fn_004024F0(0x19a,STReplaceLowByte((uint32_t)(uVar8), (uint8_t)((char)piVar1[1])),
                              STField<DArrayTy *>(piVar1,10),uVar8,&local_10,&local_c,&local_8,
                              (uint *)&param_1), iVar6 == 0)) &&
         (iVar6 = st::fn_006EB230
                            (g_sT3DSMAPContext_00807598,(uint)param_1,DAT_00807410,DAT_00807414,
                             DAT_00807418,DAT_0080741c), iVar6 != 1)) {
        st::fn_0040386E(local_10,local_c,local_8);
        st::fn_00405547(1);
        st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
        st::fn_00403058(g_cursorClass_00802A30);
        DAT_0080674c = 2;
        DAT_0080745d = 0;
      }
      bVar4 = DAT_0080874d;
      g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 1;
      st::fn_004032E7(this,bVar4,0,0,0);
      st::fn_0040317F(this,DAT_0080874d,1,iVar5);
      return;
    }
    if (iVar6 == 0) {
      return;
    }
    if (iVar6 == 0x5a) {
      if (param_3 == 1) {
        SVar9 = CASE_4;
LAB_0043b2fe:
        pSVar7 = st::fn_004028BA(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),SVar9);
        st::fn_004018C5
                  ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,
                   (undefined2 *)&local_8);
        iVar5 = st::fn_006EB230
                          (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                           DAT_00807418,DAT_0080741c);
joined_r0x0043b5ec:
        if (iVar5 != 1) {
          st::fn_0040386E(local_10,local_c,local_8);
          st::fn_00405547(1);
LAB_0043b630:
          st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
          st::fn_00403058(g_cursorClass_00802A30);
          DAT_0080674c = 2;
          DAT_0080745d = 0;
        }
      }
    }
    else {
      if (iVar6 != 0x172) {
LAB_0043b4a2:
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1b23,0,0,"%s"
                                   ,"STAllPlayersC::SetActivePanel ACT_RIGHT ACT_LEFT invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (param_3 == 1) {
        SVar9 = CASE_2;
        goto LAB_0043b2fe;
      }
    }
  }
  else if (iVar6 == 0x1a4) {
    if (param_3 == 1) {
      pSVar7 = st::fn_004028BA(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),CASE_5);
      st::fn_004018C5
                ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
      iVar5 = st::fn_006EB230
                        (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                         DAT_00807418,DAT_0080741c);
      goto joined_r0x0043b5ec;
    }
  }
  else {
    if (iVar6 != 0x1b8) goto LAB_0043b4a2;
    if (param_3 == 1) {
      pSVar7 = st::fn_004028BA(this,(char)piVar1[1],*(ushort *)(piVar1 + 2),CASE_6);
      st::fn_004018C5
                ((STFishC *)pSVar7,(short *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
      iVar5 = st::fn_006EB230
                        (g_sT3DSMAPContext_00807598,pSVar7->field_01ED,DAT_00807410,DAT_00807414,
                         DAT_00807418,DAT_0080741c);
      if (iVar5 != 1) {
        st::fn_0040386E(local_10,local_c,local_8);
        st::fn_00405547(1);
        goto LAB_0043b630;
      }
    }
  }
  bVar4 = DAT_0080874d;
  g_packedRecords_A62x8[DAT_0080874d].field200_0x203 = 1;
  st::fn_004032E7(this,bVar4,0,0,0);
cf_common_exit_0043B686:
  iVar6 = 1;
  iVar5 = param_2;
cf_common_exit_0043BB49:
  st::fn_0040317F(this,DAT_0080874d,iVar6,iVar5);
  return;
}

// 0043BEB0 STAllPlayersC::GetPanelInfo
#line 4 "decomp/ST.exe/functions/0043BEB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetPanelInfo */

void __thiscall
st::fn_0043BEB0
          (STAllPlayersC *this,undefined4 param_1,AnonShape_0043BEB0_1C00EC12 *param_2)

{
  DArrayTy *pDVar1;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  STGroupBoatC *pSVar6;
  Global_sub_0044D320_param_1Enum GVar7;
  byte *pbVar8;
  dword dVar9;
  STGameObjC *pSVar10;
  undefined4 uVar11;
  AnonShape_0043BEB0_1C00EC12 *pAVar12;
  byte *pbVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  AnonShape_0043BEB0_1C00EC12 *pAVar17;
  char cVar18;
  STAllPlayersC_GetObjPtr_param_3Enum SVar19;
  undefined1 local_6c [3];
  undefined4 local_69;
  undefined4 local_64;
  undefined1 local_51;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  DArrayTy *local_1c;
  byte *local_18;
  dword local_14;
  STAllPlayersC *local_10;
  undefined1 local_c [4];
  undefined2 local_8;
  short local_6;

  pAVar17 = param_2;
  local_20 = 0;
  local_10 = this;
  if ((char)param_1 == '\x01') {
    uVar16 = (uint)DAT_0080874d;
    iVar5 = g_packedRecords_A62x8[uVar16].field96_0x163;
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 != 0x3c) {
      if (iVar5 != 0x1ae) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1b8a,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (1) unknown game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = g_packedRecords_A62x8[uVar16].field101_0x16b;
      SVar19 = CASE_3;
      cVar18 = -1;
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar16].field103_0x171 != 1) {
      if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
        *(undefined1 *)param_2 = 0;
        return;
      }
      *(undefined1 *)param_2 = 2;
      if (g_packedRecords_A62x8[DAT_0080874d].field200_0x203 == 0) {
        param_2->field_0001 = 1;
      }
      else {
        param_2->field_0001 = 0;
      }
      param_2->field_0002 = 1;
      bVar3 = st::fn_004049B7(DAT_0080874d);
      pAVar17->field_0007 = bVar3;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
      local_14 = local_1c->count;
      pAVar17[1].field_000E = 0;
      pAVar17[1].field_000F = 0;
      pAVar17[1].field_0x10 = 0;
      pAVar17[1].field_0011 = 0;
      pAVar17[1].field_0012 = 0;
      pAVar17[1].field_0001 = 1;
      local_24 = 0;
      if ((int)local_14 < 1) {
        return;
      }
      do {
        uVar14 = local_24;
        st::fn_006ACC70(local_1c,local_24,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c),
                              CASE_1);
          st::fn_004018C5
                    ((STFishC *)pSVar10,&local_6,&local_8,(undefined2 *)((int)&param_1 + 2));
          *(undefined1 *)((int)pAVar17 + (0x2e - STPiece<2,2>(param_1))) = 1;
          (*pSVar10->vtable->vfunc_30)((short)local_6c);
          local_34 = local_64;
          local_30 = local_69;
          local_2c = local_51;
          st::fn_006AE1C0(*(DArrayTy **)&pAVar17[1].field_0x16,&local_34);
          uVar14 = local_24;
        }
        local_24 = uVar14 + 1;
      } while ((int)local_24 < (int)local_14);
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
    uVar14 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      st::fn_006ACC70(pDVar1,uVar14,local_c);
      uVar4 = STPiece<0,2>(local_c);
      if (uVar4 != 0xffff) break;
      uVar14 = uVar14 + 1;
      if ((int)local_14 <= (int)uVar14) {
        return;
      }
    }
    cVar18 = g_packedRecords_A62x8[uVar16].field97_0x167;
  }
  else {
    if ((char)param_1 == '\x02') {
      uVar16 = (uint)DAT_0080874d;
      iVar5 = g_packedRecords_A62x8[uVar16].field96_0x163;
      if (iVar5 == 0) {
        return;
      }
      if (iVar5 != 0x3c) {
        if (iVar5 != 0x1ae) {
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1d16,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (2) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar4 = g_packedRecords_A62x8[uVar16].field101_0x16b;
        SVar19 = CASE_3;
        cVar18 = -1;
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar16].field103_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        while( true ) {
          st::fn_006ACC70(pDVar1,uVar14,local_c);
          uVar4 = STPiece<0,2>(local_c);
          if (uVar4 != 0xffff) break;
          uVar14 = uVar14 + 1;
          if ((int)local_14 <= (int)uVar14) {
            return;
          }
        }
        cVar18 = g_packedRecords_A62x8[uVar16].field97_0x167;
        goto LAB_0043ca31;
      }
      if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
        param_2->field_0005 = 0;
        return;
      }
      param_2->field_0005 = 2;
      bVar3 = st::fn_004049B7(DAT_0080874d);
      pAVar17->field_0004 = bVar3;
      local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
      local_14 = local_1c->count;
      uVar16 = 0;
      if (0 < (int)local_14) {
        do {
          st::fn_006ACC70(local_1c,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(this,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            iVar5 = st::fn_0040226B(pSVar10);
            if (iVar5 == 0) break;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      if (uVar16 == local_14) {
        pAVar17->field_0x15 = 0;
        pAVar17->field_0x8 = 0;
        pAVar17->field_0007 = 0;
        return;
      }
      pAVar17->field_0x8 = 1;
      if (g_packedRecords_A62x8[DAT_0080874d].field1_0x1 == 0) {
LAB_0043c293:
        pAVar17->field_0x15 = 0;
      }
      else {
        uVar16 = 0;
        pAVar17->field_0x15 = 3;
        if (0 < (int)local_14) {
          do {
            st::fn_006ACC70(local_1c,uVar16,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              pSVar10 = st::fn_004028BA(this,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
              pSVar6 = st::fn_00405CF9(DAT_0080874d,pSVar10->field_0030);
              if ((pSVar6 != nullptr) &&
                 (pAVar17->field_0x15 = 1, pSVar6->field_001C == 0)) break;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_14);
        }
        if (uVar16 == local_14) {
          if (pAVar17->field_0x15 == '\x03') goto LAB_0043c293;
          if (pAVar17->field_0x15 == '\x01') {
            pAVar17->field_0x15 = 3;
          }
        }
      }
      pAVar17->field_0007 = 1;
      GVar7 = st::fn_004058A3(this);
      local_18 = st::fn_00401D61(GVar7);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000F;
      pbVar8 = local_18;
      pbVar13 = (byte *)param_2;
      do {
        pbVar13[-6] = pbVar8[1];
        *pbVar13 = *pbVar8;
        pbVar13 = pbVar13 + 1;
        pbVar8 = pbVar8 + 2;
      } while ((int)(pbVar13 + (-0xf - (int)pAVar17)) < 6);
      st::fn_006AB060(&local_18);
      uVar16 = 0;
      pAVar17[2].field_0001 = 1;
      *(undefined1 *)(pAVar17 + 2) = 1;
      *(undefined1 *)((int)&pAVar17[1].field_0018 + 3) = 1;
      *(undefined1 *)((int)&pAVar17[1].field_0018 + 2) = 1;
      if (0 < (int)local_14) {
        do {
          st::fn_006ACC70(local_1c,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            *(undefined1 *)((int)&pAVar17[1].field_0018 + pSVar10->field_07EE + 2) = 3;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      if (GVar7 < 0x40001) {
        if (GVar7 == 0x40000) {
          *(undefined4 *)pAVar17 = 0x19;
        }
        else if (GVar7 < 0x81) {
          if (GVar7 == 0x80) {
            *(undefined4 *)pAVar17 = 9;
          }
          else if (GVar7 == CASE_2) {
            *(undefined4 *)pAVar17 = 5;
          }
          else if (GVar7 == CASE_4) {
            *(undefined4 *)pAVar17 = 0xb;
          }
          else if (GVar7 == CASE_8) {
            *(undefined4 *)pAVar17 = 0x11;
          }
        }
        else if (GVar7 == 0x100) {
          *(undefined4 *)pAVar17 = 0x15;
        }
        else if (GVar7 == 0x10000) {
          *(undefined4 *)pAVar17 = 0x22;
        }
        else if (GVar7 == 0x20000) {
          *(undefined4 *)pAVar17 = 0x1a;
        }
      }
      else if (GVar7 < 0x400001) {
        if (GVar7 == 0x400000) {
          *(undefined4 *)pAVar17 = 0x21;
        }
        else if (GVar7 == 0x80000) {
          *(undefined4 *)pAVar17 = 0x1c;
        }
        else if (GVar7 == 0x100000) {
          *(undefined4 *)pAVar17 = 0x1d;
        }
        else if (GVar7 == 0x200000) {
          *(undefined4 *)pAVar17 = 0x1b;
        }
      }
      else if (GVar7 == 0x800000) {
        *(undefined4 *)pAVar17 = 0x23;
      }
      else if (GVar7 == 0x1000000) {
        *(undefined4 *)pAVar17 = 0x24;
      }
      local_28 = 0;
      local_24 = 0;
      uVar16 = local_20;
      if (0 < (int)local_14) {
        do {
          st::fn_006ACC70(local_1c,local_24,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            local_28 = local_28 + 1;
            pSVar10 = st::fn_004028BA(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (local_28 == 1) {
              uVar16 = (uint)(ushort)pSVar10->field_0030;
            }
            else if (uVar16 != (ushort)pSVar10->field_0030) {
              return;
            }
          }
          local_24 = local_24 + 1;
        } while ((int)local_24 < (int)local_14);
        if (uVar16 == 0xffff) {
          return;
        }
      }
      uVar4 = (ushort)uVar16;
      if (0x1000 < GVar7) {
        if (GVar7 < 0x100001) {
          if (GVar7 == 0x100000) {
            pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 0x11:
              goto cf_common_exit_0043C86F;
            case 0x13:
              goto cf_common_exit_0043C862;
            }
          }
          if (GVar7 < 0x20001) {
            if (GVar7 == 0x20000) {
              pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
              dVar9 = pSVar6->slot_0C();
              switch(dVar9) {
              case 1:
              case 7:
                goto cf_common_exit_0043C94C;
              default:
                return;
              case 3:
                goto cf_common_exit_0043C95B;
              case 8:
                goto cf_common_exit_0043C862;
              case 10:
                goto cf_common_exit_0043C508;
              case 0x11:
                goto cf_common_exit_0043C86F;
              }
            }
            if (GVar7 == 0x2000) {
              pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
              dVar9 = pSVar6->slot_0C();
              switch(dVar9) {
              case 1:
              case 7:
                goto cf_common_exit_0043C72D;
              case 2:
                goto cf_common_exit_0043C862;
              case 3:
                goto cf_common_exit_0043C95B;
              case 4:
                goto cf_common_exit_0043C86F;
              default:
                return;
              case 6:
                goto cf_common_exit_0043C508;
              }
            }
            if (GVar7 != 0x10000) {
              return;
            }
            pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            case 2:
              goto cf_common_exit_0043C862;
            case 3:
              goto cf_common_exit_0043C95B;
            default:
              return;
            case 0xf:
              goto cf_common_exit_0043C508;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar7 == 0x40000) {
            pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 9:
              goto cf_common_exit_0043C862;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar7 != 0x80000) {
            return;
          }
          pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          case 2:
            goto cf_common_exit_0043C862;
          case 3:
            goto cf_common_exit_0043C95B;
          default:
            return;
          case 0x11:
            goto cf_common_exit_0043C86F;
          }
        }
        if (GVar7 < 0x800001) {
          if (GVar7 == 0x800000) {
            pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            case 2:
              goto cf_common_exit_0043C862;
            case 3:
              goto cf_common_exit_0043C95B;
            default:
              return;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar7 == 0x200000) {
            pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 0xb:
            case 0xc:
              goto cf_common_exit_0043C862;
            case 0x11:
              goto cf_common_exit_0043C86F;
            }
          }
          if (GVar7 != 0x400000) {
            return;
          }
          pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          case 2:
            goto cf_common_exit_0043C862;
          case 3:
            goto cf_common_exit_0043C95B;
          default:
            return;
          case 0xd:
            goto cf_common_exit_0043C508;
          case 0x11:
            goto cf_common_exit_0043C86F;
          }
        }
        if (GVar7 == 0x1000000) {
          pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          default:
            return;
          case 3:
            goto cf_common_exit_0043C95B;
          case 0x11:
            goto cf_common_exit_0043C86F;
          }
        }
        if (GVar7 != 0x2000000) {
          return;
        }
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        default:
          return;
        case 0x11:
          goto cf_common_exit_0043C86F;
        }
      }
      if (GVar7 == 0x1000) goto switchD_0043c4d2_caseD_28;
      if (0x40 < GVar7) {
        if (0x200 < GVar7) {
          if (GVar7 == 0x400) {
            pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
            dVar9 = pSVar6->slot_0C();
            switch(dVar9) {
            case 1:
            case 7:
              goto cf_common_exit_0043C94C;
            default:
              return;
            case 3:
              goto cf_common_exit_0043C95B;
            case 4:
              goto cf_common_exit_0043C86F;
            case 0xb:
            case 0xc:
              goto cf_common_exit_0043C508;
            case 0x15:
              goto cf_common_exit_0043C862;
            }
          }
          if (GVar7 != 0x800) {
            return;
          }
          pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
          case 1:
          case 7:
            goto cf_common_exit_0043C94C;
          default:
            return;
          case 3:
            goto cf_common_exit_0043C95B;
          case 4:
            goto cf_common_exit_0043C86F;
          case 9:
            goto cf_common_exit_0043C862;
          case 0x13:
            goto cf_common_exit_0043C508;
          }
        }
        if (GVar7 == 0x200) {
          pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
          dVar9 = pSVar6->slot_0C();
          switch(dVar9) {
          case 1:
          case 7:
            goto cf_common_exit_0043C72D;
          default:
            return;
          case 3:
            goto cf_common_exit_0043C95B;
          case 4:
            goto cf_common_exit_0043C86F;
          case 8:
            goto cf_common_exit_0043C862;
          case 10:
            goto cf_common_exit_0043C508;
          }
        }
        if ((GVar7 != 0x80) && (GVar7 != 0x100)) {
          return;
        }
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        case 1:
        case 7:
          goto cf_common_exit_0043C72D;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        default:
          return;
        }
      }
      if (GVar7 == 0x40) {
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        default:
          return;
        case 0xe:
          goto cf_common_exit_0043C508;
        }
      }
      switch(GVar7) {
      case CASE_1:
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        case 0xf:
cf_common_exit_0043C508:
          pAVar17->field_0x14 = 3;
          return;
        }
        break;
      case CASE_2:
      case CASE_4:
      case CASE_8:
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        case 1:
        case 7:
          goto cf_common_exit_0043C94C;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        case 0xd:
          goto cf_common_exit_0043C508;
        }
        break;
      case CASE_10:
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        case 1:
        case 7:
          goto cf_common_exit_0043C72D;
        case 2:
          goto cf_common_exit_0043C862;
        case 3:
          goto cf_common_exit_0043C95B;
        case 4:
          goto cf_common_exit_0043C86F;
        }
        break;
      case CASE_28:
switchD_0043c4d2_caseD_28:
        pSVar6 = st::fn_00405CF9(DAT_0080874d,uVar4);
        dVar9 = pSVar6->slot_0C();
        switch(dVar9) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        case 1:
        case 7:
cf_common_exit_0043C72D:
          *(undefined1 *)param_2 = 3;
          return;
        case 2:
cf_common_exit_0043C862:
          pAVar17->field_0x10 = 3;
          return;
        case 3:
cf_common_exit_0043C95B:
          pAVar17->field_0011 = 3;
          return;
        case 4:
cf_common_exit_0043C86F:
          pAVar17->field_0012 = 3;
          return;
        }
      }
      return;
    }
    if ((char)param_1 == '\x04') {
      uVar16 = (uint)DAT_0080874d;
      iVar5 = g_packedRecords_A62x8[uVar16].field149_0x1b3;
      if (0x19a < iVar5) {
        if (iVar5 == 0x1a4) {
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_5;
          cVar18 = -1;
        }
        else {
          if (iVar5 != 0x1b8) {
LAB_0043ca5a:
            iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1d47,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (4) unknown game type");
            if (iVar5 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_6;
          cVar18 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (iVar5 != 0x19a) {
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 == 0x5a) {
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_4;
          cVar18 = -1;
        }
        else {
          if (iVar5 != 0x172) goto LAB_0043ca5a;
          uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
          SVar19 = CASE_2;
          cVar18 = -1;
        }
        goto cf_common_exit_0043CA35;
      }
      if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
        return;
      }
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
      uVar14 = 0;
      local_14 = pDVar1->count;
      if ((int)local_14 < 1) {
        return;
      }
      while( true ) {
        st::fn_006ACC70(pDVar1,uVar14,local_c);
        uVar4 = STPiece<0,2>(local_c);
        if (uVar4 != 0xffff) break;
        uVar14 = uVar14 + 1;
        if ((int)local_14 <= (int)uVar14) {
          return;
        }
      }
      cVar18 = g_packedRecords_A62x8[uVar16].field150_0x1b7;
LAB_0043ca31:
      SVar19 = CASE_1;
cf_common_exit_0043CA35:
      pSVar10 = st::fn_004028BA(local_10,cVar18,uVar4,SVar19);
      (*pSVar10->vtable->vfunc_34)((short)param_2);
      return;
    }
    if ((char)param_1 != '\x05') {
      if ((char)param_1 == '\x06') {
        if (*(int *)param_2 != 0) {
          *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        }
        uVar16 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1d95,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (6) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          st::fn_006ACC70(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_38)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\a') {
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        uVar16 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1db2,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (7) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          st::fn_006ACC70(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_3C)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\b') {
        uVar16 = (uint)DAT_0080874d;
        *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0004 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x8 + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0xc + 0xc) = 0;
        *(undefined4 *)(*(int *)&param_2->field_0x10 + 0xc) = 0;
        if (g_packedRecords_A62x8[uVar16].field96_0x163 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field96_0x163 != 0x3c) {
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1dd0,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (8) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field103_0x171 == 0) {
          return;
        }
        local_1c = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = local_1c->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          st::fn_006ACC70(local_1c,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_40)((short)pAVar17);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\t') {
        uVar16 = (uint)DAT_0080874d;
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1dec,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (9) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          st::fn_006ACC70(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_44)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((char)param_1 == '\n') {
        uVar16 = (uint)DAT_0080874d;
        local_28 = STRecordByteAddress(g_packedRecords_A62x8, uVar16, 0x1B3);
        if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
          return;
        }
        if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
        uVar16 = 0;
        dVar9 = pDVar1->count;
        if ((int)dVar9 < 1) {
          return;
        }
        do {
          st::fn_006ACC70(pDVar1,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,*(char *)(local_28 + 4),STPiece<0,2>(local_c),CASE_1);
            (*pSVar10->vtable->vfunc_48)((short)param_2);
            return;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)dVar9);
        return;
      }
      if ((char)param_1 != '\v') {
        if ((char)param_1 == '\f') {
          if (*(int *)param_2 != 0) {
            *(undefined4 *)(*(int *)param_2 + 0xc) = 0;
          }
          uVar16 = (uint)DAT_0080874d;
          if (g_packedRecords_A62x8[uVar16].field149_0x1b3 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[uVar16].field149_0x1b3 != 0x19a) {
            iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1ea3,0,0,
                                       "%s","STAllPlayersC::GetPanelInfo (12) unknown game type");
            if (iVar5 == 0) {
              return;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
            return;
          }
          pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
          uVar14 = 0;
          local_14 = pDVar1->count;
          if ((int)local_14 < 1) {
            return;
          }
          do {
            st::fn_006ACC70(pDVar1,uVar14,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field150_0x1b7,
                                  STPiece<0,2>(local_c),CASE_1);
              (*pSVar10->vtable->vfunc_50)((short)param_2);
              return;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_14);
          return;
        }
        if ((char)param_1 == '\x0e') {
          local_28 = 4;
          pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)
                    &g_packedRecords_A62x8[DAT_0080874d].field107_0x17d;
          do {
            iVar5 = *(int *)&pAVar12[-1].field_0012;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = pAVar12;
            if (iVar5 == 0) {
LAB_0043d41d:
              *(undefined1 *)pAVar17 = 0;
            }
            else if (iVar5 == 0x3c) {
              STPiece<0,1>(uVar4) = pAVar12->field_0004;
              STPiece<1,1>(uVar4) = pAVar12->field_0005;
              if (uVar4 == 1) {
                uVar16 = 0;
                pDVar1 = *(DArrayTy **)pAVar12;
                local_14 = pDVar1->count;
                if (0 < (int)local_14) {
                  do {
                    st::fn_006ACC70(pDVar1,uVar16,local_c);
                    uVar4 = STPiece<0,2>(local_c);
                    if (uVar4 != 0xffff) {
                      SVar19 = CASE_1;
                      cVar18 = param_2[-1].field_0x16;
                      goto LAB_0043d447;
                    }
                    uVar16 = uVar16 + 1;
                  } while ((int)uVar16 < (int)local_14);
                }
              }
              else {
                if (uVar4 < 2) goto LAB_0043d41d;
                *(undefined1 *)pAVar17 = 2;
                pAVar17->field_0001 = 1;
                pAVar17->field_0006 = g_packedRecords_A62x8[DAT_0080874d].field0_0x0;
              }
            }
            else {
              if (iVar5 != 0x1ae) {
                iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1ecc,0,0,
                                           "%s","STAllPlayersC::GetPanelInfo (14) unknown game type"
                                          );
                if (iVar5 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_0043d41d;
              }
              uVar4 = *(ushort *)((int)&pAVar12[-1].field_0018 + 2);
              SVar19 = CASE_3;
              cVar18 = -1;
LAB_0043d447:
              pSVar10 = st::fn_004028BA(local_10,cVar18,uVar4,SVar19);
              (*pSVar10->vtable->vfunc_58)((short)pAVar17);
            }
            pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)&param_2->field_0x10;
            pAVar17 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000B;
            local_28 = local_28 + -1;
            if (local_28 == 0) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 == '\x0f') {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (AnonShape_0043BEB0_1C00EC12 *)0x4;
          puVar15 = &g_packedRecords_A62x8[DAT_0080874d].field159_0x1cb;
          do {
            iVar5 = *(int *)(puVar15 + -4);
            if (iVar5 < 0x19b) {
              if (iVar5 == 0x19a) {
                if (puVar15[3] == 1) {
                  local_1c = *(DArrayTy **)(puVar15 + 1);
                  uVar16 = 0;
                  local_14 = local_1c->count;
                  if (0 < (int)local_14) {
                    do {
                      st::fn_006ACC70(local_1c,uVar16,local_c);
                      uVar4 = STPiece<0,2>(local_c);
                      if (uVar4 != 0xffff) {
                        cVar18 = (char)puVar15[-2];
                        SVar19 = CASE_1;
                        goto LAB_0043d5b7;
                      }
                      uVar16 = uVar16 + 1;
                    } while ((int)uVar16 < (int)local_14);
                  }
                  goto LAB_0043d5c4;
                }
              }
              else if (iVar5 != 0) {
                if (iVar5 == 0x5a) {
                  SVar19 = CASE_4;
                }
                else {
                  if (iVar5 != 0x172) goto LAB_0043d581;
                  SVar19 = CASE_2;
                }
                goto LAB_0043d5b1;
              }
LAB_0043d5a6:
              *(undefined1 *)pAVar17 = 0;
            }
            else {
              if (iVar5 == 0x1a4) {
                SVar19 = CASE_5;
              }
              else {
                if (iVar5 != 0x1b8) {
LAB_0043d581:
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1efe,0,0,
                                             "%s",
                                             "STAllPlayersC::GetPanelInfo (15) unknown game type");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  goto LAB_0043d5a6;
                }
                SVar19 = CASE_6;
              }
LAB_0043d5b1:
              uVar4 = *puVar15;
              cVar18 = -1;
LAB_0043d5b7:
              pSVar10 = st::fn_004028BA(local_10,cVar18,uVar4,SVar19);
              (*pSVar10->vtable->vfunc_5C)((short)pAVar17);
            }
LAB_0043d5c4:
            puVar15 = puVar15 + 8;
            pAVar17 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar17->field_000B;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (AnonShape_0043BEB0_1C00EC12 *)((int)&param_2[-1].field_0018 + 3);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_2 == nullptr) {
              return;
            }
          } while( true );
        }
        if ((char)param_1 != '\x10') {
          if ((char)param_1 == '\x11') {
            uVar16 = (uint)DAT_0080874d;
            if (g_packedRecords_A62x8[uVar16].field96_0x163 == 0) {
              return;
            }
            if (g_packedRecords_A62x8[uVar16].field96_0x163 != 0x3c) {
              iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1f4c,0,0,
                                         "%s","STAllPlayersC::GetPanelInfo (17) invalid game type");
              if (iVar5 == 0) {
                return;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
              return;
            }
            pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
            iVar5 = 0;
            uVar16 = 0;
            local_14 = pDVar1->count;
            if (0 < (int)local_14) {
              do {
                st::fn_006ACC70(pDVar1,uVar16,local_c);
                if (STPiece<0,2>(local_c) != 0xffff) {
                  iVar5 = iVar5 + 1;
                  pSVar10 = st::fn_004028BA(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
                  if (iVar5 == 1) {
                    local_20 = (uint)(ushort)pSVar10->field_0030;
                  }
                  else if (local_20 != (ushort)pSVar10->field_0030) {
                    return;
                  }
                }
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < (int)local_14);
              if (local_20 == 0xffff) {
                return;
              }
            }
            pSVar6 = st::fn_00405CF9(DAT_0080874d,(ushort)local_20);
            dVar9 = pSVar6->slot_1C();
            switch(dVar9) {
            case 0:
              param_2->field_0007 = 1;
              return;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            case 1:
              *(undefined1 *)param_2 = 1;
              return;
            case 2:
              param_2->field_0004 = 1;
              return;
            case 3:
              param_2->field_0006 = 1;
              return;
            case 4:
              param_2->field_0001 = 1;
              return;
            case 5:
              param_2->field_0005 = 1;
              return;
            case 0xfffffffd:
              param_2->field_0002 = 1;
              return;
            case 0xfffffffe:
              param_2->field_0003 = 1;
              return;
            default:
              return;
            }
          }
          if ((char)param_1 != '\x12') {
            return;
          }
          if (g_packedRecords_A62x8[DAT_0080874d].field96_0x163 == 0) {
            return;
          }
          if (g_packedRecords_A62x8[DAT_0080874d].field96_0x163 == 0x1ae) {
            pSVar10 = st::fn_004028BA(this,-1,g_packedRecords_A62x8[DAT_0080874d].field101_0x16b,CASE_3);
            (*pSVar10->vtable->vfunc_64)((short)param_2);
            return;
          }
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1f5d,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (18) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar16 = (uint)DAT_0080874d;
        iVar5 = g_packedRecords_A62x8[uVar16].field96_0x163;
        if (iVar5 == 0) {
          return;
        }
        if (iVar5 != 0x3c) {
          if (iVar5 == 0x1ae) {
            return;
          }
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1f22,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (16) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (g_packedRecords_A62x8[uVar16].field103_0x171 == 0) {
          return;
        }
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if (0 < (int)local_14) {
          do {
            st::fn_006ACC70(pDVar1,uVar14,local_c);
            if (STPiece<0,2>(local_c) != 0xffff) {
              pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c)
                                  ,CASE_1);
              (*pSVar10->vtable->vfunc_60)((short)param_2);
              break;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_14);
        }
        if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
          return;
        }
        *(undefined4 *)&param_2[0xf].field_0xc = 0xffffffff;
        param_2[0x11].field_0004 = 0xff;
        param_2[0x11].field_0005 = 0xff;
        param_2[0x11].field_0006 = 0xff;
        param_2[0x11].field_0007 = 0xff;
        param_2[0x12].field_0018 = 0xffffffff;
        return;
      }
      uVar16 = (uint)DAT_0080874d;
      if (g_packedRecords_A62x8[uVar16].field96_0x163 == 0) {
        return;
      }
      if (g_packedRecords_A62x8[uVar16].field96_0x163 != 0x3c) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1e85,0,0,"%s"
                                   ,"STAllPlayersC::GetPanelInfo (11) invalid game type");
        if (iVar5 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (g_packedRecords_A62x8[uVar16].field103_0x171 == 1) {
        pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
        uVar14 = 0;
        local_14 = pDVar1->count;
        if ((int)local_14 < 1) {
          return;
        }
        do {
          st::fn_006ACC70(pDVar1,uVar14,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,g_packedRecords_A62x8[uVar16].field97_0x167,STPiece<0,2>(local_c),
                                CASE_1);
            (*pSVar10->vtable->vfunc_4C)((short)param_2);
            return;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_14);
        return;
      }
      if ((ushort)g_packedRecords_A62x8[uVar16].field103_0x171 < 2) {
        return;
      }
      *(undefined4 *)param_2 = 0;
      param_2->field_0004 = 0x2b;
      param_2->field_0005 = 0x2c;
      param_2->field_0006 = 5;
      param_2->field_0007 = 6;
      param_2->field_0x8 = 0x4d;
      param_2->field_0009 = 0x2d;
      param_2->field_000A = 1;
      param_2->field_0xc = 1;
      param_2->field_000D = 1;
      param_2->field_000E = 1;
      param_2->field_000F = 1;
      param_2->field_000B = 0;
      pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field102_0x16d;
      uVar16 = 0;
      local_14 = pDVar1->count;
      param_2->field_0011 = 1;
      param_2->field_0x10 = 1;
      param_2->field_0012 = 3;
      local_1c = pDVar1;
      if (0 < (int)local_14) {
        do {
          st::fn_006ACC70(pDVar1,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (pSVar10->field_07E6 == 0) {
              pAVar17->field_0011 = 3;
            }
            else {
              pAVar17->field_0x10 = 3;
            }
            if ((pAVar17->field_0012 == '\x03') && (pSVar10->field_07EA == 0)) {
              pAVar17->field_0012 = 1;
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      dVar9 = 0;
      if (0 < (int)local_14) {
        do {
          st::fn_006ACC70(pDVar1,dVar9,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar10 = st::fn_004028BA(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            uVar11 = (*pSVar10->vtable->vfunc_2C)();
            switch(uVar11) {
            case 7:
            case 8:
            case 9:
            case 0xc:
            case 0x13:
            case 0x14:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
              break;
            default:
              goto switchD_0043d1bf_caseD_a;
            }
          }
          dVar9 = dVar9 + 1;
        } while ((int)dVar9 < (int)local_14);
      }
switchD_0043d1bf_caseD_a:
      if (dVar9 == local_14) {
        pAVar17->field_000A = 0;
        pAVar17->field_000B = 0;
        pAVar17->field_0xc = 0;
        pAVar17->field_000D = 0;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (AnonShape_0043BEB0_1C00EC12 *)(uint)(dVar9 == local_14);
      iVar5 = 0;
      uVar16 = 0;
      if (0 < (int)local_14) {
        do {
          st::fn_006ACC70(local_1c,uVar16,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            iVar5 = iVar5 + 1;
            pSVar10 = st::fn_004028BA(local_10,DAT_0080874d,STPiece<0,2>(local_c),CASE_1);
            if (iVar5 == 1) {
              local_20 = (uint)(ushort)pSVar10->field_0030;
            }
            else if (local_20 != (ushort)pSVar10->field_0030) {
              return;
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_14);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == (AnonShape_0043BEB0_1C00EC12 *)0x1) {
        return;
      }
      if (local_20 == 0xffff) {
        return;
      }
      pSVar6 = st::fn_00405CF9(DAT_0080874d,(ushort)local_20);
      dVar9 = pSVar6->slot_0C();
      switch(dVar9) {
      case 5:
        pAVar17->field_0xc = 3;
        return;
      case 6:
        pAVar17->field_000D = 3;
        return;
      default:
        return;
      case 0x10:
        pAVar17->field_000E = 3;
        return;
      case 0x14:
        pAVar17->field_000F = 3;
        return;
      }
    }
    uVar16 = (uint)DAT_0080874d;
    iVar5 = g_packedRecords_A62x8[uVar16].field149_0x1b3;
    if (0x19a < iVar5) {
      if (iVar5 == 0x1a4) {
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_5;
        cVar18 = -1;
      }
      else {
        if (iVar5 != 0x1b8) {
LAB_0043cb81:
          iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1d78,0,0,
                                     "%s","STAllPlayersC::GetPanelInfo (5) unknown game type");
          if (iVar5 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_6;
        cVar18 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (iVar5 != 0x19a) {
      if (iVar5 == 0) {
        return;
      }
      if (iVar5 == 0x5a) {
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_4;
        cVar18 = -1;
      }
      else {
        if (iVar5 != 0x172) goto LAB_0043cb81;
        uVar4 = g_packedRecords_A62x8[uVar16].field154_0x1bb;
        SVar19 = CASE_2;
        cVar18 = -1;
      }
      goto cf_common_exit_0043CB5C;
    }
    if (g_packedRecords_A62x8[uVar16].field156_0x1c1 != 1) {
      return;
    }
    pDVar1 = (DArrayTy *)g_packedRecords_A62x8[uVar16].field155_0x1bd;
    uVar14 = 0;
    local_14 = pDVar1->count;
    if ((int)local_14 < 1) {
      return;
    }
    while( true ) {
      st::fn_006ACC70(pDVar1,uVar14,local_c);
      uVar4 = STPiece<0,2>(local_c);
      if (uVar4 != 0xffff) break;
      uVar14 = uVar14 + 1;
      if ((int)local_14 <= (int)uVar14) {
        return;
      }
    }
    cVar18 = g_packedRecords_A62x8[uVar16].field150_0x1b7;
  }
  SVar19 = CASE_1;
cf_common_exit_0043CB5C:
  pSVar10 = st::fn_004028BA(local_10,cVar18,uVar4,SVar19);
  (*pSVar10->vtable->vfunc_30)((short)param_2);
  return;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_exit_0043C94C:
  *(undefined1 *)param_2 = 3;
  return;
}

// 0043E4E0 STAllPlayersC::GetObjsList
#line 4 "decomp/ST.exe/functions/0043E4E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetObjsList */

uint * st::fn_0043E4E0(char param_1)

{
  int *piVar1;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  int iVar7;
  uint *puVar8;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_14 = g_packedRecords_A62x8[param_1].field3_0x9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)(local_14 + 0xc);
  uVar4 = st::fn_00401E7E(param_1);
  local_c = (uint)uVar4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  uVar3 = local_c;
  if (iVar5 == 0) {
    array = st::fn_006AE290(nullptr,local_c,2,1);
    iVar7 = local_10;
    iVar5 = local_14;
    if ((uVar3 != 0) && (local_8 = 0, 0 < local_10)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar5 + 0x1c) + local_8 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((piVar1 != nullptr) && (iVar6 = (**(code **)(*piVar1 + 0xf8))(), iVar6 == 1)) {
          st::fn_006AE1C0(array,&local_8);
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar7);
    }
    g_currentExceptionFrame = local_58.previous;
    return &array->flags;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1f8c,0,iVar5,"%s",
                             "STAllPlayersC::GetObjsList");
  if (iVar7 == 0) {
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1f8d);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0043E780 STAllPlayersC::GetTOBJList
#line 4 "decomp/ST.exe/functions/0043E780/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJList

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJList_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * __thiscall
st::fn_0043E780
          (STAllPlayersC *this,char param_1,STAllPlayersC_GetTOBJList_param_2Enum param_2,
          int param_3,char param_4)

{
  int *piVar1;
  bool bVar3;
  int iVar4;
  STAllPlayersC_GetTOBJList_param_2Enum SVar5;
  int iVar6;
  uint *puVar7;
  InternalExceptionFrame local_58;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  DArrayTy *local_8;

  local_10 = g_packedRecords_A62x8[param_1].field3_0x9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)(local_10 + 0xc);
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x1fbf,0,iVar4,"%s"
                               ,"STAllPlayersC::GetTOBJList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1fc0);
    return nullptr;
  }
  local_8 = st::fn_006AE290(nullptr,0,2,1);
  iVar4 = 0;
  if (0 < local_c) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar1 = *(int **)(*(int *)(local_10 + 0x1c) + iVar4 * 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((piVar1 == nullptr) || (SVar5 = (**(code **)(*piVar1 + 0x2c))(), SVar5 != param_2)) ||
         (iVar6 = (**(code **)(*piVar1 + 0xf8))(), iVar6 == 0)) {
switchD_0043e836_caseD_3a:
        bVar3 = false;
      }
      else {
        if (param_3 != 0) {
          switch(param_2) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          case CASE_38:
          case CASE_39:
          case CASE_4F:
          case CASE_5E:
            if ((param_3 == 1) && (iVar6 = (**(code **)(*piVar1 + 0x88))(local_14), 0 < iVar6)) {
              bVar3 = true;
              goto LAB_0043e85d;
            }
          }
          goto switchD_0043e836_caseD_3a;
        }
        bVar3 = true;
      }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0043e85d:
      if ((bVar3) &&
         ((param_4 == -1 || (iVar6 = (**(code **)(*piVar1 + 0x6c))(), iVar6 == param_4)))) {
        st::fn_006AE1C0(local_8,(void *)((int)piVar1 + 0x32));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
  }
  g_currentExceptionFrame = local_58.previous;
  return &local_8->flags;
}

// 0043EED0 STAllPlayersC::GetTOBJListFromDArr
#line 4 "decomp/ST.exe/functions/0043EED0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJListFromDArr

   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJListFromDArr_param_3Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * __thiscall
st::fn_0043EED0
          (STAllPlayersC *this,uint param_1,AnonShape_0043EED0_93C25F9A *param_2,
          STAllPlayersC_GetTOBJListFromDArr_param_3Enum param_3,int param_4,char param_5)

{
  ushort uVar1;
  bool bVar3;
  STAllPlayersC *this_00;
  int iVar4;
  STGameObjC *this_01;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar5;
  int iVar6;
  uint *puVar7;
  InternalExceptionFrame local_5c;
  undefined1 local_18 [4];
  STAllPlayersC *local_14;
  int local_10;
  DArrayTy *local_c;
  undefined4 local_8;

  local_10 = param_2->field_000C;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2049,0,iVar4,"%s"
                               ,"STAllPlayersC::GetTOBJListFromDArr");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x204a);
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = st::fn_006AE290(nullptr,0,2,1);
  this_00 = local_14;
  iVar4 = 0;
  if (0 < local_10) {
    do {
      uVar1 = *(ushort *)(param_2->field_001C + iVar4 * 2);
      local_8 = STReplaceLowWord((uint32_t)(param_2->field_001C), (uint16_t)(uVar1));
      if (uVar1 != 0xffff) {
        this_01 = st::fn_004028BA(this_00,(char)param_1,uVar1,CASE_1);
        if (this_01 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,
                     "E:\\__titans\\wlad\\to_allpl.cpp",0x2040);
switchD_0043efb1_caseD_3a:
          bVar3 = false;
        }
        else {
          SVar5 = (*this_01->vtable->vfunc_2C)();
          if ((SVar5 != param_3) || (iVar6 = this_01->vfunc_F8(), iVar6 == 0))
          goto switchD_0043efb1_caseD_3a;
          if (param_4 != 0) {
            switch(param_3) {
            case CASE_38:
            case CASE_39:
            case CASE_4F:
            case CASE_5E:
              if ((param_4 == 1) && (iVar6 = (*this_01->vtable->vfunc_88)(local_18), 0 < iVar6)) {
                bVar3 = true;
                goto LAB_0043efd8;
              }
            }
            goto switchD_0043efb1_caseD_3a;
          }
          bVar3 = true;
        }
LAB_0043efd8:
        if ((bVar3) &&
           ((param_5 == -1 || (iVar6 = this_01->vfunc_6C(), iVar6 == param_5)))) {
          st::fn_006AE1C0(local_c,&local_8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_10);
  }
  g_currentExceptionFrame = local_5c.previous;
  return &local_c->flags;
}

// 0043F200 STAllPlayersC::GetTOBJList
#line 4 "decomp/ST.exe/functions/0043F200/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJList */

uint * __thiscall st::fn_0043F200(STAllPlayersC *this,char param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  bool bVar9;
  InternalExceptionFrame local_64;
  byte local_20 [16];
  int local_10;
  DArrayTy *local_c;
  int local_8;

  local_10 = g_packedRecords_A62x8[param_1].field3_0x9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(int *)(local_10 + 0xc);
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar4 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2075,0,iVar4,"%s"
                               ,"STAllPlayersC::GetTOBJList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2076);
    return nullptr;
  }
  local_c = st::fn_006AE290(nullptr,0,2,1);
  iVar4 = 0;
  if (0 < local_8) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar2 = *(int **)(*(int *)(local_10 + 0x1c) + iVar4 * 4);
      if (piVar2 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar2 + 0x74))(local_20);
        pbVar8 = local_20;
        pbVar5 = param_2;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0043f2ad:
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0043f2b2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0043f2ad;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0043f2b2:
        if (iVar6 == 0) {
          st::fn_006AE1C0(local_c,(void *)((int)piVar2 + 0x32));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_8);
  }
  g_currentExceptionFrame = local_64.previous;
  return &local_c->flags;
}

// 00440600 STAllPlayersC::GetNInTmp
#line 4 "decomp/ST.exe/functions/00440600/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetNInTmp */

uint st::fn_00440600(int param_1,int param_2)

{
  int iVar2;
  uint uVar3;

  if (param_1 == 0) {
    return (uint)*(ushort *)(param_2 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x171));
  }
  if (param_1 != 1) {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2184,0,0,"%s",
                               "STAllPlayersC::GetNInTmp");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  return (uint)*(ushort *)(param_2 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, (uint)DAT_0080874d, 0x1C1));
}

// 00440860 STAllPlayersC::_ChangeMD
#line 4 "decomp/ST.exe/functions/00440860/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeMD */

int __thiscall st::fn_00440860(STAllPlayersC *this,int param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char objPtr;

  uVar6 = param_3;
  piVar3 = param_2;
  objPtr = (char)param_2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = (int *)st::fn_004028BA(this,objPtr,(ushort)param_3,CASE_1);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((STGameObjC *)param_2 == nullptr) {
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x21d0,0,0,"%s",
                               "STAllPlayersC::_ChangeMD");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x21d1);
  }
  if (param_1 == 1) {
    iVar4 = st::fn_00403ADA(this,objPtr,uVar6);
  }
  else {
    iVar4 = st::fn_00402748(piVar3,uVar6);
  }
  if ((((iVar4 == 1) &&
       (array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar3].field2_0x5, array != nullptr)
       ) && (dVar1 = array->count, dVar1 != 0)) && (uVar6 = 0, 0 < (int)dVar1)) {
    do {
      st::fn_006ACC70(array,uVar6,&param_2);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((param_2 != nullptr) && (iVar5 = (**(code **)(*param_2 + 0xc))(), iVar5 == 8)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_2 + 0x10))(param_1,param_3);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)dVar1);
  }
  return iVar4;
}

// 00440990 STAllPlayersC::_ChangeDock
#line 4 "decomp/ST.exe/functions/00440990/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_00440990(undefined4 param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  int *piVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint index;

  piVar3 = param_2;
  /* ST_PSEUDO[unresolved_register_input,stack_slot_reuse]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = (int *)st::fn_004028BA(in_ECX,(char)param_2,(ushort)param_3,CASE_1);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((STGameObjC *)param_2 == nullptr) {
    iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x21ed,0,0,"%s",
                               "STAllPlayersC::_ChangeDock");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x21ee);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((((iVar4 == 0x33) &&
       (array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar3].field2_0x5, array != nullptr)
       ) && (dVar1 = array->count, dVar1 != 0)) && (index = 0, 0 < (int)dVar1)) {
    do {
      st::fn_006ACC70(array,index,&param_2);
      if (param_2 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*param_2 + 0xc))();
        if (iVar4 == 4) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*param_2 + 0x14))(param_1,param_3);
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

// 00440AA0 STAllPlayersC::_AssignDocks
#line 4 "decomp/ST.exe/functions/00440AA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignDocks
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00440AA9 MOVSX EAX,byte ptr [EBP + 0x8] */

uint * __thiscall
st::fn_00440AA0(STAllPlayersC *this,char param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  byte bVar3;
  int iVar4;
  STGameObjC *pSVar5;
  DArrayTy *pDVar6;
  uint *puVar7;
  undefined4 *puVar8;
  Global_sub_00430750_param_1Enum GVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  DArrayTy *array;
  uint uVar13;
  short *psVar14;
  uint uVar15;
  STWorldObject *this_00;
  short *psVar16;
  undefined4 local_130 [13];
  short local_fc;
  short local_fa;
  short local_f8;
  int local_d0;
  InternalExceptionFrame local_c8;
  dword local_84;
  DArrayTy *local_80;
  AnonShape_00440AA0_D2D43F84 *local_7c;
  DArrayTy *local_78;
  int local_74;
  DArrayTy *local_70;
  DArrayTy *local_6c;
  int local_68;
  dword local_64;
  uint local_60;
  ushort local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  DArrayTy *local_54;
  DArrayTy *local_50;
  ushort local_4c;
  undefined2 local_4a;
  dword local_48;
  DArrayTy *local_44;
  STAllPlayersC *local_40;
  ushort local_3c;
  undefined4 uStack_3a;
  ushort local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  uint local_2c;
  ushort local_28 [3];
  ushort local_22;
  uint local_20;
  uint local_1c;
  short local_16;
  short local_14;
  short local_12;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_70 = nullptr;
  local_c8.previous = g_currentExceptionFrame;
  local_80 = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  g_currentExceptionFrame = &local_c8;
  local_40 = this;
  iVar4 = st::fn_0072D7F0(local_c8.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    if (iVar4 != -0x5001fff7) {
      iVar10 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x234b,0,iVar4,
                                  "%s","STAllPlayersC::_AssignDocks");
      if (iVar10 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x234c);
    }
    return &local_70->flags;
  }
  if ((((param_2 == nullptr) || (param_3 == nullptr)) ||
      (uVar15 = param_2->count, local_20 = uVar15, uVar15 == 0)) ||
     (local_48 = param_3->count, local_48 == 0)) {
    uVar15 = local_20;
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2215);
  }
  if ((local_80 == nullptr) || (local_84 = local_80->count, local_84 == 0)) {
    st::fn_006A5E40
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2216);
  }
  uVar13 = 0;
  if (0 < (int)uVar15) {
    do {
      st::fn_006ACC70(param_2,uVar13,local_28);
      if ((ushort)STPiece<0,4>(local_28) == 0xffff) {
LAB_00440bab:
        st::fn_006B0C70(param_2,uVar13);
        uVar15 = uVar15 - 1;
        uVar13 = uVar13 - 1;
        local_20 = uVar15;
      }
      else {
        pSVar5 = st::fn_004028BA(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
        iVar4 = pSVar5->vfunc_F8();
        if (iVar4 == 0) goto LAB_00440bab;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar15);
  }
  if (uVar15 == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x221e);
  }
  uVar13 = 0;
  if (0 < (int)local_48) {
    do {
      st::fn_006ACC70(param_3,uVar13,local_28);
      if ((ushort)STPiece<0,4>(local_28) == 0xffff) {
LAB_00440c19:
        st::fn_006B0C70(param_3,uVar13);
        local_48 = local_48 - 1;
        uVar13 = uVar13 - 1;
      }
      else {
        pSVar5 = st::fn_004028BA(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
        iVar4 = pSVar5->vfunc_F8();
        if (iVar4 == 0) goto LAB_00440c19;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_48);
  }
  if (local_48 == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2225);
  }
  pDVar6 = st::fn_006AE290(nullptr,uVar15,0xc,1);
  uVar13 = 0;
  local_44 = pDVar6;
  if (0 < (int)uVar15) {
    do {
      local_10 = nullptr;
      local_8 = nullptr;
      local_c = nullptr;
      st::fn_006AE140(pDVar6,uVar13,&local_10);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar15);
  }
  local_1c = 0;
  if (0 < (int)local_84) {
    do {
      uVar15 = local_1c;
      st::fn_006ACC70(local_80,local_1c,&local_7c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((local_7c != nullptr) &&
          (iVar4 = (**(code **)(*(int *)local_7c + 0xc))(), iVar4 == 4)) &&
         (local_7c->field_0027 != 0)) {
        local_6c = local_7c->field_0029;
        local_2c = 0;
        local_78 = (DArrayTy *)local_6c->count;
        if (0 < (int)local_78) {
          do {
            st::fn_006ACC70(local_6c,local_2c,local_28);
            if ((ushort)STPiece<0,4>(local_28) != 0xffff) {
              pSVar5 = st::fn_004028BA(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
              if (pSVar5 == nullptr) {
                iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2239,0,0,
                                           "%s","STAllPlayersC::_AssignDocks invalid pointer"
                                          );
                if (iVar4 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                st::fn_006A5E40
                          (-0x5001fffc,g_overwriteContext_007ED77C,
                           "E:\\__titans\\wlad\\to_allpl.cpp",0x223a);
              }
              if ((pSVar5->field_0020 == 0x14) && (iVar4 = st::fn_00402EDC(pSVar5), iVar4 == 4))
              {
                puVar8 = (undefined4 *)st::fn_004040B6(pSVar5,local_130);
                psVar14 = &local_fc;
                for (iVar4 = 0xd; dVar1 = local_48, iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(undefined4 *)psVar14 = *puVar8;
                  puVar8 = puVar8 + 1;
                  psVar14 = psVar14 + 2;
                }
                if ((local_d0 != 6) && (local_d0 != 7)) {
                  uVar15 = 0;
                  if (0 < (int)local_48) {
                    do {
                      st::fn_006ACC70(param_3,uVar15,&local_22);
                      if (local_28[0] == local_22) break;
                      uVar15 = uVar15 + 1;
                    } while ((int)uVar15 < (int)dVar1);
                  }
                  if ((int)dVar1 <= (int)uVar15) {
                    if ((((local_fc < 0) || (g_worldGrid.sizeX <= local_fc)) || (local_fa < 0)) ||
                       (((g_worldGrid.sizeY <= local_fa || (local_f8 < 0)) ||
                        (g_worldGrid.sizeZ <= local_f8)))) {
                      this_00 = nullptr;
                    }
                    else {
                      this_00 = STGridAt3D(g_worldGrid, local_fc, local_fa, local_f8).objects[0];
                    }
                    if (((this_00 != nullptr) &&
                        (this_00[1].vtable == (STWorldObjectVTable *)(int)param_1)) &&
                       ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x33 &&
                        (iVar4 = (*this_00->vtable[5].slots_00_28[2])(), uVar15 = local_20,
                        iVar4 == 1)))) {
                      uVar13 = 0;
                      if (0 < (int)local_20) {
                        do {
                          st::fn_006ACC70(param_2,uVar13,&local_22);
                          if (local_22 == *(ushort *)&this_00[1].field_0xe) break;
                          uVar13 = uVar13 + 1;
                        } while ((int)uVar13 < (int)uVar15);
                      }
                      pDVar6 = local_44;
                      if (uVar13 != uVar15) {
                        st::fn_006ACC70(local_44,uVar13,&local_10);
                        if (local_10 == nullptr) {
                          local_10 = st::fn_006AE290(nullptr,1,6,1);
                          st::fn_006AE140(pDVar6,uVar13,&local_10);
                        }
                        local_3c = local_28[0];
                        st::fn_006AE1C0(local_10,&local_3c);
                      }
                    }
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            uVar15 = local_1c;
          } while ((int)local_2c < (int)local_78);
        }
      }
      local_1c = uVar15 + 1;
    } while ((int)local_1c < (int)local_84);
  }
  dVar1 = local_48;
  pDVar6 = st::fn_006AE290(nullptr,local_48,4,1);
  uVar15 = 0;
  local_78 = pDVar6;
  if (0 < (int)dVar1) {
    do {
      local_54 = st::fn_006AE290(nullptr,local_20,4,1);
      st::fn_006AE140(pDVar6,uVar15,&local_54);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)dVar1);
  }
  local_1c = 0;
  if (0 < (int)local_20) {
    do {
      uVar15 = local_1c;
      st::fn_006ACC70(param_2,local_1c,local_28);
      pSVar5 = st::fn_004028BA(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
      st::fn_004018C5((STFishC *)pSVar5,&local_12,&local_14,&local_16);
      uVar13 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
      psVar14 = g_pathingGrid.cells;
      psVar16 = g_pathingScratchGrid.cells;
      for (uVar12 = (uVar13 & 0x7fffffff) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)psVar16 = *(undefined4 *)psVar14;
        psVar14 = psVar14 + 2;
        psVar16 = psVar16 + 2;
      }
      for (uVar13 = uVar13 * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(char *)psVar16 = (char)*psVar14;
        psVar14 = (short *)((int)psVar14 + 1);
        psVar16 = (short *)((int)psVar16 + 1);
      }
      st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY
                   ,(int)g_pathingGrid.sizeZ,(int)local_12,(int)local_14,(int)local_16,-1,-1,-1);
      st::fn_006ACC70(local_44,uVar15,&local_10);
      if (((local_10 != nullptr) && (local_64 = local_10->count, local_64 != 0)) &&
         (uVar15 = 0, 0 < (int)local_64)) {
        do {
          st::fn_006ACC70(local_10,uVar15,&local_3c);
          pSVar5 = st::fn_004028BA(local_40,param_1,local_3c,CASE_1);
          st::fn_004018C5((STFishC *)pSVar5,&local_12,&local_14,&local_16);
          GVar9 = (*pSVar5->vtable->vfunc_2C)();
          bVar3 = st::fn_004025AE(GVar9);
          uStack_3a = ((g_pathingScratchGrid.cells
                        [(int)local_16 * (int)g_pathingGrid.planeStride +
                         (int)local_14 * (int)g_pathingGrid.sizeX + (int)local_12] * 0xc9 + -0xc9) /
                      3) / (int)(uint)bVar3;
          st::fn_006AE140(local_10,uVar15,&local_3c);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_64);
      }
      uVar15 = 0;
      if (0 < (int)local_48) {
        do {
          st::fn_006ACC70(param_3,uVar15,local_28);
          pSVar5 = st::fn_004028BA(local_40,param_1,(ushort)STPiece<0,4>(local_28),CASE_1);
          st::fn_004018C5((STFishC *)pSVar5,&local_12,&local_14,&local_16);
          local_68 = (int)g_pathingScratchGrid.cells
                          [(int)local_16 * (int)g_pathingGrid.planeStride +
                           (int)local_14 * (int)g_pathingGrid.sizeX + (int)local_12];
          if (local_68 < 1) {
            local_68 = -1;
          }
          else {
            GVar9 = (*pSVar5->vtable->vfunc_2C)();
            bVar3 = st::fn_004025AE(GVar9);
            local_68 = ((local_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar3;
          }
          st::fn_006ACC70(local_78,uVar15,&local_54);
          st::fn_006AE140(local_54,local_1c,&local_68);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_48);
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_20);
  }
  local_1c = 0;
  uVar15 = local_20;
  pDVar6 = local_44;
  if (0 < (int)local_20) {
    do {
      st::fn_006ACC70(pDVar6,local_1c,&local_10);
      if ((local_10 != nullptr) && (local_64 = local_10->count, local_64 != 0)) {
        array = local_10;
        dVar1 = local_64;
        if (local_64 == 1) {
          st::fn_006ACC70(local_10,0,&local_3c);
          pSVar5 = st::fn_004028BA(local_40,param_1,local_3c,CASE_1);
          local_60 = st::fn_004043E0(pSVar5);
          iVar4 = (*pSVar5->vtable->vfunc_78)();
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar10 = (*pSVar5->vtable->vfunc_2C)();
          local_c = (DArrayTy *)
                    ((int)(*(int *)(&DAT_007e049c + iVar10 * 4) * local_60) / iVar4 + uStack_3a);
          st::fn_006AE140(pDVar6,local_1c,&local_10);
          uVar15 = local_20;
        }
        else {
          while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
            uVar15 = 0;
            if (0 < (int)dVar1) {
              do {
                st::fn_006ACC70(array,uVar15,&local_34);
                uVar13 = uVar15 + 1;
                st::fn_006ACC70(local_10,uVar13,&local_5c);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                  st::fn_006AE140(local_10,uVar15,&local_5c);
                  st::fn_006AE140(local_10,uVar13,&local_34);
                }
                array = local_10;
                uVar15 = uVar13;
              } while ((int)uVar13 < (int)dVar1);
            }
          }
          st::fn_006ACC70(array,0,&local_34);
          pSVar5 = st::fn_004028BA(local_40,param_1,local_34,CASE_1);
          iVar4 = st::fn_004043E0(pSVar5);
          iVar10 = (*pSVar5->vtable->vfunc_78)();
          if (iVar10 < 1) {
            iVar10 = 1;
          }
          iVar11 = (*pSVar5->vtable->vfunc_2C)();
          local_74 = (*(int *)(&DAT_007e049c + iVar11 * 4) * iVar4) / iVar10;
          iVar4 = 0;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = (DArrayTy *)(CONCAT22(uStack_30,uStack_32) + local_74);
          local_2c = 1;
          if (1 < (int)local_64) {
            do {
              st::fn_006ACC70(local_10,local_2c,&local_5c);
              pSVar5 = st::fn_004028BA(local_40,param_1,local_5c,CASE_1);
              local_60 = st::fn_004043E0(pSVar5);
              iVar10 = (*pSVar5->vtable->vfunc_78)();
              if (iVar10 < 1) {
                iVar10 = 1;
              }
              iVar11 = (*pSVar5->vtable->vfunc_2C)();
              iVar10 = (int)(*(int *)(&DAT_007e049c + iVar11 * 4) * local_60) / iVar10;
              local_50 = (DArrayTy *)((int)&local_50->flags + iVar10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar4 = (iVar4 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                      local_74;
              if (iVar4 < 1) {
                local_50 = (DArrayTy *)((int)local_50 - iVar4);
                iVar4 = 0;
              }
              uStack_32 = uStack_5a;
              uStack_30 = uStack_58;
              local_2c = local_2c + 1;
              local_74 = iVar10;
            } while ((int)local_2c < (int)local_64);
          }
          local_c = local_50;
          st::fn_006AE140(local_44,local_1c,&local_10);
          uVar15 = local_20;
          pDVar6 = local_44;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar15);
  }
  local_1c = 0;
  if (0 < (int)local_48) {
    do {
      st::fn_006ACC70(param_3,local_1c,&local_3c);
      uVar13 = 0;
      if (0 < (int)uVar15) {
        do {
          st::fn_006ACC70(local_78,local_1c,&local_54);
          st::fn_006ACC70(local_54,uVar13,&uStack_3a);
          st::fn_006ACC70(pDVar6,uVar13,&local_10);
          if (uStack_3a == -1) {
            local_8 = (DArrayTy *)0x3b9aca00;
          }
          else {
            if (local_10 == nullptr) {
              local_10 = st::fn_006AE290(nullptr,1,6,1);
            }
            st::fn_006AE1C0(local_10,&local_3c);
            local_8 = nullptr;
          }
          st::fn_006AE140(pDVar6,uVar13,&local_10);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar15);
      }
      local_2c = 0;
      if (0 < (int)uVar15) {
        do {
          st::fn_006ACC70(pDVar6,local_2c,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) {
            local_64 = local_10->count;
            dVar1 = local_64;
            if (local_64 == 1) {
              st::fn_006ACC70(local_10,0,&local_3c);
              pSVar5 = st::fn_004028BA(local_40,param_1,local_3c,CASE_1);
              iVar4 = st::fn_004043E0(pSVar5);
              iVar10 = (*pSVar5->vtable->vfunc_78)();
              if (iVar10 < 1) {
                iVar10 = 1;
              }
              iVar11 = (*pSVar5->vtable->vfunc_2C)();
              local_8 = (DArrayTy *)
                        ((*(int *)(&DAT_007e049c + iVar11 * 4) * iVar4) / iVar10 + uStack_3a);
            }
            else {
              while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
                uVar15 = 0;
                if (0 < (int)dVar1) {
                  do {
                    st::fn_006ACC70(local_10,uVar15,&local_34);
                    uVar13 = uVar15 + 1;
                    st::fn_006ACC70(local_10,uVar13,&local_5c);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                      st::fn_006AE140(local_10,uVar15,&local_5c);
                      st::fn_006AE140(local_10,uVar13,&local_34);
                    }
                    uVar15 = uVar13;
                  } while ((int)uVar13 < (int)dVar1);
                }
              }
              st::fn_006ACC70(local_10,0,&local_34);
              pSVar5 = st::fn_004028BA(local_40,param_1,local_34,CASE_1);
              iVar4 = st::fn_004043E0(pSVar5);
              iVar10 = (*pSVar5->vtable->vfunc_78)();
              if (iVar10 < 1) {
                iVar10 = 1;
              }
              iVar11 = (*pSVar5->vtable->vfunc_2C)();
              local_74 = (*(int *)(&DAT_007e049c + iVar11 * 4) * iVar4) / iVar10;
              iVar4 = 0;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_50 = (DArrayTy *)(CONCAT22(uStack_30,uStack_32) + local_74);
              local_6c = (DArrayTy *)0x1;
              if (1 < (int)local_64) {
                do {
                  st::fn_006ACC70(local_10,(uint)local_6c,&local_5c);
                  pSVar5 = st::fn_004028BA(local_40,param_1,local_5c,CASE_1);
                  local_60 = st::fn_004043E0(pSVar5);
                  iVar10 = (*pSVar5->vtable->vfunc_78)();
                  if (iVar10 < 1) {
                    iVar10 = 1;
                  }
                  iVar11 = (*pSVar5->vtable->vfunc_2C)();
                  iVar10 = (int)(*(int *)(&DAT_007e049c + iVar11 * 4) * local_60) / iVar10;
                  local_50 = (DArrayTy *)((int)&local_50->flags + iVar10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar4 = (iVar4 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                          local_74;
                  if (iVar4 < 1) {
                    local_50 = (DArrayTy *)((int)local_50 - iVar4);
                    iVar4 = 0;
                  }
                  uStack_32 = uStack_5a;
                  uStack_30 = uStack_58;
                  local_6c = (DArrayTy *)((int)&local_6c->flags + 1);
                  local_74 = iVar10;
                } while ((int)local_6c < (int)local_64);
              }
              local_8 = local_50;
            }
            st::fn_006AE140(local_44,local_2c,&local_10);
            uVar15 = local_20;
            pDVar6 = local_44;
          }
          local_2c = local_2c + 1;
        } while ((int)local_2c < (int)uVar15);
      }
      if (local_70 == nullptr) {
        local_70 = st::fn_006AE290(nullptr,0,4,1);
      }
      st::fn_006ACC70(param_3,local_1c,&local_4c);
      uVar13 = 0;
      if (0 < (int)uVar15) {
        do {
          st::fn_006ACC70(pDVar6,uVar13,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) break;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar15);
      }
      if (uVar13 == uVar15) {
        local_4a = 0xffff;
        st::fn_006AE1C0(local_70,&local_4c);
      }
      else if (uVar13 == uVar15 - 1) {
        st::fn_006ACC70(param_2,uVar13,&local_4a);
        st::fn_006AE1C0(local_70,&local_4c);
        local_c = local_8;
        st::fn_006AE140(pDVar6,uVar13,&local_10);
      }
      else {
        uVar15 = uVar13 + 1;
        local_6c = local_8;
        local_60 = uVar13;
        if ((int)uVar15 < (int)local_20) {
          do {
            st::fn_006ACC70(pDVar6,uVar15,&local_10);
            if ((local_8 != (DArrayTy *)0x3b9aca00) && ((int)local_8 < (int)local_6c)) {
              local_6c = local_8;
              uVar13 = uVar15;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_20);
        }
        local_60 = uVar13;
        st::fn_006ACC70(param_2,uVar13,&local_4a);
        st::fn_006AE1C0(local_70,&local_4c);
        st::fn_006ACC70(pDVar6,uVar13,&local_10);
        local_c = local_8;
        st::fn_006AE140(pDVar6,uVar13,&local_10);
        local_2c = 0;
        if (0 < (int)local_20) {
          do {
            if (local_2c != uVar13) {
              st::fn_006ACC70(pDVar6,local_2c,&local_10);
              if (local_8 != (DArrayTy *)0x3b9aca00) {
                uVar15 = 0;
                dVar1 = local_10->count;
                if (0 < (int)dVar1) {
                  do {
                    st::fn_006ACC70(local_10,uVar15,&local_3c);
                    if (local_3c == local_4c) {
                      st::fn_006B0C70(local_10,uVar15);
                      pDVar6 = local_44;
                      break;
                    }
                    uVar15 = uVar15 + 1;
                    pDVar6 = local_44;
                  } while ((int)uVar15 < (int)dVar1);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar13 = local_60;
          } while ((int)local_2c < (int)local_20);
        }
      }
      local_1c = local_1c + 1;
      uVar15 = local_20;
    } while ((int)local_1c < (int)local_48);
  }
  uVar13 = 0;
  if (0 < (int)uVar15) {
    do {
      st::fn_006ACC70(pDVar6,uVar13,&local_10);
      if (local_10 != nullptr) {
        st::fn_006AE110(local_10);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar15);
  }
  st::fn_006AE110(pDVar6);
  dVar1 = local_48;
  pDVar6 = local_78;
  uVar15 = 0;
  if (0 < (int)local_48) {
    do {
      st::fn_006ACC70(pDVar6,uVar15,&local_54);
      if (local_54 != nullptr) {
        st::fn_006AE110(local_54);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)dVar1);
  }
  st::fn_006AE110(pDVar6);
  g_currentExceptionFrame = local_c8.previous;
  return &local_70->flags;
}

// 00441CE0 STAllPlayersC::_MakeMDPairs
#line 4 "decomp/ST.exe/functions/00441CE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_MakeMDPairs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00441CE0(STAllPlayersC *this,char param_1)

{
  byte bVar2;
  int iVar3;
  DArrayTy *pDVar4;
  dword dVar5;
  int iVar6;
  dword *pdVar7;
  uint uVar8;
  DArrayTy *pDVar9;
  short *psVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  short *psVar14;
  DArrayTy *pDVar15;
  InternalExceptionFrame local_e8;
  undefined1 local_a4 [6];
  undefined2 local_9e;
  undefined2 local_96;
  dword local_80 [5];
  uint local_6c;
  DArrayTy *local_68;
  dword local_64;
  int local_60 [4];
  STAllPlayersC *local_50;
  undefined1 local_4c [4];
  short local_48;
  short local_46;
  short local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  DArrayTy *local_24;
  int local_20;
  int *local_1c;
  DArrayTy *local_18;
  undefined4 *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  STFishC *local_8;

  local_24 = (DArrayTy *)0x4;
  local_80[0] = 0x38;
  local_80[1] = 0x39;
  local_80[2] = 0x4f;
  local_80[3] = 0x5e;
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_50 = this;
  iVar3 = st::fn_0072D7F0(local_e8.jumpBuffer,0);
  pDVar9 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x23c5,0,iVar3,"%s"
                               ,"STAllPlayersC::_MakeMDPairs");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x23c6);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = (int)param_1;
  if (0 < (int)local_24) {
    local_c = local_24;
    puVar11 = &g_packedRecords_A62x8[iVar3].field5_0xf;
    do {
      if ((DArrayTy *)*puVar11 != nullptr) {
        st::fn_006AE110((DArrayTy *)*puVar11);
        *puVar11 = 0;
      }
      puVar11 = puVar11 + 1;
      local_c = (DArrayTy *)((int)&local_c[-1].data + 3);
    } while (local_c != nullptr);
  }
  local_60[3] = 0;
  local_60[2] = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_10 = nullptr;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  local_20 = iVar3 * 0xa62;
  if (g_packedRecords_A62x8[iVar3].field0_0x0 != '\0') {
    if (0 < (int)pDVar9) {
      puVar11 = &g_packedRecords_A62x8[iVar3].field5_0xf;
      pDVar15 = pDVar9;
      do {
        pDVar4 = st::fn_006AE290(nullptr,0,0x24,1);
        *puVar11 = pDVar4;
        puVar11 = puVar11 + 1;
        pDVar15 = (DArrayTy *)((int)&pDVar15[-1].data + 3);
      } while (pDVar15 != nullptr);
    }
    local_18 = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + local_20);
    if ((local_18 != nullptr) &&
       (local_c = (DArrayTy *)local_18->count, local_c != nullptr)) {
      local_10 = st::fn_006AE290(nullptr,0,4,1);
      if (0 < (int)pDVar9) {
        piVar12 = local_60;
        pDVar15 = pDVar9;
        do {
          pDVar4 = st::fn_006AE290(nullptr,0,4,1);
          *piVar12 = (int)pDVar4;
          piVar12 = piVar12 + 1;
          pDVar15 = (DArrayTy *)((int)&pDVar15[-1].data + 3);
        } while (pDVar15 != nullptr);
      }
      uVar13 = 0;
      if (0 < (int)local_c) {
        do {
          st::fn_006ACC70(local_18,uVar13,&local_8);
          if (local_8 != nullptr) {
            dVar5 = local_8->slot_2C();
            pDVar15 = local_10;
            if ((dVar5 == 0x3b) || (dVar5 == 0x60)) {
LAB_00441e92:
              st::fn_006AE1C0(pDVar15,&local_8);
            }
            else {
              iVar3 = 0;
              if (0 < (int)pDVar9) {
                pdVar7 = local_80;
                do {
                  if (dVar5 == *pdVar7) {
                    iVar6 = (*local_8->vtable->vfunc_88)(local_4c);
                    if (0 < iVar6) {
                      pDVar15 = (DArrayTy *)local_60[iVar3];
                      goto LAB_00441e92;
                    }
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  pdVar7 = pdVar7 + 1;
                } while (iVar3 < (int)pDVar9);
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_c);
      }
    }
    if ((local_10 == nullptr) || (local_64 = local_10->count, local_64 == 0)) {
      local_3a = 0xffff;
      local_42 = 0xffff;
      if (0 < (int)pDVar9) {
        puVar11 = (undefined4 *)((int)&g_packedRecords_A62x8[0].field5_0xf + local_20);
        pDVar15 = pDVar9;
        do {
          st::fn_006AE1C0((DArrayTy *)*puVar11,&local_48);
          puVar11 = puVar11 + 1;
          pDVar15 = (DArrayTy *)((int)&pDVar15[-1].data + 3);
        } while (pDVar15 != nullptr);
      }
    }
    else {
      local_c = nullptr;
      if (0 < (int)local_64) {
        do {
          st::fn_006ACC70(local_10,(uint)local_c,&local_8);
          st::fn_004018C5(local_8,&local_40,&local_3e,&local_3c);
          local_3a = *(undefined2 *)&local_8->field_0x32;
          uVar13 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
          psVar10 = g_pathingGrid.cells;
          psVar14 = g_pathingScratchGrid.cells;
          for (uVar8 = (uVar13 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)psVar14 = *(undefined4 *)psVar10;
            psVar10 = psVar10 + 2;
            psVar14 = psVar14 + 2;
          }
          for (uVar13 = uVar13 * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(char *)psVar14 = (char)*psVar10;
            psVar10 = (short *)((int)psVar10 + 1);
            psVar14 = (short *)((int)psVar14 + 1);
          }
          st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,(int)local_3e
                       ,(int)local_3c,-1,-1,-1);
          if (0 < (int)local_24) {
            local_1c = local_60;
            local_18 = local_24;
            local_14 = (undefined4 *)((int)&g_packedRecords_A62x8[0].field5_0xf + local_20);
            do {
              pDVar9 = (DArrayTy *)*local_1c;
              local_68 = pDVar9;
              if ((pDVar9 == nullptr) || (local_80[4] = pDVar9->count, local_80[4] == 0)) {
                if (((DArrayTy *)*local_14)->count == 0) {
                  local_96 = 0xffff;
                  local_9e = 0xffff;
                  st::fn_006AE1C0((DArrayTy *)*local_14,local_a4);
                }
              }
              else {
                uVar13 = 0;
                if (0 < (int)local_80[4]) {
                  do {
                    st::fn_006ACC70(pDVar9,uVar13,&local_8);
                    st::fn_004018C5(local_8,&local_48,&local_46,&local_44);
                    local_42 = *(undefined2 *)&local_8->field_0x32;
                    local_38 = (int)g_pathingScratchGrid.cells
                                    [(local_44 + 1) * (int)g_pathingGrid.planeStride +
                                     (int)local_46 * (int)g_pathingGrid.sizeX + (int)local_48];
                    if (local_38 == 0) {
                      local_38 = 1000000;
                      local_30 = 100;
                    }
                    else {
                      bVar2 = st::fn_004025AE(CASE_8);
                      local_6c = (uint)bVar2;
                      local_38 = ((((local_38 * 0xc9) / 3) / (int)local_6c) * 0xc) / 10 + 800;
                      local_30 = (undefined4)(40000 / (longlong)local_38);
                      pDVar9 = local_68;
                    }
                    local_34 = local_30;
                    st::fn_006AE1C0((DArrayTy *)*local_14,&local_48);
                    uVar13 = uVar13 + 1;
                  } while ((int)uVar13 < (int)local_80[4]);
                }
              }
              local_1c = local_1c + 1;
              local_14 = local_14 + 1;
              local_18 = (DArrayTy *)((int)&local_18[-1].data + 3);
            } while (local_18 != nullptr);
          }
          local_c = (DArrayTy *)((int)&local_c->flags + 1);
          pDVar9 = local_24;
        } while ((int)local_c < (int)local_64);
      }
    }
    st::fn_006AE110(local_10);
    if (0 < (int)pDVar9) {
      piVar12 = local_60;
      do {
        st::fn_006AE110((DArrayTy *)*piVar12);
        piVar12 = piVar12 + 1;
        pDVar9 = (DArrayTy *)((int)&pDVar9[-1].data + 3);
      } while (pDVar9 != nullptr);
    }
  }
  g_currentExceptionFrame = local_e8.previous;
  return;
}

// 00442300 STAllPlayersC::_AddMDPairs
#line 4 "decomp/ST.exe/functions/00442300/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AddMDPairs
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0044238E MOVSX EAX,byte ptr [EBP + 0x8] | 004424C4 MOVSX
   EAX,byte ptr [EBP + 0x8] | 0044275F MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall st::fn_00442300(STAllPlayersC *this,char param_1,uint param_2)

{
  STAllPlayersC *pSVar2;
  byte bVar3;
  int iVar4;
  STGameObjC *pSVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  STAllPlayersC_GetTOBJList_param_2Enum SVar13;
  STAllPlayersC_GetTOBJList_param_2Enum SVar14;
  InternalExceptionFrame local_d4;
  undefined1 local_90 [6];
  short local_8a;
  short local_82;
  STAllPlayersC_GetTOBJList_param_2Enum local_6c [4];
  STAllPlayersC *local_5c;
  STAllPlayersC_GetTOBJList_param_2Enum local_58;
  undefined1 local_54 [4];
  uint local_50;
  int local_4c;
  dword local_48;
  STGameObjC *local_44;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  short local_38;
  short local_36;
  short local_34;
  undefined2 local_32;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_1c [4];
  uint local_18;
  int local_14;
  undefined4 local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_4c = 4;
  local_6c[0] = CASE_38;
  local_6c[1] = 0x39;
  local_6c[2] = 0x4f;
  local_6c[3] = 0x5e;
  local_5c = this;
  local_44 = st::fn_004028BA(this,param_1,(ushort)param_2,CASE_1);
  local_58 = (*local_44->vtable->vfunc_2C)();
  local_10 = 0;
  local_d4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d4;
  iVar4 = st::fn_0072D7F0(local_d4.jumpBuffer,0);
  iVar6 = local_4c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_d4.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2454,0,iVar4,
                                 "%s","STAllPlayersC::_AddMDPairs");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2455);
    }
    return local_10;
  }
  if (0 < local_4c) {
    piVar10 = &g_packedRecords_A62x8[param_1].field5_0xf;
    iVar4 = local_4c;
    do {
      if (*piVar10 == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x23dd);
      }
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  pSVar5 = local_44;
  pSVar2 = local_5c;
  if ((local_58 == 0x3b) || (local_58 == 0x60)) {
    st::fn_004018C5((STFishC *)local_44,&local_38,&local_36,&local_34);
    local_32 = pSVar5->field_0032;
    uVar8 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar11 = g_pathingGrid.cells;
    psVar12 = g_pathingScratchGrid.cells;
    for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)psVar12 = *(undefined4 *)psVar11;
      psVar11 = psVar11 + 2;
      psVar12 = psVar12 + 2;
    }
    for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)psVar12 = (char)*psVar11;
      psVar11 = (short *)((int)psVar11 + 1);
      psVar12 = (short *)((int)psVar12 + 1);
    }
    st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                 (int)g_pathingGrid.sizeZ,(int)local_38,(int)local_36,(int)local_34,-1,-1,-1);
    pSVar2 = local_5c;
    local_14 = 0;
    if (0 < iVar6) {
      do {
        iVar6 = local_14 * 4;
        local_c = (DArrayTy *)st::fn_00401415(pSVar2,param_1,local_6c[local_14],0,-1);
        local_48 = local_c->count;
        if (local_48 != 0) {
          local_8 = *(DArrayTy **)(iVar6 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
          local_18 = 0;
          if (0 < (int)local_48) {
            do {
              st::fn_006ACC70(local_c,local_18,local_1c);
              pSVar5 = st::fn_004028BA(pSVar2,param_1,STPiece<0,2>(local_1c),CASE_1);
              local_44 = pSVar5;
              iVar6 = (*pSVar5->vtable->vfunc_88)(local_54);
              if (0 < iVar6) {
                st::fn_004018C5((STFishC *)pSVar5,&local_40,&local_3e,&local_3c);
                local_3a = pSVar5->field_0032;
                local_30 = (int)g_pathingScratchGrid.cells
                                [(local_3c + 1) * (int)g_pathingGrid.planeStride +
                                 (int)local_3e * (int)g_pathingGrid.sizeX + (int)local_40];
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar3 = st::fn_004025AE(CASE_8);
                  local_50 = (uint)bVar3;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8->count;
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    st::fn_006ACC70(local_8,uVar9,local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      st::fn_006AE140(local_8,uVar9,&local_40);
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  st::fn_006AE1C0(local_8,&local_40);
                  local_10 = 1;
                }
              }
              local_18 = local_18 + 1;
            } while ((int)local_18 < (int)local_48);
          }
        }
        st::fn_006AE110(local_c);
        local_14 = local_14 + 1;
      } while (local_14 < local_4c);
    }
  }
  else {
    local_14 = 0;
    SVar13 = local_58;
    if (0 < iVar6) {
      do {
        iVar6 = local_14;
        if (SVar13 == local_6c[local_14]) {
          bVar3 = st::fn_004049B7(param_1);
          if (bVar3 == 3) {
            SVar14 = 0x60;
          }
          else {
            SVar14 = 0x3b;
          }
          local_c = (DArrayTy *)st::fn_00401415(pSVar2,param_1,SVar14,0,-1);
          pSVar5 = local_44;
          local_48 = local_c->count;
          if (local_48 != 0) {
            st::fn_004018C5((STFishC *)local_44,&local_40,&local_3e,&local_3c);
            local_3a = pSVar5->field_0032;
            uVar8 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
            psVar11 = g_pathingGrid.cells;
            psVar12 = g_pathingScratchGrid.cells;
            for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)psVar12 = *(undefined4 *)psVar11;
              psVar11 = psVar11 + 2;
              psVar12 = psVar12 + 2;
            }
            for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(char *)psVar12 = (char)*psVar11;
              psVar11 = (short *)((int)psVar11 + 1);
              psVar12 = (short *)((int)psVar12 + 1);
            }
            st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                         (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,
                         (int)local_3e,(int)local_3c,-1,-1,-1);
            local_18 = 0;
            local_8 = *(DArrayTy **)(local_14 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
            iVar6 = local_14;
            SVar13 = local_58;
            if (0 < (int)local_48) {
              do {
                st::fn_006ACC70(local_c,local_18,local_1c);
                pSVar5 = st::fn_004028BA(pSVar2,param_1,STPiece<0,2>(local_1c),CASE_1);
                local_44 = pSVar5;
                st::fn_004018C5((STFishC *)pSVar5,&local_38,&local_36,&local_34);
                local_32 = pSVar5->field_0032;
                local_30 = (int)g_pathingScratchGrid.cells
                                [(local_34 + 1) * (int)g_pathingGrid.planeStride +
                                 (int)g_pathingGrid.sizeX * (int)local_36 + (int)local_38];
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar3 = st::fn_004025AE(CASE_8);
                  local_50 = (uint)bVar3;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8->count;
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    st::fn_006ACC70(local_8,uVar9,local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      st::fn_006AE140(local_8,uVar9,&local_40);
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  st::fn_006AE1C0(local_8,&local_40);
                  local_10 = 1;
                }
                local_18 = local_18 + 1;
                iVar6 = local_14;
                SVar13 = local_58;
              } while ((int)local_18 < (int)local_48);
            }
          }
          st::fn_006AE110(local_c);
        }
        local_14 = iVar6 + 1;
        if (local_4c <= iVar6 + 1) {
          g_currentExceptionFrame = local_d4.previous;
          return local_10;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_d4.previous;
  return local_10;
}

// 00442B40 STAllPlayersC::_SubMDObject
#line 4 "decomp/ST.exe/functions/00442B40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_SubMDObject */

undefined4 st::fn_00442B40(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  DArrayTy *pDVar2;
  STGameObjC *this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  char objPtr;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  int local_2c [4];
  short local_1c;
  uint local_18;
  STGameObjC *local_14;
  int local_10;
  undefined4 local_c;
  short local_8;
  short local_6;

  local_2c[0] = 0x38;
  local_2c[1] = 0x39;
  local_2c[2] = 0x4f;
  local_2c[3] = 0x5e;
  objPtr = (char)param_1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  this = st::fn_004028BA(in_ECX,objPtr,(ushort)param_2,CASE_1);
  local_14 = this;
  uVar4 = (*this->vtable->vfunc_2C)();
  local_c = 0;
  local_18 = uVar4;
  if (this == nullptr) {
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x246d,0,0,"%s",
                               "STAllPlayersC::_SubMDObject invalid input data");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x246e);
  }
  if ((uVar4 != 0x3b) && (uVar4 != 0x60)) {
    local_10 = 0;
    do {
      if (uVar4 == *(int *)((int)local_2c + local_10)) {
        pDVar2 = *(DArrayTy **)(local_10 + STRecordByteAddress(g_packedRecords_A62x8, objPtr, 0xF));
        uVar1 = (ushort)pDVar2->count;
        if (uVar1 != 0) {
          st::fn_004018C5((STFishC *)this,(short *)((int)&param_2 + 2),&local_6,&local_8);
          uVar4 = 0;
          local_1c = this->field_0032;
          this = local_14;
          if (uVar1 != 0) {
            do {
              st::fn_006ACC70(pDVar2,uVar4,&local_50);
              if ((((local_4a != -1) && (local_42 != -1)) && (local_50 == STPiece<2,2>(param_2))) &&
                 (((local_4e == local_6 && (local_4c == local_8)) && (local_4a == local_1c)))) {
                local_42 = -1;
                local_4a = -1;
                st::fn_006AE140(pDVar2,uVar4,&local_50);
                local_c = 1;
              }
              uVar4 = uVar4 + 1;
              this = local_14;
            } while ((int)uVar4 < (int)(uint)uVar1);
          }
        }
      }
      local_10 = local_10 + 4;
      uVar4 = local_18;
    } while (local_10 < 0x10);
    return local_c;
  }
  st::fn_004018C5((STFishC *)this,(short *)((int)&param_2 + 2),&local_6,&local_8);
  local_1c = this->field_0032;
  local_14 = (STGameObjC *)0x4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = &g_packedRecords_A62x8[objPtr].field5_0xf;
  do {
    pDVar2 = (DArrayTy *)*param_1;
    if ((pDVar2 != nullptr) && (uVar1 = (ushort)pDVar2->count, uVar1 != 0)) {
      uVar4 = 0;
      local_18 = (uint)uVar1;
      if (uVar1 != 0) {
        do {
          st::fn_006ACC70(pDVar2,uVar4,&local_50);
          if (((((local_4a != -1) && (local_42 != -1)) && (local_48 == STPiece<2,2>(param_2))) &&
              ((local_46 == local_6 && (local_44 == local_8)))) && (local_42 == local_1c)) {
            local_42 = -1;
            local_4a = -1;
            st::fn_006AE140(pDVar2,uVar4,&local_50);
            local_c = 1;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)local_18);
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 1;
    local_14 = (STGameObjC *)((int)local_14 + -1);
  } while (local_14 != nullptr);
  return local_c;
}

// 00442E50 STAllPlayersC::_AssignMDPairs
#line 4 "decomp/ST.exe/functions/00442E50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignMDPairs
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00442F42 MOVSX EAX,byte ptr [EBP + 0x8] | 0044319E MOVSX
   EAX,byte ptr [EBP + 0x8] */

uint * __thiscall
st::fn_00442E50
          (STAllPlayersC *this,char param_1,int param_2,DArrayTy *param_3,DArrayTy *param_4,
          DArrayTy *param_5)

{
  bool bVar2;
  STFishC *pSVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  STGameObjC *objPtr;
  DArrayTy *pDVar8;
  int iVar9;
  STWorldCell *pSVar10;
  undefined2 uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  dword dVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  dword dVar16;
  uint uVar17;
  short *psVar18;
  DArrayTy *pDVar19;
  undefined8 uVar20;
  undefined4 local_19c [17];
  short local_158 [3];
  int local_152;
  short local_14e;
  short local_14c;
  short local_14a;
  int local_148;
  int local_13e;
  int local_13a;
  InternalExceptionFrame local_114;
  int local_d0 [5];
  DArrayTy *local_bc;
  dword local_b8;
  uint local_b4;
  undefined1 local_b0 [6];
  short local_aa;
  short local_a2;
  int local_94;
  int local_90;
  STAllPlayersC *local_8c;
  uint local_88;
  DArrayTy *local_84;
  short local_80;
  short local_7e;
  undefined2 local_7c;
  int local_7a;
  int local_76;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_62;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  DArrayTy *local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  STFishC *local_40;
  uint local_3c;
  uint local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  uint local_2c;
  dword local_28;
  uint local_24;
  DArrayTy *local_20;
  STGroupC *local_1c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  int local_e;
  undefined4 local_8;

  local_d0[4] = 4;
  local_d0[0] = 0x38;
  local_d0[1] = 0x39;
  local_d0[2] = 0x4f;
  local_d0[3] = 0x5e;
  local_84 = nullptr;
  local_4c = nullptr;
  local_114.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_114;
  local_8c = this;
  iVar5 = st::fn_0072D7F0(local_114.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_114.previous;
    if (iVar5 != -0x5001fff7) {
      iVar9 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x25ed,0,iVar5,
                                 "%s","STAllPlayersC::_AssignMDPairs");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x25ee);
    }
    return &local_4c->flags;
  }
  if (((param_3 != nullptr) && (param_4 != nullptr)) && (param_5 != nullptr)
     ) {
    uVar14 = param_3->count;
    local_3c = uVar14;
    if (((uVar14 != 0) && (local_2c = param_4->count, param_4->count != 0)) &&
       (local_38 = param_5->count, param_5->count != 0)) goto LAB_00442f1f;
  }
  uVar14 = local_3c;
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",0x24ce
            );
LAB_00442f1f:
  iVar5 = 0;
  if (0 < local_d0[4]) {
    piVar6 = local_d0;
    do {
      if (param_2 == *piVar6) {
        local_84 = *(DArrayTy **)(iVar5 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
        break;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < local_d0[4]);
  }
  if ((local_84 == nullptr) || (local_28 = local_84->count, local_28 == 0)) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24d1);
  }
  uVar13 = 0;
  if (0 < (int)uVar14) {
    do {
      st::fn_006ACC70(param_3,uVar13,&local_8);
      if ((short)local_8 != -1) break;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  if (uVar13 == uVar14) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24e2);
  }
  pSVar3 = local_40;
  uVar14 = 0;
  if (0 < (int)local_2c) {
    do {
      st::fn_006ACC70(param_4,uVar14,&local_8);
      if ((pSVar3 != nullptr) && ((short)local_8 != -1)) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_2c);
  }
  if (uVar14 == local_2c) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x24f4);
  }
  uVar14 = 0;
  if (0 < (int)local_38) {
    do {
      st::fn_006ACC70(param_5,uVar14,&local_8);
      if ((short)local_8 != -1) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_38);
  }
  if (uVar14 == local_38) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2507);
  }
  local_34 = st::fn_006AE290(nullptr,0,0x24,1);
  uVar14 = 0;
  if (0 < (int)local_28) {
    do {
      st::fn_006ACC70(local_84,uVar14,&local_70);
      if ((local_6a != -1) && (local_62 != -1)) {
        bVar2 = false;
        uVar13 = 0;
        if (0 < (int)local_3c) {
          do {
            st::fn_006ACC70(param_3,uVar13,&local_8);
            if (local_6a == (short)local_8) {
              bVar2 = true;
              break;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_3c);
        }
        if (bVar2) {
          bVar2 = false;
          uVar13 = 0;
          if (0 < (int)local_2c) {
            do {
              st::fn_006ACC70(param_4,uVar13,&local_8);
              if (local_62 == (short)local_8) {
                bVar2 = true;
                break;
              }
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)local_2c);
          }
          if (bVar2) {
            st::fn_006AE1C0(local_34,&local_70);
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_28);
  }
  if (local_34->count == 0) {
    st::fn_006AE110(local_34);
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2522,0,0,"%s",
                               "STAllPlayersC::_AssignMDPairs pair==NULL");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2524);
  }
  local_20 = st::fn_006AE290(nullptr,local_3c,6,1);
  local_30 = st::fn_006AE290(nullptr,local_2c,6,1);
  pDVar8 = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  local_bc = pDVar8;
  if (pDVar8 == nullptr) {
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x252c,0,0,"%s",
                               "STAllPlayersC::_AssignMDPairs grps==NULL");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x252d);
  }
  dVar12 = pDVar8->count;
  local_24 = 0;
  local_28 = dVar12;
  if (0 < (int)dVar12) {
    do {
      uVar14 = local_24;
      st::fn_006ACC70(pDVar8,local_24,&local_1c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((local_1c != nullptr) &&
         (iVar5 = (**(code **)(local_1c->vtable + 0xc))(), iVar5 == 8)) {
        local_48 = (DArrayTy *)st::fn_00402DB5(local_1c);
        local_b8 = local_48->count;
        if ((local_b8 != 0) && (local_44 = nullptr, 0 < (int)local_b8)) {
LAB_0044326c:
          uVar14 = local_38;
          st::fn_006ACC70(local_48,(uint)local_44,&local_8);
          if ((ushort)local_8 != 0xffff) {
            objPtr = st::fn_004028BA(local_8c,param_1,(ushort)local_8,CASE_1);
            local_40 = (STFishC *)objPtr;
            if (objPtr == nullptr) {
              iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2539,0,0,
                                         "%s","STAllPlayersC::_AssignMDPairs ptr==NULL");
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_allpl.cpp",0x253a);
            }
            iVar5 = (*objPtr->vtable->vfunc_2C)();
            if ((((iVar5 != 8) && (iVar5 = (*objPtr->vtable->vfunc_2C)(), iVar5 != 0x14)) &&
                (iVar5 = (*objPtr->vtable->vfunc_2C)(), iVar5 != 0x1a)) ||
               (iVar5 = st::fn_00402EDC(objPtr), iVar5 != 0xc)) goto cf_common_join_004435CD;
            uVar13 = 0;
            if (0 < (int)uVar14) {
              do {
                st::fn_006ACC70(param_5,uVar13,&local_12);
                if ((short)local_8 == local_12) break;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < (int)uVar14);
            }
            if ((int)uVar13 < (int)uVar14) goto cf_common_join_004435CD;
            uVar20 = st::fn_004024CD(objPtr,local_19c);
            pSVar10 = (STWorldCell *)((ulonglong)uVar20 >> 0x20);
            psVar15 = (short *)uVar20;
            psVar18 = local_158;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)psVar18 = *(undefined4 *)psVar15;
              psVar15 = psVar15 + 2;
              psVar18 = psVar18 + 2;
            }
            *psVar18 = *psVar15;
            uVar14 = local_3c;
            if ((local_152 == -1) || (local_148 == -1)) goto cf_common_join_004435CD;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((((local_158[0] < 0) ||
                 ((g_worldGrid.sizeX <= local_158[0] ||
                  (pSVar10 = (STWorldCell *)
                             CONCAT22((short)((ulonglong)uVar20 >> 0x30),local_158[1]),
                  local_158[1] < 0)))) || (g_worldGrid.sizeY <= local_158[1])) ||
               ((local_158[2] < 0 || (g_worldGrid.sizeZ <= local_158[2])))) {
              local_40 = nullptr;
            }
            else {
              local_40 = (STFishC *)
                         STGridAt3D(g_worldGrid, local_158[0], local_158[1], local_158[2]).objects[0]
              ;
              pSVar10 = g_worldGrid.cells;
            }
            uVar11 = (undefined2)((uint)pSVar10 >> 0x10);
            if (local_40 == nullptr) goto cf_common_join_004435CD;
            local_8 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)(*(undefined2 *)&local_40->field_0x32));
            uVar13 = 0;
            if (0 < (int)local_3c) {
              do {
                st::fn_006ACC70(param_3,uVar13,&local_12);
                iVar5 = local_13e;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                uVar11 = extraout_var;
                if ((short)local_8 == local_12) {
                  uVar14 = local_20->count;
                  if (uVar14 == 0) {
                    uVar13 = 0;
                    local_10 = (short)local_8;
                    goto LAB_0044349d;
                  }
                  uVar13 = 0;
                  if ((int)uVar14 < 1) goto LAB_00443473;
                  goto LAB_0044343c;
                }
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < (int)uVar14);
            }
            goto LAB_004434a2;
          }
          goto cf_common_join_004435CD;
        }
LAB_004435f1:
        st::fn_006AE110(local_48);
      }
      local_24 = uVar14 + 1;
    } while ((int)local_24 < (int)dVar12);
  }
  local_24 = 0;
  if (0 < (int)local_3c) {
    do {
      st::fn_006ACC70(param_3,local_24,&local_8);
      pDVar8 = local_20;
      sVar4 = (short)local_8;
      if (sVar4 != -1) {
        dVar16 = 0;
        dVar12 = local_20->count;
        local_28 = dVar12;
        if (dVar12 != 0) {
          if (0 < (int)dVar12) {
            do {
              st::fn_006ACC70(pDVar8,dVar16,&local_10);
              sVar4 = (short)local_8;
              if (local_10 == sVar4) break;
              dVar16 = dVar16 + 1;
            } while ((int)dVar16 < (int)dVar12);
          }
          if (dVar16 != dVar12) goto LAB_00443676;
        }
        local_10 = sVar4;
        local_e = 0;
        st::fn_006AE1C0(pDVar8,&local_10);
      }
LAB_00443676:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_3c);
  }
  local_24 = 0;
  if (0 < (int)local_2c) {
    do {
      st::fn_006ACC70(param_4,local_24,&local_8);
      pDVar8 = local_30;
      sVar4 = (short)local_8;
      if (sVar4 != -1) {
        dVar16 = 0;
        dVar12 = local_30->count;
        local_28 = dVar12;
        if (dVar12 != 0) {
          if (0 < (int)dVar12) {
            do {
              st::fn_006ACC70(pDVar8,dVar16,&local_10);
              sVar4 = (short)local_8;
              if (local_10 == sVar4) break;
              dVar16 = dVar16 + 1;
            } while ((int)dVar16 < (int)dVar12);
          }
          if (dVar16 != dVar12) goto LAB_004436f7;
        }
        local_10 = sVar4;
        local_e = 0;
        st::fn_006AE1C0(pDVar8,&local_10);
      }
LAB_004436f7:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_2c);
  }
  uVar14 = 0;
  local_28 = local_34->count;
  if (0 < (int)local_28) {
    do {
      st::fn_006ACC70(local_34,uVar14,&local_70);
      uVar17 = 0;
      uVar13 = local_20->count;
      local_3c = uVar13;
      if (0 < (int)uVar13) {
        do {
          st::fn_006ACC70(local_20,uVar17,&local_10);
          if (local_10 == local_6a) {
            local_54 = local_e;
            break;
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar13);
      }
      if (uVar17 == uVar13) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x25a4,0,0,"%s"
                                   ,"STAllPlayersC::_AssignMDPairs M absent");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x25a5);
      }
      uVar17 = 0;
      uVar13 = local_30->count;
      local_2c = uVar13;
      if (0 < (int)uVar13) {
        do {
          st::fn_006ACC70(local_30,uVar17,&local_10);
          if (local_10 == local_62) {
            local_50 = local_e;
            break;
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar13);
      }
      if (uVar17 == uVar13) {
        iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x25ad,0,0,"%s"
                                   ,"STAllPlayersC::_AssignMDPairs D absent");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x25ae);
      }
      st::fn_006AE140(local_34,uVar14,&local_70);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)local_28);
  }
  st::fn_006AE110(local_20);
  st::fn_006AE110(local_30);
  uVar14 = local_38;
  pDVar19 = nullptr;
  uVar13 = 0;
  local_30 = nullptr;
  pDVar8 = local_30;
  if (0 < (int)local_38) {
    do {
      st::fn_006ACC70(param_5,uVar13,&local_8);
      if ((short)local_8 != -1) {
        pDVar19 = (DArrayTy *)((int)&pDVar19->flags + 1);
      }
      uVar13 = uVar13 + 1;
      pDVar8 = pDVar19;
    } while ((int)uVar13 < (int)uVar14);
  }
  local_30 = pDVar8;
  pDVar8 = local_30;
  local_20 = st::fn_006AE290(nullptr,(uint)local_30,0x24,1);
  pDVar19 = local_34;
  if (0 < (int)pDVar8) {
    do {
      local_44 = pDVar8;
      uVar14 = 0;
      local_48 = (DArrayTy *)0x5f5e100;
      if (0 < (int)local_28) {
        do {
          st::fn_006ACC70(pDVar19,uVar14,&local_70);
          if (local_5c + local_54 < 0x65) {
            iVar5 = 0;
          }
          else {
            iVar5 = ((local_5c + local_54 + -100) * local_60) / 100;
          }
          if (local_58 + local_50 < 0x65) {
            local_88 = 0;
          }
          else {
            local_88 = ((local_58 + local_50 + -100) * local_60) / 100;
          }
          pDVar8 = (DArrayTy *)(local_88 + local_60 + iVar5);
          if ((int)pDVar8 < (int)local_48) {
            local_b4 = uVar14;
            local_48 = pDVar8;
          }
          uVar14 = uVar14 + 1;
          pDVar19 = local_34;
        } while ((int)uVar14 < (int)local_28);
      }
      dVar12 = local_28;
      uVar14 = local_b4;
      st::fn_006ACC70(pDVar19,local_b4,&local_70);
      local_54 = local_54 + local_5c;
      local_50 = local_50 + local_58;
      st::fn_006AE140(pDVar19,uVar14,&local_70);
      st::fn_006AE1C0(local_20,&local_70);
      uVar14 = 0;
      if (0 < (int)dVar12) {
        do {
          st::fn_006ACC70(pDVar19,uVar14,local_b0);
          if (local_aa == local_6a) {
            local_94 = local_54;
          }
          if (local_a2 == local_62) {
            local_90 = local_50;
          }
          if (local_a2 == local_62 || local_aa == local_6a) {
            st::fn_006AE140(pDVar19,uVar14,local_b0);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)dVar12);
      }
      pDVar8 = (DArrayTy *)((int)&local_44[-1].data + 3);
    } while (pDVar8 != nullptr);
    local_44 = nullptr;
  }
  st::fn_006AE110(pDVar19);
  uVar14 = local_38;
  pDVar8 = st::fn_006AE290(nullptr,local_38,2,1);
  uVar13 = 0;
  if (0 < (int)uVar14) {
    do {
      st::fn_006ACC70(param_5,uVar13,&local_8);
      st::fn_006AE140(pDVar8,uVar13,&local_8);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  pDVar19 = local_30;
  local_4c = st::fn_006AE290(nullptr,(uint)local_30,0xe,1);
  local_24 = 0;
  if (0 < (int)pDVar19) {
    do {
      st::fn_006ACC70(local_20,local_24,&local_70);
      uVar14 = 0;
      iVar5 = 100000000;
      if (0 < (int)local_38) {
        do {
          st::fn_006ACC70(pDVar8,uVar14,&local_8);
          if ((ushort)local_8 != 0xffff) {
            local_40 = (STFishC *)st::fn_004028BA(local_8c,param_1,(ushort)local_8,CASE_1);
            st::fn_004018C5(local_40,&local_18,&local_14,&local_16);
            iVar9 = st::fn_006AADD0((int)local_18,(int)local_14,(int)local_16,(int)local_70,
                                 (int)local_6e,(int)local_6c);
            if (iVar9 < iVar5) {
              iVar5 = iVar9;
              local_88 = uVar14;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_38);
      }
      uVar14 = local_88;
      st::fn_006ACC70(pDVar8,local_88,&local_8);
      local_80 = local_6a;
      local_7c = (short)local_8;
      local_7a = local_5c;
      local_7e = local_62;
      local_76 = local_58;
      st::fn_006AE1C0(local_4c,&local_80);
      local_8 = 0xffff;
      st::fn_006AE140(pDVar8,uVar14,&local_8);
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_30);
  }
  st::fn_006AE110(pDVar8);
  st::fn_006AE110(local_20);
  g_currentExceptionFrame = local_114.previous;
  return &local_4c->flags;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  while (uVar13 = uVar13 + 1, uVar11 = extraout_var_00, (int)uVar13 < (int)uVar14) {
LAB_0044343c:
    st::fn_006ACC70(local_20,uVar13,&local_10);
    if (local_10 == (short)local_8) {
      local_e = local_e + iVar5;
      st::fn_006AE140(local_20,uVar13,&local_10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar11 = extraout_var_01;
      break;
    }
  }
LAB_00443473:
  if (uVar13 == uVar14) {
    local_10 = (short)local_8;
LAB_0044349d:
    local_e = iVar5;
    st::fn_006AE140(local_20,uVar13,&local_10);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar11 = extraout_var_02;
  }
LAB_004434a2:
  uVar14 = local_2c;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar5 = CONCAT22(uVar11,local_14e);
  if ((((local_14e < 0) || (g_worldGrid.sizeX <= local_14e)) || (local_14c < 0)) ||
     (((g_worldGrid.sizeY <= local_14c || (local_14a < 0)) || (g_worldGrid.sizeZ <= local_14a)))) {
    local_40 = nullptr;
  }
  else {
    iVar5 = (int)local_14e;
    local_40 = (STFishC *)
               STGridAt3D(g_worldGrid, iVar5, local_14c, local_14a).objects[0];
  }
  if (local_40 != nullptr) {
    local_8 = STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(*(undefined2 *)&local_40->field_0x32));
    uVar13 = 0;
    if (0 < (int)local_2c) {
      do {
        st::fn_006ACC70(param_4,uVar13,&local_12);
        pDVar8 = local_30;
        sVar4 = (short)local_8;
        if (sVar4 == local_12) {
          uVar14 = local_30->count;
          if (uVar14 == 0) {
            uVar13 = 0;
            goto LAB_004435c8;
          }
          uVar13 = 0;
          if ((int)uVar14 < 1) goto LAB_00443598;
          goto LAB_0044355f;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar14);
    }
  }
cf_common_join_004435CD:
  local_44 = (DArrayTy *)((int)local_44 + 1);
  dVar12 = local_28;
  pDVar8 = local_bc;
  uVar14 = local_24;
  if ((int)local_b8 <= (int)local_44) goto LAB_004435f1;
  goto LAB_0044326c;
  while (uVar13 = uVar13 + 1, (int)uVar13 < (int)uVar14) {
LAB_0044355f:
    st::fn_006ACC70(pDVar8,uVar13,&local_10);
    sVar4 = (short)local_8;
    if (local_10 == sVar4) {
      local_e = local_e + local_13a;
      st::fn_006AE140(pDVar8,uVar13,&local_10);
      sVar4 = (short)local_8;
      break;
    }
  }
LAB_00443598:
  if (uVar13 == uVar14) {
LAB_004435c8:
    local_10 = sVar4;
    local_e = local_13a;
    st::fn_006AE140(local_30,uVar13,&local_10);
  }
  goto cf_common_join_004435CD;
}

// 00443F30 STAllPlayersC::SaveAllPlData
#line 4 "decomp/ST.exe/functions/00443F30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveAllPlData

   [STPrototypeApplier] Propagated return.
   Evidence: 00443F30 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00431261 */

byte * __thiscall st::fn_00443F30(STAllPlayersC *this,int *param_1)

{
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *puVar6;
  int *piVar8;
  byte *pbVar9;
  DArrayTy *pDVar10;
  AnonShape_00443F30_5DF553AC *pAVar11;
  uint *puVar12;
  uint uVar13;
  AnonShape_00443F30_9F0248D4 *pAVar14;
  InternalExceptionFrame local_88;
  STAllPlayersC *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  AnonShape_00443F30_9F0248D4 *local_34;
  int *local_30;
  byte *local_2c;
  uint local_28;
  AnonShape_00443F30_5DF553AC *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  AnonShape_00443F30_5DF553AC *local_14;
  AnonShape_00443F30_9F0248D4 *local_10;
  byte *local_c;
  AnonNested_00443F30_0839_FB957E77 *local_8;

  local_34 = (AnonShape_00443F30_9F0248D4 *)0x4;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_44 = this;
  iVar2 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 0x5590;
    local_14 = (AnonShape_00443F30_5DF553AC *)&g_packedRecords_A62x8[0].field155_0x1bd;
    local_28 = 0x5590;
    do {
      if (0 < (int)local_34) {
        local_10 = local_34;
        puVar6 = (byte *)&local_14[-1].field_0x68f;
        do {
          if ((uint *)*puVar6 != nullptr) {
            local_c = (byte *)st::fn_006B0020((uint *)*puVar6,(int *)&local_8);
            st::fn_006AB060(&local_c);
            iVar2 = (int)&(local_8->field_0000).flags + iVar2;
            local_28 = iVar2;
          }
          puVar6 = (byte *)(puVar6 + 1);
          local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        } while (local_10 != nullptr);
      }
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      pAVar11 = local_14;
      do {
        if (*(uint **)&pAVar11[-1].field_0x7ed != nullptr) {
          local_c = (byte *)st::fn_006B0020(*(uint **)&pAVar11[-1].field_0x7ed,(int *)&local_8);
          st::fn_006AB060(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        if (*(uint **)pAVar11 != nullptr) {
          local_c = (byte *)st::fn_006B0020(*(uint **)pAVar11,(int *)&local_8);
          st::fn_006AB060(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        pAVar11 = (AnonShape_00443F30_5DF553AC *)&pAVar11->field_0x10;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != nullptr);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      puVar6 = (byte *)&local_14->field_0x54;
      do {
        if ((uint *)*puVar6 != nullptr) {
          local_c = (byte *)st::fn_006B0020((uint *)*puVar6,(int *)&local_8);
          st::fn_006AB060(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        puVar6 = (byte *)(puVar6 + 4);
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != nullptr);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x6;
      puVar12 = (uint *)&local_14->field_0x631;
      do {
        local_c = (byte *)st::fn_006B0020(puVar12,(int *)&local_8);
        st::fn_006AB060(&local_c);
        iVar2 = (int)&(local_8->field_0000).flags + iVar2;
        puVar12 = puVar12 + 0x11;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        local_28 = iVar2;
      } while (local_10 != nullptr);
      local_20 = &local_14->field_0839->field_0000;
      local_10 = nullptr;
      if (((AnonNested_00443F30_0839_FB957E77 *)local_20 != nullptr
          ) && (local_24 = (AnonShape_00443F30_5DF553AC *)
                           (((AnonNested_00443F30_0839_FB957E77 *)local_20)->field_0000).count,
               local_24 != nullptr)) {
        uVar13 = 0;
        iVar2 = iVar2 + (int)local_24 * 0x18;
        local_28 = iVar2;
        if (0 < (int)local_24) {
          do {
            st::fn_006ACC70(local_20,uVar13,&local_40);
            if (local_40 != nullptr) {
              local_c = (byte *)st::fn_006B0020(local_40,(int *)&local_8);
              st::fn_006AB060(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            if (local_3c != nullptr) {
              local_c = (byte *)st::fn_006B0020(local_3c,(int *)&local_8);
              st::fn_006AB060(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            if (local_38 != nullptr) {
              local_c = (byte *)st::fn_006B0020(local_38,(int *)&local_8);
              st::fn_006AB060(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_24);
        }
      }
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x225;
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar2 + g_worldGrid.planeStride;
    pbVar3 = st::fn_006AAC70(local_28);
    pbVar4 = pbVar3 + 8;
    *(undefined4 *)pbVar3 = local_44->field_001C;
    piVar8 = &g_packedRecords_A62x8[0].field3_0x9;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      *(undefined4 *)(pbVar4 + -4) = *(undefined4 *)(piVar8[-1] + 0xc);
      *(undefined4 *)pbVar4 = *(undefined4 *)(*piVar8 + 0xc);
      *(undefined4 *)(pbVar4 + 0x24) = STField<undefined4>(piVar8,0x16);
      *(undefined4 *)(pbVar4 + 0x28) = STField<undefined4>(piVar8,0x1a);
      *(undefined4 *)(pbVar4 + 0x2c) = STField<undefined4>(piVar8,0x1e);
      puVar6 = (byte *)((int)piVar8 + 0x22);
      pbVar9 = pbVar4 + 0x30;
      memmove(pbVar9, puVar6, 0x138); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pbVar4[0x30] = 0;
      pbVar4[0x31] = 0;
      pbVar4[0x32] = 0;
      pbVar4[0x33] = 0;
      pbVar4[0x34] = 0;
      pbVar4[0x35] = 0;
      pbVar4[0x36] = 0;
      pbVar4[0x37] = 0;
      pbVar4[0x38] = 0;
      pbVar4[0x39] = 0;
      pbVar4[0x3a] = 0;
      pbVar4[0x3b] = 0;
      pbVar4[0x40] = 0;
      pbVar4[0x41] = 0;
      pbVar4[0x42] = 0;
      pbVar4[0x43] = 0;
      pbVar4[0x44] = 0;
      pbVar4[0x45] = 0;
      pbVar4[0x46] = 0;
      pbVar4[0x47] = 0;
      pbVar4[0x48] = 0;
      pbVar4[0x49] = 0;
      pbVar4[0x4a] = 0;
      pbVar4[0x4b] = 0;
      pbVar4[0x50] = 0;
      pbVar4[0x51] = 0;
      pbVar4[0x52] = 0;
      pbVar4[0x53] = 0;
      pbVar4[0x60] = 0;
      pbVar4[0x61] = 0;
      pbVar4[0x62] = 0;
      pbVar4[99] = 0;
      pbVar4[0x70] = 0;
      pbVar4[0x71] = 0;
      pbVar4[0x72] = 0;
      pbVar4[0x73] = 0;
      pbVar4[0x80] = 0;
      pbVar4[0x81] = 0;
      pbVar4[0x82] = 0;
      pbVar4[0x83] = 0;
      pbVar4[0x90] = 0;
      pbVar4[0x91] = 0;
      pbVar4[0x92] = 0;
      pbVar4[0x93] = 0;
      pbVar4[0xa0] = 0;
      pbVar4[0xa1] = 0;
      pbVar4[0xa2] = 0;
      pbVar4[0xa3] = 0;
      pbVar4[0xb0] = 0;
      pbVar4[0xb1] = 0;
      pbVar4[0xb2] = 0;
      pbVar4[0xb3] = 0;
      pbVar4[0xc0] = 0;
      pbVar4[0xc1] = 0;
      pbVar4[0xc2] = 0;
      pbVar4[0xc3] = 0;
      pbVar4[0xd0] = 0;
      pbVar4[0xd1] = 0;
      pbVar4[0xd2] = 0;
      pbVar4[0xd3] = 0;
      pbVar4[0xe0] = 0;
      pbVar4[0xe1] = 0;
      pbVar4[0xe2] = 0;
      pbVar4[0xe3] = 0;
      pbVar4[0xf0] = 0;
      pbVar4[0xf1] = 0;
      pbVar4[0xf2] = 0;
      pbVar4[0xf3] = 0;
      pbVar4[0x100] = 0;
      pbVar4[0x101] = 0;
      pbVar4[0x102] = 0;
      pbVar4[0x103] = 0;
      pbVar4[0x110] = 0;
      pbVar4[0x111] = 0;
      pbVar4[0x112] = 0;
      pbVar4[0x113] = 0;
      pbVar4[0x120] = 0;
      pbVar4[0x121] = 0;
      pbVar4[0x122] = 0;
      pbVar4[0x123] = 0;
      pbVar4[0x130] = 0;
      pbVar4[0x131] = 0;
      pbVar4[0x132] = 0;
      pbVar4[0x133] = 0;
      pbVar4[0x140] = 0;
      pbVar4[0x141] = 0;
      pbVar4[0x142] = 0;
      pbVar4[0x143] = 0;
      pbVar4[0x150] = 0;
      pbVar4[0x151] = 0;
      pbVar4[0x152] = 0;
      pbVar4[0x153] = 0;
      pbVar4[0x160] = 0;
      pbVar4[0x161] = 0;
      pbVar4[0x162] = 0;
      pbVar4[0x163] = 0;
      pbVar4[0x164] = 0;
      pbVar4[0x165] = 0;
      pbVar4[0x166] = 0;
      pbVar4[0x167] = 0;
      pbVar9 = pbVar4 + 0x16c;
      puVar6 = (byte *)((int)piVar8 + 0x15e);
      do {
        *(undefined4 *)(pbVar9 + -4) = puVar6[-1];
        *(undefined4 *)pbVar9 = *puVar6;
        *(undefined2 *)(pbVar9 + 4) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)(pbVar9 + 0xe) = STField<undefined2>(puVar6,10);
        *(undefined4 *)(pbVar9 + 0x60) = puVar6[0x13];
        *(undefined4 *)(pbVar9 + 100) = puVar6[0x14];
        *(undefined2 *)(pbVar9 + 0x68) = *(undefined2 *)(puVar6 + 0x15);
        *(undefined2 *)(pbVar9 + 0x72) = STField<undefined2>(puVar6,0x5a);
        pbVar9 = pbVar9 + 0x14;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        puVar6 = (byte *)(puVar6 + 4);
      } while (local_10 != nullptr);
      pbVar9 = pbVar4 + 0x238;
      *(undefined4 *)(pbVar4 + 0x230) = STField<undefined4>(piVar8,0x1fa);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      puVar6 = (byte *)((int)piVar8 + 0x202);
      do {
        *(undefined4 *)(pbVar9 + -4) = puVar6[-1];
        *(undefined4 *)pbVar9 = *puVar6;
        *(undefined2 *)(pbVar9 + 4) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)(pbVar9 + 0xe) = STField<undefined2>(puVar6,10);
        pbVar9 = pbVar9 + 0x14;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        puVar6 = (byte *)(puVar6 + 4);
      } while (local_10 != nullptr);
      *(undefined4 *)(pbVar4 + 0x2fc) = STField<undefined4>(piVar8,0x29e);
      *(undefined4 *)(pbVar4 + 0x300) = STField<undefined4>(piVar8,0x2a2);
      *(undefined4 *)(pbVar4 + 0x304) = STField<undefined4>(piVar8,0x2a6);
      *(undefined4 *)(pbVar4 + 0x308) = STField<undefined4>(piVar8,0x2aa);
      *(undefined4 *)(pbVar4 + 0x30c) = STField<undefined4>(piVar8,0x2ae);
      *(undefined4 *)(pbVar4 + 0x310) = STField<undefined4>(piVar8,0x2b2);
      *(undefined4 *)(pbVar4 + 0x314) = STField<undefined4>(piVar8,0x2b6);
      *(undefined4 *)(pbVar4 + 0x318) = STField<undefined4>(piVar8,0x2ba);
      *(undefined4 *)(pbVar4 + 0x31c) = STField<undefined4>(piVar8,0x2be);
      *(undefined4 *)(pbVar4 + 800) = STField<undefined4>(piVar8,0x2c2);
      *(undefined4 *)(pbVar4 + 0x324) = STField<undefined4>(piVar8,0x2c6);
      *(undefined4 *)(pbVar4 + 0x328) = STField<undefined4>(piVar8,0x2ca);
      *(undefined4 *)(pbVar4 + 0x32c) = STField<undefined4>(piVar8,0x2ce);
      *(undefined4 *)(pbVar4 + 0x330) = STField<undefined4>(piVar8,0x2d2);
      *(undefined4 *)(pbVar4 + 0x334) = STField<undefined4>(piVar8,0x2d6);
      *(undefined4 *)(pbVar4 + 0x338) = STField<undefined4>(piVar8,0x2da);
      puVar6 = (byte *)((int)piVar8 + 0x2e2);
      pbVar9 = pbVar4 + 0x33c;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x2f6);
      pbVar9 = pbVar4 + 0x350;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x30a);
      pbVar9 = pbVar4 + 0x364;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x31e);
      pbVar9 = pbVar4 + 0x378;
      memmove(pbVar9, puVar6, 0x26c); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x58a);
      pbVar9 = pbVar4 + 0x5e4;
      memmove(pbVar9, puVar6, 0x1a8); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x732);
      pbVar9 = pbVar4 + 0x78c;
      memmove(pbVar9, puVar6, 0x9b); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)(pbVar4 + 0x827) = STField<undefined4>(piVar8,0x7cd);
      puVar6 = (byte *)((int)piVar8 + 0x7d1);
      pbVar9 = pbVar4 + 0x82b;
      memmove(pbVar9, puVar6, 0x198); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)(pbVar4 + 0x9c3) = STField<undefined4>(piVar8,0x969);
      *(undefined4 *)(pbVar4 + 0x9c7) = STField<undefined4>(piVar8,0x96d);
      puVar6 = (byte *)((int)piVar8 + 0x971);
      pbVar9 = pbVar4 + 0x9cb;
      memmove(pbVar9, puVar6, 0x18); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)(pbVar4 + 0x9e3) = STField<undefined4>(piVar8,0x98d);
      *(undefined4 *)(pbVar4 + 0x9e7) = STField<undefined4>(piVar8,0x991);
      *(undefined4 *)(pbVar4 + 0x9eb) = STField<undefined4>(piVar8,0x995);
      puVar6 = (byte *)((int)piVar8 + 0x999);
      pbVar9 = pbVar4 + 0x9ef;
      memmove(pbVar9, puVar6, 0x28); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0xa05);
      pbVar9 = pbVar4 + 0xa17;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0xa19);
      pbVar9 = pbVar4 + 0xa2b;
      memmove(pbVar9, puVar6, 0x20); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0xa39);
      pbVar9 = pbVar4 + 0xa4b;
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      piVar8 = (int *)((int)piVar8 + 0xa62);
      pbVar4 = pbVar4 + 0xaab;
      memmove(pbVar9, puVar6, 0x20); /* compiler REP MOVS byte copy */
      iVar2 = 0;
    } while ((int)piVar8 < 0x7fa139);
    local_24 = (AnonShape_00443F30_5DF553AC *)&g_packedRecords_A62x8[0].field5_0xf;
    pbVar4 = pbVar3 + 0x5590;
    puVar6 = (byte *)(&DAT_007fa138);
    pbVar9 = pbVar3 + 0x555c;
    memmove(pbVar9, puVar6, 0x18); /* compiler REP MOVS byte copy */
    local_1c = (DArrayTy *)0x5590;
    local_20 = nullptr;
    *(dword *)(pbVar3 + 0x5574) = g_array_007FA154->count;
    *(dword *)(pbVar3 + 0x5578) = g_array_007FA158->count;
    *(dword *)(pbVar3 + 0x557c) = g_array_007FA15C->count;
    *(dword *)(pbVar3 + 0x5580) = g_array_007FA160->count;
    *(dword *)(pbVar3 + 0x5584) = g_array_007FA164->count;
    local_10 = nullptr;
    pAVar14 = local_34;
    local_2c = pbVar3;
    do {
      local_18 = nullptr;
      pDVar10 = local_20;
      local_14 = local_24;
      if (0 < (int)pAVar14) {
        do {
          if (*(uint **)local_14 == nullptr) {
            pbVar9 = pbVar3 + (int)(&pDVar10->count + (int)local_18 * 2);
            pbVar9[0] = 0xff;
            pbVar9[1] = 0xff;
            pbVar9[2] = 0xff;
            pbVar9[3] = 0xff;
            pbVar9 = pbVar3 + (int)(&pDVar10->capacity + (int)local_18 * 2);
            pbVar9[0] = 0;
            pbVar9[1] = 0;
            pbVar9[2] = 0;
            pbVar9[3] = 0;
          }
          else {
            local_c = (byte *)st::fn_006B0020(*(uint **)local_14,(int *)&local_8);
            pbVar3 = local_c;
            pbVar9 = pbVar4;
            for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
              pbVar3 = pbVar3 + 4;
              pbVar9 = pbVar9 + 4;
            }
            for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar9 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              pbVar9 = pbVar9 + 1;
            }
            st::fn_006AB060(&local_c);
            *(DArrayTy **)(local_2c + (int)(&local_20->count + (int)local_18 * 2)) = local_1c;
            *(AnonNested_00443F30_0839_FB957E77 **)
             (local_2c + (int)(&local_20->capacity + (int)local_18 * 2)) = local_8;
            pbVar4 = pbVar4 + (int)local_8;
            local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
            pbVar3 = local_2c;
            pDVar10 = local_20;
            pAVar14 = local_34;
          }
          local_18 = (DArrayTy *)((int)local_18 + 1);
          local_14 = (AnonShape_00443F30_5DF553AC *)&local_14->field_0x4;
        } while ((int)local_18 < (int)pAVar14);
      }
      local_24 = (AnonShape_00443F30_5DF553AC *)&local_24[1].field_0x225;
      local_20 = (DArrayTy *)((int)&pDVar10[0x55].elementSize + 3);
    } while ((int)local_24 < 0x7fa13f);
    local_14 = nullptr;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_packedRecords_A62x8[0].field155_0x1bd;
    do {
      local_24 = nullptr;
      local_18 = (DArrayTy *)local_10;
      do {
        if ((uint *)((AnonShape_00443F30_9F0248D4 *)((int)local_18 + -0x54))->field_0004 ==
            nullptr) {
          local_20 = (DArrayTy *)(pbVar3 + (int)(&local_14->field_0x0 + (int)local_24));
          *(undefined4 *)((int)&local_20[0xb].growCallback + 2) = 0xffffffff;
          *(undefined4 *)((int)&local_20[0xb].data + 2) = 0;
        }
        else {
          local_c = (byte *)st::fn_006B0020((uint *)((AnonShape_00443F30_9F0248D4 *)
                                                 ((int)local_18 + -0x54))->field_0004,
                                         (int *)&local_8);
          pbVar3 = local_c;
          pbVar9 = pbVar4;
          for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
            pbVar3 = pbVar3 + 4;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          }
          st::fn_006AB060(&local_c);
          local_20 = (DArrayTy *)(local_2c + (int)(&local_14->field_0x0 + (int)local_24));
          *(DArrayTy **)((int)&local_20[0xb].growCallback + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xb].data + 2) = local_8;
          pbVar4 = pbVar4 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar3 = local_2c;
        }
        if (*(uint **)local_18 == nullptr) {
          *(undefined4 *)((int)&local_20[0xe].data + 2) = 0xffffffff;
          pbVar9 = (byte *)((int)&local_20[0xf].flags + 2);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
        }
        else {
          local_c = (byte *)st::fn_006B0020(*(uint **)local_18,(int *)&local_8);
          pbVar3 = local_c;
          pbVar9 = pbVar4;
          for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
            pbVar3 = pbVar3 + 4;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          }
          st::fn_006AB060(&local_c);
          *(DArrayTy **)((int)&local_20[0xe].data + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xf].flags + 2) = local_8;
          pbVar4 = pbVar4 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar3 = local_2c;
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_18 = (DArrayTy *)&((AnonShape_00443F30_9F0248D4 *)((int)local_18 + 0xc))->field_0004;
      } while ((int)local_24 < 100);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x26e;
    } while ((int)local_10 < 0x7fa2ed);
    local_18 = nullptr;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_packedRecords_A62x8[0].field204_0x211;
    do {
      local_24 = nullptr;
      local_20 = (DArrayTy *)local_10;
      do {
        if ((uint *)local_20->flags == nullptr) {
          pbVar9 = pbVar3 + (int)local_18 + (int)local_24 + 0x246;
          pbVar9[0] = 0xff;
          pbVar9[1] = 0xff;
          pbVar9[2] = 0xff;
          pbVar9[3] = 0xff;
          pbVar9 = pbVar3 + (int)local_18 + (int)local_24 + 0x24a;
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
        }
        else {
          local_c = (byte *)st::fn_006B0020((uint *)local_20->flags,(int *)&local_8);
          pbVar3 = local_c;
          pbVar9 = pbVar4;
          for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
            pbVar3 = pbVar3 + 4;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          }
          st::fn_006AB060(&local_c);
          *(DArrayTy **)(local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)(local_2c + (int)local_18 + (int)local_24 + 0x24a)
               = local_8;
          pbVar4 = pbVar4 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar3 = local_2c;
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_20 = (DArrayTy *)&local_20->capacity;
      } while ((int)local_24 < 200);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_18 = (DArrayTy *)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (AnonShape_00443F30_5DF553AC *)(pbVar3 + 0xa83);
    local_18 = (DArrayTy *)&g_packedRecords_A62x8[0].field_0x7ee;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)local_24;
      local_30 = (int *)0x6;
      local_20 = local_18;
      do {
        local_c = (byte *)st::fn_006B0020(&local_20->flags,(int *)&local_8);
        pbVar3 = local_c;
        pbVar9 = pbVar4;
        for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
          pbVar3 = pbVar3 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pbVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          pbVar9 = pbVar9 + 1;
        }
        st::fn_006AB060(&local_c);
        local_10[-1].field_0008 = local_1c;
        *(AnonNested_00443F30_0839_FB957E77 **)local_10 = local_8;
        local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
        local_10 = (AnonShape_00443F30_9F0248D4 *)&local_10->field_0008;
        pbVar4 = pbVar4 + (int)local_8;
        local_20 = (DArrayTy *)&local_20[2].iteratorIndex;
        local_30 = (int *)((int)local_30 + -1);
      } while (local_30 != nullptr);
      local_18 = (DArrayTy *)((int)&local_18[0x53].flags + 2);
      local_24 = (AnonShape_00443F30_5DF553AC *)
                 ((int)&((AnonShape_00443F30_9F0248D4 *)((int)local_24 + 0xaa4))->field_0004 + 3);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &g_packedRecords_A62x8[0].field1976_0x9f6;
    local_10 = (AnonShape_00443F30_9F0248D4 *)(local_2c + 0xa73);
    do {
      local_10->field_0008 = (DArrayTy *)local_30[5];
      local_20 = (DArrayTy *)*local_30;
      if ((local_20 == nullptr) ||
         (local_24 = (AnonShape_00443F30_5DF553AC *)local_20->count,
         local_24 == nullptr)) {
        *(undefined4 *)local_10 = 0xffffffff;
        local_10->field_0004 = 0;
        pbVar3 = pbVar4;
      }
      else {
        local_18 = nullptr;
        local_8 = (AnonNested_00443F30_0839_FB957E77 *)((int)local_24 * 0x18);
        *(DArrayTy **)local_10 = local_1c;
        local_10->field_0004 = local_8;
        pbVar3 = pbVar4 + (int)local_8;
        local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
        if (0 < (int)local_24) {
          pAVar11 = (AnonShape_00443F30_5DF553AC *)(pbVar4 + 8);
          do {
            local_14 = pAVar11;
            st::fn_006ACC70(local_20,(uint)local_18,&local_40);
            if (local_40 == nullptr) {
              *(undefined4 *)&pAVar11[-1].field_0x835 = 0xffffffff;
              pAVar11[-1].field_0839 = nullptr;
            }
            else {
              local_c = (byte *)st::fn_006B0020(local_40,(int *)&local_8);
              pbVar4 = local_c;
              pbVar9 = pbVar3;
              for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
                pbVar4 = pbVar4 + 4;
                pbVar9 = pbVar9 + 4;
              }
              for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pbVar9 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              }
              st::fn_006AB060(&local_c);
              *(DArrayTy **)&local_14[-1].field_0x835 = local_1c;
              local_14[-1].field_0839 = local_8;
              pbVar3 = pbVar3 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar11 = local_14;
            }
            if (local_3c == nullptr) {
              *(undefined4 *)pAVar11 = 0xffffffff;
              *(undefined4 *)&pAVar11->field_0x4 = 0;
            }
            else {
              local_c = (byte *)st::fn_006B0020(local_3c,(int *)&local_8);
              pbVar4 = local_c;
              pbVar9 = pbVar3;
              for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
                pbVar4 = pbVar4 + 4;
                pbVar9 = pbVar9 + 4;
              }
              for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pbVar9 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              }
              st::fn_006AB060(&local_c);
              *(DArrayTy **)local_14 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0x4 = local_8;
              pbVar3 = pbVar3 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar11 = local_14;
            }
            if (local_38 == nullptr) {
              *(undefined4 *)&pAVar11->field_0x8 = 0xffffffff;
              *(undefined4 *)&pAVar11->field_0xc = 0;
            }
            else {
              local_c = (byte *)st::fn_006B0020(local_38,(int *)&local_8);
              pbVar4 = local_c;
              pbVar9 = pbVar3;
              for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
                pbVar4 = pbVar4 + 4;
                pbVar9 = pbVar9 + 4;
              }
              for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pbVar9 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              }
              st::fn_006AB060(&local_c);
              *(DArrayTy **)&local_14->field_0x8 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0xc = local_8;
              pbVar3 = pbVar3 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar11 = local_14;
            }
            local_18 = (DArrayTy *)((int)local_18 + 1);
            pAVar11 = (AnonShape_00443F30_5DF553AC *)&pAVar11->field_0x18;
          } while ((int)local_18 < (int)local_24);
        }
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      local_30 = (int *)((int)local_30 + 0xa62);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xe3].field_0004 + 3);
      pbVar4 = pbVar3;
    } while ((int)local_30 < 0x7fab26);
    uVar13 = (uint)g_worldGrid.planeStride;
    pbVar4 = DAT_007fa168;
    memmove(pbVar3, pbVar4, uVar13); /* compiler REP MOVS byte copy */
    *(DArrayTy **)(local_2c + 0x5588) = local_1c;
    *(uint *)(local_2c + 0x558c) = uVar13;
    g_currentExceptionFrame = local_88.previous;
    *param_1 = local_28;
    return local_2c;
  }
  g_currentExceptionFrame = local_88.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x270e,0,iVar2,"%s",
                             "STAllPlayersC::SaveAllPlData");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",9999);
    *param_1 = local_28;
    return local_2c;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 004455C0 STAllPlayersC::CreateBoat
#line 4 "decomp/ST.exe/functions/004455C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CreateBoat */

uint __thiscall st::fn_004455C0(STAllPlayersC *this,undefined4 *param_1)

{
  ushort uVar2;
  int iVar3;
  uint uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  InternalExceptionFrame local_58;
  undefined4 local_14;
  STAllPlayersC *local_10;
  int local_c;
  STGroupC *local_8;

  local_14 = 0xffffffff;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x27df,0,iVar3,"%s"
                               ,"STAllPlayersC::CreateBoat");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x27e0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return CONCAT22(extraout_var,(undefined2)local_14);
  }
  if (7 < (uint)param_1[1]) {
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x27b5,0,0,"%s",
                               "STAllPlayersC::CreateBoat - incorrect player number");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27b6);
  }
  if ((7 < (uint)param_1[5]) && (param_1[5] != 0xffffffff)) {
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x27c2,0,0,"%s",
                               "STAllPlayersC::CreateBoat - incorrect player color");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27c3);
  }
  if ((((*(short *)(param_1 + 7) < 0) || (g_worldGrid.sizeX <= *(short *)(param_1 + 7))) ||
      (STField<short>(param_1,0x1e) < 0)) ||
     (((g_worldGrid.sizeY <= STField<short>(param_1,0x1e) || (*(short *)(param_1 + 8) < 0)) ||
      (g_worldGrid.sizeZ <= *(short *)(param_1 + 8))))) {
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x27c8,0,0,"%s",
                               "STAllPlayersC::CreateBoat - incorrect position");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27c9);
  }
  *param_1 = 0x14;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_1[5] == -1) {
    param_1[5] = param_1[1];
  }
  local_8 = (STGroupC *)st::fn_00405CF9(*(char *)(param_1 + 1),*(ushort *)(param_1 + 9));
  if ((STGroupBoatC *)local_8 == nullptr) {
    uVar2 = st::fn_00401E97(*(char *)(param_1 + 1),0,(int *)&local_8);
    *(ushort *)(param_1 + 9) = uVar2;
    if (local_8 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x27d8);
    }
  }
  st::fn_00401BC2(g_playSystem_00802A38,0x14,0,&local_c,param_1,0);
  iVar3 = local_c;
  if (local_c == 0) {
    st::fn_006A5E40
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27db);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar3 = extraout_EAX;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar4 = st::fn_0040340E(local_8,STReplaceLowWord((uint32_t)(iVar3), (uint16_t)(*(undefined2 *)(local_c + 0x32))),0);
  g_currentExceptionFrame = local_58.previous;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return STReplaceLowWord((uint32_t)(uVar4), (uint16_t)(*(undefined2 *)(local_c + 0x32)));
}

// 004458D0 STAllPlayersC::GetBoatWeaponInfo
#line 4 "decomp/ST.exe/functions/004458D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetBoatWeaponInfo

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetBoatWeaponInfo_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

undefined4
st::fn_004458D0
          (STAllPlayersC_GetBoatWeaponInfo_param_1Enum param_1,undefined4 *param_2,
          undefined4 *param_3,undefined4 *param_4)

{
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  switch(param_1) {
  case CASE_1:
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_C:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1D:
  case CASE_1E:
  case CASE_20:
  case CASE_22:
  case CASE_23:
  case CASE_24:
  case CASE_25:
  case CASE_28:
    uVar3 = 0;
    break;
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_B:
  case CASE_D:
  case CASE_E:
  case CASE_10:
  case CASE_11:
  case CASE_1C:
  case CASE_1F:
  case CASE_21:
  case CASE_26:
    uVar3 = 1;
    break;
  case CASE_F:
  case CASE_12:
  case CASE_16:
  case CASE_17:
  case CASE_27:
    uVar3 = 2;
    break;
  default:
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x281a,0,0,"%s",
                               "STAllPlayersC::GetBoatWeaponInfo unknown boat type");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  *param_2 = *(undefined4 *)(&DAT_007a8b18 + param_1 * 4);
  *param_3 = *(undefined4 *)(&DAT_007a8c58 + param_1 * 4);
  *param_4 = *(undefined4 *)(&DAT_007a8bb8 + param_1 * 4);
  return uVar3;
}

// 00445A40 STAllPlayersC::RegisterPGPair
#line 4 "decomp/ST.exe/functions/00445A40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterPGPair

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00445A40(STAllPlayersC *this,uint param_1,uint *param_2,uint *param_3)

{
  int iVar2;
  STGameObjC *pSVar3;
  DArrayTy *pDVar4;
  STBoatC *this_00;
  int iVar5;
  uint uVar6;
  STAllPlayersC *this_01;
  uint uVar7;
  bool bVar8;
  char objPtr;
  InternalExceptionFrame local_88;
  DArrayTy *local_44;
  DArrayTy *local_40;
  DArrayTy *local_3c;
  int local_38;
  STAllPlayersC *local_34;
  dword local_30;
  uint local_2c;
  DArrayTy *local_28;
  int *local_24;
  uint local_20;
  short local_1a;
  DArrayTy *local_18;
  DArrayTy *local_14;
  uint local_10;
  uint local_c;
  short local_8 [2];

  local_18 = nullptr;
  local_14 = nullptr;
  local_28 = nullptr;
  local_38 = 0;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_34 = this;
  iVar2 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_88.previous;
    if (local_28 != nullptr) {
      st::fn_006AE110(local_28);
    }
    if (local_18 != nullptr) {
      st::fn_006AE110(local_18);
    }
    if (local_14 != nullptr) {
      st::fn_006AE110(local_14);
    }
    if (iVar2 != -0x5001fff7) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x28a2,0,0,"%s",
                                 "STAllPlayersC::RegisterPGPair");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x28a3);
    }
    return;
  }
  if ((((param_2 == nullptr) || (param_3 == nullptr)) ||
      (uVar6 = param_2[3], local_10 = uVar6, uVar6 == 0)) || (local_c = param_3[3], local_c == 0)) {
    uVar6 = local_10;
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2837);
  }
  st::fn_006AFE40((int *)&local_18,param_2);
  st::fn_006AFE40((int *)&local_14,param_3);
  uVar7 = 0;
  objPtr = (char)param_1;
  this_01 = local_34;
  if (0 < (int)uVar6) {
    do {
      st::fn_006ACC70(local_18,uVar7,local_8);
      this_01 = local_34;
      pSVar3 = st::fn_004028BA(local_34,objPtr,local_8[0],CASE_1);
      if ((pSVar3 == nullptr) || (iVar2 = pSVar3->vfunc_F8(), iVar2 == 0)
         ) {
        st::fn_006B0C70(local_18,uVar7);
        uVar6 = uVar6 - 1;
        uVar7 = uVar7 - 1;
        local_10 = uVar6;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar6);
  }
  if (uVar6 == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2842);
  }
  uVar6 = 0;
  if (0 < (int)local_c) {
    do {
      st::fn_006ACC70(local_14,uVar6,local_8);
      pSVar3 = st::fn_004028BA(this_01,objPtr,local_8[0],CASE_1);
      if (((pSVar3 == nullptr) || (iVar2 = st::fn_00404E58(pSVar3), iVar2 == 0)) ||
         ((iVar2 = pSVar3->vfunc_F8(), iVar2 == 0 || (pSVar3->field_0030 == -1))))
      {
        st::fn_006B0C70(local_14,uVar6);
        local_c = local_c - 1;
        uVar6 = uVar6 - 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_c);
  }
  if (local_c == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x284d);
  }
  uVar6 = 0;
  pDVar4 = local_28;
  if (0 < (int)local_10) {
    do {
      st::fn_006ACC70(local_18,uVar6,local_8);
      uVar7 = 0;
      if (0 < (int)local_c) {
        do {
          st::fn_006ACC70(local_14,uVar7,&local_1a);
          if (local_8[0] == local_1a) {
            if (pDVar4 == nullptr) {
              pDVar4 = st::fn_006AE290(nullptr,1,2,1);
              local_28 = pDVar4;
            }
            st::fn_006AE1C0(pDVar4,local_8);
            st::fn_006B0C70(local_18,uVar6);
            local_10 = local_10 - 1;
            uVar6 = uVar6 - 1;
            st::fn_006B0C70(local_14,uVar7);
            local_c = local_c - 1;
            uVar7 = uVar7 - 1;
            if ((local_10 == 0) || (local_c == 0)) {
              local_38 = 1;
              break;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)local_c);
      }
      this_01 = local_34;
    } while ((local_38 != 1) && (uVar6 = uVar6 + 1, (int)uVar6 < (int)local_10));
  }
  if (pDVar4 == nullptr) goto LAB_00445e36;
  if ((local_10 == 0) && (local_c == 0)) {
    local_30 = pDVar4->count;
    local_20 = 0;
    if (0 < (int)local_30) {
      local_24 = &g_packedRecords_A62x8[objPtr].field1976_0x9f6;
      do {
        st::fn_006ACC70(pDVar4,local_20,local_8);
        this_00 = (STBoatC *)st::fn_004028BA(this_01,objPtr,local_8[0],CASE_1);
        local_2c = g_playSystem_00802A38->field_00E4;
        st::fn_00402126(this_00,CASE_21,&local_2c);
        if ((*local_24 != 0) && (iVar2 = st::fn_004027C5(this_01,objPtr,local_8[0],1), iVar2 == -1)
           ) {
          st::fn_004027C5(this_01,objPtr,local_8[0],0);
        }
        local_20 = local_20 + 1;
      } while ((int)local_20 < (int)local_30);
    }
    if (g_packedRecords_A62x8[objPtr].field1976_0x9f6 != 0) {
      st::fn_004017FD(this_01,objPtr);
      st::fn_0040100A(this_01,objPtr);
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x2872);
  }
  if (local_10 == 0) {
    bVar8 = local_c == 0;
    if (!bVar8) {
      st::fn_006AFE40((int *)&local_18,&pDVar4->flags);
      goto LAB_00445db2;
    }
  }
  else {
LAB_00445db2:
    bVar8 = local_c == 0;
  }
  if (bVar8) {
    if (local_10 != 0) {
      st::fn_006AFE40((int *)&local_14,&pDVar4->flags);
      goto LAB_00445dca;
    }
  }
  else {
LAB_00445dca:
    if ((local_10 != 0) && (local_c != 0)) {
      local_30 = pDVar4->count;
      local_20 = 0;
      if (0 < (int)local_30) {
        do {
          st::fn_006ACC70(pDVar4,local_20,local_8);
          st::fn_006AE1C0(local_14,local_8);
          local_20 = local_20 + 1;
        } while ((int)local_20 < (int)local_30);
      }
    }
  }
  local_10 = local_18->count;
  local_c = local_14->count;
  st::fn_006AE110(pDVar4);
  local_28 = nullptr;
LAB_00445e36:
  uVar6 = 0;
  if (0 < (int)local_c) {
    local_24 = &g_packedRecords_A62x8[objPtr].field1976_0x9f6;
    do {
      if (*local_24 == 0) break;
      st::fn_006ACC70(local_14,uVar6,local_8);
      iVar2 = st::fn_004027C5(this_01,objPtr,local_8[0],1);
      if (iVar2 == -1) {
        st::fn_004027C5(this_01,objPtr,local_8[0],0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_c);
  }
  uVar6 = 0;
  if (0 < (int)local_10) {
    local_24 = &g_packedRecords_A62x8[objPtr].field1976_0x9f6;
    do {
      if (*local_24 == 0) break;
      st::fn_006ACC70(local_18,uVar6,local_8);
      st::fn_004027C5(this_01,objPtr,local_8[0],1);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)local_10);
  }
  local_44 = st::fn_006AE290(nullptr,local_10,2,1);
  st::fn_006AFE40((int *)&local_44,&local_18->flags);
  local_40 = st::fn_006AE290(nullptr,local_c,2,1);
  st::fn_006AFE40((int *)&local_40,&local_14->flags);
  local_3c = st::fn_006AE290(nullptr,1,4,1);
  if (g_packedRecords_A62x8[objPtr].field1976_0x9f6 == 0) {
    pDVar4 = st::fn_006AE290(nullptr,1,0xc,1);
    g_packedRecords_A62x8[objPtr].field1976_0x9f6 = pDVar4;
  }
  st::fn_006AE1C0
            ((DArrayTy *)g_packedRecords_A62x8[objPtr].field1976_0x9f6,&local_44);
  st::fn_004017FD(this_01,objPtr);
  st::fn_0040100A(this_01,objPtr);
  if (local_18 != nullptr) {
    st::fn_006AE110(local_18);
  }
  if (local_14 != nullptr) {
    st::fn_006AE110(local_14);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

// 004461B0 STAllPlayersC::_DeleteGuardBoat
#line 4 "decomp/ST.exe/functions/004461B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_DeleteGuardBoat
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=004461B6 MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
st::fn_004461B0(STAllPlayersC *this,char param_1,short param_2,int param_3)

{
  dword dVar1;
  int exceptionCode;
  STBoatC *pSVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  DArrayTy *array;
  uint uVar8;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  STAllPlayersC *local_1c;
  undefined4 local_18;
  uint local_14;
  DArrayTy *local_10;
  short local_c [2];
  dword local_8;

  local_18 = 0xffffffff;
  local_6c.previous = g_currentExceptionFrame;
  local_10 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;
  exceptionCode = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  array = local_10;
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_6c.previous;
    if (exceptionCode != -0x5001fff7) {
      iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2906,0,0,"%s",
                                 "STAllPlayersC::_DeleteGuardBoat");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(exceptionCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2907);
    }
    return local_18;
  }
  if (local_10 == nullptr) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x28ba);
  }
  local_8 = array->count;
  if (param_3 == 1) {
    uVar6 = 0;
    if (0 < (int)local_8) {
      do {
        st::fn_006ACC70(array,uVar6,&local_28);
        uVar7 = 0;
        uVar8 = local_24->count;
        if (0 < (int)uVar8) {
          do {
            st::fn_006ACC70(local_24,uVar7,local_c);
            if (local_c[0] == param_2) {
              st::fn_006B0C70(local_24,uVar7);
              pSVar3 = (STBoatC *)st::fn_004028BA(local_1c,param_1,local_c[0],CASE_1);
              local_14 = g_playSystem_00802A38->field_00E4;
              st::fn_00402126(pSVar3,CASE_21,&local_14);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            st::fn_006AE110(local_28);
            st::fn_006AE110(local_24);
            st::fn_006AE110(local_20);
            st::fn_006B0C70(local_10,uVar6);
            local_8 = local_8 - 1;
          }
          local_18 = 0;
          break;
        }
        uVar6 = uVar6 + 1;
        array = local_10;
      } while ((int)uVar6 < (int)local_8);
    }
  }
  else {
    uVar6 = 0;
    if (0 < (int)local_8) {
      do {
        st::fn_006ACC70(array,uVar6,&local_28);
        uVar7 = 0;
        uVar8 = local_28->count;
        if (0 < (int)uVar8) {
          do {
            st::fn_006ACC70(local_28,uVar7,local_c);
            if (local_c[0] == param_2) {
              st::fn_006B0C70(local_28,uVar7);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            uVar8 = 0;
            dVar1 = local_24->count;
            if (0 < (int)dVar1) {
              do {
                st::fn_006ACC70(local_24,uVar8,local_c);
                pSVar3 = (STBoatC *)st::fn_004028BA(local_1c,param_1,local_c[0],CASE_1);
                local_14 = g_playSystem_00802A38->field_00E4;
                st::fn_00402126(pSVar3,CASE_21,&local_14);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)dVar1);
            }
            st::fn_006AE110(local_28);
            st::fn_006AE110(local_24);
            st::fn_006AE110(local_20);
            st::fn_006B0C70(local_10,uVar6);
            local_8 = local_8 - 1;
            uVar6 = uVar6 - 1;
          }
          local_18 = 0;
        }
        uVar6 = uVar6 + 1;
        array = local_10;
      } while ((int)uVar6 < (int)local_8);
    }
  }
  if (local_8 == 0) {
    st::fn_00402095(local_1c,param_1);
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_18;
}

// 00446520 STAllPlayersC::DeleteGuardBoat
#line 4 "decomp/ST.exe/functions/00446520/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeleteGuardBoat

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 00446520 @ 0045A2BF | 0044EE30 -> 00446520 @ 0045A2D4 | 0044EE30 ->
   00446520 @ 0045AAC8 | 0044EE30 -> 00446520 @ 0045AADD | 0045EF00 -> 00446520 @ 0045EF2A |
   00490E00 -> 00446520 @ 00490E46
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00446526 MOVSX EAX,byte ptr [EBP + 0x8] */

void __thiscall
st::fn_00446520(STAllPlayersC *this,char param_1,short param_2,int param_3)

{
  dword dVar1;
  STAllPlayersC *this_00;
  int iVar3;
  STBoatC *pSVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  DArrayTy *array;
  uint uVar8;
  InternalExceptionFrame local_68;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  dword local_c;
  short local_8 [2];

  local_68.previous = g_currentExceptionFrame;
  local_18 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  array = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x296d,0,0,"%s",
                                 "STAllPlayersC::DeleteGuardBoat");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x296e);
    }
    return;
  }
  if (local_18 == nullptr) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x291d);
  }
  local_c = array->count;
  if (param_3 == 1) {
    uVar6 = 0;
    if (0 < (int)local_c) {
      do {
        st::fn_006ACC70(array,uVar6,&local_24);
        uVar7 = 0;
        uVar8 = local_20->count;
        if (0 < (int)uVar8) {
          do {
            st::fn_006ACC70(local_20,uVar7,local_8);
            if (local_8[0] == param_2) {
              st::fn_006B0C70(local_20,uVar7);
              pSVar4 = (STBoatC *)st::fn_004028BA(local_14,param_1,local_8[0],CASE_1);
              local_10 = g_playSystem_00802A38->field_00E4;
              st::fn_00402126(pSVar4,CASE_21,&local_10);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            st::fn_006AE110(local_24);
            st::fn_006AE110(local_20);
            st::fn_006AE110(local_1c);
            st::fn_006B0C70(local_18,uVar6);
            local_c = local_c - 1;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        array = local_18;
      } while ((int)uVar6 < (int)local_c);
    }
    if (local_c == 0) {
      st::fn_00402095(local_14,param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < (int)local_c) {
      do {
        st::fn_006ACC70(array,uVar6,&local_24);
        uVar7 = 0;
        uVar8 = local_24->count;
        if (0 < (int)uVar8) {
          do {
            st::fn_006ACC70(local_24,uVar7,local_8);
            if (local_8[0] == param_2) {
              st::fn_006B0C70(local_24,uVar7);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if ((uVar7 != uVar8) && (uVar8 == 1)) {
          uVar8 = 0;
          dVar1 = local_20->count;
          if (0 < (int)dVar1) {
            do {
              st::fn_006ACC70(local_20,uVar8,local_8);
              pSVar4 = (STBoatC *)st::fn_004028BA(local_14,param_1,local_8[0],CASE_1);
              if (pSVar4 == nullptr) {
                iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2955,0,0,
                                           "%s","STAllPlayersC::DeleteGuardBoat NULL"
                                          );
                if (iVar3 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
              }
              else {
                local_10 = g_playSystem_00802A38->field_00E4;
                st::fn_00402126(pSVar4,CASE_21,&local_10);
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)dVar1);
          }
          st::fn_006AE110(local_24);
          st::fn_006AE110(local_20);
          st::fn_006AE110(local_1c);
          st::fn_006B0C70(local_18,uVar6);
          local_c = local_c - 1;
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
        array = local_18;
      } while ((int)uVar6 < (int)local_c);
    }
    if (local_c == 0) {
      st::fn_00402095(local_14,param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  this_00 = local_14;
  st::fn_004017FD(local_14,param_1);
  st::fn_0040100A(this_00,param_1);
  g_currentExceptionFrame = local_68.previous;
  return;
}

// 00446910 STAllPlayersC::DeletePGPairs
#line 4 "decomp/ST.exe/functions/00446910/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeletePGPairs */

void __thiscall st::fn_00446910(STAllPlayersC *this,char param_1)

{
  dword dVar1;
  DArrayTy *array;
  int exceptionCode;
  int iVar3;
  uint index;
  InternalExceptionFrame local_58;
  DArrayTy *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  local_8 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  g_currentExceptionFrame = &local_58;
  exceptionCode = st::fn_0072D7F0(local_58.jumpBuffer,0);
  array = local_8;
  if (exceptionCode == 0) {
    if (local_8 != nullptr) {
      dVar1 = local_8->count;
      if ((dVar1 != 0) && (index = 0, 0 < (int)dVar1)) {
        do {
          st::fn_006ACC70(array,index,&local_14);
          st::fn_006AE110(local_14);
          st::fn_006AE110(local_10);
          st::fn_006AE110(local_c);
          index = index + 1;
        } while ((int)index < (int)dVar1);
      }
      st::fn_006AE110(array);
      g_packedRecords_A62x8[param_1].field1976_0x9f6 = 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  if (exceptionCode != -0x5001fff7) {
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x29b3,0,0,"%s",
                               "STAllPlayersC::DeletePGPairs");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(exceptionCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x29b4);
  }
  return;
}

// 00446AA0 STAllPlayersC::OptimizeGuardBoats
#line 4 "decomp/ST.exe/functions/00446AA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::OptimizeGuardBoats

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00446AA0(STAllPlayersC *this,char param_1)

{
  dword dVar1;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  uint index;
  DArrayTy *array;
  uint index_00;
  uint uVar6;
  dword index_01;
  InternalExceptionFrame local_90;
  DArrayTy *local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  DArrayTy *local_40;
  DArrayTy *local_3c;
  DArrayTy *local_38;
  int local_30;
  dword local_2c;
  short local_28;
  DArrayTy *local_26;
  undefined4 local_22;
  DArrayTy *local_1c;
  uint local_18;
  short local_12;
  uint local_10;
  uint local_c;
  short local_6;

  local_1c = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  local_40 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1977_0x9fa;
  if (local_1c != nullptr) {
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar3 = st::fn_0072D7F0(local_90.jumpBuffer,0);
    if (iVar3 == 0) {
      local_18 = local_1c->count;
      array = local_1c;
      if (1 < local_18) {
        iVar3 = local_18 - 1;
        local_c = 0;
        if (0 < iVar3) {
          do {
            st::fn_006ACC70(array,local_c,&local_3c);
            local_10 = local_c + 1;
            if ((int)local_10 <= iVar3) {
              do {
                local_30 = iVar3;
                st::fn_006ACC70(array,local_10,&local_4c);
                uVar6 = local_3c->count;
                if (uVar6 == local_4c->count) {
                  index = 0;
                  local_2c = 1;
                  if (0 < (int)uVar6) {
                    do {
                      st::fn_006ACC70(local_3c,index,&local_6);
                      index_00 = 0;
                      do {
                        st::fn_006ACC70(local_4c,index_00,&local_12);
                        if (local_6 == local_12) break;
                        index_00 = index_00 + 1;
                      } while ((int)index_00 < (int)uVar6);
                      if (index_00 == uVar6) {
                        local_2c = 0;
                        break;
                      }
                      index = index + 1;
                    } while ((int)index < (int)uVar6);
                  }
                  if (local_2c == 1) {
                    uVar6 = 0;
                    if (0 < (int)local_48->count) {
                      do {
                        st::fn_006ACC70(local_48,uVar6,&local_12);
                        st::fn_006AE1C0(local_38,&local_12);
                        uVar6 = uVar6 + 1;
                      } while ((int)uVar6 < (int)local_48->count);
                    }
                    st::fn_006AE110(local_4c);
                    st::fn_006AE110(local_48);
                    if (local_44 != nullptr) {
                      st::fn_006AE110(local_44);
                    }
                    st::fn_006B0C70(local_1c,local_10);
                    local_18 = local_18 - 1;
                    local_30 = local_30 + -1;
                    local_10 = local_10 - 1;
                  }
                }
                local_10 = local_10 + 1;
                array = local_1c;
                iVar3 = local_30;
              } while ((int)local_10 <= local_30);
            }
            local_c = local_c + 1;
            iVar3 = local_18 - 1;
          } while ((int)local_c < iVar3);
        }
      }
      pDVar4 = local_40;
      if (local_40 != nullptr) {
        dVar1 = local_40->count;
        local_c = 0;
        if (0 < (int)dVar1) {
          do {
            st::fn_006ACC70(pDVar4,local_c,&local_28);
            if (local_26 != nullptr) {
              st::fn_006AE110(local_26);
            }
            local_c = local_c + 1;
          } while ((int)local_c < (int)dVar1);
        }
        st::fn_006AE110(pDVar4);
        local_40 = nullptr;
      }
      st::fn_006ACC70(array,0,&local_3c);
      uVar6 = local_3c->count;
      pDVar4 = st::fn_006AE290(nullptr,uVar6,10,1);
      g_packedRecords_A62x8[param_1].field1977_0x9fa = pDVar4;
      local_10 = 0;
      local_c = 0;
      local_40 = pDVar4;
      if (0 < (int)uVar6) {
        do {
          st::fn_006ACC70(local_3c,local_c,&local_6);
          local_28 = local_6;
          local_26 = st::fn_006AE290(nullptr,1,4,1);
          local_22 = 0;
          st::fn_006AE1C0(local_26,&local_10);
          st::fn_006AE1C0(pDVar4,&local_28);
          local_c = local_c + 1;
        } while ((int)local_c < (int)uVar6);
      }
      if ((1 < local_18) && (local_c = 1, 1 < (int)local_18)) {
        do {
          st::fn_006ACC70(array,local_c,&local_3c);
          local_2c = local_3c->count;
          local_10 = 0;
          if (0 < (int)local_2c) {
            do {
              st::fn_006ACC70(local_3c,local_10,&local_6);
              dVar1 = pDVar4->count;
              index_01 = 0;
              if (0 < (int)dVar1) {
                do {
                  st::fn_006ACC70(pDVar4,index_01,&local_28);
                  if (local_28 == local_6) {
                    st::fn_006AE1C0(local_26,&local_c);
                    break;
                  }
                  index_01 = index_01 + 1;
                } while ((int)index_01 < (int)dVar1);
              }
              if (index_01 == dVar1) {
                local_28 = local_6;
                local_26 = st::fn_006AE290(nullptr,1,4,1);
                local_22 = 0;
                st::fn_006AE1C0(local_26,&local_c);
                st::fn_006AE1C0(pDVar4,&local_28);
              }
              local_10 = local_10 + 1;
            } while ((int)local_10 < (int)local_2c);
          }
          local_c = local_c + 1;
          array = local_1c;
        } while ((int)local_c < (int)local_18);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2a25,0,0,"%s",
                                 "STAllPlayersC::OptimizeGuardBoats");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2a26);
    }
  }
  return;
}

// 00446F80 STAllPlayersC::DistributeGuardBoats
#line 4 "decomp/ST.exe/functions/00446F80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DistributeGuardBoats
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00446F8D MOVSX ECX,byte ptr [EBP + 0x8] | 0044704C MOVSX
   EAX,byte ptr [EBP + 0x8] */

void __thiscall st::fn_00446F80(STAllPlayersC *this,char param_1)

{
  DArrayTy *pDVar2;
  DArrayTy *pDVar3;
  int iVar4;
  int iVar5;
  DArrayTy *pDVar6;
  uint uVar7;
  dword dVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  DArrayTy *pDVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_e4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  DArrayTy *local_88;
  DArrayTy *local_84;
  DArrayTy *local_80;
  DArrayTy *local_7c;
  int local_78;
  DArrayTy *local_74;
  DArrayTy *local_70;
  STAllPlayersC *local_6c;
  undefined2 local_66;
  DArrayTy *local_64;
  DArrayTy *local_60;
  int local_5c;
  uint local_58;
  ushort local_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  int local_4e;
  DArrayTy *local_48;
  int local_44;
  DArrayTy *local_40;
  uint local_3c;
  short local_38;
  short local_36;
  uint local_34;
  DArrayTy *local_30;
  uint local_2c;
  STFishC *local_28;
  ushort local_24;
  ushort uStack_22;
  DArrayTy *local_1c;
  short local_16;
  DArrayTy *local_14;
  short local_10;
  short local_e;
  DArrayTy *local_c;
  uint local_8;

  iVar5 = (int)param_1;
  local_7c = (DArrayTy *)g_packedRecords_A62x8[iVar5].field1976_0x9f6;
  local_48 = (DArrayTy *)g_packedRecords_A62x8[iVar5].field1978_0x9fe;
  local_60 = (DArrayTy *)g_packedRecords_A62x8[iVar5].field1977_0x9fa;
  local_64 = (DArrayTy *)g_packedRecords_A62x8[iVar5].field1979_0xa02;
  if (local_60 != nullptr) {
    local_e4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_e4;
    local_6c = this;
    iVar5 = st::fn_0072D7F0(local_e4.jumpBuffer,0);
    pDVar3 = local_48;
    if (iVar5 == 0) {
      if (local_48 != nullptr) {
        dVar8 = local_48->count;
        local_8 = 0;
        if (0 < (int)dVar8) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_c);
            st::fn_006AE110(local_c);
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar8);
        }
        st::fn_006AE110(pDVar3);
      }
      local_48 = st::fn_006AE290(nullptr,1,4,1);
      local_a0 = (int)param_1;
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      iVar5 = local_a0 * 0xa62;
      g_packedRecords_A62x8[local_a0].field1978_0x9fe = local_48;
      pDVar3 = (DArrayTy *)local_60->count;
      local_5c = iVar5;
      local_30 = pDVar3;
      local_1c = pDVar3;
      pDVar6 = local_60;
joined_r0x0044707d:
      if (local_1c != nullptr) {
        local_8 = 0;
        if (0 < (int)pDVar3) {
          do {
            st::fn_006ACC70(pDVar6,local_8,&local_54);
            if (local_4e != 1) {
              local_4e = 1;
              st::fn_006AE140(pDVar6,local_8,&local_54);
              local_c = st::fn_006AE290(nullptr,1,4,1);
              st::fn_006AE1C0(local_c,&local_8);
              local_58 = st::fn_006AE1C0(local_48,&local_c);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_40 = *(DArrayTy **)(CONCAT22(uStack_50,uStack_52) + 0xc);
              local_14 = nullptr;
              if (0 < (int)local_40) goto LAB_00447106;
              goto LAB_004471ad;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)pDVar3);
        }
        goto LAB_004471bd;
      }
LAB_0044738a:
      pDVar3 = local_64;
      if (local_64 != nullptr) {
        dVar8 = local_64->count;
        if ((dVar8 != 0) && (local_8 = 0, 0 < (int)dVar8)) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              st::fn_006AE110(local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar8);
        }
        st::fn_006AE110(pDVar3);
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + iVar5) = 0;
      }
      uVar7 = local_48->count;
      local_3c = uVar7;
      pDVar3 = st::fn_006AE290(nullptr,uVar7,4,1);
      local_8 = 0;
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + iVar5) = pDVar3;
      local_64 = pDVar3;
      if (0 < (int)uVar7) {
        do {
          local_c = st::fn_006AE290(nullptr,0,2,1);
          st::fn_006AE1C0(pDVar3,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar7);
      }
      local_40 = (DArrayTy *)local_7c->count;
      local_8 = 0;
      if (0 < (int)local_40) {
        do {
          st::fn_006ACC70(local_7c,local_8,&local_78);
          uVar7 = 0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_30 = *(DArrayTy **)(local_78 + 0xc);
          dVar8 = local_74->count;
          local_1c = (DArrayTy *)local_70->count;
          local_14 = nullptr;
          if (0 < (int)local_1c) {
            do {
              st::fn_006ACC70(local_70,(uint)local_14,&local_24);
              local_2c = (uStack_22 * dVar8 * 10) / (uint)local_30;
              local_30 = (DArrayTy *)((int)local_30 - (uint)uStack_22);
              if (7 < (int)local_2c) {
                if ((local_2c == 8) || (local_2c == 9)) {
                  local_2c = 10;
                }
                local_2c = (int)local_2c / 10;
                dVar8 = dVar8 - local_2c;
                st::fn_006ACC70(local_64,(uint)local_24,&local_c);
                uVar10 = uVar7;
                if ((int)uVar7 < (int)(uVar7 + local_2c)) {
                  do {
                    iVar5 = st::fn_006ACC70(local_74,uVar10,&local_34);
                    if (iVar5 == -4) break;
                    st::fn_006AE1C0(local_c,&local_34);
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)(uVar7 + local_2c));
                }
                uVar7 = uVar7 + local_2c;
              }
              local_14 = (DArrayTy *)((int)&local_14->flags + 1);
            } while ((int)local_14 < (int)local_1c);
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_40);
      }
      uVar7 = local_3c;
      pDVar3 = st::fn_006AE290(nullptr,local_3c,4,1);
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1980_0xa06 + local_5c) = pDVar3;
      local_8 = 0;
      local_40 = pDVar3;
      if (0 < (int)uVar7) {
        do {
          local_c = st::fn_006AE290(nullptr,0,0x18,1);
          st::fn_006AE1C0(pDVar3,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar7);
      }
      local_8 = 0;
      if (0 < (int)uVar7) {
        do {
          st::fn_006ACC70(local_64,local_8,&local_c);
          if (local_c->count != 0) {
            st::fn_006ACC70(local_48,local_8,&local_c);
            st::fn_006ACC70(local_c,0,&local_34);
            st::fn_006ACC70(local_60,local_34 & 0xffff,&local_54);
            local_28 = (STFishC *)st::fn_004028BA(local_6c,param_1,local_54,CASE_1);
            if ((STGameObjC *)local_28 != nullptr) {
              st::fn_004018C5(local_28,&local_e,&local_10,&local_16);
              st::fn_006ACC70(local_40,local_8,&local_c);
              pDVar3 = (DArrayTy *)
                       st::fn_00405C77(param_1,nullptr,(uint *)(int)local_e,(int)local_10,
                                          (int)local_16,(int *)0x7,7,4,0);
              local_30 = pDVar3;
              if (pDVar3 != nullptr) {
                pDVar6 = (DArrayTy *)pDVar3->count;
                uVar7 = 0;
                local_1c = pDVar6;
                local_14 = pDVar6;
                if (0 < (int)pDVar6) {
                  do {
                    st::fn_006ACC70(pDVar3,uVar7,&local_28);
                    iVar5 = (*local_28->vtable->vfunc_F8)();
                    if (((iVar5 == 0) ||
                        (iVar5 = local_28->vfunc_F0(), iVar5 == 0)) ||
                       (iVar5 = (*local_28->vtable->vfunc_F4)(local_a0), iVar5 == 0)) {
                      st::fn_006B0C70(pDVar3,uVar7);
                      uVar7 = uVar7 - 1;
                      local_14 = (DArrayTy *)((int)&local_14[-1].data + 3);
                      pDVar6 = (DArrayTy *)((int)&pDVar6[-1].data + 3);
                    }
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)local_14);
                }
                local_1c = pDVar6;
                pDVar6 = local_14;
                if (pDVar3->count != 0) {
                  pDVar3 = st::fn_006AE290(nullptr,(uint)local_14,4,1);
                  st::fn_006AE140(pDVar3,(uint)((int)&pDVar6[-1].data + 3),&local_44);
                  puVar11 = pDVar3->data;
                  for (; pDVar12 = local_1c, pDVar2 = local_14, pDVar6 != nullptr;
                      pDVar6 = (DArrayTy *)((int)&pDVar6[-1].data + 3)) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                  while (local_1c = pDVar12, local_14 = pDVar2, local_1c != nullptr) {
                    uVar7 = 0;
                    if (0 < (int)pDVar2) {
                      do {
                        st::fn_006ACC70(pDVar3,uVar7,&local_44);
                        if (local_44 != 1) {
                          local_44 = 1;
                          st::fn_006AE140(pDVar3,uVar7,&local_44);
                          st::fn_006ACC70(local_30,uVar7,&local_28);
                          st::fn_004018C5(local_28,&local_e,&local_10,&local_16);
                          local_9c = (uint)local_e;
                          local_98 = (int)local_10;
                          local_94 = (int)local_16;
                          local_90 = 1;
                          local_8c = *(int *)&local_28->field_0x219;
                          local_88 = nullptr;
                          local_58 = st::fn_006AE1C0(local_c,&local_9c);
                          local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
                          break;
                        }
                        uVar7 = uVar7 + 1;
                      } while ((int)uVar7 < (int)pDVar2);
                    }
                    if (local_1c == nullptr) break;
                    uVar7 = uVar7 + 1;
                    pDVar12 = local_1c;
                    pDVar2 = local_14;
                    if ((int)uVar7 < (int)local_14) {
                      do {
                        st::fn_006ACC70(pDVar3,uVar7,&local_44);
                        if (local_44 != 1) {
                          st::fn_006ACC70(local_30,uVar7,&local_28);
                          st::fn_004018C5(local_28,&local_38,&local_36,&local_66);
                          uVar10 = (int)local_38 - (int)local_e >> 0x1f;
                          if (((int)(((int)local_38 - (int)local_e ^ uVar10) - uVar10) < 3) &&
                             (uVar10 = (int)local_36 - (int)local_10 >> 0x1f,
                             (int)(((int)local_36 - (int)local_10 ^ uVar10) - uVar10) < 3)) {
                            local_44 = 1;
                            st::fn_006AE140(pDVar3,uVar7,&local_44);
                            local_90 = local_90 + 1;
                            local_8c = local_8c + *(int *)&local_28->field_0x219;
                            st::fn_006AE140(local_c,local_58,&local_9c);
                            pDVar12 = (DArrayTy *)((int)&pDVar12[-1].data + 3);
                          }
                        }
                        uVar7 = uVar7 + 1;
                        pDVar2 = local_14;
                      } while ((int)uVar7 < (int)local_14);
                    }
                  }
                  st::fn_006AE110(local_30);
                }
                st::fn_006AE110(pDVar3);
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      local_8 = 0;
      if (0 < (int)local_3c) {
        do {
          st::fn_006ACC70(local_64,local_8,&local_84);
          local_30 = (DArrayTy *)local_84->count;
          if (local_30 != nullptr) {
            st::fn_006ACC70(local_40,local_8,&local_c);
            local_1c = (DArrayTy *)local_c->count;
            if (local_1c == nullptr) {
              st::fn_006ACC70(local_48,local_8,&local_80);
              st::fn_006ACC70(local_80,0,&local_34);
              st::fn_006ACC70(local_60,local_34 & 0xffff,&local_54);
              local_28 = (STFishC *)st::fn_004028BA(local_6c,param_1,local_54,CASE_1);
              if ((STGameObjC *)local_28 != nullptr) {
                st::fn_004018C5(local_28,&local_e,&local_10,&local_16);
                st::fn_00401C53
                          (local_6c,_param_1,(int)local_e,(int)local_10,local_16,(int)local_e,
                           (int)local_10,(int)local_16,local_84);
              }
            }
            else {
              uVar7 = 0;
              uVar10 = 0;
              if (0 < (int)local_1c) {
                do {
                  st::fn_006ACC70(local_c,uVar10,&local_9c);
                  uVar7 = uVar7 + local_8c;
                  uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)local_1c);
              }
              st::fn_006ACC70(local_48,local_8,&local_80);
              st::fn_006ACC70(local_80,0,&local_34);
              st::fn_006ACC70(local_60,local_34 & 0xffff,&local_54);
              local_28 = (STFishC *)st::fn_004028BA(local_6c,param_1,local_54,CASE_1);
              if ((STGameObjC *)local_28 != nullptr) {
                st::fn_004018C5(local_28,&local_e,&local_10,&local_16);
                uVar10 = 0;
                local_14 = nullptr;
                if (0 < (int)local_1c) {
                  do {
                    if (uVar7 != 0) {
                      st::fn_006ACC70(local_c,(uint)local_14,&local_9c);
                      local_2c = (uint)(local_8c * (int)local_30 * 10) / uVar7;
                      uVar7 = uVar7 - local_8c;
                      if (7 < (int)local_2c) {
                        if ((local_2c == 8) || (local_2c == 9)) {
                          local_2c = 10;
                        }
                        local_2c = (int)local_2c / 10;
                        local_30 = (DArrayTy *)((int)local_30 - local_2c);
                        if (local_88 == nullptr) {
                          local_88 = st::fn_006AE290(nullptr,1,2,1);
                        }
                        uVar9 = uVar10;
                        if ((int)uVar10 < (int)(uVar10 + local_2c)) {
                          do {
                            iVar5 = st::fn_006ACC70(local_84,uVar9,&local_34);
                            if (iVar5 == -4) break;
                            st::fn_006AE1C0(local_88,&local_34);
                            uVar9 = uVar9 + 1;
                          } while ((int)uVar9 < (int)(uVar10 + local_2c));
                        }
                        uVar10 = uVar10 + local_2c;
                        if ((local_88 != nullptr) && (local_88->count != 0)) {
                          st::fn_00401C53
                                    (local_6c,_param_1,(int)local_e,(int)local_10,local_16,local_9c,
                                     local_98,local_94,local_88);
                          st::fn_006AE110(local_88);
                          local_88 = nullptr;
                        }
                      }
                    }
                    local_14 = (DArrayTy *)((int)&local_14->flags + 1);
                  } while ((int)local_14 < (int)local_1c);
                }
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      pDVar3 = local_7c;
      *(uint *)((int)&g_packedRecords_A62x8[0].field1981_0xa0a + local_5c) =
           g_playSystem_00802A38->field_00E4;
      if (local_7c != nullptr) {
        dVar8 = local_7c->count;
        local_8 = 0;
        if (0 < (int)dVar8) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_78);
            if (local_70 != nullptr) {
              st::fn_006AE110(local_70);
              local_70 = st::fn_006AE290(nullptr,1,4,1);
              st::fn_006AE140(pDVar3,local_8,&local_78);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar8);
        }
      }
      pDVar3 = local_60;
      if (local_60 != nullptr) {
        dVar8 = local_60->count;
        local_8 = 0;
        if (0 < (int)dVar8) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_54);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((DArrayTy *)CONCAT22(uStack_50,uStack_52) != nullptr) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              st::fn_006AE110((DArrayTy *)CONCAT22(uStack_50,uStack_52));
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar8);
        }
        st::fn_006AE110(pDVar3);
        local_60 = nullptr;
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1977_0x9fa + local_5c) = 0;
      }
      uVar7 = local_3c;
      pDVar3 = local_48;
      if (local_48 != nullptr) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              st::fn_006AE110(local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar7);
        }
        st::fn_006AE110(pDVar3);
        local_48 = nullptr;
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1978_0x9fe + local_5c) = 0;
      }
      uVar7 = local_3c;
      pDVar3 = local_64;
      if (local_64 != nullptr) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              st::fn_006AE110(local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar7);
        }
        st::fn_006AE110(pDVar3);
        local_64 = nullptr;
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + local_5c) = 0;
      }
      if (local_40 != nullptr) {
        local_8 = 0;
        pDVar3 = local_40;
        if (0 < (int)local_3c) {
          do {
            st::fn_006ACC70(pDVar3,local_8,&local_c);
            if (local_c != nullptr) {
              dVar8 = local_c->count;
              if ((dVar8 != 0) && (uVar7 = 0, 0 < (int)dVar8)) {
                do {
                  st::fn_006ACC70(local_c,uVar7,&local_9c);
                  if (local_88 != nullptr) {
                    st::fn_006AE110(local_88);
                  }
                  uVar7 = uVar7 + 1;
                } while ((int)uVar7 < (int)dVar8);
              }
              st::fn_006AE110(local_c);
              pDVar3 = local_40;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)local_3c);
        }
        st::fn_006AE110(pDVar3);
        *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1980_0xa06 + local_5c) = 0;
      }
      g_currentExceptionFrame = local_e4.previous;
      return;
    }
    g_currentExceptionFrame = local_e4.previous;
    if (iVar5 != -0x5001fff7) {
      iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2b90,0,0,"%s",
                                 "STAllPlayersC::DistributeGuardBoats");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2b91);
    }
  }
  return;
LAB_00447106:
  do {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006ACC70((DArrayTy *)CONCAT22(uStack_50,uStack_52),(uint)local_14,&local_2c);
    st::fn_006ACC70(local_7c,local_2c,&local_78);
    uVar10 = local_58;
    uVar7 = local_70->count;
    if (uVar7 == 0) {
      local_24 = (ushort)local_58;
LAB_00447196:
      uStack_22 = 1;
      st::fn_006AE1C0(local_70,&local_24);
    }
    else {
      uVar9 = 0;
      if (0 < (int)uVar7) {
        do {
          st::fn_006ACC70(local_70,uVar9,&local_24);
          if (local_24 == uVar10) {
            uStack_22 = uStack_22 + 1;
            st::fn_006AE140(local_70,uVar9,&local_24);
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar7);
      }
      if (uVar9 == uVar7) {
        local_24 = (ushort)local_58;
        goto LAB_00447196;
      }
    }
    local_14 = (DArrayTy *)((int)&local_14->flags + 1);
  } while ((int)local_14 < (int)local_40);
LAB_004471ad:
  local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
  iVar5 = local_5c;
  pDVar6 = local_60;
  pDVar3 = local_30;
LAB_004471bd:
  if (local_1c == nullptr) goto LAB_0044738a;
  local_28 = (STFishC *)st::fn_004028BA(local_6c,param_1,local_54,CASE_1);
  if ((STGameObjC *)local_28 != nullptr) {
    st::fn_004018C5(local_28,&local_e,&local_10,&local_16);
    local_8 = local_8 + 1;
    if ((int)local_8 < (int)pDVar3) {
      do {
        st::fn_006ACC70(pDVar6,local_8,&local_54);
        if ((((local_4e != 1) &&
             (local_28 = (STFishC *)st::fn_004028BA(local_6c,param_1,local_54,CASE_1),
             (STGameObjC *)local_28 != nullptr)) &&
            (st::fn_004018C5(local_28,&local_38,&local_36,&local_66),
            uVar7 = (int)local_38 - (int)local_e >> 0x1f,
            (int)(((int)local_38 - (int)local_e ^ uVar7) - uVar7) < 3)) &&
           (uVar7 = (int)local_36 - (int)local_10 >> 0x1f,
           (int)(((int)local_36 - (int)local_10 ^ uVar7) - uVar7) < 3)) {
          local_4e = 1;
          st::fn_006AE140(pDVar6,local_8,&local_54);
          st::fn_006AE1C0(local_c,&local_8);
          local_14 = nullptr;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_40 = *(DArrayTy **)(CONCAT22(uStack_50,uStack_52) + 0xc);
          if (0 < (int)local_40) {
            do {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              st::fn_006ACC70((DArrayTy *)CONCAT22(uStack_50,uStack_52),(uint)local_14,&local_2c);
              st::fn_006ACC70(local_7c,local_2c,&local_78);
              uVar10 = local_58;
              uVar7 = local_70->count;
              if (uVar7 == 0) {
                local_24 = (ushort)local_58;
LAB_00447348:
                uStack_22 = 1;
                st::fn_006AE1C0(local_70,&local_24);
              }
              else {
                uVar9 = 0;
                if (0 < (int)uVar7) {
                  do {
                    st::fn_006ACC70(local_70,uVar9,&local_24);
                    if (local_24 == uVar10) {
                      uStack_22 = uStack_22 + 1;
                      st::fn_006AE140(local_70,uVar9,&local_24);
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar7);
                }
                if (uVar9 == uVar7) {
                  local_24 = (ushort)local_58;
                  goto LAB_00447348;
                }
              }
              local_14 = (DArrayTy *)((int)&local_14->flags + 1);
            } while ((int)local_14 < (int)local_40);
          }
          local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
          iVar5 = local_5c;
          pDVar6 = local_60;
          pDVar3 = local_30;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < (int)pDVar3);
    }
  }
  goto joined_r0x0044707d;
}

// 00448120 STAllPlayersC::PutOnPlaceGuardBoats
#line 4 "decomp/ST.exe/functions/00448120/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PutOnPlaceGuardBoats

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00446F80 -> 00448120 @ 004478E3; MOVSX at 004478C9 establishes signed source width 2 |
   00446F80 -> 00448120 @ 00447B1A; MOVSX at 00447B03 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00446F80 -> 00448120 @ 004478E3; MOVSX at 004478C9 establishes signed source width 2 */

void __thiscall
st::fn_00448120
          (STAllPlayersC *this,uint param_1,uint param_2,int param_3,short param_4,uint param_5,
          int param_6,int param_7,DArrayTy *param_8)

{
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  STBoatC *pSVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  dword dVar11;
  undefined2 *puVar12;
  short *psVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  char objPtr;
  int local_104 [8];
  int local_e4 [7];
  undefined4 local_c8;
  short sStack_c6;
  int local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  short local_6a [33];
  STAllPlayersC *local_28;
  STBoatC *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;

  uVar14 = param_5;
  local_c0 = 0;
  local_be = 2;
  local_bc = 0;
  local_ba = 0xffff;
  local_b8 = 2;
  local_b6 = 0;
  local_b4 = 1;
  local_b2 = 2;
  local_b0 = 0;
  local_ae = 0;
  local_ac = 3;
  local_aa = 0;
  local_a8 = 0;
  local_a6 = 1;
  local_a4 = 0;
  local_a2 = 0xffff;
  local_a0 = 3;
  local_9e = 0;
  local_9c = 1;
  local_9a = 3;
  local_98 = 0;
  local_96 = 0xffff;
  local_94 = 1;
  local_92 = 0;
  local_90 = 1;
  local_8e = 1;
  local_8c = 0;
  local_8a = 0;
  local_88 = 4;
  local_86 = 0;
  local_84 = 0xffff;
  local_82 = 4;
  local_80 = 0;
  local_7e = 1;
  local_7c = 4;
  local_7a = 0;
  local_78 = 0;
  local_76 = 0;
  local_74 = 0;
  local_72 = 0xffff;
  local_70 = 0;
  local_6e = 0;
  local_6c = 1;
  local_6a[0] = 0;
  local_6a[1] = 0;
  local_6a[3] = 0;
  local_6a[4] = 2;
  local_6a[5] = 0;
  local_6a[6] = 0;
  local_6a[7] = 2;
  local_6a[8] = 1;
  local_6a[9] = 0;
  local_6a[10] = 3;
  local_6a[0xb] = 0;
  local_6a[0xc] = 0;
  local_6a[0xd] = 1;
  local_6a[0xe] = 1;
  local_6a[0xf] = 0;
  local_6a[0x10] = 3;
  local_6a[0x11] = 1;
  local_6a[0x12] = 0;
  local_6a[0x13] = 1;
  local_6a[0x14] = 0;
  local_6a[0x15] = 0;
  local_6a[0x16] = 4;
  local_6a[0x17] = 0;
  local_6a[0x18] = 0;
  local_6a[0x19] = 0;
  local_6a[0x1a] = 1;
  local_6a[0x1b] = 0;
  local_6a[0x1c] = 4;
  local_6a[0x1d] = 1;
  local_6a[0x1e] = 0;
  local_6a[0x1f] = 0;
  local_6a[0x20] = 0;
  local_e4[0] = 0;
  local_e4[1] = 0xb4;
  local_e4[2] = 0x5a;
  local_e4[3] = 0x10e;
  local_e4[4] = 0x2d;
  local_e4[5] = 0xe1;
  local_e4[6] = 0x87;
  local_c8 = 0x13b;
  if ((param_8 != nullptr) && (dVar11 = param_8->count, dVar11 != 0)) {
    sVar3 = (short)param_2;
    sVar2 = (short)param_3;
    local_28 = this;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((param_2 == param_5) && (param_3 == param_6)) {
      iVar5 = -1;
    }
    else {
      sVar4 = (short)param_6;
      iVar5 = st::fn_006ACF0D((int)(short)(sVar3 * 0xc9 + 100),(int)(short)(sVar2 * 0xc9 + 100),0,
                           (int)(short)((short)param_5 * 0xc9 + 100),
                           (int)(short)(sVar4 * 0xc9 + 100),0);
      iVar5 = ((short)((sVar4 - sVar2) * 0xc9 + 100) * 1000) / iVar5;
      if (iVar5 < -0x39c) {
        iVar5 = 0x5a;
      }
      else if ((iVar5 < -0x39c) || (-0x180 < iVar5)) {
        if ((iVar5 < -0x17f) || (0x17e < iVar5)) {
          if ((iVar5 < 0x17f) || (0x39b < iVar5)) {
            iVar5 = 0x10e;
          }
          else {
            iVar5 = (((int)uVar14 <= (int)param_2) - 1 & 0x5a) + 0xe1;
          }
        }
        else {
          iVar5 = (((int)uVar14 <= (int)param_2) - 1 & 0xffffff4c) + 0xb4;
        }
      }
      else {
        iVar5 = (((int)uVar14 <= (int)param_2) - 1 & 0xffffffa6) + 0x87;
      }
    }
    local_18 = g_playSystem_00802A38->field_00E4;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14 = CONCAT22(sVar2,sVar3);
    local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(param_4));
    objPtr = (char)param_1;
    local_1c = dVar11;
    local_20 = dVar11;
    if (iVar5 < 0x88) {
      if (iVar5 == 0x87) {
        local_24 = (STBoatC *)((int)(dVar11 - 1) / 10);
        iVar5 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_20;
            if (9 < (int)local_20) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 10;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              psVar13 = local_6a;
              local_8 = local_1c;
              do {
                psVar13 = psVar13 + 3;
                st::fn_006ACC70(param_8,local_8,&param_5);
                pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar7 == nullptr) {
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2d64,0,0,
                                             "%s",
                                             "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_135");
                  if (iVar5 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sVar4 = (short)iVar5;
                if (psVar13[2] == 0) {
                  sVar10 = (sVar3 - sVar4) + -3;
                  sVar4 = ((sVar2 - sVar4) - *psVar13) + -2;
                }
                else {
                  sVar10 = (sVar3 - sVar4) + *psVar13 + -2;
                  sVar4 = (sVar2 - sVar4) + -3;
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(sVar10,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(psVar13[1],sVar4);
                iVar8 = st::fn_00402EDC((STGameObjC *)pSVar7);
                if (iVar8 == 5) {
                  st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  st::fn_00402126(pSVar7,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < (int)_param_4);
            }
            iVar5 = iVar5 + 1;
            local_1c = local_1c + 10;
            local_20 = local_20 - 10;
          } while (iVar5 <= (int)local_24);
          return;
        }
      }
      else {
        switch(iVar5) {
        case 0:
          local_20 = (int)(dVar11 - 1) / 0xf;
          local_24 = nullptr;
          if (-1 < (int)local_20) {
            local_8 = 0;
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = local_1c;
              if (0xe < (int)local_1c) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 0xf;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              if (0 < (int)_param_4) {
                puVar12 = &local_be;
                uVar14 = local_8;
                do {
                  st::fn_006ACC70(param_8,uVar14,&param_5);
                  pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (pSVar7 == nullptr) {
                    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2d83,0,0,
                                               "%s",
                                               "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_0");
                    if (iVar5 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22((short)local_24 + 3 + sVar3,(undefined2)local_10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(*puVar12,puVar12[-1] + sVar2);
                  iVar5 = st::fn_00402EDC((STGameObjC *)pSVar7);
                  if (iVar5 == 5) {
                    st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  else {
                    st::fn_00402126(pSVar7,CASE_5,&local_18);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  uVar14 = uVar14 + 1;
                  puVar12 = puVar12 + 3;
                } while (param_6 < (int)_param_4);
              }
              local_24 = (STBoatC *)((int)local_24 + 1);
              local_8 = local_8 + 0xf;
              local_1c = local_1c - 0xf;
            } while ((int)local_24 <= (int)local_20);
            return;
          }
          break;
        case 0x2d:
          local_24 = (STBoatC *)((int)(dVar11 - 1) / 10);
          iVar5 = 0;
          if (-1 < (int)local_24) {
            local_1c = 0;
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = local_20;
              if (9 < (int)local_20) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 10;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              if (0 < (int)_param_4) {
                psVar13 = local_6a;
                local_8 = local_1c;
                do {
                  psVar13 = psVar13 + 3;
                  st::fn_006ACC70(param_8,local_8,&param_5);
                  pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (pSVar7 == nullptr) {
                    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2d45,0,0,
                                               "%s",
                                               "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_45");
                    if (iVar5 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  sVar4 = (short)iVar5;
                  if (psVar13[2] == 0) {
                    sVar10 = *psVar13 + sVar4 + 2;
                    sVar4 = (sVar2 - sVar4) + -3;
                  }
                  else {
                    sVar10 = sVar4 + 3;
                    sVar4 = (*psVar13 - sVar4) + -2 + sVar2;
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22(sVar10 + sVar3,(undefined2)local_10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(psVar13[1],sVar4);
                  iVar8 = st::fn_00402EDC((STGameObjC *)pSVar7);
                  if (iVar8 == 5) {
                    st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  else {
                    st::fn_00402126(pSVar7,CASE_5,&local_18);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  local_8 = local_8 + 1;
                } while (param_6 < (int)_param_4);
              }
              iVar5 = iVar5 + 1;
              local_1c = local_1c + 10;
              local_20 = local_20 - 10;
            } while (iVar5 <= (int)local_24);
            return;
          }
          break;
        case 0x5a:
          local_20 = (int)(dVar11 - 1) / 0xf;
          local_24 = nullptr;
          if (-1 < (int)local_20) {
            local_1c = 0;
            local_8 = dVar11;
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = local_8;
              if (0xe < (int)local_8) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 0xf;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              if (0 < (int)_param_4) {
                puVar12 = &local_be;
                uVar14 = local_1c;
                do {
                  st::fn_006ACC70(param_8,uVar14,&param_5);
                  pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (pSVar7 == nullptr) {
                    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2d2c,0,0,
                                               "%s",
                                               "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_90");
                    if (iVar5 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22(puVar12[-1] + sVar3,(undefined2)local_10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(*puVar12,(sVar2 - (short)local_24) + -3);
                  iVar5 = st::fn_00402EDC((STGameObjC *)pSVar7);
                  if (iVar5 == 5) {
                    st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  else {
                    st::fn_00402126(pSVar7,CASE_5,&local_18);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  uVar14 = uVar14 + 1;
                  puVar12 = puVar12 + 3;
                } while (param_6 < (int)_param_4);
              }
              local_24 = (STBoatC *)((int)local_24 + 1);
              local_1c = local_1c + 0xf;
              local_8 = local_8 - 0xf;
            } while ((int)local_24 <= (int)local_20);
            return;
          }
          break;
        case -1:
          local_c4 = (int)(dVar11 - 1) / 100;
          iVar5 = 0;
          local_20 = 0xffffffff;
          if (-1 < local_c4) {
            local_8 = 0;
            do {
              piVar15 = local_104;
              local_1c = dVar11;
              for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar15 = 0;
                piVar15 = piVar15 + 1;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = dVar11;
              if (99 < (int)dVar11) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_4 = 100;
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = 0;
              uVar14 = local_8;
              if (0 < (int)_param_4) {
                do {
                  st::fn_006ACC70(param_8,uVar14,&param_5);
                  local_24 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                  if (local_24 == nullptr) {
                    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2e0b,0,0,
                                               "%s",
                                               "STAllPlayersC::PutOnPlaceGuardBoats NULL dir==-1");
                    if (iVar5 == 0) {
                      return;
                    }
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  do {
                    while( true ) {
                      local_20 = local_20 + 1 & 0x80000007;
                      if ((int)local_20 < 0) {
                        local_20 = (local_20 - 1 | 0xfffffff8) + 1;
                      }
                      iVar8 = local_e4[local_20];
                      if (iVar8 % 0x5a != 0) break;
                      if (local_104[local_20] != 0xf) goto LAB_00448970;
                    }
                  } while (local_104[local_20] == 10);
LAB_00448970:
                  iVar16 = local_104[local_20] + 1;
                  local_104[local_20] = iVar16;
                  sVar4 = (short)iVar5;
                  if (iVar8 < 0xb5) {
                    if (iVar8 == 0xb4) {
                      sVar10 = (sVar3 - sVar4) + -3;
                      sVar4 = (&sStack_c6)[iVar16 * 3] + sVar2;
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00448aaf:
                      local_10 = CONCAT22(sVar10,(undefined2)local_10);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_c = CONCAT22(*(undefined2 *)((int)&local_c4 + iVar16 * 6),sVar4);
                    }
                    else {
                      switch(iVar8) {
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      case 0:
                        local_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)local_10);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = CONCAT22(*(undefined2 *)((int)&local_c4 + iVar16 * 6),
                                           (&sStack_c6)[iVar16 * 3] + sVar2);
                        break;
                      default:
switchD_004489a9_caseD_1:
                        iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2e63,0
                                                   ,0,"%s",
                                                   "STAllPlayersC::PutOnPlaceGuardBoats incorrect direction");
                        if (iVar8 != 0) {
                          STDebugBreak(); /* noreturn in standalone pseudocode */
                        }
                        break;
                      case 0x2d:
                        if (local_6a[iVar16 * 3 + 2] == 0) {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_10 = CONCAT22(local_6a[iVar16 * 3] + sVar4 + 2 + sVar3,
                                              (undefined2)local_10);
                          sVar4 = (sVar2 - sVar4) + -3;
                          goto LAB_00448bc0;
                        }
                        sVar10 = (sVar2 - sVar4) + -2 + local_6a[iVar16 * 3];
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00448b30:
                        local_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)local_10);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = CONCAT22(local_6a[iVar16 * 3 + 1],sVar10);
                        break;
                      case 0x5a:
                        sVar10 = (&sStack_c6)[iVar16 * 3] + sVar3;
                        sVar4 = (sVar2 - sVar4) + -3;
                        goto LAB_00448aaf;
                      case 0x87:
                        if (local_6a[iVar16 * 3 + 2] != 0) {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_10 = CONCAT22(-sVar4 + -2 + sVar3 + local_6a[iVar16 * 3],
                                              (undefined2)local_10);
                          sVar4 = -sVar4 + -3 + sVar2;
                          goto LAB_00448bc0;
                        }
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22(-sVar4 + -3 + sVar3,(undefined2)local_10);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_c = CONCAT22(local_6a[iVar16 * 3 + 1],
                                           ((-sVar4 + sVar2) - local_6a[iVar16 * 3]) + -2);
                      }
                    }
                  }
                  else {
                    if (iVar8 == 0xe1) {
                      if (local_6a[iVar16 * 3 + 2] == 0) {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22(((sVar3 - sVar4) - local_6a[iVar16 * 3]) + -2,
                                            (undefined2)local_10);
                        sVar4 = sVar4 + 3 + sVar2;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22((sVar3 - sVar4) + -3,(undefined2)local_10);
                        sVar4 = ((sVar4 + sVar2) - local_6a[iVar16 * 3]) + 2;
                      }
LAB_00448bc0:
                      sVar10 = local_6a[iVar16 * 3 + 1];
                    }
                    else {
                      if (iVar8 != 0x10e) {
                        if (iVar8 != 0x13b) goto switchD_004489a9_caseD_1;
                        if (local_6a[iVar16 * 3 + 2] == 0) {
                          sVar10 = local_6a[iVar16 * 3] + sVar4 + 2 + sVar2;
                          goto LAB_00448b30;
                        }
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_10 = CONCAT22(((sVar4 + sVar3) - local_6a[iVar16 * 3]) + 2,
                                            (undefined2)local_10);
                        sVar4 = sVar4 + 3 + sVar2;
                        goto LAB_00448bc0;
                      }
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_10 = CONCAT22((&sStack_c6)[iVar16 * 3] + sVar3,(undefined2)local_10);
                      sVar4 = sVar4 + 3 + sVar2;
                      sVar10 = *(short *)((int)&local_c4 + iVar16 * 6);
                    }
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_c = CONCAT22(sVar10,sVar4);
                  }
                  pSVar7 = local_24;
                  iVar8 = st::fn_00402EDC((STGameObjC *)local_24);
                  if (((iVar8 == 5) && (uVar6 = st::fn_00404DF9(pSVar7,CASE_3), uVar6 == 1))
                     || (iVar8 = st::fn_00402EDC((STGameObjC *)pSVar7), iVar8 != 5)) {
                    st::fn_00402126(pSVar7,CASE_5,&local_18);
                  }
                  else {
                    st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                  uVar14 = uVar14 + 1;
                } while (param_6 < (int)_param_4);
              }
              local_8 = local_8 + 100;
              iVar5 = iVar5 + 1;
              dVar11 = local_1c - 100;
              if (local_c4 < iVar5) {
                return;
              }
            } while( true );
          }
        }
      }
    }
    else {
      switch(iVar5) {
      case 0xb4:
        local_20 = (int)(dVar11 - 1) / 0xf;
        local_24 = nullptr;
        if (-1 < (int)local_20) {
          local_8 = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_1c;
            if (0xe < (int)local_1c) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0xf;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              puVar12 = &local_be;
              uVar14 = local_8;
              do {
                st::fn_006ACC70(param_8,uVar14,&param_5);
                pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar7 == nullptr) {
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2d9b,0,0,
                                             "%s",
                                             "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_180");
                  if (iVar5 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22((sVar3 - (short)local_24) + -3,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(*puVar12,puVar12[-1] + sVar2);
                iVar5 = st::fn_00402EDC((STGameObjC *)pSVar7);
                if (iVar5 == 5) {
                  st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  st::fn_00402126(pSVar7,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                uVar14 = uVar14 + 1;
                puVar12 = puVar12 + 3;
              } while (param_6 < (int)_param_4);
            }
            local_24 = (STBoatC *)((int)local_24 + 1);
            local_8 = local_8 + 0xf;
            local_1c = local_1c - 0xf;
          } while ((int)local_24 <= (int)local_20);
          return;
        }
        break;
      case 0xe1:
        local_24 = (STBoatC *)((int)(dVar11 - 1) / 0x14);
        iVar5 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_20;
            if (0x13 < (int)local_20) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0x14;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              psVar13 = local_6a;
              local_8 = local_1c;
              do {
                psVar13 = psVar13 + 3;
                st::fn_006ACC70(param_8,local_8,&param_5);
                pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar7 == nullptr) {
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2dd2,0,0,
                                             "%s",
                                             "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_225");
                  if (iVar5 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sVar4 = (short)iVar5;
                if (psVar13[2] == 0) {
                  sVar9 = sVar4 + 3 + sVar2;
                  local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(sVar9));
                  sVar10 = ((sVar3 - sVar4) - *psVar13) + -2;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(psVar13[1],sVar9);
                }
                else {
                  sVar10 = (sVar3 - sVar4) + -3;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(psVar13[1],(sVar4 - *psVar13) + 2 + sVar2);
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(sVar10,(undefined2)local_10);
                iVar8 = st::fn_00402EDC((STGameObjC *)pSVar7);
                if (iVar8 == 5) {
                  st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  st::fn_00402126(pSVar7,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < (int)_param_4);
            }
            iVar5 = iVar5 + 1;
            local_1c = local_1c + 0x14;
            local_20 = local_20 - 0x14;
          } while (iVar5 <= (int)local_24);
          return;
        }
        break;
      case 0x10e:
        local_20 = (int)(dVar11 - 1) / 0xf;
        local_24 = nullptr;
        if (-1 < (int)local_20) {
          local_8 = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_1c;
            if (0xe < (int)local_1c) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0xf;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              puVar12 = &local_be;
              uVar14 = local_8;
              do {
                st::fn_006ACC70(param_8,uVar14,&param_5);
                pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar7 == nullptr) {
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2df1,0,0,
                                             "%s",
                                             "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_270");
                  if (iVar5 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(puVar12[-1] + sVar3,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(*puVar12,(short)local_24 + 3 + sVar2);
                iVar5 = st::fn_00402EDC((STGameObjC *)pSVar7);
                if (iVar5 == 5) {
                  st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  st::fn_00402126(pSVar7,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                uVar14 = uVar14 + 1;
                puVar12 = puVar12 + 3;
              } while (param_6 < (int)_param_4);
            }
            local_24 = (STBoatC *)((int)local_24 + 1);
            local_8 = local_8 + 0xf;
            local_1c = local_1c - 0xf;
          } while ((int)local_24 <= (int)local_20);
          return;
        }
        break;
      case 0x13b:
        local_24 = (STBoatC *)((int)(dVar11 - 1) / 0x14);
        iVar5 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = local_20;
            if (0x13 < (int)local_20) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = 0x14;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = 0;
            if (0 < (int)_param_4) {
              psVar13 = local_6a;
              local_8 = local_1c;
              do {
                psVar13 = psVar13 + 3;
                st::fn_006ACC70(param_8,local_8,&param_5);
                pSVar7 = (STBoatC *)st::fn_004028BA(local_28,objPtr,(ushort)param_5,CASE_1);
                if (pSVar7 == nullptr) {
                  iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2db3,0,0,
                                             "%s",
                                             "STAllPlayersC::PutOnPlaceGuardBoats NULL DIR_315");
                  if (iVar5 == 0) {
                    return;
                  }
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sVar4 = (short)iVar5;
                if (psVar13[2] == 0) {
                  sVar10 = sVar4 + 3;
                  sVar4 = sVar4 + sVar2 + *psVar13 + 2;
                }
                else {
                  sVar10 = (sVar4 - *psVar13) + 2;
                  sVar4 = sVar4 + 3 + sVar2;
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = CONCAT22(sVar10 + sVar3,(undefined2)local_10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT22(psVar13[1],sVar4);
                iVar8 = st::fn_00402EDC((STGameObjC *)pSVar7);
                if (iVar8 == 5) {
                  st::fn_00401CFD(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  st::fn_00402126(pSVar7,CASE_5,&local_18);
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < (int)_param_4);
            }
            iVar5 = iVar5 + 1;
            local_1c = local_1c + 0x14;
            local_20 = local_20 - 0x14;
          } while (iVar5 <= (int)local_24);
          return;
        }
      }
    }
  }
  return;
}

// 00449B60 STAllPlayersC::DestroyObjectMsg
#line 4 "decomp/ST.exe/functions/00449B60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DestroyObjectMsg

   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_DestroyObjectMsg_param_3Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00652810 -> 00449B60 @ 00655AAC | 00652810 -> 00449B60 @ 00655BDB
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00449B7B MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
st::fn_00449B60
          (STAllPlayersC *this,char param_1,uint param_2,
          STAllPlayersC_DestroyObjectMsg_param_3Enum param_3,undefined4 param_4)

{
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  DArrayTy *array;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  uVar2 = param_2;
  switch(param_3) {
  case CASE_1:
    array = (DArrayTy *)g_packedRecords_A62x8[param_1].field3_0x9;
    break;
  case CASE_2:
    array = g_array_007FA154;
    break;
  case CASE_3:
    array = g_array_007FA158;
    break;
  case CASE_4:
    array = g_array_007FA15C;
    break;
  case CASE_5:
    array = g_array_007FA160;
    break;
  case CASE_6:
    array = g_array_007FA164;
    break;
  default:
    iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2eb1,0,0,"%s",
                               "STAllPlayersC::DestroyObjectMsg");
    if (iVar3 == 0) {
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((array != nullptr) &&
      (iVar3 = st::fn_006ACC70(array,param_2 & 0xffff,&param_1), iVar3 != -4)) &&
     (_param_1 != nullptr)) {
    local_20 = 10000;
    local_1c = 0;
    local_18 = 0xfe;
    local_14 = (undefined2)uVar2;
    local_12 = *(undefined2 *)(_param_1 + 6);
    local_2c = &local_20;
    local_10 = 0;
    local_c = 1;
    local_8 = param_4;
    local_30 = 0x128;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*_param_1)(local_40);
    return 1;
  }
  return 0;
}

// 00449CE0 STAllPlayersC::RegisterArtefact
#line 4 "decomp/ST.exe/functions/00449CE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterArtefact */

undefined4 __thiscall
st::fn_00449CE0(STAllPlayersC *this,ushort param_1,void *param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2ecc);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)g_array_007FA154->count;
    }
    else {
      iVar2 = st::fn_006ACC70(g_array_007FA154,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        st::fn_006A5E40
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x2ece);
      }
    }
    st::fn_006AE140(g_array_007FA154,(uint)param_1,&param_2);
    st::fn_004013E8(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2ed4,0,iVar2,"%s",
                             "STAllPlayersC::RegisterArtefact");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2ed5);
  return 0xffffffff;
}

// 00449E60 STAllPlayersC::UnRegisterArtefact
#line 4 "decomp/ST.exe/functions/00449E60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterArtefact */

undefined4 __thiscall
st::fn_00449E60
          (STAllPlayersC *this,uint param_1,AnonShape_00449E60_F2069C78 *param_2)

{
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    pSVar2 = st::fn_004028BA(local_c,-1,(ushort)param_1,CASE_2);
    if (pSVar2 != (STGameObjC *)param_2) {
      st::fn_006A5E40
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2eea);
    }
    st::fn_004021A3(this_00,DAT_0080874d,param_2->field_0020,param_2->field_0024,param_1);
    st::fn_00403643(this_00,param_2->field_0020,param_2->field_0024,(ushort)param_1);
    st::fn_006AE140(g_array_007FA154,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2ef5,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterArtefact");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2ef6);
      return 0xffffffff;
    }
  }
  return 0;
}

// 00449FD0 STAllPlayersC::RegisterMine
#line 4 "decomp/ST.exe/functions/00449FD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterMine */

undefined4 __thiscall st::fn_00449FD0(STAllPlayersC *this,ushort param_1,void *param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f05);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)g_array_007FA158->count;
    }
    else {
      iVar2 = st::fn_006ACC70(g_array_007FA158,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        st::fn_006A5E40
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x2f07);
      }
    }
    st::fn_006AE140(g_array_007FA158,(uint)param_1,&param_2);
    st::fn_004013E8(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2f0d,0,iVar2,"%s",
                             "STAllPlayersC::RegisterMine");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f0e);
  return 0xffffffff;
}

// 0044A150 STAllPlayersC::UnRegisterMine
#line 4 "decomp/ST.exe/functions/0044A150/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterMine

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006239A0 -> 0044A150 @ 00623B83; STMineSetC::sub_006239A0 this; stable alias ESI */

undefined4 __thiscall
st::fn_0044A150(STAllPlayersC *this,uint param_1,uint param_2,STMineSetC *param_3)

{
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    pSVar2 = st::fn_004028BA(local_c,(char)param_1,(ushort)param_2,CASE_3);
    if (pSVar2 != (STGameObjC *)param_3) {
      st::fn_006A5E40
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f1d);
    }
    st::fn_004021A3(this_00,DAT_0080874d,param_3->field_0020,*(char *)&param_3->field_0024,param_2);
    st::fn_00403643(this_00,param_3->field_0020,(char)param_1,(ushort)param_2);
    st::fn_006AE140(g_array_007FA158,param_2 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2f26,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterMine");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f27);
      return 0xffffffff;
    }
  }
  return 0;
}

// 0044A2C0 STAllPlayersC::RegisterDeposit
#line 4 "decomp/ST.exe/functions/0044A2C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterDeposit */

undefined4 __thiscall
st::fn_0044A2C0(STAllPlayersC *this,ushort param_1,void *param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f36);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)g_array_007FA15C->count;
    }
    else {
      iVar2 = st::fn_006ACC70(g_array_007FA15C,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        st::fn_006A5E40
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x2f38);
      }
    }
    st::fn_006AE140(g_array_007FA15C,(uint)param_1,&param_2);
    st::fn_004013E8(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2f3e,0,iVar2,"%s",
                             "STAllPlayersC::RegisterDeposit");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f3f);
  return 0xffffffff;
}

// 0044A440 STAllPlayersC::UnRegisterDeposit
#line 4 "decomp/ST.exe/functions/0044A440/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterDeposit

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 00580D30 -> 0044A440 @ 00580D69 */

undefined4 __thiscall
st::fn_0044A440(STAllPlayersC *this,uint param_1,STResourceC *param_2)

{
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    pSVar2 = st::fn_004028BA(local_c,-1,(ushort)param_1,CASE_4);
    if (pSVar2 != (STGameObjC *)param_2) {
      st::fn_006A5E40
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f4e);
    }
    st::fn_004021A3(this_00,DAT_0080874d,param_2->field_0020,param_2->field_0024,param_1);
    st::fn_00403643(this_00,param_2->field_0020,param_2->field_0024,(ushort)param_1);
    st::fn_006AE140(g_array_007FA15C,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2f57,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterDeposit");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f58);
      return 0xffffffff;
    }
  }
  return 0;
}

// 0044A5B0 STAllPlayersC::RegisterContainer
#line 4 "decomp/ST.exe/functions/0044A5B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterContainer */

undefined4 __thiscall
st::fn_0044A5B0(STAllPlayersC *this,ushort param_1,void *param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f67);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)g_array_007FA160->count;
    }
    else {
      iVar2 = st::fn_006ACC70(g_array_007FA160,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        st::fn_006A5E40
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x2f69);
      }
    }
    st::fn_006AE140(g_array_007FA160,(uint)param_1,&param_2);
    st::fn_004013E8(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2f6f,0,iVar2,"%s",
                             "STAllPlayersC::RegisterContainer");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f70);
  return 0xffffffff;
}

// 0044A730 STAllPlayersC::UnRegisterContainer
#line 4 "decomp/ST.exe/functions/0044A730/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterContainer */

undefined4 __thiscall
st::fn_0044A730
          (STAllPlayersC *this,uint param_1,AnonShape_0044A730_DBE673B2 *param_2)

{
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    pSVar2 = st::fn_004028BA(local_c,-1,(ushort)param_1,CASE_5);
    if (pSVar2 != (STGameObjC *)param_2) {
      st::fn_006A5E40
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2f85);
    }
    st::fn_004021A3(this_00,DAT_0080874d,param_2->field_0020,param_2->field_0024,param_1);
    st::fn_00403643(this_00,param_2->field_0020,param_2->field_0024,(ushort)param_1);
    st::fn_006AE140(g_array_007FA160,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2f90,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterContainer");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2f91);
      return 0xffffffff;
    }
  }
  return 0;
}

// 0044A8A0 STAllPlayersC::RegisterBlot
#line 4 "decomp/ST.exe/functions/0044A8A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterBlot */

undefined4 __thiscall st::fn_0044A8A0(STAllPlayersC *this,ushort param_1,void *param_2)

{
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_2 == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2fa0);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)g_array_007FA164->count;
    }
    else {
      iVar2 = st::fn_006ACC70(g_array_007FA164,(uint)param_1,&local_8);
      if ((iVar2 != -4) && (local_8 != 0)) {
        st::fn_006A5E40
                  (-0x5001fffa,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x2fa2);
      }
    }
    st::fn_006AE140(g_array_007FA164,(uint)param_1,&param_2);
    st::fn_004013E8(param_2,param_1);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2fa8,0,iVar2,"%s",
                             "STAllPlayersC::RegisterBlot");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2fa9);
  return 0xffffffff;
}

// 0044AA20 STAllPlayersC::UnRegisterBlot
#line 4 "decomp/ST.exe/functions/0044AA20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterBlot */

undefined4 __thiscall
st::fn_0044AA20(STAllPlayersC *this,uint param_1,AnonShape_0044AA20_1EE9340C *param_2)

{
  STAllPlayersC *this_00;
  int errorCode;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  STAllPlayersC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    pSVar2 = st::fn_004028BA(local_c,-1,(ushort)param_1,CASE_6);
    if (pSVar2 != (STGameObjC *)param_2) {
      st::fn_006A5E40
                (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x2fb8);
    }
    st::fn_004021A3(this_00,DAT_0080874d,param_2->field_0020,param_2->field_0024,param_1);
    st::fn_00403643(this_00,param_2->field_0020,param_2->field_0024,(ushort)param_1);
    st::fn_006AE140(g_array_007FA164,param_1 & 0xffff,&local_8);
    g_currentExceptionFrame = local_50.previous;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2fc1,0,errorCode,
                                 "%s","STAllPlayersC::UnRegisterBlot");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2fc2);
      return 0xffffffff;
    }
  }
  return 0;
}

// 0044AB90 STAllPlayersC::CheckTmps
#line 4 "decomp/ST.exe/functions/0044AB90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CheckTmps

   [STPrototypeRepairApplier] Propagated parameter 5.
   Evidence: 00433E90 -> 0044AB90 @ 004343EA | 00433E90 -> 0044AB90 @ 0043443E | 00433E90 ->
   0044AB90 @ 004344DB | 00433E90 -> 0044AB90 @ 00434544 | 00433E90 -> 0044AB90 @ 004345A7 |
   00433E90 -> 0044AB90 @ 00434675 | 00433E90 -> 0044AB90 @ 004346AE | 00433E90 -> 0044AB90 @
   00434726 | 00433E90 -> 0044AB90 @ 004347F3 | 00433E90 -> 0044AB90 @ 0043482F | 00433E90 ->
   0044AB90 @ 004348A9 | 00439100 -> 0044AB90 @ 00439653 | 00439100 -> 0044AB90 @ 004396E8 |
   00439100 -> 0044AB90 @ 00439757 | 00439100 -> 0044AB90 @ 00439812 | 00439100 -> 0044AB90 @
   00439881 | 00439100 -> 0044AB90 @ 004398FE | 00439100 -> 0044AB90 @ 0043996D | 00439100 ->
   0044AB90 @ 00439E12 | 00439100 -> 0044AB90 @ 00439ECE | 00439100 -> 0044AB90 @ 00439FC2 |
   00439100 -> 0044AB90 @ 0043A018 | 00439100 -> 0044AB90 @ 0043A0BB | 00439100 -> 0044AB90 @
   0043A12D | 00439100 -> 0044AB90 @ 0043A191 | 00439100 -> 0044AB90 @ 0043A25E | 00439100 ->
   0044AB90 @ 0043A292 | 00439100 -> 0044AB90 @ 0043A301 | 00439100 -> 0044AB90 @ 0043A3AB |
   00439100 -> 0044AB90 @ 0043A3DF | 00439100 -> 0044AB90 @ 0043A443 */

int st::fn_0044AB90
              (char playerId,dword tempGroup,int objectType,char ownerPlayerId,DArrayTy *objectIds,
              short objectId)

{
  int iVar2;
  int *piVar3;
  DArrayTy *array;
  dword dVar4;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000001a;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  iVar2 = objectType;
  uVar5 = 0;
  local_c = nullptr;
  local_10 = nullptr;
  local_8 = nullptr;
  if (tempGroup == 0) {
    iVar6 = STRecordByteAddress(g_packedRecords_A62x8, playerId, 0x163);
  }
  else {
    if (tempGroup != 1) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x2fde,0,0,"%s",
                                 "STAllPlayersC::CheckTmps invalid panel number");
      if (iVar2 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = STRecordByteAddress(g_packedRecords_A62x8, playerId, 0x1B3);
  }
  if (0x19a < objectType) {
    if (((objectType == 0x1a4) || (objectType == 0x1ae)) || (objectType == 0x1b8))
    goto LAB_0044ae50;
    goto LAB_0044ae21;
  }
  if (objectType == 0x19a) {
LAB_0044ac57:
    if (objectIds == nullptr) {
      return -1;
    }
    dVar4 = objectIds->count;
    if (dVar4 == 0) {
      return -1;
    }
    tempGroup = dVar4;
    st::fn_006AFE40((int *)&local_c,&objectIds->flags);
    if (0 < (int)dVar4) {
      do {
        st::fn_006ACC70(local_c,uVar5,&stack0x0000001a);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        if (in_stack_0000001a == -1) {
          st::fn_006B0C70(local_c,uVar5);
          dVar4 = dVar4 - 1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar4);
      tempGroup = dVar4;
      if (dVar4 != 0) {
        objectIds = nullptr;
        piVar3 = (int *)(iVar6 + 10);
        array = local_c;
        do {
          if (((*(int *)((int)piVar3 + -10) == iVar2) &&
              (*(int *)((int)piVar3 + -6) == (int)ownerPlayerId)) &&
             (iVar6 = *(int *)(*piVar3 + 0xc), iVar6 != 0)) {
            st::fn_006AFE40((int *)&local_10,&array->flags);
            st::fn_006AFE40((int *)&local_8,(uint *)*piVar3);
            uVar5 = 0;
            if (0 < iVar6) {
              do {
                st::fn_006ACC70(local_8,uVar5,&stack0x00000006);
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                if (in_stack_00000006 == -1) {
                  st::fn_006B0C70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < iVar6);
              if ((iVar6 != 0) && (0 < (int)tempGroup)) {
                while( true ) {
                  st::fn_006ACC70(local_10,0,&stack0x0000001a);
                  uVar5 = 0;
                  if (iVar6 < 1) break;
                  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                  while (st::fn_006ACC70(local_8,uVar5,&stack0x00000006),
                        in_stack_0000001a != in_stack_00000006) {
                    uVar5 = uVar5 + 1;
                    if (iVar6 <= (int)uVar5) goto LAB_0044ada0;
                  }
                  st::fn_006B0C70(local_10,0);
                  tempGroup = tempGroup - 1;
                  st::fn_006B0C70(local_8,uVar5);
                  iVar6 = iVar6 + -1;
                  if ((int)tempGroup < 1) break;
                }
              }
            }
LAB_0044ada0:
            st::fn_006AE110(local_10);
            local_10 = nullptr;
            st::fn_006AE110(local_8);
            local_8 = nullptr;
            if ((tempGroup == 0) && (iVar6 == 0)) {
              st::fn_006AE110(local_c);
              return (int)objectIds;
            }
            tempGroup = local_c->count;
            array = local_c;
            iVar2 = objectType;
          }
          piVar3 = piVar3 + 4;
          objectIds = (DArrayTy *)((int)&objectIds->flags + 1);
          if (4 < (int)objectIds) {
            st::fn_006AE110(array);
            return -1;
          }
        } while( true );
      }
    }
    st::fn_006AE110(local_c);
    return -1;
  }
  if (objectType < 0x5b) {
    if (objectType == 0x5a) {
LAB_0044ae50:
      iVar2 = 0;
      piVar3 = (int *)(iVar6 + 4);
      while (((piVar3[-1] != objectType || ((short)piVar3[1] != objectId)) ||
             (*piVar3 != (int)ownerPlayerId))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 4;
        if (4 < iVar2) {
          return -1;
        }
      }
      return iVar2;
    }
    if (objectType == 0) {
      return -1;
    }
    if (objectType == 0x3c) goto LAB_0044ac57;
  }
  else if (objectType == 0x172) goto LAB_0044ae50;
LAB_0044ae21:
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3019,0,0,"%s",
                             "STAllPlayersC::CheckTmps invalid type");
  if (iVar2 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0044AF50 STAllPlayersC::PushTV
#line 4 "decomp/ST.exe/functions/0044AF50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=55, used=0), and
   decompilation contains no value return */

void st::fn_0044AF50(char param_1,int param_2)

{
  DArrayTy *array;
  int iVar2;
  AnonPointee_TLOBaseTy_0607 *pAVar3;
  Global_sub_0043FC50_param_1Enum GVar4;

  if (param_2 == 0) {
    GVar4 = CASE_E;
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field96_0x163;
  }
  else {
    if (param_2 != 1) {
      iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3028,0,0,"%s",
                                 "STAllPlayersC::PushTV");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    GVar4 = CASE_F;
    pAVar3 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field149_0x1b3;
  }
  st::fn_00404C55(GVar4,0);
  array = *(DArrayTy **)((int)&pAVar3[3].field_0000 + 2);
  if (array != nullptr) {
    st::fn_006AE110(array);
    *(undefined4 *)((int)&pAVar3[3].field_0000 + 2) = 0;
    *(undefined2 *)((int)&pAVar3[3].field_0004 + 2) = 0;
  }
  pAVar3[2].field_0010 = 0;
  st::fn_0072DA70(&pAVar3->field_0010,pAVar3,0x40);
  pAVar3->field_0000 = 0;
  *(undefined4 *)((int)&pAVar3->field_0008 + 2) = 0;
  *(undefined2 *)((int)&pAVar3->field_000C + 2) = 0;
  return;
}

// 0044B030 STAllPlayersC::ActivateTV
#line 4 "decomp/ST.exe/functions/0044B030/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ActivateTV

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004314E0 -> 0044B030 @ 00431689 | 004314E0 -> 0044B030 @ 004316C3 | 004314E0 ->
   0044B030 @ 0043175B | 004314E0 -> 0044B030 @ 00431812 | 004314E0 -> 0044B030 @ 0043189E |
   004314E0 -> 0044B030 @ 00431A38 | 004314E0 -> 0044B030 @ 00431B80 | 004314E0 -> 0044B030 @
   00431BB0 | 004314E0 -> 0044B030 @ 00431C28 | 004314E0 -> 0044B030 @ 00431C77 | 004314E0 ->
   0044B030 @ 00431CA7 | 004314E0 -> 0044B030 @ 00431D00 | 004314E0 -> 0044B030 @ 00431D2C |
   004314E0 -> 0044B030 @ 00431D92 | 004314E0 -> 0044B030 @ 00431E38 | 004314E0 -> 0044B030 @
   00431E64 | 004314E0 -> 0044B030 @ 00431EC0 | 004314E0 -> 0044B030 @ 0043202C | 004314E0 ->
   0044B030 @ 00432058 | 004314E0 -> 0044B030 @ 004320BE | 004314E0 -> 0044B030 @ 00432164 |
   004314E0 -> 0044B030 @ 00432190 | 004314E0 -> 0044B030 @ 004321EC | 004314E0 -> 0044B030 @
   0043232B | 004314E0 -> 0044B030 @ 00432355 | 004314E0 -> 0044B030 @ 0043242A | 004314E0 ->
   0044B030 @ 004324B6 | 004314E0 -> 0044B030 @ 004324E9 | 004314E0 -> 0044B030 @ 00432556 |
   004314E0 -> 0044B030 @ 004326C4 | 004314E0 -> 0044B030 @ 004326F0 | 004314E0 -> 0044B030 @
   00432756 | 004314E0 -> 0044B030 @ 004327FC | 004314E0 -> 0044B030 @ 00432828 | 004314E0 ->
   0044B030 @ 00432884 | 004314E0 -> 0044B030 @ 004329F0 | 004314E0 -> 0044B030 @ 00432A1C |
   004314E0 -> 0044B030 @ 00432A82 | 004314E0 -> 0044B030 @ 00432B28 | 004314E0 -> 0044B030 @
   00432B54 | 004314E0 -> 0044B030 @ 00432BB0 | 004314E0 -> 0044B030 @ 00432D3A | 004314E0 ->
   0044B030 @ 00432D7B | 004314E0 -> 0044B030 @ 00432E08 | 004314E0 -> 0044B030 @ 00432E54 |
   004314E0 -> 0044B030 @ 00432E9F | 004314E0 -> 0044B030 @ 0043303D | 004314E0 -> 0044B030 @
   00433173 | 004314E0 -> 0044B030 @ 004331A3 | 004314E0 -> 0044B030 @ 0043321B | 004314E0 ->
   0044B030 @ 0043326A | 004314E0 -> 0044B030 @ 0043329A | 004314E0 -> 0044B030 @ 004332F4 |
   004314E0 -> 0044B030 @ 00433386 | 004314E0 -> 0044B030 @ 00433418 | 004314E0 -> 0044B030 @
   00433452 | 004314E0 -> 0044B030 @ 004334C6 | 00433E90 -> 0044B030 @ 0043403C | 00433E90 ->
   0044B030 @ 00434093 | 00433E90 -> 0044B030 @ 00434135 | 00433E90 -> 0044B030 @ 00434230 |
   00433E90 -> 0044B030 @ 004342DB | 00433E90 -> 0044B030 @ 0043444D | 00433E90 -> 0044B030 @
   004344EA | 00433E90 -> 0044B030 @ 00434553 | 00433E90 -> 0044B030 @ 004345BA | 00433E90 ->
   0044B030 @ 00434688 | 00433E90 -> 0044B030 @ 004346C1 | 00433E90 -> 0044B030 @ 00434735 |
   00433E90 -> 0044B030 @ 00434806 | 00433E90 -> 0044B030 @ 00434842 | 00433E90 -> 0044B030 @
   004348B8 | 00433E90 -> 0044B030 @ 004349ED | 00433E90 -> 0044B030 @ 00434A34 | 00433E90 ->
   0044B030 @ 00434B1F | 00433E90 -> 0044B030 @ 00434BFC | 00433E90 -> 0044B030 @ 00434C81 |
   00439100 -> 0044B030 @ 004392B5 | 00439100 -> 0044B030 @ 00439322 | 00439100 -> 0044B030 @
   00439393 | 00439100 -> 0044B030 @ 00439415 | 00439100 -> 0044B030 @ 004394BB | 00439100 ->
   0044B030 @ 00439662 | 00439100 -> 0044B030 @ 004396FB | 00439100 -> 0044B030 @ 0043976A |
   00439100 -> 0044B030 @ 00439825 | 00439100 -> 0044B030 @ 00439890 | 00439100 -> 0044B030 @
   00439911 | 00439100 -> 0044B030 @ 0043997C | 00439100 -> 0044B030 @ 00439A3F | 00439100 ->
   0044B030 @ 00439A7C | 00439100 -> 0044B030 @ 00439B39 | 00439100 -> 0044B030 @ 00439BDE |
   00439100 -> 0044B030 @ 00439C1B | 00439100 -> 0044B030 @ 00439CB0 | 00439100 -> 0044B030 @
   00439E21 | 00439100 -> 0044B030 @ 00439EE1 | 00439100 -> 0044B030 @ 00439FD1 | 00439100 ->
   0044B030 @ 0043A027 | 00439100 -> 0044B030 @ 0043A0CA | 00439100 -> 0044B030 @ 0043A13C |
   00439100 -> 0044B030 @ 0043A1A0 | 00439100 -> 0044B030 @ 0043A271 | 00439100 -> 0044B030 @
   0043A2A5 | 00439100 -> 0044B030 @ 0043A310 | 00439100 -> 0044B030 @ 0043A3BE | 00439100 ->
   0044B030 @ 0043A3EE | 00439100 -> 0044B030 @ 0043A452 | 0043AE40 -> 0044B030 @ 0043B483 |
   0043AE40 -> 0044B030 @ 0043B90F | 0044B5F0 -> 0044B030 @ 0044BCF4 | 0044B5F0 -> 0044B030 @
   0044BD28 | 0044B5F0 -> 0044B030 @ 0044BD8D | 0044B5F0 -> 0044B030 @ 0044BDF2 | 0044B5F0 ->
   0044B030 @ 0044BE33 | 0044B5F0 -> 0044B030 @ 0044BEC6 */

void __thiscall st::fn_0044B030(STAllPlayersC *this,char param_1,int param_2,int objPtr)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  AnonPointee_TLOBaseTy_0607 *pAVar10;
  AnonPointee_TLOBaseTy_0607 *pAVar9;

  if (param_2 == 0) {
    pAVar10 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field96_0x163;
  }
  else {
    if (param_2 != 1) {
      iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3042,0,0,"%s",
                                 "STAllPlayersC::ActivateTV invalid panel number");
      if (iVar6 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    pAVar10 = (AnonPointee_TLOBaseTy_0607 *)&g_packedRecords_A62x8[param_1].field149_0x1b3;
  }
  pAVar9 = (AnonPointee_TLOBaseTy_0607 *)(int)param_1;
  if (0 < objPtr) {
    if (pAVar10->field_0000 == 0) {
      puVar7 = &pAVar10->field_0000 + objPtr * 4;
      pAVar10->field_0000 = *puVar7;
      pAVar10->field_0004 = puVar7[1];
      pAVar10->field_0008 = puVar7[2];
      pAVar10->field_000C = puVar7[3];
      st::fn_0072DA70
                (puVar7,(AnonPointee_TLOBaseTy_0607 *)(&pAVar10->field_0010 + objPtr * 4),
                 objPtr * -0x10 + 0x40);
      pAVar10[2].field_0010 = 0;
      pAVar10[2].field_0014 = 0xff;
      *(undefined4 *)((int)&pAVar10[3].field_0000 + 2) = 0;
      pAVar9 = nullptr;
    }
    else {
      st::fn_004032E7(this,param_1,param_2,0,0);
      uVar1 = (&pAVar10->field_0000)[objPtr * 4];
      uVar2 = (&pAVar10->field_0004)[objPtr * 4];
      uVar3 = (&pAVar10->field_0008)[objPtr * 4];
      uVar4 = (&pAVar10->field_000C)[objPtr * 4];
      st::fn_0072DA70(&pAVar10->field_0010,pAVar10,objPtr * 0x10);
      pAVar10->field_0000 = uVar1;
      pAVar10->field_0004 = uVar2;
      pAVar10->field_0008 = uVar3;
      pAVar10->field_000C = uVar4;
      pAVar9 = pAVar10;
    }
  }
  uVar8 = STReplaceLowWord((uint32_t)(pAVar9), (uint16_t)(*(undefined2 *)&pAVar10->field_0008));
  st::fn_00405D12(this,STReplaceLowByte((uint32_t)(uVar8), (uint8_t)(*(undefined1 *)&pAVar10->field_0004)),
                    pAVar10->field_0000,*(DArrayTy **)((int)&pAVar10->field_0008 + 2),uVar8);
  st::fn_004027DE(this);
  if (param_2 == 0) {
    st::fn_00404C55(CASE_1,0);
    st::fn_00404C55(CASE_2,0);
    if (0 < objPtr) {
      st::fn_00404C55(CASE_E,0);
      return;
    }
  }
  else if (param_2 == 1) {
    st::fn_00404C55(CASE_5,0);
    st::fn_00404C55(CASE_4,0);
    if (0 < objPtr) {
      st::fn_00404C55(CASE_F,0);
    }
  }
  return;
}

// 0044B280 STAllPlayersC::CalibrateTmp
#line 4 "decomp/ST.exe/functions/0044B280/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CalibrateTmp

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0044B280
          (STAllPlayersC *this,char param_1,int param_2,int param_3,uint *param_4,int *param_5,
          int *param_6,int *param_7)

{
  int iVar2;
  DArrayTy *pDVar3;
  int iVar4;
  dword dVar5;
  uint index;
  uint index_00;
  InternalExceptionFrame local_5c;
  DArrayTy *local_18;
  uint local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  short local_8;
  short local_6;

  local_10 = nullptr;
  local_c = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (iVar2 != -0x5001fff7) {
      iVar4 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3095,0,iVar2,
                                 "%s","STAllPlayersC::CalibrateTmp");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x3096);
    }
    return;
  }
  if ((param_4 == nullptr) || (local_14 = param_4[3], local_14 == 0)) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x3075);
  }
  if (param_2 == 0) {
    local_18 = *(DArrayTy **)(param_3 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x16D));
  }
  else if (param_2 == 1) {
    local_18 = *(DArrayTy **)(param_3 * 0x10 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1BD));
  }
  else {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3079,0,0,"%s",
                               "STAllPlayersC::CalibrateTmp invalid panel number");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x307a);
  }
  dVar5 = local_18->count;
  if (dVar5 == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x307c);
  }
  if ((param_5 != nullptr) && (*param_5 == 0)) {
    pDVar3 = st::fn_006AE290(nullptr,0,2,1);
    *param_5 = (int)pDVar3;
  }
  if ((param_6 != nullptr) && (*param_6 == 0)) {
    pDVar3 = st::fn_006AE290(nullptr,0,2,1);
    *param_6 = (int)pDVar3;
  }
  if ((param_7 != nullptr) && (*param_7 == 0)) {
    pDVar3 = st::fn_006AE290(nullptr,0,2,1);
    *param_7 = (int)pDVar3;
  }
  if (((param_5 == nullptr) && (param_6 == nullptr)) && (param_7 == nullptr)) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x3080);
  }
  st::fn_006AFE40((int *)&local_10,&local_18->flags);
  st::fn_006AFE40((int *)&local_c,param_4);
  index_00 = 0;
  if (0 < (int)dVar5) {
    do {
      st::fn_006ACC70(local_10,index_00,&local_8);
      if ((local_8 != -1) && (index = 0, 0 < (int)local_14)) {
        do {
          st::fn_006ACC70(local_c,index,&local_6);
          if (local_8 == local_6) {
            if (param_6 != nullptr) {
              st::fn_006AE1C0((DArrayTy *)*param_6,&local_6);
            }
            st::fn_006B0C70(local_10,index_00);
            dVar5 = dVar5 - 1;
            index_00 = index_00 - 1;
            st::fn_006B0C70(local_c,index);
            local_14 = local_14 - 1;
            index = index - 1;
          }
          index = index + 1;
        } while ((int)index < (int)local_14);
      }
      index_00 = index_00 + 1;
    } while ((int)index_00 < (int)dVar5);
  }
  if (param_5 != nullptr) {
    st::fn_006AFE40(param_5,&local_10->flags);
  }
  if (param_7 != nullptr) {
    st::fn_006AFE40(param_7,&local_c->flags);
  }
  st::fn_006AE110(local_10);
  st::fn_006AE110(local_c);
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 0044B5F0 STAllPlayersC::SelectObjects
#line 4 "decomp/ST.exe/functions/0044B5F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelectObjects

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_SelectObjects_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

void __thiscall
st::fn_0044B5F0
          (STAllPlayersC *this,STAllPlayersC_SelectObjects_param_1Enum param_1,uint param_2,
          uint param_3)

{
  int iVar1;
  byte objPtr;
  uint uVar3;
  int iVar4;
  int *piVar5;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar6;
  STGroupBoatC *this_00;
  STGameObjC *pSVar7;
  int iVar8;
  uint index;
  char cVar9;
  undefined1 local_14 [4];
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  objPtr = DAT_0080874d;
  uVar3 = (uint)DAT_0080874d;
  local_8 = nullptr;
  local_10 = nullptr;
  local_c = nullptr;
  local_8 = st::fn_006AE290(nullptr,0,2,1);
  switch(param_1) {
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_0:
    param_3 = 0;
    iVar8 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar8 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar8 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))) {
          st::fn_006AE1C0(local_8,(void *)((int)piVar5 + 0x32));
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_1:
    st::fn_00405227(this,objPtr,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_8,
                    nullptr);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = local_8->count;
    if (0 < (int)param_2) {
      do {
        pSVar7 = st::fn_004028BA(this,objPtr,*(ushort *)((int)local_8->data + param_3 * 2),CASE_1);
        if ((((pSVar7 == nullptr) || (pSVar7->field_0020 != 0x14)) ||
            (iVar8 = pSVar7->vfunc_F8(), iVar8 == 0)) ||
           (iVar8 = pSVar7->vfunc_EC(), iVar8 == 0)) {
          st::fn_006B0C70(local_8,param_3);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 - 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 - 1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)param_2);
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_2:
    param_3 = 0;
    iVar8 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar8 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar8 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           (((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
             (*(uint *)(&DAT_00800f10 + (iVar4 + 0x41U >> 5) * 4) &
             1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 ||
             (iVar4 = (**(code **)(*piVar5 + 0x2c))(),
             ((&DAT_00800f00)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          st::fn_006AE1C0(local_8,(void *)((int)piVar5 + 0x32));
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_3:
    param_3 = 0;
    iVar8 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar8 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar8 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801000)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          st::fn_006AE1C0(local_8,(void *)((int)piVar5 + 0x32));
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_4:
    param_3 = 0;
    iVar8 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar8 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar8 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
            (iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00800fa0)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))) {
          st::fn_006AE1C0(local_8,(void *)((int)piVar5 + 0x32));
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_5:
    param_3 = 0;
    iVar8 = g_packedRecords_A62x8[uVar3].field3_0x9;
    iVar1 = *(int *)(iVar8 + 0xc);
    if (0 < iVar1) {
      do {
        piVar5 = *(int **)(*(int *)(iVar8 + 0x1c) + param_3 * 4);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((piVar5 != nullptr) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801010)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          st::fn_006AE1C0(local_8,(void *)((int)piVar5 + 0x32));
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    break;
  case CASE_6:
    piVar5 = (int *)st::fn_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
    if (((piVar5 != nullptr) && (piVar5[9] == uVar3)) && (piVar5[8] == 0x14)) {
      st::fn_006AE110(local_8);
      st::fn_00405227(this,objPtr,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,
                      (int *)&local_c,nullptr);
      cVar9 = -1;
      iVar8 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      SVar6 = (**(code **)(*piVar5 + 0x2c))();
      local_8 = (DArrayTy *)
                st::fn_004050B0(this,uVar3,(AnonShape_0043EED0_93C25F9A *)local_c,SVar6,iVar8,
                                    cVar9);
      st::fn_006AE110(local_c);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = 0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = local_8->count;
      if (0 < (int)param_2) {
        do {
          pSVar7 = st::fn_004028BA(this,objPtr,*(ushort *)((int)local_8->data + param_3 * 2),CASE_1);
          if ((((pSVar7 == nullptr) || (pSVar7->field_0020 != 0x14)) ||
              (iVar8 = pSVar7->vfunc_F8(), iVar8 == 0)) ||
             (iVar8 = pSVar7->vfunc_EC(), iVar8 == 0)) {
            st::fn_006B0C70(local_8,param_3);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 - 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = param_3 - 1;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
        } while ((int)param_3 < (int)param_2);
      }
    }
    break;
  case CASE_7:
    iVar8 = st::fn_006EB350(g_sT3DSMAPContext_00807598,param_2,param_3,0xe,1);
    if ((((iVar8 != 0) && (*(uint *)(iVar8 + 0x24) == uVar3)) && (*(int *)(iVar8 + 0x20) == 0x14))
       && ((*(ushort *)(iVar8 + 0x30) != 0xffff &&
           (this_00 = st::fn_00405CF9(objPtr,*(ushort *)(iVar8 + 0x30)),
           this_00 != nullptr)))) {
      st::fn_006AE110(local_8);
      local_8 = (DArrayTy *)st::fn_00402DB5((STGroupC *)this_00);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = local_8->count;
      index = 0;
      if (0 < (int)param_2) {
        do {
          st::fn_006ACC70(local_8,index,local_14);
          pSVar7 = st::fn_004028BA(this,objPtr,STPiece<0,2>(local_14),CASE_1);
          iVar8 = pSVar7->vfunc_EC();
          if (iVar8 == 0) {
            st::fn_006B0C70(local_8,index);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 - 1;
            index = index - 1;
          }
          index = index + 1;
        } while ((int)index < (int)param_2);
      }
    }
    break;
  default:
    iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3123,0,0,"%s",
                               "STAllPlayersC::SelectObjects invalid type");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if (local_8->count == 0) {
    st::fn_006AE110(local_8);
    return;
  }
  if (g_packedRecords_A62x8[uVar3].field200_0x203 == 0) {
    iVar8 = g_packedRecords_A62x8[uVar3].field96_0x163;
    if (iVar8 != 0) {
      if (iVar8 == 0x3c) {
        iVar8 = st::fn_0040196F(objPtr,0,0x3c,objPtr,local_8,0);
        if (0 < iVar8) {
          st::fn_0040317F(this,objPtr,0,iVar8);
          goto cf_common_exit_0044BD53;
        }
        if (-1 < iVar8) goto cf_common_exit_0044BD53;
        st::fn_00405920(objPtr,0);
        if (g_packedRecords_A62x8[uVar3].field105_0x177 == uVar3) {
          st::fn_004020D6(this,objPtr,0,1,&local_8->flags,(int *)&local_10,nullptr,nullptr);
          st::fn_004027C0(this,uVar3,0x3c,local_10,0,0);
          st::fn_006AE110(local_10);
        }
        else {
          st::fn_004032E7(this,objPtr,0,1,0);
        }
      }
      else {
        if (iVar8 != 0x1ae) {
          iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3152,0,0,
                                     "%s","STAllPlayersC::SelectObjects GAMETYPE_BOAT ACT_LEFT");
          if (iVar8 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          goto cf_common_exit_0044BD53;
        }
        iVar8 = st::fn_0040196F(objPtr,0,0x3c,objPtr,local_8,0);
        if (0 < iVar8) {
          st::fn_0040317F(this,objPtr,0,iVar8);
          goto cf_common_exit_0044BD53;
        }
        st::fn_00405920(objPtr,0);
        st::fn_004032E7(this,objPtr,0,1,0);
      }
      goto cf_common_exit_0044BD3D;
    }
    iVar8 = st::fn_0040196F(objPtr,0,0x3c,objPtr,local_8,0);
    if (iVar8 < 1) goto cf_common_exit_0044BD3D;
    st::fn_0040317F(this,objPtr,0,iVar8);
  }
  else {
    if (g_packedRecords_A62x8[uVar3].field200_0x203 != 1) {
      iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x317d,0,0,"%s",
                                 "STAllPlayersC::SelectObjects GAMETYPE_BOAT wrong panel number");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0044BD53;
    }
    g_packedRecords_A62x8[uVar3].field200_0x203 = 0;
    st::fn_004032E7(this,objPtr,1,0,0);
    iVar8 = g_packedRecords_A62x8[uVar3].field96_0x163;
    if (iVar8 == 0) {
      iVar8 = st::fn_0040196F(objPtr,0,0x3c,objPtr,local_8,0);
      if (0 < iVar8) {
        st::fn_0040317F(this,objPtr,0,iVar8);
        goto LAB_0044bd49;
      }
    }
    else if (iVar8 == 0x3c) {
      iVar8 = st::fn_0040196F(objPtr,0,0x3c,objPtr,local_8,0);
      if (-1 < iVar8) {
        st::fn_0040317F(this,objPtr,0,iVar8);
        goto cf_common_exit_0044BD53;
      }
      st::fn_00405920(objPtr,0);
    }
    else {
      if (iVar8 != 0x1ae) {
        iVar8 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x3179,0,0,"%s"
                                   ,"STAllPlayersC::SelectObjects GAMETYPE_BOAT ACT_RIGHT");
        if (iVar8 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto cf_common_exit_0044BD53;
      }
      iVar8 = st::fn_0040196F(objPtr,0,0x3c,objPtr,local_8,0);
      if (0 < iVar8) {
        st::fn_0040317F(this,objPtr,0,iVar8);
        goto cf_common_exit_0044BD53;
      }
      st::fn_00405920(objPtr,0);
    }
cf_common_exit_0044BD3D:
    st::fn_00405BBE(this,uVar3,0,0,local_8);
  }
LAB_0044bd49:
  g_packedRecords_A62x8[uVar3].field96_0x163 = 0x3c;
cf_common_exit_0044BD53:
  st::fn_006AE110(local_8);
  st::fn_004027DE(this);
  return;
}

// 0044C130 STAllPlayersC::GetTOBJImage
#line 4 "decomp/ST.exe/functions/0044C130/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJImage

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJImage_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_78=120;CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_E2=226;CASE_E6=230;CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235;CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251;CASE_FD=253;CASE_FE=254
    */

uint __thiscall
st::fn_0044C130
          (STAllPlayersC *this,int param_1,STAllPlayersC_GetTOBJImage_param_2Enum param_2)

{
  STAllPlayersC_GetTOBJImage_param_2Enum SVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  Global_sub_004C2950_param_3Enum GVar7;
  char local_154 [256];
  int local_54 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  SVar2 = param_2;
  memset(local_54, 0, 0x44); /* compiler bulk-zero initialization */
  switch(param_2) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
  case CASE_D:
  case CASE_E:
  case CASE_F:
  case CASE_10:
  case CASE_11:
  case CASE_12:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_16:
  case CASE_17:
  case CASE_18:
  case CASE_19:
  case CASE_1A:
  case CASE_1B:
  case CASE_1C:
  case CASE_1D:
  case CASE_1E:
  case CASE_1F:
  case CASE_20:
  case CASE_21:
  case CASE_22:
  case CASE_23:
  case CASE_24:
  case CASE_25:
  case CASE_26:
  case CASE_27:
  case CASE_28:
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_004024A5(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    if (local_154[0] != '\0') {
      puVar3 = st::fn_00709AF0
                         (local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,1,0,
                          nullptr);
      local_1c = *(undefined4 *)(STField<int>(puVar3,0x21) + param_2 * 4);
    }
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_004024A5(param_1,SVar2,0xd,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    if (local_154[0] != '\0') {
      puVar3 = st::fn_00709AF0
                         (local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,1,0,
                          nullptr);
      local_20 = *(undefined4 *)(STField<int>(puVar3,0x21) + param_2 * 4);
    }
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_004024A5(param_1,SVar2,0xc,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    if (local_154[0] != '\0') {
      puVar3 = st::fn_00709AF0
                         (local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,1,0,
                          nullptr);
      local_24 = *(undefined4 *)(STField<int>(puVar3,0x21) + param_2 * 4);
    }
    uVar4 = st::fn_00709470(g_sT3DSMAPContext_00807598,local_54,0x11,1,10,0xff);
    return uVar4;
  default:
    iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x324e,0,0,"%s",
                               "STAllPlayersC::GetTOBJImage unknown TOBJ-type");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  case CASE_32:
  case CASE_33:
  case CASE_34:
  case CASE_35:
  case CASE_36:
  case CASE_37:
  case CASE_38:
  case CASE_39:
  case CASE_3A:
  case CASE_3B:
  case CASE_3C:
  case CASE_3D:
  case CASE_3E:
  case CASE_3F:
  case CASE_40:
  case CASE_41:
  case CASE_42:
  case CASE_43:
  case CASE_44:
  case CASE_45:
  case CASE_46:
  case CASE_47:
  case CASE_48:
  case CASE_49:
  case CASE_4A:
  case CASE_4B:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_4F:
  case CASE_50:
  case CASE_51:
  case CASE_52:
  case CASE_53:
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
  case CASE_5B:
  case CASE_5C:
  case CASE_5D:
  case CASE_5E:
  case CASE_5F:
  case CASE_60:
  case CASE_61:
  case CASE_62:
  case CASE_63:
  case CASE_64:
  case CASE_65:
  case CASE_66:
  case CASE_67:
  case CASE_68:
  case CASE_69:
  case CASE_6A:
  case CASE_6B:
  case CASE_6C:
  case CASE_6D:
  case CASE_6E:
  case CASE_6F:
  case CASE_70:
  case CASE_71:
  case CASE_72:
  case CASE_73:
  case CASE_78:
    local_10 = local_54;
    GVar7 = 0;
    do {
      local_c = nullptr;
      local_154[0] = '\0';
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
      st::fn_00404138(param_1,SVar2,GVar7,&local_c,local_154,(undefined1 *)&local_8,&param_2);
      if (local_154[0] != '\0') {
        puVar3 = st::fn_00709AF0
                           (local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,1,0,
                            nullptr);
        if ((int)(*(int *)puVar3 - CASE_1) < (int)param_2) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = *(int *)puVar3 - CASE_1;
        }
        *local_10 = *(int *)(STField<int>(puVar3,0x21) + param_2 * 4);
      }
      GVar7 = GVar7 + 1;
      local_10 = local_10 + 1;
    } while ((int)GVar7 < 0x11);
    goto cf_common_exit_0044C477;
  case CASE_DC:
  case CASE_DD:
  case CASE_DE:
  case CASE_DF:
  case CASE_E0:
  case CASE_E2:
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_00401965(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    break;
  case CASE_E6:
  case CASE_E7:
  case CASE_E8:
  case CASE_E9:
  case CASE_EA:
  case CASE_EB:
  case CASE_F2:
  case CASE_F3:
  case CASE_F4:
  case CASE_F5:
  case CASE_F6:
  case CASE_F7:
  case CASE_F8:
  case CASE_F9:
  case CASE_FA:
  case CASE_FB:
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_004051FA(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    goto joined_r0x0044c40d;
  case CASE_FD:
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_004022DE(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
    break;
  case CASE_FE:
    local_c = nullptr;
    local_154[0] = '\0';
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(0x1d));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    st::fn_004017EE(param_1,SVar2,0xe,&local_c,local_154,(undefined1 *)&local_8,&param_2);
joined_r0x0044c40d:
    if (local_154[0] == '\0') goto cf_common_exit_0044C477;
    goto LAB_0044c44d;
  }
  if (local_154[0] != '\0') {
LAB_0044c44d:
    puVar3 = st::fn_00709AF0
                       (local_c,(Global_mfRLoad_param_2Enum)local_8,local_154,0xffffffff,0,1,0,
                        nullptr);
    local_1c = *(undefined4 *)(STField<int>(puVar3,0x21) + param_2 * 4);
  }
cf_common_exit_0044C477:
  uVar4 = st::fn_00709470(g_sT3DSMAPContext_00807598,local_54,0x11,1,10,0xff);
  return uVar4;
}

// 0044C720 STAllPlayersC::GetScrObjList
#line 4 "decomp/ST.exe/functions/0044C720/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetScrObjList */

ushort * __thiscall
st::fn_0044C720
          (STAllPlayersC *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  bool bVar5;
  int iVar6;
  DArrayTy *pDVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  byte *puVar11;
  int iVar12;
  byte *puVar13;
  bool bVar14;
  InternalExceptionFrame local_68;
  byte local_24;
  undefined3 uStack_23;
  DArrayTy *local_20;
  int local_1c;
  int local_18;
  ushort *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  short *local_c;
  int local_8;

  iVar12 = 0;
  local_14 = nullptr;
  local_20 = nullptr;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar6 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar6 != -0x5001fff7) {
      iVar12 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x32ad,0,0,"%s",
                                  "STAllPlayersC::GetScrObjList");
      if (iVar12 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x32ae);
    }
    goto LAB_0044cb54;
  }
  if (param_1 < 1) {
LAB_0044cada:
    iVar6 = st::fn_006AD4D0("E:\\__titans\\wlad\\to_allpl.cpp",0x32a9,0,0,"%s",
                               "STAllPlayersC::GetScrObjList invalid mode");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    if (param_1 < 3) {
      st::fn_006EAD90
                (g_sT3DSMAPContext_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
      if (local_8 == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x3268);
      }
      pDVar7 = st::fn_006AE290(nullptr,0,4,1);
      bVar5 = false;
      local_18 = 0;
      local_20 = pDVar7;
      if (0 < local_8) {
        local_1c = 0;
        do {
          piVar3 = *(int **)(local_1c + 4 + (int)local_c);
          uVar9 = (uint)DAT_0080874d;
          if (piVar3[9] != uVar9) {
            uVar10 = piVar3[8];
            if (uVar10 < 0x1af) {
              if (uVar10 == 0x1ae) {
                local_f = 3;
LAB_0044c950:
                if (((uint)piVar3[9] < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[piVar3[9]].field_0022 < 8)))) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_24 = CONCAT31(uStack_23,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == DAT_0080874d) {
LAB_0044ca10:
                      iVar6 = 0;
                    }
                    else {
                      bVar2 = g_playerRelationMatrix[bVar1][uVar9];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
                        iVar6 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
                        iVar6 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 1)) {
                        iVar6 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar9][bVar1] != 1))
                        goto LAB_0044ca10;
                        iVar6 = 2;
                      }
                    }
                    bVar14 = iVar6 < 0;
                  }
                  else {
                    bVar14 = g_bulkInitializedRecords_008087C7[uVar9].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  }
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  if (((bVar14) && (iVar6 = (**(code **)(*piVar3 + 0xf8))(), iVar6 != 0)) &&
                     (iVar6 = (**(code **)(*piVar3 + 0xf4))(DAT_0080874d), iVar6 != 0)) {
                    local_10 = (undefined1)piVar3[9];
                    local_e = STField<undefined2>(piVar3,0x32);
                    st::fn_006AE1C0(pDVar7,&local_10);
                    bVar5 = true;
                  }
                }
              }
              else if (uVar10 == 0x14) goto LAB_0044c94c;
            }
            else if ((999 < uVar10) && (uVar10 < 0x3ea)) {
LAB_0044c94c:
              local_f = 1;
              goto LAB_0044c950;
            }
          }
          local_18 = local_18 + 1;
          local_1c = local_1c + 0x14;
        } while (local_18 < local_8);
      }
      st::fn_006A5E90(local_c);
      if (!bVar5) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x327d);
      }
      uVar9 = pDVar7->count * 4 + 3;
      *param_6 = uVar9;
      local_14 = st::fn_006AAC70(uVar9);
      *local_14 = (ushort)pDVar7->count;
      *(undefined1 *)(local_14 + 1) = (undefined1)param_1;
      puVar11 = (byte *)(pDVar7->data);
      uVar9 = (uint)*local_14 << 2;
    }
    else {
      if (param_1 != 3) goto LAB_0044cada;
      st::fn_006EAD90
                (g_sT3DSMAPContext_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
      if (local_8 == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x3291);
      }
      pDVar7 = st::fn_006AE290(nullptr,0,2,1);
      bVar5 = false;
      local_18 = 0;
      local_20 = pDVar7;
      if (0 < local_8) {
        do {
          iVar6 = *(int *)(iVar12 + 4 + (int)local_c);
          uVar9 = *(uint *)(iVar6 + 0x20);
          if (((uVar9 == 0x14) || ((999 < uVar9 && (uVar9 < 0x3ea)))) &&
             (*(uint *)(iVar6 + 0x24) == (uint)DAT_0080874d)) {
            st::fn_006AE1C0(pDVar7,(void *)(iVar6 + 0x32));
            bVar5 = true;
          }
          local_18 = local_18 + 1;
          iVar12 = iVar12 + 0x14;
        } while (local_18 < local_8);
      }
      st::fn_006AB060(&local_c);
      if (!bVar5) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x32a1);
      }
      uVar9 = pDVar7->count * 2 + 3;
      *param_6 = uVar9;
      local_14 = st::fn_006AAC70(uVar9);
      *local_14 = (ushort)pDVar7->count;
      *(undefined1 *)(local_14 + 1) = 3;
      puVar11 = (byte *)(pDVar7->data);
      uVar9 = (uint)*local_14 << 1;
    }
    puVar13 = (byte *)((int)local_14 + 3);
    memmove(puVar13, puVar11, uVar9); /* compiler REP MOVS byte copy */
    g_currentExceptionFrame = local_68.previous;
  }
LAB_0044cb54:
  puVar8 = local_14;
  if (local_20 != nullptr) {
    st::fn_006AE110(local_20);
  }
  return puVar8;
}

