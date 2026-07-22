#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bmove.cpp
   Diagnostic line evidence: 53 | 71 | 79 | 89 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004c6d00(STJellyGunC *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
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
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar3 = (*param_1->vtable->MoveStep)((STGameObjC *)param_1,unaff_EDI);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bmove.cpp",0x4f,0,-5,"%s",
                                 "move error");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x4f;
    }
    else {
      if (iVar3 == 1) goto LAB_004c6e4d;
      if (iVar3 != 2) goto cf_common_exit_004C6F47;
      iVar3 = param_1->field_0404 + 1;
      param_1->field_0404 = iVar3;
      if ((9 < iVar3) && (iVar3 = TLOBaseTy::sub_004EA620((TLOBaseTy *)param_1), iVar3 != 0)) {
        param_1->field_03FC = 1;
        param_1->field_0400 = 0;
      }
      iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                        ((AnonReceiver_00417FF0 *)param_1,param_1->field_03E0,param_1->field_03E4,
                         param_1->field_03E8);
      if (iVar3 != -1) {
        if (iVar3 == 2) {
          param_1->field_03DC = 0;
        }
        goto cf_common_exit_004C6F47;
      }
      iVar3 = 0x59;
    }
  }
  else {
    if (param_1->field_0400 == 0) {
      iVar3 = (*param_1->vtable->vfunc_20)();
      if (iVar3 == -1) {
        iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bmove.cpp",0x35,0,-5,
                                   "%s","stop move error");
        if (iVar3 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bmove.cpp",0x35);
      }
      else if (iVar3 == 1) {
        param_1->field_0400 = 1;
        thunk_FUN_00416270(param_1,local_10,(int *)local_14,(int *)local_18);
        sVar2 = *(short *)&param_1->field_05B0 * 0xc9 + 100;
        if (((local_10[0] == sVar2) &&
            (local_14[0] == (short)(*(short *)&param_1->field_05B4 * 0xc9 + 100))) &&
           (local_18[0] == (short)(*(short *)&param_1->field_05B8 * 200 + 100))) {
          param_1->field_03DC = 0;
          sub_004167A0(param_1);
        }
        else {
          sub_00415B30(param_1,local_10[0],local_14[0],local_18[0],sVar2,
                       *(short *)&param_1->field_05B4 * 0xc9 + 100,
                       *(short *)&param_1->field_05B8 * 200 + 100,param_1->field_0062);
        }
      }
    }
    if ((param_1->field_0400 == 0) || (param_1->field_03DC == 0)) goto cf_common_exit_004C6F47;
    iVar3 = STJellyGunC::sub_00415ED0(param_1,&local_20,&local_1c);
    if (iVar3 != -1) {
      if (iVar3 != 0) goto cf_common_exit_004C6F47;
LAB_004c6e4d:
      param_1->field_03DC = 0;
      sub_004167A0(param_1);
      goto cf_common_exit_004C6F47;
    }
    iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bmove.cpp",0x47,0,-5,"%s",
                               "move error");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar3 = 0x47;
  }
  RaiseInternalException
            (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bmove.cpp",iVar3);
cf_common_exit_004C6F47:
  thunk_FUN_004162f0(param_1,&local_6,&local_8,&local_a);
  param_1->field_05B0 = (int)local_6;
  param_1->field_05B4 = (int)local_8;
  param_1->field_05B8 = (int)local_a;
  if ((param_1->field_03DC == 0) && (param_1->field_03EC != 0)) {
    param_1->field_03EC = 0;
    thunk_FUN_004c6bb0(param_1,param_1->field_03F0,param_1->field_03F4,param_1->field_03F8);
  }
  return 0;
}

