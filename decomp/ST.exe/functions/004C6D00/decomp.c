#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bmove.cpp
   Diagnostic line evidence: 53 | 71 | 79 | 89 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004c6d00(STJellyGunC *param_1)

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
      iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bmove.cpp",0x4f,0,-5,"%s",
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
      iVar4 = param_1->field_0404 + 1;
      param_1->field_0404 = iVar4;
      /* ST_CALLSITE[004C6EB7]: CALL 0x00404e9e; direct=00404E9E TLOBaseTy::sub_004EA620 */
      if ((9 < iVar4) && (iVar4 = TLOBaseTy::sub_004EA620((TLOBaseTy *)param_1), iVar4 != 0)) {
        param_1->field_03FC = 1;
        param_1->field_0400 = 0;
      }
      iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
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
             ReportDebugMessage("E:\\__titans\\Artem\\TLO_bmove.cpp",0x35,0,-5,"%s",
                                "stop move error");
        if (local_EAX_244 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bmove.cpp",0x35);
      }
      else if (iVar4 == 1) {
        param_1->field_0400 = 1;
        thunk_FUN_00416270(param_1,(uint *)local_10,local_14,local_18);
        sVar2 = (short)param_1->field_05B0 * 0xc9 + 100;
        if (((local_10[0] == sVar2) &&
            (local_14[0] == (short)((short)param_1->field_05B4 * 0xc9 + 100))) &&
           (local_18[0] == (short)((short)param_1->field_05B8 * 200 + 100))) {
          param_1->field_03DC = 0;
          /* ST_CALLSITE[004C6DA6]: CALL 0x00405952; direct=00405952 sub_004167A0 */
          sub_004167A0(param_1);
        }
        else {
          /* ST_CALLSITE[004C6DD7]: CALL 0x00402455; direct=00402455 sub_00415B30 */
          sub_00415B30(param_1,local_10[0],local_14[0],local_18[0],sVar2,
                       (short)param_1->field_05B4 * 0xc9 + 100,
                       (short)param_1->field_05B8 * 200 + 100,param_1->field_0062);
        }
      }
    }
    if ((param_1->field_0400 == 0) || (param_1->field_03DC == 0)) goto cf_common_exit_004C6F47;
    /* ST_CALLSITE[004C6E3B]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    iVar4 = STJellyGunC::sub_00415ED0(param_1,&local_20,&local_1c);
    if (iVar4 != -1) {
      if (iVar4 != 0) goto cf_common_exit_004C6F47;
LAB_004c6e4d:
      param_1->field_03DC = 0;
      /* ST_CALLSITE[004C6E55]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      sub_004167A0(param_1);
      goto cf_common_exit_004C6F47;
    }
    local_EAX_371 =
         ReportDebugMessage("E:\\__titans\\Artem\\TLO_bmove.cpp",0x47,0,-5,"%s",
                            "move error");
    if (local_EAX_371 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  RaiseInternalException
            (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bmove.cpp",
             (int)unaff_EDI);
cf_common_exit_004C6F47:
  /* ST_CALLSITE[004C6F55]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
  STFishC::sub_004162F0((STFishC *)param_1,&local_6,&local_8,&local_a);
  param_1->field_05B0 = (int)local_6;
  param_1->field_05B4 = (int)local_8;
  param_1->field_05B8 = (int)local_a;
  if ((param_1->field_03DC == 0) && (param_1->field_03EC != 0)) {
    param_1->field_03EC = 0;
    thunk_FUN_004c6bb0(param_1,param_1->field_03F0,param_1->field_03F4,param_1->field_03F8);
  }
  return 0;
}

