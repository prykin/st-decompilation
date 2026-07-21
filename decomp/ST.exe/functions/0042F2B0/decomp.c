#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042F2BA MOVSX ECX,byte ptr [EBP + 0x8] | 0042F37C MOVSX
   ECX,byte ptr [EBP + 0x8] | 0042F3C7 MOVSX ECX,byte ptr [EBP + 0x8] | 0042F40F MOVSX ECX,byte ptr
   [EBP + 0x8] | 0042F468 MOVSX ECX,byte ptr [EBP + 0x8] | 0042F4B3 MOVSX ECX,byte ptr [EBP + 0x8] |
   0042F527 MOVSX ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
STAllPlayersC::UnRegisterObject
          (STAllPlayersC *this,char param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  code *pcVar1;
  void *pvVar2;
  STAllPlayersC *this_00;
  STGroupBoatC *pSVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  STGameObjC *pSVar7;
  DArrayTy *pDVar8;
  int iVar9;
  uint uVar10;
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

  iVar9 = (int)param_1;
  local_c = 0;
  local_14 = g_playerRuntime[iVar9].objects;
  local_1c = g_playerRuntime[iVar9].groups;
  local_20 = (DArrayTy *)g_playerRuntime[iVar9].field479_0x2e7;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar9 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar9 == -0x5001fff7) {
      return 0;
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x7cd,0,iVar9,"%s",
                               "STAllPlayersC::UnRegisterObject");
    if (iVar5 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x7ce);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((short)param_3 == -1) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x6cd);
  }
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
            1 << ((byte)(iVar9 + 0x41U) & 0x1f)) == 0) goto LAB_0042f42f;
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        iVar9 = param_1 * 0xa62;
        *(int *)&g_playerRuntime[param_1].field_0x33 =
             *(int *)&g_playerRuntime[param_1].field_0x33 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        iVar9 = param_1 * 0xa62;
        g_playerRuntime[param_1].field20_0x2f = g_playerRuntime[param_1].field20_0x2f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      iVar9 = param_1 * 0xa62;
      g_playerRuntime[param_1].field19_0x2b = g_playerRuntime[param_1].field19_0x2b + -1;
    }
    *(int *)(&g_playerRuntime[0].field_0x37 + iVar9) =
         *(int *)(&g_playerRuntime[0].field_0x37 + iVar9) + 1;
  }
LAB_0042f42f:
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
           1 << ((byte)(iVar9 - 0x32U) & 0x1f)) == 0)) goto LAB_0042f547;
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        iVar9 = param_1 * 0xa62;
        *(int *)&g_playerRuntime[param_1].field_0x43 =
             *(int *)&g_playerRuntime[param_1].field_0x43 + -1;
      }
      else {
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        iVar9 = param_1 * 0xa62;
        *(int *)&g_playerRuntime[param_1].field_0x3f =
             *(int *)&g_playerRuntime[param_1].field_0x3f + -1;
      }
    }
    else {
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      iVar9 = param_1 * 0xa62;
      *(int *)&g_playerRuntime[param_1].field_0x3b =
           *(int *)&g_playerRuntime[param_1].field_0x3b + -1;
    }
    *(int *)(&g_playerRuntime[0].field_0x47 + iVar9) =
         *(int *)(&g_playerRuntime[0].field_0x47 + iVar9) + 1;
  }
LAB_0042f547:
  pvVar2 = DAT_008016d4;
  if (param_4[8] == 0x14) {
    iVar9 = (int)param_1;
    *(short *)&g_playerRuntime[iVar9].field_0xd = *(short *)&g_playerRuntime[iVar9].field_0xd + -1;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar2,param_1,(uint)*(ushort *)&g_playerRuntime[iVar9].field_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if (iVar5 != 0x19) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar5 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar5 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar5 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar5 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar5 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar5 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar5 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f))
                        == 0) {
                      iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x73c,0,0,
                                                 "%s",
                                                 "STAllPlayersC::UnRegisterObject unknown boat type");
                      if (iVar9 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      *(int *)&g_playerRuntime[iVar9].field_0xbb =
                           *(int *)&g_playerRuntime[iVar9].field_0xbb + -1;
                      if ((param_5 != 0xfe) &&
                         (*(int *)&g_playerRuntime[iVar9].field_0xc3 =
                               *(int *)&g_playerRuntime[iVar9].field_0xc3 + 1, param_5 != 0xff)) {
                        *(int *)&g_playerRuntime[param_5].field_0xc7 =
                             *(int *)&g_playerRuntime[param_5].field_0xc7 + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_playerRuntime[iVar9].field_0xab =
                         *(int *)&g_playerRuntime[iVar9].field_0xab + -1;
                    if ((param_5 != 0xfe) &&
                       (*(int *)&g_playerRuntime[iVar9].field_0xb3 =
                             *(int *)&g_playerRuntime[iVar9].field_0xb3 + 1, param_5 != 0xff)) {
                      *(int *)&g_playerRuntime[param_5].field_0xb7 =
                           *(int *)&g_playerRuntime[param_5].field_0xb7 + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_playerRuntime[iVar9].field_0x9b =
                       *(int *)&g_playerRuntime[iVar9].field_0x9b + -1;
                  if ((param_5 != 0xfe) &&
                     (*(int *)&g_playerRuntime[iVar9].field_0xa3 =
                           *(int *)&g_playerRuntime[iVar9].field_0xa3 + 1, param_5 != 0xff)) {
                    *(int *)&g_playerRuntime[param_5].field_0xa7 =
                         *(int *)&g_playerRuntime[param_5].field_0xa7 + 1;
                  }
                }
              }
              else {
                *(int *)&g_playerRuntime[iVar9].field_0x8b =
                     *(int *)&g_playerRuntime[iVar9].field_0x8b + -1;
                if ((param_5 != 0xfe) &&
                   (*(int *)&g_playerRuntime[iVar9].field_0x93 =
                         *(int *)&g_playerRuntime[iVar9].field_0x93 + 1, param_5 != 0xff)) {
                  *(int *)&g_playerRuntime[param_5].field_0x97 =
                       *(int *)&g_playerRuntime[param_5].field_0x97 + 1;
                }
              }
            }
            else {
              *(int *)&g_playerRuntime[iVar9].field_0x7b =
                   *(int *)&g_playerRuntime[iVar9].field_0x7b + -1;
              if ((param_5 != 0xfe) &&
                 (*(int *)&g_playerRuntime[iVar9].field_0x83 =
                       *(int *)&g_playerRuntime[iVar9].field_0x83 + 1, param_5 != 0xff)) {
                *(int *)&g_playerRuntime[param_5].field_0x87 =
                     *(int *)&g_playerRuntime[param_5].field_0x87 + 1;
              }
            }
          }
          else {
            *(int *)&g_playerRuntime[iVar9].field_0x6b =
                 *(int *)&g_playerRuntime[iVar9].field_0x6b + -1;
            if ((param_5 != 0xfe) &&
               (*(int *)&g_playerRuntime[iVar9].field_0x73 =
                     *(int *)&g_playerRuntime[iVar9].field_0x73 + 1, param_5 != 0xff)) {
              *(int *)&g_playerRuntime[param_5].field_0x77 =
                   *(int *)&g_playerRuntime[param_5].field_0x77 + 1;
            }
          }
        }
        else {
          *(int *)&g_playerRuntime[iVar9].field_0x5b =
               *(int *)&g_playerRuntime[iVar9].field_0x5b + -1;
          if ((param_5 != 0xfe) &&
             (*(int *)&g_playerRuntime[iVar9].field_0x63 =
                   *(int *)&g_playerRuntime[iVar9].field_0x63 + 1, param_5 != 0xff)) {
            *(int *)&g_playerRuntime[param_5].field_0x67 =
                 *(int *)&g_playerRuntime[param_5].field_0x67 + 1;
          }
        }
      }
      else {
        *(int *)&g_playerRuntime[iVar9].field_0x4b = *(int *)&g_playerRuntime[iVar9].field_0x4b + -1
        ;
        if ((param_5 != 0xfe) &&
           (*(int *)&g_playerRuntime[iVar9].field_0x53 =
                 *(int *)&g_playerRuntime[iVar9].field_0x53 + 1, param_5 != 0xff)) {
          *(int *)&g_playerRuntime[param_5].field_0x57 =
               *(int *)&g_playerRuntime[param_5].field_0x57 + 1;
        }
      }
    }
  }
  pvVar2 = DAT_008016d4;
  if (param_4[8] == 1000) {
    iVar9 = (int)param_1;
    *(short *)&g_playerRuntime[iVar9].field_0xd = *(short *)&g_playerRuntime[iVar9].field_0xd + -1;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar2,param_1,(uint)*(ushort *)&g_playerRuntime[iVar9].field_0xd);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if (iVar5 == 0x33) {
      *(int *)&g_playerRuntime[iVar9].field317_0x15b =
           *(int *)&g_playerRuntime[iVar9].field317_0x15b + -1;
    }
    else if (iVar5 == 0x62) {
      *(int *)&g_playerRuntime[iVar9].field320_0x15f =
           *(int *)&g_playerRuntime[iVar9].field320_0x15f + -1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar5 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar5 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar5 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0)
              {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar5 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0
                   ) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar5 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) ==
                      0) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar5 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f))
                        == 0) {
                      iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x797,0,0,
                                                 "%s",
                                                 "STAllPlayersC::UnRegisterObject unknown object type");
                      if (iVar9 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                    }
                    else {
                      *(int *)&g_playerRuntime[iVar9].field_0x14b =
                           *(int *)&g_playerRuntime[iVar9].field_0x14b + -1;
                      if ((param_5 != 0xfe) &&
                         (*(int *)&g_playerRuntime[iVar9].field_0x153 =
                               *(int *)&g_playerRuntime[iVar9].field_0x153 + 1, param_5 != 0xff)) {
                        *(int *)&g_playerRuntime[param_5].field_0x157 =
                             *(int *)&g_playerRuntime[param_5].field_0x157 + 1;
                      }
                    }
                  }
                  else {
                    *(int *)&g_playerRuntime[iVar9].field_0x13b =
                         *(int *)&g_playerRuntime[iVar9].field_0x13b + -1;
                    if ((param_5 != 0xfe) &&
                       (*(int *)&g_playerRuntime[iVar9].field_0x143 =
                             *(int *)&g_playerRuntime[iVar9].field_0x143 + 1, param_5 != 0xff)) {
                      *(int *)&g_playerRuntime[param_5].field_0x147 =
                           *(int *)&g_playerRuntime[param_5].field_0x147 + 1;
                    }
                  }
                }
                else {
                  *(int *)&g_playerRuntime[iVar9].field_0x12b =
                       *(int *)&g_playerRuntime[iVar9].field_0x12b + -1;
                  if ((param_5 != 0xfe) &&
                     (*(int *)&g_playerRuntime[iVar9].field_0x133 =
                           *(int *)&g_playerRuntime[iVar9].field_0x133 + 1, param_5 != 0xff)) {
                    *(int *)&g_playerRuntime[param_5].field_0x137 =
                         *(int *)&g_playerRuntime[param_5].field_0x137 + 1;
                  }
                }
              }
              else {
                *(int *)&g_playerRuntime[iVar9].field_0x11b =
                     *(int *)&g_playerRuntime[iVar9].field_0x11b + -1;
                if ((param_5 != 0xfe) &&
                   (*(int *)&g_playerRuntime[iVar9].field_0x123 =
                         *(int *)&g_playerRuntime[iVar9].field_0x123 + 1, param_5 != 0xff)) {
                  *(int *)&g_playerRuntime[param_5].field_0x127 =
                       *(int *)&g_playerRuntime[param_5].field_0x127 + 1;
                }
              }
            }
            else {
              *(int *)&g_playerRuntime[iVar9].field_0x10b =
                   *(int *)&g_playerRuntime[iVar9].field_0x10b + -1;
              if ((param_5 != 0xfe) &&
                 (*(int *)&g_playerRuntime[iVar9].field_0x113 =
                       *(int *)&g_playerRuntime[iVar9].field_0x113 + 1, param_5 != 0xff)) {
                *(int *)&g_playerRuntime[param_5].field_0x117 =
                     *(int *)&g_playerRuntime[param_5].field_0x117 + 1;
              }
            }
          }
          else {
            *(int *)&g_playerRuntime[iVar9].field_0xfb =
                 *(int *)&g_playerRuntime[iVar9].field_0xfb + -1;
            if ((param_5 != 0xfe) &&
               (*(int *)&g_playerRuntime[iVar9].field_0x103 =
                     *(int *)&g_playerRuntime[iVar9].field_0x103 + 1, param_5 != 0xff)) {
              *(int *)&g_playerRuntime[param_5].field_0x107 =
                   *(int *)&g_playerRuntime[param_5].field_0x107 + 1;
            }
          }
        }
        else {
          *(int *)&g_playerRuntime[iVar9].field_0xeb =
               *(int *)&g_playerRuntime[iVar9].field_0xeb + -1;
          if ((param_5 != 0xfe) &&
             (*(int *)&g_playerRuntime[iVar9].field_0xf3 =
                   *(int *)&g_playerRuntime[iVar9].field_0xf3 + 1, param_5 != 0xff)) {
            *(int *)&g_playerRuntime[param_5].field_0xf7 =
                 *(int *)&g_playerRuntime[param_5].field_0xf7 + 1;
          }
        }
      }
      else {
        *(int *)&g_playerRuntime[iVar9].field_0xdb = *(int *)&g_playerRuntime[iVar9].field_0xdb + -1
        ;
        if ((param_5 != 0xfe) &&
           (*(int *)&g_playerRuntime[iVar9].field_0xe3 =
                 *(int *)&g_playerRuntime[iVar9].field_0xe3 + 1, param_5 != 0xff)) {
          *(int *)&g_playerRuntime[param_5].field_0xe7 =
               *(int *)&g_playerRuntime[param_5].field_0xe7 + 1;
        }
      }
    }
    else {
      *(int *)&g_playerRuntime[iVar9].field_0xcb = *(int *)&g_playerRuntime[iVar9].field_0xcb + -1;
      if ((param_5 != 0xfe) &&
         (*(int *)&g_playerRuntime[iVar9].field_0xd3 =
               *(int *)&g_playerRuntime[iVar9].field_0xd3 + 1, param_5 != 0xff)) {
        *(int *)&g_playerRuntime[param_5].field_0xd7 =
             *(int *)&g_playerRuntime[param_5].field_0xd7 + 1;
      }
    }
  }
  this_00 = local_18;
  pSVar7 = GetObjPtr(local_18,param_1,param_3,CASE_1);
  if (pSVar7 != (STGameObjC *)param_4) {
    RaiseInternalException
              (-0x5001fff9,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x7a3);
  }
  if ((short)param_2 != -1) {
    local_10 = thunk_FUN_0042b760(param_1,param_2);
    if (local_10 == (STGroupBoatC *)0x0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a5);
    }
    iVar9 = thunk_FUN_004237d0(local_10,(short)param_3);
    if (iVar9 == 0) {
      RaiseInternalException
                (-0x5001fffd,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x7a6);
    }
  }
  thunk_FUN_00440820(_param_1,param_3);
  DelObjFromTmps(this_00,DAT_0080874d,param_4[8],param_1,param_3);
  DelObjFromSaveTmps(this_00,param_4[8],param_1,(short)param_3);
  pSVar3 = local_10;
  pDVar8 = local_14;
  uVar10 = param_3;
  if ((short)param_2 != -1) {
    (*local_10->vtable->vfunc_04)(param_3);
    Library::DKW::TBL::FUN_006ae140(&local_14->flags,param_3 & 0xffff,&local_c);
    sVar4 = thunk_FUN_004233c0((int)pSVar3);
    if ((sVar4 != 0) || (iVar9 = thunk_FUN_004233a0((int)pSVar3), iVar9 != 0)) goto LAB_00430018;
    thunk_FUN_0054cf70(PTR_00802a38,pSVar3->field_0008);
    pDVar8 = local_1c;
    uVar10 = param_2;
  }
  Library::DKW::TBL::FUN_006ae140(&pDVar8->flags,uVar10 & 0xffff,&local_c);
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00430018:
  iVar9 = (**(code **)(*param_4 + 0x2c))();
  pDVar8 = local_20;
  if ((iVar9 == 0x1d) && (local_20 != (DArrayTy *)0x0)) {
    local_24 = local_20->count;
    uVar10 = 0;
    if (0 < (int)local_24) {
      while( true ) {
        DArrayGetElement(pDVar8,uVar10,&local_8);
        if ((short)local_8 == (short)param_3) break;
        uVar10 = uVar10 + 1;
        if ((int)local_24 <= (int)uVar10) {
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      local_8 = 0xffff;
      Library::DKW::TBL::FUN_006ae140(&pDVar8->flags,uVar10,&local_8);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

