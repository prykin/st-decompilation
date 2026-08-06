#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/generate.cpp

// 006A01D0 CGenerate::CreateMap
#line 1 "decomp/ST.exe/functions/006A01D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::CreateMap */

undefined4 __thiscall st::fn_006A01D0(CGenerate *this)

{
  char cVar1;
  CGenerate *this_00;
  int iVar3;
  cMf32 *pcVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar10;
  char *pcVar11;
  InternalExceptionFrame local_64;
  int local_20;
  int local_1c;
  undefined4 local_18;
  CGenerate *local_10;
  undefined4 local_c;
  Global_sub_00693710_param_1Enum *local_8;

  local_c = 1;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Maps\\generate.cpp",0x72,0,iVar3,"%s",
                               "CGenerate::CreateMap");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  iVar3 = (local_10->aggregate_001C).field_0210;
  local_10->field_53EB = (local_10->aggregate_001C).field_020C;
  local_10->field_53EF = iVar3;
  uVar8 = 0xffffffff;
  pcVar10 = &(local_10->aggregate_001C).field_0x108;
  do {
    pcVar11 = pcVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar11 + -uVar8;
  pcVar11 = &local_10->field_0x53f3;
  memmove(pcVar11, pcVar10, uVar8); /* compiler REP MOVS byte copy */
  local_8 = nullptr;
  st::fn_006F1CE0(*(cMf32 **)&(local_10->aggregate_001C).field_0x218,0xc,"TEXTURE_DSCR",
                (int *)&local_8,1);
  st::fn_00404633(*local_8);
  st::fn_006F20E0(*(cMf32 **)&(this_00->aggregate_001C).field_0x218,(uint *)&local_8);
  pcVar4 = (cMf32 *)st::fn_006F0EC0
                              (0x345,&(this_00->aggregate_001C).field_0x4,1,0,0);
  this_00->field_0018 = pcVar4;
  st::fn_00404A43(this_00);
  pbVar5 = (byte *)st::fn_006EFC50
                             ((this_00->aggregate_001C).field_020C,
                              (this_00->aggregate_001C).field_0210,
                              *(cMf32 **)&(this_00->aggregate_001C).field_0x218,
                              *(int *)&(this_00->aggregate_001C).field_0x21d,0x20);
  this_00->field_000C = pbVar5;
  st::fn_00404A43(this_00);
  piVar6 = st::fn_006F0620((short *)this_00->field_000C);
  this_00->field_0008 = piVar6;
  st::fn_00404A43(this_00);
  st::fn_00401CB2(1,this_00->field_0008);
  st::fn_00404A43(this_00);
  iVar3 = st::fn_006F0C00
                    ((short *)this_00->field_000C,this_00->field_0008);
  if (iVar3 != 0) {
    local_c = 0;
  }
  st::fn_00404A43(this_00);
  iVar3 = st::fn_00404C1E(&this_00->field_0x24e,(undefined2 *)&this_00->field_53EB);
  if (iVar3 == 0) {
    local_c = 0;
  }
  st::fn_00404A43(this_00);
  local_20 = (this_00->aggregate_001C).field_020C;
  local_1c = (this_00->aggregate_001C).field_0210;
  local_18 = 6;
  st::fn_00404A43(this_00);
  st::fn_0040400C(&this_00->field_0x1bef,&local_20);
  st::fn_00404A43(this_00);
  st::fn_00404E71(&this_00->field_0x1c03,*(cMf32 **)&(this_00->aggregate_001C).field_0x21d,
                     nullptr,0,*(undefined **)&(this_00->aggregate_001C).field_0x22e);
  st::fn_00404A43(this_00);
  g_currentExceptionFrame = local_64.previous;
  return local_c;
}

// 006A0740 CGenerate::SaveMap
#line 1 "decomp/ST.exe/functions/006A0740/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::SaveMap */

int __thiscall st::fn_006A0740(CGenerate *this)

{
  CGenerate *this_00;
  int iVar2;
  char *pcVar3;
  uint uVar4;
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
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Maps\\generate.cpp",0xcd,0,iVar2,"%s",
                               "CGenerate::SaveMap");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  local_10->field_570B = 0x32;
  iVar2 = st::fn_00402103
                    ((AnonReceiver_00693D00 *)&local_10->field_0x24e,local_10->field_0018,
                     DAT_00853de0);
  if (iVar2 == 0) {
    local_8 = 0;
  }
  pcVar3 = st::fn_006B0140(0x232b,g_module_00807618);
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
  memmove(pcVar6, pcVar3, uVar4); /* compiler REP MOVS byte copy */
  st::fn_006F13F0(this_00->field_0018,0,PTR_s_TITLE_MISSION_0079d838,&this_00->field_0x55fb,0x104,
                nullptr,'\0',nullptr);
  st::fn_006F13F0(this_00->field_0018,0,PTR_s_TEXTURE_0079d83c,&this_00->field_0x53f3,0x104,
                nullptr,'\0',nullptr);
  iVar2 = st::fn_006F0C00
                    ((short *)this_00->field_000C,this_00->field_0008);
  if (iVar2 != 0) {
    local_8 = 0;
  }
  this_00->field_000C[4] = 0x20;
  iVar2 = st::fn_006EFDB0
                    ((undefined2 *)this_00->field_000C,(int)this_00->field_0018,"3D_MAP",
                     '\0');
  if (iVar2 != 0) {
    local_8 = 0;
  }
  if (local_8 != 0) {
    iVar2 = st::fn_00405277(this_00);
    if (iVar2 == 0) {
      local_8 = 0;
    }
  }
  local_c = (AnonShape_006B5050_99986F91 *)st::fn_004041D3((short *)this_00->field_000C);
  puVar9 = nullptr;
  cVar8 = '\0';
  puVar7 = nullptr;
  uVar4 = st::fn_006B5050(local_c);
  st::fn_006F13F0(this_00->field_0018,0xc,PTR_s_SMALL_MAP_0079d840,(byte *)local_c,uVar4,puVar7,cVar8,
                puVar9);
  if (local_c != nullptr) {
    st::fn_006AB060(&local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}

// 006A0960 CGenerate::_saveObj
#line 1 "decomp/ST.exe/functions/006A0960/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::_saveObj */

undefined4 __thiscall st::fn_006A0960(CGenerate *this)

{
  InternalExceptionFrame *pIVar2;
  int iVar3;
  undefined4 uVar4;
  int local_48 [16];
  undefined4 local_8;

  pIVar2 = g_currentExceptionFrame;
  local_8 = 1;
  iVar3 = st::fn_0072D7F0(local_48,0);
  if (iVar3 == 0) {
    g_currentExceptionFrame = pIVar2;
    return local_8;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Maps\\generate.cpp",0xe0,0,iVar3,"%s",
                             "CGenerate::_saveObj");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

