
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tinittxt.cpp
   Diagnostic line evidence: 352 | 379 | 380 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl LandInit(short *param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar7 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    puVar5 = FUN_006b04d0(0x4f2);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0080760c = (void *)0x0;
    }
    else {
      DAT_0080760c = (void *)FUN_006dbca0((int)puVar5);
    }
    if (DAT_0080760c == (void *)0x0) {
      RaiseInternalException(-2,DAT_007ed77c,s_E____titans_tinittxt_cpp_007ca6d0,0x160);
    }
    FUN_006dc050(DAT_0080760c,DAT_0080759c,0,0,(uint)*(byte *)(param_1 + 2) << 1,
                 (uint)*(byte *)(param_1 + 2) << 1,0,0xc0240000,0,0x40240000,0,0xc0240000,0,
                 0x40240000,0x4024000000000000,0x4023ee97865e3540,0);
    *(undefined4 *)((int)DAT_0080760c + 0x128) = 0;
    FUN_006dd610(DAT_0080760c,4,0,0x40240000,0,0x40240000);
    puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,8,0x14);
    *(uint **)((int)param_1 + 0x44d) = puVar6;
    puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0xc,0x14);
    *(uint **)((int)param_1 + 0x451) = puVar6;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      puVar5 = (undefined4 *)((int)param_1 + 0x459);
      do {
        if ((undefined4 *)*puVar5 != (undefined4 *)0x0) {
          thunk_FUN_005745e0((int)param_1,(undefined4 *)*puVar5);
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < *(int *)((int)param_1 + 0x455));
    }
    sVar1 = *param_1;
    sVar2 = param_1[1];
    local_10 = (int)sVar2 / 2;
    local_8 = (undefined4 *)
              Library::DKW::LIB::FUN_006aac70
                        ((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2));
    local_c = 0;
    if (0 < (int)sVar2 / 2) {
      do {
        iVar4 = 0;
        if (0 < (int)sVar1 / 2) {
          do {
            thunk_FUN_00574920(param_1,iVar4,local_c,local_8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)sVar1 / 2);
        }
        local_c = local_c + 1;
      } while (local_c < local_10);
    }
    FUN_006ab060(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage(s_E____titans_tinittxt_cpp_007ca6d0,0x17b,0,iVar4,&DAT_007a4ccc,
                             s_LandInit_007ca714);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_tinittxt_cpp_007ca6d0,0x17c);
  return;
}

