#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::CreateBut

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0050E7D0 -> 004F3130 @ 0050EC8C | 0050E7D0 -> 004F3130 @ 0050ECDA | 0050E7D0 ->
   004F3130 @ 0050EF83 | 0050E7D0 -> 004F3130 @ 0050EFC5 | 0050E7D0 -> 004F3130 @ 0050F00A |
   0050E7D0 -> 004F3130 @ 0050F04F

   [STPrototypeApplier] Propagated parameter 11.
   Evidence: 004F5690 -> 004F3130 @ 004F6C51; literal 0 at 004F6BF9 | 004F5690 -> 004F3130 @
   004F6CD2; literal 0 at 004F6C89 | 004F5690 -> 004F3130 @ 004F6D27; literal 0 at 004F6CE7 |
   004F5690 -> 004F3130 @ 004F6D81; literal 0 at 004F6D3C | 004F5690 -> 004F3130 @ 004F6DDB; literal
   0 at 004F6D96 | 004F5690 -> 004F3130 @ 004F6E32; literal 0 at 004F6DF0 | 004F5690 -> 004F3130 @
   004F6E87; literal 0 at 004F6E47 | 004F5690 -> 004F3130 @ 004F6F25; literal 0 at 004F6ED0 |
   004F5690 -> 004F3130 @ 004F6FC6; literal 0 at 004F6F71 | 00502360 -> 004F3130 @ 005026A1; literal
   0 at 00502669 | 00502360 -> 004F3130 @ 005026FA; literal 0 at 005026C2 | 00502360 -> 004F3130 @
   005027B9; literal 0 at 0050278B | 00503450 -> 004F3130 @ 005037F8; literal 0 at 005037C0 |
   00503450 -> 004F3130 @ 00503854; literal 0 at 0050381C | 00503450 -> 004F3130 @ 00503980; literal
   0 at 00503968 | 005097E0 -> 004F3130 @ 00509B32; literal 0 at 00509B07 | 005097E0 -> 004F3130 @
   00509BA5; literal 0 at 00509B6A | 005097E0 -> 004F3130 @ 00509CE7; literal 0 at 00509CAE |
   005097E0 -> 004F3130 @ 00509F30; literal 0 at 00509F10 | 005097E0 -> 004F3130 @ 00509FE3; literal
   0 at 00509FC0 | 0050E7D0 -> 004F3130 @ 0050EC8C; literal 0 at 0050EC6C | 0050E7D0 -> 004F3130 @
   0050ECDA; literal 0 at 0050ECB7 | 0050E7D0 -> 004F3130 @ 0050EF1B; literal 0 at 0050EEF1 |
   0050E7D0 -> 004F3130 @ 0050EF83; literal 0 at 0050EF5C | 0050E7D0 -> 004F3130 @ 0050EFC5; literal
   0 at 0050EF98 | 0050E7D0 -> 004F3130 @ 0050F00A; literal 0 at 0050EFDA | 0050E7D0 -> 004F3130 @
   0050F04F; literal 0 at 0050F019 | 0050E7D0 -> 004F3130 @ 0050F08E; literal 0 at 0050F064 |
   0050E7D0 -> 004F3130 @ 0050F0D0; literal 0 at 0050F0A3
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (31), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004F5690 @ 004F6C51 -> read as EAX on
   every CFG path | 004F5690 @ 004F6CD2 -> read as EAX on every CFG path | 004F5690 @ 004F6D27 ->
   read as EAX on every CFG path | 004F5690 @ 004F6D81 -> read as EAX on every CFG path | 004F5690 @
   004F6DDB -> read as EAX on every CFG path | 004F5690 @ 004F6E32 -> read as EAX on every CFG path
   | 004F5690 @ 004F6E87 -> read as EAX on every CFG path | 004F5690 @ 004F6F25 -> read as EAX on
   every CFG path | 004F5690 @ 004F6FC6 -> read as EAX on every CFG path | 00502360 @ 005026A1 ->
   read as EAX on every CFG path | 00502360 @ 005026FA -> read as EAX on every CFG path | 00502360 @
   005027B9 -> read as EAX on every CFG path | 00503450 @ 005037F8 -> read as EAX on every CFG path
   | 00503450 @ 00503854 -> read as EAX on every CFG path | 00503450 @ 00503980 -> read as EAX on
   every CFG path | 005097E0 @ 00509B32 -> read as EAX on every CFG path | 005097E0 @ 00509BA5 ->
   read as EAX on every CFG path | 005097E0 @ 00509C17 -> read as EAX on every CFG path | 005097E0 @
   00509CE7 -> read as EAX on every CFG path | 005097E0 @ 00509F30 -> read as EAX on every CFG path
   | 005097E0 @ 00509FE3 -> read as EAX on every CFG path | 0050E7D0 @ 0050EB8C -> read as EAX on
   every CFG path | 0050E7D0 @ 0050EC8C -> read as EAX on every CFG path | 0050E7D0 @ 0050ECDA ->
   read as EAX on every CFG path */

int __thiscall
CPanelTy::CreateBut(CPanelTy *this,byte param_1,undefined4 param_2,int param_3,int param_4,
                   int param_5,byte param_6,char *text,undefined4 param_8,undefined4 param_9,
                   short param_10,ushort param_11,RecoveredRecord_004F3130_3F0D2FD9 *param_12,
                   char *param_13,int param_14,undefined4 param_15,undefined4 param_16)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_1d0;
  int local_18c [4];
  int local_17c;
  uint local_178;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_10c;
  uint local_108;
  uint local_104;
  ushort local_100;
  short local_fe;
  RecoveredRecord_004F3130_3F0D2FD9 *local_fc;
  uint local_f4;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  ushort local_dc;
  short local_da;
  RecoveredRecord_004F3130_3F0D2FD9 *local_d8;
  uint local_d0;
  uint local_84;
  uint local_80;
  ushort *local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  CPanelTy *local_10;
  int local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_1d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1d0;
  local_10 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_1d0.jumpBuffer,0);
  pCVar3 = local_10;
  if (iVar4 == 0) {
    memset(local_18c, 0, 0x17c); /* compiler bulk-zero initialization */
    local_18c[1] = param_2;
    local_18c[0] = param_3;
    if (text != nullptr) {
      /* ST_CALLSITE[004F31B3]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pCVar3->field_01E1,"%s0",text);
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_6,&pCVar3->field_01E1,nullptr,1);
    }
    if (param_6 == 1) {
      local_17c = *(int *)(local_8 + 2);
      local_178 = *(undefined4 *)(local_8 + 4);
    }
    else {
      local_17c = param_14;
      local_178 = param_15;
      if (param_6 == 6) {
        local_17c = *(int *)(local_8 + 2);
        local_178 = *(undefined4 *)(local_8 + 4);
      }
    }
    if (param_4 < 0) {
      param_4 = ((&pCVar3->field_0068)[param_1] - local_17c) / 2;
    }
    uVar2 = (uint)param_1;
    local_18c[2] = (&pCVar3->field_003C)[uVar2] + param_4;
    iVar6 = pCVar3->field_0130;
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar6 = pCVar3->field_0134;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar6 = pCVar3->field_0138;
    }
    if (iVar6 == 0) {
      if ((param_1 == 1) || (param_1 == 7)) {
        local_18c[3] = pCVar3->field_00C0;
      }
      else {
        local_18c[3] = 0;
      }
      local_18c[3] = local_18c[3] + DAT_00806734;
    }
    else {
      local_18c[3] = (&pCVar3->field_0094)[uVar2];
    }
    local_18c[3] = local_18c[3] + param_5;
    if (local_8 != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
    }
    local_16c = pCVar3->field_0008;
    local_124 = param_9;
    local_164 = param_8;
    local_168 = 2;
    local_148 = 2;
    local_128 = 2;
    local_144 = param_16;
    local_84 = 1;
    local_80 = 1;
    if (param_10 != 0) {
      local_10c = 0x101;
      local_108 = 3;
      local_104 = 0x4201;
      local_100 = param_11;
      local_fe = param_10;
      local_fc = param_12;
      local_f4 = 0;
      local_d0 = 1;
      local_e8 = 0x101;
      local_e4 = 3;
      local_e0 = 0x4202;
      local_dc = param_11;
      local_da = param_10;
      local_d8 = param_12;
    }
    if ((param_10 == 1) && (-1 < param_12->field_0009)) {
      local_5c = *(undefined4 *)(&DAT_00807e66 + param_12->field_0009 * 4);
      local_60 = 8;
    }
    local_14c = local_16c;
    local_12c = local_16c;
    if (param_13 != nullptr) {
      local_68 = FUN_0070aa70(g_cMf32_00806790,param_13,0,1);

      local_64 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,param_13,1);
    }
    /* ST_CALLSITE[004F33EE]: CALL dword ptr [EDX + 0x8] */
    (*pCVar3->field_000C->vtable->CreateObject)
              ((SystemClassTy *)pCVar3->field_000C,2,&local_c,nullptr,local_18c,0);
    g_currentExceptionFrame = local_1d0.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_1d0.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x1b3,0,iVar4,"%s",
                             "CPanelTy::CreateBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x1b3);
  return 0;
}

