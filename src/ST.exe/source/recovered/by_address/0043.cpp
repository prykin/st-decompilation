#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0043.cpp

// 00430910 FUN_00430910
#line 4 "decomp/ST.exe/functions/00430910/decomp.c"
undefined4 st::fn_00430910(int param_1)

{
  if (param_1 == 0xdc) {
    return 5;
  }
  if (param_1 != 0xdd) {
    if (param_1 != 0xde) {
      return 1;
    }
    return 0x14;
  }
  return 3;
}

// 004353B0 FUN_004353b0
#line 4 "decomp/ST.exe/functions/004353B0/decomp.c"
void st::fn_004353B0(uint param_1,uint param_2,uint param_3)

{
  STGameObjC *pSVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint uVar2;
  char objPtr;

  uVar2 = (uint)DAT_0080874d;
  if (((g_packedRecords_A62x8[uVar2].field200_0x203 == 1) &&
      (g_packedRecords_A62x8[uVar2].field149_0x1b3 == 0x19a)) &&
     (objPtr = (char)param_1, *(int *)&g_packedRecords_A62x8[uVar2].field150_0x1b7 == (int)objPtr))
  {
    st::fn_006ACC70((DArrayTy *)g_packedRecords_A62x8[uVar2].field155_0x1bd,0,
                     (void *)((int)&param_1 + 2));
    if (STPiece<2,2>(param_1) == (ushort)param_2) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_2,CASE_1);
      pSVar1->vfunc_E8(0);
      st::fn_006AE140
                ((DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field155_0x1bd,0,&param_3);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_3,CASE_1);
      st::fn_004042C8(pSVar1);
      pSVar1->vfunc_E8(1);
      st::fn_00404C55(CASE_4,0);
      st::fn_00404C55(CASE_5,0);
    }
  }
  return;
}

// 004357B0 FUN_004357b0
#line 1 "decomp/ST.exe/functions/004357B0/decomp.c"

int st::fn_004357B0(char playerId,AiPlrClassTy *aiPlayer)

{
  g_packedRecords_A62x8[playerId].field1_0x1 = (int)aiPlayer;
  return 0;
}

// 004357F0 FUN_004357f0
#line 1 "decomp/ST.exe/functions/004357F0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00652810 -> 004357F0 @ 00653049 | 00652810 -> 004357F0 @ 00653192 | 00652810 ->
   004357F0 @ 00656668 | 00652810 -> 004357F0 @ 0065689D | 00652810 -> 004357F0 @ 00656950 |
   00652810 -> 004357F0 @ 006569FA | 00652810 -> 004357F0 @ 00656D9B | 00652810 -> 004357F0 @
   00656E60 | 00661CA0 -> 004357F0 @ 00661CE6 */

AiPlrClassTy * st::fn_004357F0(char playerId)

{
  return (AiPlrClassTy *)g_packedRecords_A62x8[playerId].field1_0x1;
}

// 00435820 FUN_00435820
#line 1 "decomp/ST.exe/functions/00435820/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 00435820 returns return of ST3DSMAPContext::sub_006EB350 @ 0043583B */

int st::fn_00435820(int param_1,int param_2)

{
  int iVar1;

  iVar1 = st::fn_006EB350(g_sT3DSMAPContext_00807598,param_1,param_2,0xe,1);
  return iVar1;
}

// 00435850 FUN_00435850
#line 4 "decomp/ST.exe/functions/00435850/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00435858 MOVSX ESI,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=2, ignored=1, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=004455C0 @ 00445752 -> read as AX on every CFG path | 0054C740 @
   0054C8A3 -> killed on every CFG path | 00667D90 @ 00667E6B -> read as AX on every CFG path */

ushort st::fn_00435850(char param_1,int param_2,int *param_3)

{
  dword index;
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_2c;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [4];
  int local_c;
  DArrayTy *local_8;

  iVar2 = (int)param_1;
  local_8 = (DArrayTy *)g_packedRecords_A62x8[iVar2].field2_0x5;
  index = local_8->count;
  uVar1 = index;
  while (index = index - 1, -1 < (int)index) {
    st::fn_006ACC70(local_8,index,&local_c);
    if (local_c == 0) {
      uVar1 = index;
    }
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_24 = uVar1 & 0xffff;
  local_2c = 1;
  local_34 = iVar2;
  g_playSystem_00802A38->vfunc_08(0x10ff,(short)local_10,(short)&param_1,(short)local_38,0);
  if (param_2 == 1) {
    st::fn_004037A6(_param_1);
  }
  if (param_3 != nullptr) {
    *param_3 = _param_1;
  }
  return (ushort)uVar1;
}

// 00435B90 FUN_00435b90
#line 4 "decomp/ST.exe/functions/00435B90/decomp.c"
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00435B90_param_3Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2D=45;CASE_4D=77;CASE_4E=78

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00435930 -> 00435B90 @ 00435B00 */

short st::fn_00435B90(uint param_1,DArrayTy *param_2,Global_sub_00435B90_param_3Enum param_3,
                  int *param_4,undefined4 param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  dword dVar3;
  int *arg_2;
  short sVar4;
  STGameObjC *pSVar5;
  undefined4 uVar6;
  int iVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint uVar8;
  byte objPtr;
  bool bVar9;
  uint local_10;
  int local_c;

  arg_2 = param_4;
  uVar8 = param_1;
  dVar3 = param_2->count;
  local_10 = 0;
  local_c = 0;
  objPtr = (byte)param_1;
  if ((param_4 != nullptr) &&
     ((7 < objPtr ||
      ((g_playSystem_00802A38 != nullptr &&
       (7 < g_bulkInitializedRecords_008087C7[(char)objPtr].field_0022)))))) {
    return 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = nullptr;
  if (0 < (int)dVar3) {
    do {
      st::fn_006ACC70(param_2,(uint)param_4,&param_1);
      if ((short)param_1 != -1) {
        local_10 = param_1;
        local_c = local_c + 1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + 1);
    } while ((int)param_4 < (int)dVar3);
    if (local_c == 1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)local_10,CASE_1);
      uVar6 = (*pSVar5->vtable->vfunc_28)(param_3,arg_2,param_5,param_6);
      return (short)uVar6;
    }
  }
  switch(param_3) {
  case CASE_0:
    if ((arg_2 == nullptr) ||
       (((iVar7 = arg_2[8], iVar7 != 0x14 && (iVar7 != 1000)) && (iVar7 != 0x3e9)))) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = nullptr;
      if ((int)dVar3 < 1) {
        return 0;
      }
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
          if ((short)uVar6 == 5) {
            return 5;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*arg_2 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call,stack_slot_reuse]: expected typed vtable/callback call with explicit __thiscall receiver; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((((iVar7 == 99) || (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x52)) ||
        (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x5f)) &&
       (param_4 = nullptr, 0 < (int)dVar3)) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1e) {
            return 0x1e;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    bVar1 = *(byte *)(arg_2 + 9);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = STReplaceLowByte((uint32_t)(param_3), (uint8_t)(bVar1));
    if (DAT_00808a8f == '\0') {
      if (bVar1 == objPtr) {
LAB_004366b0:
        iVar7 = 0;
      }
      else {
        uVar8 = uVar8 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar8];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar8][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar8][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar8][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar8][bVar1] != 1)) goto LAB_004366b0;
          iVar7 = 2;
        }
      }
      bVar9 = iVar7 < 0;
    }
    else {
      bVar9 = g_bulkInitializedRecords_008087C7[uVar8 & 0xff].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if (!bVar9) {
      if (arg_2[8] != 0x14) {
        if ((arg_2[8] != 0x3e9) && (arg_2[9] == (int)(char)objPtr)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0x2c))();
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((iVar7 == 0x33) && (param_4 = nullptr, 0 < (int)dVar3)) {
            do {
              st::fn_006ACC70(param_2,(uint)param_4,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
                uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
                if ((short)uVar6 == 0x18) {
                  return 0x18;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0x2c))();
          /* ST_PSEUDO[raw_indirect_call,stack_slot_reuse]: expected typed vtable/callback call with explicit __thiscall receiver; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((iVar7 == 0x37) || (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x6c)) &&
             (param_4 = nullptr, 0 < (int)dVar3)) {
            do {
              st::fn_006ACC70(param_2,(uint)param_4,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
                uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
                if ((short)uVar6 == 0x1d) {
                  return 0x1d;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0x2c))();
          /* ST_PSEUDO[raw_indirect_call,stack_slot_reuse]: expected typed vtable/callback call with explicit __thiscall receiver; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((((iVar7 == 0x38) || (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x39)) ||
              ((iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x4f ||
               (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x5e)))) &&
             (param_4 = nullptr, 0 < (int)dVar3)) {
            do {
              st::fn_006ACC70(param_2,(uint)param_4,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
                uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
                if ((short)uVar6 == 0x12) {
                  return 0x12;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0xec))();
          return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (**(code **)(*arg_2 + 0xec))();
        return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = nullptr;
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(param_2,(uint)param_4,&param_1);
          if ((ushort)param_1 != 0xffff) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
            uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
            if ((short)uVar6 == 0x17) {
              return 0x17;
            }
            if ((short)uVar6 == 0x1a) {
              return 0x1a;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = (int *)((int)param_4 + 1);
        } while ((int)param_4 < (int)dVar3);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(*arg_2 + 0xec))();
      return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*arg_2 + 0x2c))();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (iVar7 == 0x6c) {
      if (0 < (int)dVar3) {
        do {
          st::fn_006ACC70(param_2,(uint)param_4,&param_1);
          if ((ushort)param_1 != 0xffff) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
            uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
            if ((short)uVar6 == 7) {
              return 7;
            }
            if ((short)uVar6 == 0x1d) {
              return 0x1d;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = (int *)((int)param_4 + 1);
          if ((int)dVar3 <= (int)param_4) {
            return 0;
          }
        } while( true );
      }
    }
    else if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
          if ((short)uVar6 == 7) {
            return 7;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
switchD_00435c5c_caseD_1:
    return 0;
  default:
    goto switchD_00435c5c_caseD_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_2:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(2,arg_2,param_5,param_6);
          if ((short)uVar6 == 6) {
            return 6;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_3:
  case CASE_2B:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(param_3,arg_2,param_5,param_6);
          if ((short)uVar6 == 7) {
            return 7;
          }
          if ((short)uVar6 == 2) {
            return 2;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  case CASE_4:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(4,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x18) {
            return 0x18;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_5:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(5,arg_2,param_5,param_6);
          if ((short)uVar6 == 0xd) {
            return 0xd;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_6:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(6,arg_2,param_5,param_6);
          if ((short)uVar6 == 0xf) {
            return 0xf;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_7:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(7,arg_2,param_5,param_6);
          sVar4 = (short)uVar6;
          if (sVar4 == 9) {
            return 9;
          }
          if (sVar4 == 10) {
            return 10;
          }
          if (sVar4 == 0xb) {
            return 0xb;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_8:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(8,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x11) {
            return 0x11;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_9:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(9,arg_2,param_5,param_6);
          if ((short)uVar6 == 8) {
            return 8;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_A:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(10,arg_2,param_5,param_6);
          if ((short)uVar6 == 0xc) {
            return 0xc;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_D:
    if ((arg_2 != nullptr) && (param_4 = nullptr, 0 < (int)dVar3)) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0xd,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x17) {
            return 0x17;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_E:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0xe,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x14) {
            return 0x14;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 0x15;
  case CASE_10:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x10,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x16) {
            return 0x16;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_11:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x11,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x12) {
            return 0x12;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_12:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x12,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x13) {
            return 0x13;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_13:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x13,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1a) {
            return 0x1a;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_18:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x18,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1d) {
            return 0x1d;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_2D:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x2d,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x10) {
            return 0x10;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4D:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        st::fn_006ACC70(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = st::fn_004028BA(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x4d,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1d) {
            return 0x1d;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4E:
    return 0x1c;
  }
  return 1;
}

// 0043E420 FUN_0043e420
#line 4 "decomp/ST.exe/functions/0043E420/decomp.c"
void st::fn_0043E420(undefined4 *param_1,char param_2)

{
  int *piVar2;

  piVar2 = &g_packedRecords_A62x8[param_2].field18_0x2b;
  memmove(param_1, piVar2, 0x138); /* compiler REP MOVS byte copy */
  return;
}

// 0043E460 FUN_0043e460
#line 4 "decomp/ST.exe/functions/0043E460/decomp.c"
short st::fn_0043E460(char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;

  iVar7 = 0;
  sVar5 = 0;
  iVar1 = g_packedRecords_A62x8[param_1].field3_0x9;
  iVar2 = *(int *)(iVar1 + 0xc);
  sVar4 = 0;
  if (0 < iVar2) {
    do {
      sVar5 = sVar4;
      piVar3 = *(int **)(*(int *)(iVar1 + 0x1c) + iVar7 * 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((piVar3 != nullptr) && (iVar6 = (**(code **)(*piVar3 + 0xf8))(), iVar6 == 1)) {
        sVar5 = sVar5 + 1;
      }
      iVar7 = iVar7 + 1;
      sVar4 = sVar5;
    } while (iVar7 < iVar2);
  }
  return sVar5;
}

// 0043E640 FUN_0043e640
#line 4 "decomp/ST.exe/functions/0043E640/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043E640_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

short st::fn_0043E640(char param_1,Global_sub_0043E640_param_2Enum param_2,int param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  Global_sub_0043E640_param_2Enum GVar5;
  int iVar6;
  int iVar7;
  undefined1 local_c [4];
  int local_8;

  iVar7 = 0;
  sVar4 = 0;
  iVar1 = g_packedRecords_A62x8[param_1].field3_0x9;
  local_8 = *(int *)(iVar1 + 0xc);
  sVar3 = 0;
  if (0 < local_8) {
    do {
      sVar4 = sVar3;
      piVar2 = *(int **)(*(int *)(iVar1 + 0x1c) + iVar7 * 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((piVar2 != nullptr) && (GVar5 = (**(code **)(*piVar2 + 0x2c))(), GVar5 == param_2)) &&
         (iVar6 = (**(code **)(*piVar2 + 0xf8))(), iVar6 != 0)) {
        if (param_3 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0043e6d3:
          if ((param_4 == -1) ||
             (iVar6 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x1c) + iVar7 * 4) + 0x6c))(),
             iVar6 == param_4)) {
            sVar4 = sVar4 + 1;
          }
        }
        else {
          switch(param_2) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          case CASE_38:
          case CASE_39:
          case CASE_4F:
          case CASE_5E:
            if ((param_3 == 1) && (iVar6 = (**(code **)(*piVar2 + 0x88))(local_c), 0 < iVar6))
            goto LAB_0043e6d3;
          }
        }
      }
      iVar7 = iVar7 + 1;
      sVar3 = sVar4;
    } while (iVar7 < local_8);
  }
  return sVar4;
}

// 0043E9A0 FUN_0043e9a0
#line 4 "decomp/ST.exe/functions/0043E9A0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043E9A0_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

undefined4
st::fn_0043E9A0(char param_1,Global_sub_0043E9A0_param_2Enum param_2,short param_3,short param_4,
            short param_5,short param_6,short param_7,short param_8,int param_9,char param_10)

{
  int *piVar1;
  int iVar2;
  STWorldCell *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;

  local_8 = (int)param_3;
  local_c = param_6 + -1 + local_8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_6 = (int)param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_4 = param_7 + -1 + _param_6;
  iVar2 = (int)param_5;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_5 = param_8 + -1 + iVar2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar4 = g_worldGrid.sizeX + -1;
  if (iVar4 < local_c) {
    local_c = iVar4;
  }
  if (_param_6 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_6 = 0;
  }
  if (g_worldGrid.sizeY + -1 < _param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_4 = g_worldGrid.sizeY + -1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (g_worldGrid.sizeZ + -1 < _param_5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = g_worldGrid.sizeZ + -1;
  }
  iVar4 = g_worldGrid.sizeX * _param_6 + local_8 + (iVar2 + -1) * (int)g_worldGrid.planeStride;
  if (iVar2 <= _param_5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = _param_5 - iVar2;
    iVar2 = STReplaceLowWord((uint32_t)(iVar2), (uint16_t)(g_worldGrid.sizeX));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = _param_5 + 1;
    iVar6 = local_c;
    iVar7 = local_8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    do {
      iVar4 = iVar4 + g_worldGrid.planeStride;
      local_10 = iVar4 - (short)iVar2;
      if (_param_6 <= _param_4) {
        iVar5 = (_param_4 - _param_6) + 1;
        do {
          local_10 = local_10 + (short)iVar2;
          if (iVar7 <= iVar6) {
            iVar6 = (iVar6 - local_8) + 1;
            iVar2 = local_10 * 8 + -8;
            do {
              piVar1 = *(int **)((int)g_worldGrid.cells[1].objects + iVar2);
              pSVar3 = g_worldGrid.cells;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if ((((piVar1 != nullptr) && (piVar1[9] == (int)param_1)) && (piVar1 != nullptr)
                  ) && ((pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0x2c))(),
                        pSVar3 == (STWorldCell *)param_2 &&
                        (pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0xf8))(),
                        pSVar3 != nullptr)))) {
                if (param_9 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0043eb0f:
                  if ((param_10 == -1) ||
                     (pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0x6c))(),
                     pSVar3 == (STWorldCell *)(int)param_10)) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_3 = param_3 + 1;
                  }
                }
                else {
                  pSVar3 = (STWorldCell *)(param_2 - CASE_38);
                  switch(param_2) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  case CASE_38:
                  case CASE_39:
                  case CASE_4F:
                  case CASE_5E:
                    if ((param_9 == 1) &&
                       (pSVar3 = (STWorldCell *)(**(code **)(*piVar1 + 0x88))(local_14),
                       0 < (int)pSVar3)) goto LAB_0043eb0f;
                  }
                }
              }
              iVar6 = iVar6 + -1;
              iVar2 = iVar2 + 8;
            } while (iVar6 != 0);
            iVar2 = STReplaceLowWord((uint32_t)(pSVar3), (uint16_t)(g_worldGrid.sizeX));
            iVar6 = local_c;
            iVar7 = local_8;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  return STReplaceLowWord((uint32_t)(iVar2), (uint16_t)(param_3));
}

// 0043EC20 FUN_0043ec20
#line 4 "decomp/ST.exe/functions/0043EC20/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043EC20_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * st::fn_0043EC20(char param_1,Global_sub_0043EC20_param_2Enum param_2,short param_3,short param_4
                   ,short param_5,short param_6,short param_7,short param_8,int param_9,
                   char param_10)

{
  int *piVar1;
  DArrayTy *array;
  Global_sub_0043EC20_param_2Enum GVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;

  local_8 = (int)param_3;
  local_c = param_6 + -1 + local_8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_3 = (int)param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_6 = param_7 + -1 + _param_3;
  iVar5 = (int)param_5;
  iVar3 = param_8 + -1 + iVar5;
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (g_worldGrid.sizeX + -1 < local_c) {
    local_c = g_worldGrid.sizeX + -1;
  }
  if (_param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = 0;
  }
  if (g_worldGrid.sizeY + -1 < _param_6) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_6 = g_worldGrid.sizeY + -1;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (g_worldGrid.sizeZ + -1 < iVar3) {
    iVar3 = g_worldGrid.sizeZ + -1;
  }
  array = st::fn_006AE290(nullptr,0,2,1);
  iVar4 = g_worldGrid.sizeX * _param_3 + local_8 + (iVar5 + -1) * (int)g_worldGrid.planeStride;
  if (iVar5 <= iVar3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = (iVar3 - iVar5) + 1;
    do {
      iVar4 = iVar4 + g_worldGrid.planeStride;
      iVar3 = iVar4 - g_worldGrid.sizeX;
      local_10 = iVar4;
      if (_param_3 <= _param_6) {
        iVar5 = (_param_6 - _param_3) + 1;
        do {
          iVar3 = iVar3 + g_worldGrid.sizeX;
          if (local_8 <= local_c) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_4 = (local_c - local_8) + 1;
            iVar6 = iVar3 * 8 + -8;
            do {
              piVar1 = *(int **)((int)g_worldGrid.cells[1].objects + iVar6);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if ((((piVar1 != nullptr) && (piVar1[9] == (int)param_1)) && (piVar1 != nullptr)
                  ) && ((GVar2 = (**(code **)(*piVar1 + 0x2c))(), GVar2 == param_2 &&
                        (iVar4 = (**(code **)(*piVar1 + 0xf8))(), iVar4 != 0)))) {
                if (param_9 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0043eda0:
                  if ((param_10 == -1) ||
                     (iVar4 = (**(code **)(*piVar1 + 0x6c))(), iVar4 == param_10)) {
                    st::fn_006AE1C0(array,(void *)((int)piVar1 + 0x32));
                  }
                }
                else {
                  switch(param_2) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  case CASE_38:
                  case CASE_39:
                  case CASE_4F:
                  case CASE_5E:
                    if ((param_9 == 1) &&
                       (iVar4 = (**(code **)(*piVar1 + 0x88))(local_14), 0 < iVar4))
                    goto LAB_0043eda0;
                  }
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_4 = _param_4 + -1;
              iVar4 = local_10;
              iVar6 = iVar6 + 8;
            } while (_param_4 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  if (array->count == 0) {
    st::fn_006AE110(array);
    return nullptr;
  }
  return &array->flags;
}

// 0043F130 FUN_0043f130
#line 4 "decomp/ST.exe/functions/0043F130/decomp.c"
short st::fn_0043F130(char param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  byte local_18 [16];
  int local_8;

  iVar9 = 0;
  sVar5 = 0;
  iVar2 = g_packedRecords_A62x8[param_1].field3_0x9;
  local_8 = *(int *)(iVar2 + 0xc);
  sVar4 = 0;
  if (0 < local_8) {
    do {
      sVar5 = sVar4;
      piVar3 = *(int **)(*(int *)(iVar2 + 0x1c) + iVar9 * 4);
      if (piVar3 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar3 + 0x74))(local_18);
        pbVar8 = local_18;
        pbVar6 = param_2;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0043f1a0:
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0043f1a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0043f1a0;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_0043f1a5:
        if (iVar7 == 0) {
          sVar5 = sVar5 + 1;
        }
      }
      iVar9 = iVar9 + 1;
      sVar4 = sVar5;
    } while (iVar9 < local_8);
  }
  return sVar5;
}

// 0043F380 FUN_0043f380
#line 4 "decomp/ST.exe/functions/0043F380/decomp.c"
undefined4
st::fn_0043F380(char param_1,byte *param_2,short param_3,short param_4,short param_5,short param_6,
            short param_7,short param_8)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  STWorldCell *pSVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  byte local_20 [16];
  int local_10;
  int local_c;
  int local_8;

  local_8 = (int)param_3;
  local_c = param_6 + -1 + local_8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_3 = (int)param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_4 = param_7 + -1 + _param_3;
  iVar3 = (int)param_5;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_5 = param_8 + -1 + iVar3;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_6 = 0;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar6 = g_worldGrid.sizeX + -1;
  if (iVar6 < local_c) {
    local_c = iVar6;
  }
  if (_param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = 0;
  }
  if (g_worldGrid.sizeY + -1 < _param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_4 = g_worldGrid.sizeY + -1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (g_worldGrid.sizeZ + -1 < _param_5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = g_worldGrid.sizeZ + -1;
  }
  iVar6 = g_worldGrid.sizeX * _param_3 + local_8 + (iVar3 + -1) * (int)g_worldGrid.planeStride;
  if (iVar3 <= _param_5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = _param_5 - iVar3;
    iVar3 = STReplaceLowWord((uint32_t)(iVar3), (uint16_t)(g_worldGrid.sizeX));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_5 = _param_5 + 1;
    iVar8 = local_c;
    iVar10 = local_8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = 0;
    do {
      iVar6 = iVar6 + g_worldGrid.planeStride;
      local_10 = iVar6 - (short)iVar3;
      if (_param_3 <= _param_4) {
        iVar7 = (_param_4 - _param_3) + 1;
        do {
          local_10 = local_10 + (short)iVar3;
          if (iVar10 <= iVar8) {
            iVar8 = (iVar8 - local_8) + 1;
            iVar3 = local_10 * 8 + -8;
            do {
              piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar3);
              pSVar5 = g_worldGrid.cells;
              if ((piVar2 != nullptr) && (piVar2[9] == (int)param_1)) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(*piVar2 + 0x74))(local_20);
                pbVar9 = local_20;
                pbVar4 = param_2;
                do {
                  bVar1 = *pbVar4;
                  bVar11 = bVar1 < *pbVar9;
                  if (bVar1 != *pbVar9) {
LAB_0043f4c8:
                    pSVar5 = (STWorldCell *)((1 - (uint)bVar11) - (uint)(bVar11 != 0));
                    goto LAB_0043f4cd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar11 = bVar1 < pbVar9[1];
                  if (bVar1 != pbVar9[1]) goto LAB_0043f4c8;
                  pbVar4 = pbVar4 + 2;
                  pbVar9 = pbVar9 + 2;
                } while (bVar1 != 0);
                pSVar5 = nullptr;
LAB_0043f4cd:
                if (pSVar5 == nullptr) {
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_6 = param_6 + 1;
                }
              }
              iVar8 = iVar8 + -1;
              iVar3 = iVar3 + 8;
            } while (iVar8 != 0);
            iVar3 = STReplaceLowWord((uint32_t)(pSVar5), (uint16_t)(g_worldGrid.sizeX));
            iVar8 = local_c;
            iVar10 = local_8;
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  return STReplaceLowWord((uint32_t)(iVar3), (uint16_t)(param_6));
}

// 0043F580 FUN_0043f580
#line 4 "decomp/ST.exe/functions/0043F580/decomp.c"
uint * st::fn_0043F580(char param_1,byte *param_2,short param_3,short param_4,short param_5,
                   short param_6,short param_7,short param_8)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_24 [16];
  int local_14;
  int local_10;
  DArrayTy *local_c;
  int local_8;

  local_8 = (int)param_3;
  iVar7 = (int)param_5;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_3 = param_6 + -1 + local_8;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_6 = (int)param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_4 = param_7 + -1 + _param_6;
  iVar3 = param_8 + -1 + iVar7;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar5 = local_8;
  if (g_worldGrid.sizeX + -1 < _param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = g_worldGrid.sizeX + -1;
  }
  if (_param_6 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_6 = 0;
  }
  if (g_worldGrid.sizeY + -1 < _param_4) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_4 = g_worldGrid.sizeY + -1;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (g_worldGrid.sizeZ + -1 < iVar3) {
    iVar3 = g_worldGrid.sizeZ + -1;
  }
  local_c = st::fn_006AE290(nullptr,0,2,1);
  iVar6 = g_worldGrid.sizeX * _param_6 + iVar5 + (iVar7 + -1) * (int)g_worldGrid.planeStride;
  if (iVar7 <= iVar3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_8 = (iVar3 - iVar7) + 1;
    do {
      iVar6 = iVar6 + g_worldGrid.planeStride;
      local_14 = iVar6;
      if (_param_6 <= _param_4) {
        iVar3 = (_param_4 - _param_6) + 1;
        local_10 = iVar6 - g_worldGrid.sizeX;
        do {
          local_10 = local_10 + g_worldGrid.sizeX;
          if (iVar5 <= _param_3) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_7 = (_param_3 - local_8) + 1;
            iVar7 = local_10 * 8 + -8;
            do {
              piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar7);
              if ((piVar2 != nullptr) && (piVar2[9] == (int)param_1)) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(*piVar2 + 0x74))(local_24);
                pbVar8 = local_24;
                pbVar4 = param_2;
                do {
                  bVar1 = *pbVar4;
                  bVar9 = bVar1 < *pbVar8;
                  if (bVar1 != *pbVar8) {
LAB_0043f6e3:
                    iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_0043f6e8;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar9 = bVar1 < pbVar8[1];
                  if (bVar1 != pbVar8[1]) goto LAB_0043f6e3;
                  pbVar4 = pbVar4 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_0043f6e8:
                if (iVar5 == 0) {
                  st::fn_006AE1C0(local_c,(void *)((int)piVar2 + 0x32));
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              _param_7 = _param_7 + -1;
              iVar6 = local_14;
              iVar5 = local_8;
              iVar7 = iVar7 + 8;
            } while (_param_7 != 0);
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_8 = _param_8 + -1;
    } while (_param_8 != 0);
  }
  if (local_c->count == 0) {
    st::fn_006AE110(local_c);
    local_c = nullptr;
  }
  return &local_c->flags;
}

// 0043F7B0 FUN_0043f7b0
#line 4 "decomp/ST.exe/functions/0043F7B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0043F7B0 -> 006AE1C0 @ 0043F9F5 | 0043F7B0 -> 006AE1C0 @ 0043FB11 */

uint * st::fn_0043F7B0(byte param_1,int *param_2,uint *param_3,int param_4,int param_5,int *param_6,
                   int param_7,int param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  DArrayTy *array;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_14;
  int local_c;
  int local_8;

  bVar5 = param_1;
  local_8 = (int)param_3 - (int)param_6;
  iVar6 = param_4 + param_7;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = param_4 - param_7;
  iVar9 = param_5 - param_8;
  if (local_8 < 0) {
    local_8 = 0;
  }
  local_c = (int)param_3 + (int)param_6;
  if (g_worldGrid.sizeX + -1 < (int)param_3 + (int)param_6) {
    local_c = g_worldGrid.sizeX + -1;
  }
  if (param_4 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 0;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_7 = iVar6;
  if (g_worldGrid.sizeY + -1 < iVar6) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_7 = g_worldGrid.sizeY + -1;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  iVar6 = param_5 + param_8;
  if (g_worldGrid.sizeZ + -1 < param_5 + param_8) {
    iVar6 = g_worldGrid.sizeZ + -1;
  }
  array = st::fn_006AE290(nullptr,0xf,4,10);
  iVar8 = g_worldGrid.sizeX * param_4 + local_8 + (iVar9 + -1) * (int)g_worldGrid.planeStride;
  if (iVar9 <= iVar6) {
    local_14 = (iVar6 - iVar9) + 1;
    do {
      iVar8 = iVar8 + g_worldGrid.planeStride;
      iVar6 = iVar8 - g_worldGrid.sizeX;
      if (param_4 <= param_7) {
        iVar9 = (param_7 - param_4) + 1;
        do {
          iVar6 = iVar6 + g_worldGrid.sizeX;
          if (local_8 <= local_c) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            _param_1 = (local_c - local_8) + 1;
            iVar10 = iVar6 * 8 + -8;
            do {
              piVar3 = *(int **)((int)g_worldGrid.cells[1].objects + iVar10);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if ((piVar3 != nullptr) &&
                 ((((iVar7 = piVar3[8], param_6 = piVar3, iVar7 == 0x14 || (iVar7 == 1000)) ||
                   (iVar7 == 0x3e9)) && (param_2 != piVar3)))) {
                if (param_9 == 0) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar5) {
LAB_0043f9bd:
                      iVar7 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar5;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar4];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
                        iVar7 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1))
                        goto LAB_0043f9bd;
                        iVar7 = 2;
                      }
                    }
                    bVar11 = iVar7 < 0;
                  }
                  else {
                    bVar11 = g_bulkInitializedRecords_008087C7[bVar5].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  }
                  if (!bVar11) goto LAB_0043f9fa;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                else {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                if (iVar7 == 1) {
                  st::fn_006AE1C0(array,&param_6);
                }
              }
LAB_0043f9fa:
              piVar3 = *(int **)((int)g_worldGrid.cells[1].objects + iVar10 + 4);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              if (((piVar3 != nullptr) && (param_6 = piVar3, piVar3[8] == 0x1ae)) &&
                 (param_2 != piVar3)) {
                if (param_9 == 0) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                  param_8 = STReplaceLowByte((uint32_t)(param_8), (uint8_t)(bVar1));
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar5) {
LAB_0043fad9:
                      iVar7 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar5;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar4];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
                        iVar7 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1))
                        goto LAB_0043fad9;
                        iVar7 = 2;
                      }
                    }
                    bVar11 = iVar7 < 0;
                  }
                  else {
                    bVar11 = g_bulkInitializedRecords_008087C7[bVar5].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                  }
                  if (!bVar11) goto LAB_0043fb16;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                else {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                if (iVar7 == 1) {
                  st::fn_006AE1C0(array,&param_6);
                }
              }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0043fb16:
              _param_1 = _param_1 + -1;
              iVar10 = iVar10 + 8;
            } while (_param_1 != 0);
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (array->count == 0) {
    st::fn_006AE110(array);
    array = nullptr;
  }
  return &array->flags;
}

// 0043FC50 FUN_0043fc50
#line 1 "decomp/ST.exe/functions/0043FC50/decomp.c"

/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043FC50_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19
    */

void st::fn_0043FC50(Global_sub_0043FC50_param_1Enum param_1,int param_2)

{
  switch(param_1) {
  case CASE_1:
    if ((param_2 != 0) &&
       (g_packedRecords_A62x8[DAT_0080874d].field339_0x2a7 == g_playSystem_00802A38->field_00E4)) {
      return;
    }
    g_packedRecords_A62x8[DAT_0080874d].field339_0x2a7 = g_playSystem_00802A38->field_00E4;
    if (g_cPanel_00801688 == nullptr) {
      return;
    }
    st::fn_00405D03(g_cPanel_00801688,CASE_1);
    goto LAB_0043fd36;
  case CASE_2:
    if ((param_2 != 0) &&
       (g_packedRecords_A62x8[DAT_0080874d].field340_0x2ab == g_playSystem_00802A38->field_00E4)) {
      return;
    }
    g_packedRecords_A62x8[DAT_0080874d].field340_0x2ab = g_playSystem_00802A38->field_00E4;
LAB_0043fd36:
    if (g_cPanel_00801688 != nullptr) {
      st::fn_00405D03(g_cPanel_00801688,CASE_2);
      return;
    }
    break;
  case CASE_4:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field341_0x2af != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field341_0x2af = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,CASE_4);
      return;
    }
    break;
  case CASE_5:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field342_0x2b3 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field342_0x2b3 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,CASE_5);
      return;
    }
    break;
  case CASE_6:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field343_0x2b7 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field343_0x2b7 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,CASE_6);
      return;
    }
    break;
  case CASE_7:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field344_0x2bb != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field344_0x2bb = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,CASE_7);
      return;
    }
    break;
  case CASE_8:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field345_0x2bf != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field345_0x2bf = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,8);
      return;
    }
    break;
  case CASE_9:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field346_0x2c3 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field346_0x2c3 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,9);
      return;
    }
    break;
  case CASE_A:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field347_0x2c7 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field347_0x2c7 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,10);
      return;
    }
    break;
  case CASE_B:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field348_0x2cb != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field348_0x2cb = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,0xb);
      return;
    }
    break;
  case CASE_C:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field349_0x2cf != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field349_0x2cf = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,0xc);
      return;
    }
    break;
  case CASE_D:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field350_0x2d3 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field350_0x2d3 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,0xd);
      return;
    }
    break;
  case CASE_E:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field351_0x2d7 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field351_0x2d7 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,CASE_E);
      return;
    }
    break;
  case CASE_F:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field352_0x2db != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field352_0x2db = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,CASE_F);
      return;
    }
    break;
  case CASE_10:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field353_0x2df != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field353_0x2df = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,0x10);
      return;
    }
    break;
  case CASE_11:
    if (g_cPanel_00801688 != nullptr) {
      st::fn_00405D03(g_cPanel_00801688,0x11);
      return;
    }
    break;
  case CASE_12:
    if (((param_2 == 0) ||
        (g_packedRecords_A62x8[DAT_0080874d].field354_0x2e3 != g_playSystem_00802A38->field_00E4))
       && (g_packedRecords_A62x8[DAT_0080874d].field354_0x2e3 = g_playSystem_00802A38->field_00E4,
          g_cPanel_00801688 != nullptr)) {
      st::fn_00405D03(g_cPanel_00801688,0x12);
      return;
    }
    break;
  case CASE_13:
    if (g_cPanel_00801688 != nullptr) {
      st::fn_00405D03(g_cPanel_00801688,0x13);
    }
  }
  return;
}

