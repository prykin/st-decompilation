#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::CreateMap */

undefined4 __thiscall CGenerate::CreateMap(CGenerate *this)

{
  char cVar1;
  code *pcVar2;
  CGenerate *pCVar3;
  int iVar4;
  cMf32 *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  InternalExceptionFrame local_64;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CGenerate *local_10;
  undefined4 local_c;
  Global_sub_00693710_param_1Enum *local_8;

  local_c = 1;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pCVar3 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Maps_generate_cpp_007d864c,0x72,0,iVar4,&DAT_007a4ccc,
                               s_CGenerate__CreateMap_007d8670);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  local_10->field_53EB = local_10->field_0228;
  local_10->field_53EF = local_10->field_022C;
  uVar9 = 0xffffffff;
  pcVar11 = &local_10->field_0x124;
  do {
    pcVar12 = pcVar11;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar11 = pcVar12 + -uVar9;
  pcVar12 = &local_10->field_0x53f3;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  local_8 = (Global_sub_00693710_param_1Enum *)0x0;
  cMf32::RecGet(local_10->field_0234,0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_8,1);
  thunk_FUN_00693710(*local_8);
  cMf32::RecMemFree(pCVar3->field_0234,(uint *)&local_8);
  pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&pCVar3->field_0x20,1,0,0);
  pCVar3->field_0018 = pcVar5;
  thunk_FUN_0069ff90((int)pCVar3);
  puVar6 = Library::Ourlib::MFSTMAP::mfTMapCreate
                     (pCVar3->field_0228,pCVar3->field_022C,(int)pCVar3->field_0234,
                      pCVar3->field_0239,0x20);
  pCVar3->field_000C = puVar6;
  thunk_FUN_0069ff90((int)pCVar3);
  piVar7 = Library::Ourlib::MFSTMAP::FUN_006f0620((short *)pCVar3->field_000C);
  pCVar3->field_0008 = piVar7;
  thunk_FUN_0069ff90((int)pCVar3);
  thunk_FUN_006a2d80(1,(int *)pCVar3->field_0008);
  thunk_FUN_0069ff90((int)pCVar3);
  iVar4 = Library::Ourlib::MFSTMAP::AuxTMapRefreshAll
                    ((short *)pCVar3->field_000C,(int *)pCVar3->field_0008);
  if (iVar4 != 0) {
    local_c = 0;
  }
  thunk_FUN_0069ff90((int)pCVar3);
  iVar4 = thunk_FUN_00693ad0(&pCVar3->field_0x24e,(undefined2 *)&pCVar3->field_53EB);
  if (iVar4 == 0) {
    local_c = 0;
  }
  thunk_FUN_0069ff90((int)pCVar3);
  local_20 = pCVar3->field_0228;
  local_1c = pCVar3->field_022C;
  local_18 = 6;
  thunk_FUN_0069ff90((int)pCVar3);
  thunk_FUN_006945c0(&pCVar3->field_0x1bef,&local_20);
  thunk_FUN_0069ff90((int)pCVar3);
  thunk_FUN_00691690(&pCVar3->field_0x1c03,(cMf32 *)pCVar3->field_0239,(cMf32 *)0x0,0,
                     (undefined *)pCVar3->field_024A);
  thunk_FUN_0069ff90((int)pCVar3);
  g_currentExceptionFrame = local_64.previous;
  return local_c;
}

