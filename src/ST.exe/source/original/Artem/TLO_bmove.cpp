#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_bmove.cpp

// 004C6BB0 FUN_004c6bb0
#line 4 "decomp/ST.exe/functions/004C6BB0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bmove.cpp
   Diagnostic line evidence: 28 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall
st::fn_004C6BB0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  STField<undefined4>(this,0x3e0) = param_1;
  STField<undefined4>(this,1000) = param_3;
  STField<undefined4>(this,0x3e4) = param_2;
  STField<undefined4>(this,0x3dc) = 1;
  STField<undefined4>(this,0x3fc) = 0;
  STField<undefined4>(this,0x400) = 0;
  STField<undefined4>(this,0x404) = 0;
  iVar1 = st::fn_00404318
                    (static_cast<AnonReceiver_004167A0 *>(this),STField<short>(this,0x3e0),(short)param_2,(short)param_3);
  if (iVar1 == -1) {
    st::fn_006A5E40
              (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_bmove.cpp"),0x1c);
  }
  else if (iVar1 == 2) {
    STField<undefined4>(this,0x3dc) = 0;
    return 0;
  }
  return 0;
}

// 004C6D00 FUN_004c6d00
#line 4 "decomp/ST.exe/functions/004C6D00/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bmove.cpp
   Diagnostic line evidence: 53 | 71 | 79 | 89 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004C6D00(STJellyGunC *param_1)

{
  short sVar2;
  int iVar4;
  int local_EAX_244;
  int local_EAX_371;
  uint uVar5;
  int iVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  undefined4 local_20;
  int local_1c;
  short local_18 [2];
  short local_14 [2];
  short local_10 [3];
  short local_a;
  short local_8;
  short local_6;

  if (param_1->field_03FC == 0) {
    /* ST_CALLSITE[004C6E8B]: CALL dword ptr [EAX + 0x1c] */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar4 = (*param_1->vtable->MoveStep)((STGameObjC *)param_1,unaff_EDI);
    if (iVar4 == -1) {
      iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_bmove.cpp"),0x4f,0,-5,st::mutable_c_string("%s"),
                                 "move error");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      unaff_EDI = (int *)0x4f;
    }
    else {
      if (iVar4 == 1) goto LAB_004c6e4d;
      if (iVar4 != 2) goto cf_common_exit_004C6F47;
      iVar4 = st::machine_word_boundary_cast<int>(param_1->field_0404 + 1);
      param_1->field_0404 = iVar4;
      /* ST_CALLSITE[004C6EB7]: CALL 0x00404e9e; direct=00404E9E TLOBaseTy::sub_004EA620 */
      if ((9 < iVar4) && (iVar4 = st::fn_00404E9E((TLOBaseTy *)param_1), iVar4 != 0)) {
        param_1->field_03FC = 1;
        param_1->field_0400 = 0;
      }
      iVar4 = st::fn_00404318
                        ((AnonReceiver_004167A0 *)param_1,param_1->field_03E0,param_1->field_03E4,
                         param_1->field_03E8);
      if (iVar4 != -1) {
        if (iVar4 == 2) {
          param_1->field_03DC = 0;
        }
        goto cf_common_exit_004C6F47;
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      unaff_EDI = (int *)0x59;
    }
  }
  else {
    if (param_1->field_0400 == 0) {
      /* ST_CALLSITE[004C6D29]: CALL dword ptr [EAX + 0x20] */
      iVar4 = param_1->vfunc_20();
      if (iVar4 == -1) {
        local_EAX_244 =
             st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_bmove.cpp"),0x35,0,-5,st::mutable_c_string("%s"),
                                "stop move error");
        if (local_EAX_244 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_bmove.cpp"),0x35);
      }
      else if (iVar4 == 1) {
        param_1->field_0400 = 1;
        st::fn_004031E3(param_1,(uint *)local_10,local_14,local_18);
        sVar2 = (short)param_1->field_05B0 * 0xc9 + 100;
        if (((local_10[0] == sVar2) &&
            (local_14[0] == (short)((short)param_1->field_05B4 * 0xc9 + 100))) &&
           (local_18[0] == (short)((short)param_1->field_05B8 * 200 + 100))) {
          param_1->field_03DC = 0;
          /* ST_CALLSITE[004C6DA6]: CALL 0x00405952; direct=00405952 sub_004167A0 */
          st::fn_00405952(param_1);
        }
        else {
          /* ST_CALLSITE[004C6DD7]: CALL 0x00402455; direct=00402455 sub_00415B30 */
          st::fn_00402455(param_1,local_10[0],local_14[0],local_18[0],sVar2,
                       (short)param_1->field_05B4 * 0xc9 + 100,
                       (short)param_1->field_05B8 * 200 + 100,param_1->field_0062);
        }
      }
    }
    if ((param_1->field_0400 == 0) || (param_1->field_03DC == 0)) goto cf_common_exit_004C6F47;
    /* ST_CALLSITE[004C6E3B]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    iVar4 = st::fn_00402847(param_1,&local_20,&local_1c);
    if (iVar4 != -1) {
      if (iVar4 != 0) goto cf_common_exit_004C6F47;
LAB_004c6e4d:
      param_1->field_03DC = 0;
      /* ST_CALLSITE[004C6E55]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      st::fn_00405952(param_1);
      goto cf_common_exit_004C6F47;
    }
    local_EAX_371 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_bmove.cpp"),0x47,0,-5,st::mutable_c_string("%s"),
                            "move error");
    if (local_EAX_371 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_006A5E40
            (-5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_bmove.cpp"),
             (int)unaff_EDI);
cf_common_exit_004C6F47:
  /* ST_CALLSITE[004C6F55]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
  st::fn_00405F0B((STFishC *)param_1,&local_6,&local_8,&local_a);
  param_1->field_05B0 = (int)local_6;
  param_1->field_05B4 = (int)local_8;
  param_1->field_05B8 = (int)local_a;
  if ((param_1->field_03DC == 0) && (param_1->field_03EC != 0)) {
    param_1->field_03EC = 0;
    st::fn_00405CBD(param_1,param_1->field_03F0,param_1->field_03F4,param_1->field_03F8);
  }
  return 0;
}

