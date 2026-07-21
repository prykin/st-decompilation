
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_interp.cpp
   Diagnostic line evidence: 1342 | 1356 | 1369 | 1374 | 1388 | 1392 | 1413 | 1419 (metadata/report
   site, not the function definition)
   [STSourceProvenanceApplier end] */

float * FUN_00671f10(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  short *psVar7;
  float10 fVar8;
  int *piVar9;
  InternalExceptionFrame local_70;
  undefined1 local_2c;
  float local_2b;
  AnonReceiver_0064A970 *local_24;
  float local_20;
  int local_1c;
  float *local_18;
  int local_14;
  int local_10;
  int *local_c;
  float *local_8;
  
  local_18 = (float *)0x0;
  local_8 = (float *)0x0;
  local_c = (int *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (local_8 != (float *)0x0) {
      FreeAndNull(&local_8);
    }
    if (local_18 != (float *)0x0) {
      FreeAndNull(&local_18);
    }
    thunk_FUN_0064a800(&local_c);
    if (0 < iVar3) {
      iVar3 = -0x6b;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    return (float *)0x0;
  }
  Library::MSVCRT::_strncpy(&local_24->field_0x4,&DAT_008016a0,0x7f);
  *(undefined4 *)&local_24->field_0x84 = 0xffffffff;
  local_c = thunk_FUN_0064a630(10);
  local_20 = 0.0;
  psVar7 = (short *)(param_1 + 1);
  do {
    while( true ) {
      if ((*(char *)((int)psVar7 + -1) == '\a') && (*psVar7 == 0x1d)) {
        if (local_c[1] != 1) {
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x570
                    );
        }
        if (param_3 != (int *)0x0) {
          *param_3 = (int)local_20 + 1;
        }
        puVar2 = (undefined1 *)local_c[2];
        switch(*puVar2) {
        case 1:
        case 4:
          fVar6 = (float)(*local_24->vtable->slot_00)(puVar2);
          local_18 = (float *)Library::DKW::LIB::FUN_006aac10(4);
          *local_18 = fVar6;
          if (param_2 != (int *)0x0) {
            *param_2 = 1;
          }
          break;
        case 2:
        case 5:
          fVar8 = (float10)(*local_24->vtable->slot_04)(puVar2);
          local_20 = (float)fVar8;
          local_18 = (float *)Library::DKW::LIB::FUN_006aac10(4);
          *local_18 = local_20;
          if (param_2 != (int *)0x0) {
            *param_2 = 2;
          }
          break;
        case 3:
        case 6:
          fVar6 = (float)(*local_24->vtable->slot_08)(puVar2);
          if (fVar6 == 0.0) {
            RaiseInternalException
                      (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,
                       0x585);
          }
          local_18 = (float *)Library::DKW::LIB::FUN_006aac10(4);
          *local_18 = fVar6;
          if (param_2 != (int *)0x0) {
            *param_2 = 3;
          }
          break;
        default:
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x58b
                    );
        }
        thunk_FUN_0064a800(&local_c);
        g_currentExceptionFrame = local_70.previous;
        return local_18;
      }
      thunk_FUN_0064a830(local_c,(undefined4 *)((int)psVar7 + -1));
      if (*(char *)((int)psVar7 + -1) == '\a') break;
cf_continue_loop_006721A4:
      local_20 = (float)((int)local_20 + 1);
      psVar7 = (short *)((int)psVar7 + 5);
    }
    iVar3 = (local_c[1] - (int)psVar7[1]) + -1;
    if (iVar3 < 0) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x53e);
    }
    if ((local_10 == 0) && (local_14 == 0)) {
      iVar4 = thunk_FUN_006686f0((int)*psVar7);
      if ((iVar4 < 0) || (iVar4 = thunk_FUN_00668a70((int)*psVar7), iVar4 != 0)) {
        iVar4 = (int)psVar7[1];
        piVar9 = &local_1c;
        pcVar5 = (char *)thunk_FUN_0064a910((int)local_c,iVar3);
        local_8 = thunk_FUN_0064a970(pcVar5,iVar4,piVar9);
      }
      else {
        iVar4 = (int)psVar7[1];
        piVar9 = &local_1c;
        pcVar5 = (char *)thunk_FUN_0064a910((int)local_c,iVar3);
        local_8 = (float *)SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::
                           thunk_FUN_0066acc0(local_24,pcVar5,iVar4,piVar9);
      }
    }
    else {
      local_1c = 1;
      local_8 = (float *)Library::DKW::LIB::FUN_006aac10(4);
      *local_8 = (float)(uint)(local_10 == 0);
    }
    if (local_8 == (float *)0x0) {
      RaiseInternalException
                (local_1c,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x56c)
      ;
      goto cf_continue_loop_006721A4;
    }
    iVar3 = thunk_FUN_0064a940((int)local_c,iVar3);
    if (iVar3 == 0) {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x54c);
    }
    if (local_1c == 1) {
      local_2c = 1;
      local_2b = *local_8;
    }
    else if (local_1c == 2) {
      local_2c = 2;
      local_2b = *local_8;
    }
    else if (local_1c == 3) {
      iVar3 = (*local_24->vtable->slot_0C)(local_8);
      if (iVar3 < 0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x559);
      }
      local_2c = 3;
      local_2b = (float)CONCAT22(local_2b._2_2_,(short)iVar3);
    }
    else {
      RaiseInternalException
                (-0x6b,g_overwriteContext_007ED77C,s_E____titans_ai_ai_interp_cpp_007d2cf4,0x55e);
    }
    thunk_FUN_0064a830(local_c,(undefined4 *)&local_2c);
    FreeAndNull(&local_8);
    sVar1 = *psVar7;
    if (((sVar1 == 800) && (local_2b == 0.0)) && (local_14 == 0)) {
      local_10 = local_10 + 1;
    }
    if ((sVar1 == 3) && (0 < local_10)) {
      local_10 = local_10 + -1;
    }
    if (((sVar1 == 0x321) && (local_2b == 1.4013e-45)) && (local_10 == 0)) {
      local_14 = local_14 + 1;
    }
    if ((sVar1 != 0x34) || (local_14 < 1)) goto cf_continue_loop_006721A4;
    local_14 = local_14 + -1;
    local_20 = (float)((int)local_20 + 1);
    psVar7 = (short *)((int)psVar7 + 5);
  } while( true );
}

