
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
  int *unaff_EDI;
  undefined4 local_20;
  int local_1c;
  short local_18 [2];
  short local_14 [2];
  short local_10 [3];
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int *)&param_1[1].field_0x168 == 0) {
    iVar3 = (*param_1->vtable->MoveStep)((STGameObjC *)param_1,unaff_EDI);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x4f,0,-5,&DAT_007a4ccc,
                                 s_move_error_007ad390);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      iVar3 = 0x4f;
    }
    else {
      if (iVar3 == 1) goto LAB_004c6e4d;
      if (iVar3 != 2) goto cf_common_exit_004C6F47;
      iVar3 = *(int *)&param_1[1].field_0x170 + 1;
      *(int *)&param_1[1].field_0x170 = iVar3;
      if ((9 < iVar3) &&
         (iVar3 = thunk_FUN_004ea620((AnonShape_004EA620_716C262B *)param_1), iVar3 != 0)) {
        *(undefined4 *)&param_1[1].field_0x168 = 1;
        *(undefined4 *)&param_1[1].field_0x16c = 0;
      }
      iVar3 = thunk_FUN_00418030(param_1,*(short *)&param_1[1].field_0x14c,
                                 *(short *)&param_1[1].field_0x150,*(short *)&param_1[1].field_0x154
                                );
      if (iVar3 != -1) {
        if (iVar3 == 2) {
          *(undefined4 *)&param_1[1].field_0x148 = 0;
        }
        goto cf_common_exit_004C6F47;
      }
      iVar3 = 0x59;
    }
  }
  else {
    if (*(int *)&param_1[1].field_0x16c == 0) {
      iVar3 = (*param_1->vtable->vfunc_20)();
      if (iVar3 == -1) {
        iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x35,0,-5,
                                   &DAT_007a4ccc,s_stop_move_error_007ad3a0);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        RaiseInternalException
                  (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x35);
      }
      else if (iVar3 == 1) {
        *(undefined4 *)&param_1[1].field_0x16c = 1;
        thunk_FUN_00416270(param_1,local_10,(int *)local_14,(int *)local_18);
        sVar2 = *(short *)&param_1[2].field_0x88 * 0xc9 + 100;
        if (((local_10[0] == sVar2) &&
            (local_14[0] == (short)(*(short *)&param_1[2].field_0x8c * 0xc9 + 100))) &&
           (local_18[0] == (short)(*(short *)&param_1[2].field_0x90 * 200 + 100))) {
          *(undefined4 *)&param_1[1].field_0x148 = 0;
          thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
        }
        else {
          STJellyGunC::sub_00415B30
                    (param_1,local_10[0],local_14[0],local_18[0],sVar2,
                     *(short *)&param_1[2].field_0x8c * 0xc9 + 100,
                     *(short *)&param_1[2].field_0x90 * 200 + 100,param_1->field_0x62);
        }
      }
    }
    if ((*(int *)&param_1[1].field_0x16c == 0) || (*(int *)&param_1[1].field_0x148 == 0))
    goto cf_common_exit_004C6F47;
    iVar3 = STJellyGunC::sub_00415ED0(param_1,&local_20,&local_1c);
    if (iVar3 != -1) {
      if (iVar3 != 0) goto cf_common_exit_004C6F47;
LAB_004c6e4d:
      *(undefined4 *)&param_1[1].field_0x148 = 0;
      thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
      goto cf_common_exit_004C6F47;
    }
    iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bmove_cpp_007ad368,0x47,0,-5,&DAT_007a4ccc,
                               s_move_error_007ad390);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    iVar3 = 0x47;
  }
  RaiseInternalException
            (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_bmove_cpp_007ad368,iVar3);
cf_common_exit_004C6F47:
  thunk_FUN_004162f0(param_1,&local_6,&local_8,&local_a);
  *(int *)&param_1[2].field_0x88 = (int)local_6;
  iVar3 = *(int *)&param_1[1].field_0x148;
  *(int *)&param_1[2].field_0x8c = (int)local_8;
  *(int *)&param_1[2].field_0x90 = (int)local_a;
  if ((iVar3 == 0) && (*(int *)&param_1[1].field_0x158 != 0)) {
    *(undefined4 *)&param_1[1].field_0x158 = 0;
    thunk_FUN_004c6bb0(param_1,*(undefined4 *)&param_1[1].field_0x15c,
                       *(undefined4 *)&param_1[1].field_0x160,*(undefined4 *)&param_1[1].field_0x164
                      );
  }
  return 0;
}

