#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::SaveMap */

int __thiscall CGenerate::SaveMap(CGenerate *this)

{
  code *pcVar1;
  CGenerate *this_00;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char cVar8;
  uint *puVar9;
  InternalExceptionFrame local_54;
  CGenerate *local_10;
  AnonShape_006B5050_99986F91 *local_c;
  int local_8;

  local_8 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Maps_generate_cpp_007d864c,0xcd,0,iVar2,&DAT_007a4ccc,
                               s_CGenerate__SaveMap_007d868c);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  local_10->field_570B = 0x32;
  iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00693D00::thunk_FUN_00693d00
                    ((AnonReceiver_00693D00 *)&local_10->field_0x24e,local_10->field_0018,
                     DAT_00853de0);
  if (iVar2 == 0) {
    local_8 = 0;
  }
  pcVar3 = LoadResourceString(0x232b,HINSTANCE_00807618);
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar3 + 1;
    cVar8 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar8 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar6 + -uVar4;
  pcVar6 = &this_00->field_0x55fb;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  cMf32::RecPut(this_00->field_0018,0,PTR_s_TITLE_MISSION_0079d838,&this_00->field_0x55fb,0x104,
                (undefined4 *)0x0,'\0',(uint *)0x0);
  cMf32::RecPut(this_00->field_0018,0,PTR_s_TEXTURE_0079d83c,&this_00->field_0x53f3,0x104,
                (undefined4 *)0x0,'\0',(uint *)0x0);
  iVar2 = Library::Ourlib::MFSTMAP::AuxTMapRefreshAll
                    ((short *)this_00->field_000C,(int *)this_00->field_0008);
  if (iVar2 != 0) {
    local_8 = 0;
  }
  *(undefined1 *)(this_00->field_000C + 4) = 0x20;
  iVar2 = Library::Ourlib::MFSTMAP::mfTMapSave
                    ((undefined2 *)this_00->field_000C,(int)this_00->field_0018,s_3D_MAP_007ca1e4,
                     '\0');
  if (iVar2 != 0) {
    local_8 = 0;
  }
  if (local_8 != 0) {
    iVar2 = _saveObj(this_00);
    if (iVar2 == 0) {
      local_8 = 0;
    }
  }
  local_c = (AnonShape_006B5050_99986F91 *)thunk_FUN_006a2ed0((short *)this_00->field_000C);
  puVar9 = (uint *)0x0;
  cVar8 = '\0';
  puVar7 = (undefined4 *)0x0;
  uVar4 = FUN_006b5050(local_c);
  cMf32::RecPut(this_00->field_0018,0xc,PTR_s_SMALL_MAP_0079d840,(byte *)local_c,uVar4,puVar7,cVar8,
                puVar9);
  if (local_c != (AnonShape_006B5050_99986F91 *)0x0) {
    FreeAndNull(&local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}

