#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/generate.cpp

// 006A01D0 CGenerate::CreateMap
#line 4 "decomp/ST.exe/functions/006A01D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::CreateMap */

undefined4 __thiscall st::fn_006A01D0(CGenerate *this)

{
  char cVar1;
  CGenerate *this_00;
  int local_EAX_42;
  cMf32 *pcVar3;
  byte *pbVar4;
  int *piVar5;
  int local_EAX_314;
  int iVar6;
  int iVar3;
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
  local_EAX_42 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Maps\\generate.cpp"),0x72,0,local_EAX_42,
                               st::mutable_c_string("%s"),"CGenerate::CreateMap");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  iVar6 = (local_10->aggregate_001C).field_0210;
  local_10->field_53EB = (local_10->aggregate_001C).field_020C;
  local_10->field_53EF = iVar6;
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
  pcVar11 = st::pointer_boundary_cast<char *>(&local_10->field_0x53f3);
  memmove(pcVar11, pcVar10, uVar8); /* compiler REP MOVS byte copy */
  local_8 = nullptr;
  st::fn_006F1CE0(*(cMf32 **)&(local_10->aggregate_001C).field_0x218,0xc,st::mutable_c_string("TEXTURE_DSCR"),
                (int *)&local_8,1);
  st::fn_00404633(*local_8);
  st::fn_006F20E0(*(cMf32 **)&(this_00->aggregate_001C).field_0x218,(uint *)&local_8);
  pcVar3 = (cMf32 *)st::fn_006F0EC0
                              (0x345,&(this_00->aggregate_001C).field_0x4,1,0,0);
  this_00->field_0018 = pcVar3;
  /* ST_CALLSITE[006A02A2]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  pbVar4 = (byte *)st::fn_006EFC50
                             ((this_00->aggregate_001C).field_020C,
                              (this_00->aggregate_001C).field_0210,
                              *(cMf32 **)&(this_00->aggregate_001C).field_0x218,
                              *(int *)&(this_00->aggregate_001C).field_0x21d,0x20);
  this_00->field_000C = pbVar4;
  /* ST_CALLSITE[006A02D2]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  piVar5 = st::fn_006F0620((short *)this_00->field_000C);
  this_00->field_0008 = piVar5;
  /* ST_CALLSITE[006A02E8]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  st::fn_00401CB2(1,st::pointer_boundary_cast<int *>(this_00->field_0008));
  /* ST_CALLSITE[006A02FD]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  local_EAX_314 =
       st::fn_006F0C00((short *)this_00->field_000C,st::pointer_boundary_cast<int *>(this_00->field_0008));
  if (local_EAX_314 != 0) {
    local_c = 0;
  }
  /* ST_CALLSITE[006A031B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  iVar6 = st::fn_00404C1E(&this_00->field_0x24e,(undefined2 *)&this_00->field_53EB);
  if (iVar6 == 0) {
    local_c = 0;
  }
  /* ST_CALLSITE[006A033B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  local_20 = (this_00->aggregate_001C).field_020C;
  local_1c = (this_00->aggregate_001C).field_0210;
  local_18 = 6;
  /* ST_CALLSITE[006A035B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  st::fn_0040400C(&this_00->field_0x1bef,&local_20);
  /* ST_CALLSITE[006A0371]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  st::fn_00404E71(&this_00->field_0x1c03,*(cMf32 **)&(this_00->aggregate_001C).field_0x21d,
                     nullptr,0,*(undefined **)&(this_00->aggregate_001C).field_0x22e);
  /* ST_CALLSITE[006A0393]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  st::fn_00404A43(this_00);
  g_currentExceptionFrame = local_64.previous;
  return local_c;
}

// 006A0740 CGenerate::SaveMap
#line 4 "decomp/ST.exe/functions/006A0740/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::SaveMap */

int __thiscall st::fn_006A0740(CGenerate *this)

{
  CGenerate *this_00;
  int local_EAX_42;
  int iVar3;
  char *pcVar4_mg0;
  int local_EAX_218;
  int local_EAX_254;
  int iVar2;
  uint uVar4;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char cVar9;
  uint *puVar10;
  InternalExceptionFrame local_54;
  CGenerate *local_10;
  AnonShape_006B5050_99986F91 *local_c;
  int local_8;

  local_8 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  local_EAX_42 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Maps\\generate.cpp"),0xcd,0,local_EAX_42,
                               st::mutable_c_string("%s"),"CGenerate::SaveMap");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  local_10->field_570B = 0x32;
  iVar3 = st::fn_00402103
                    ((AnonReceiver_00693D00 *)&local_10->field_0x24e,st::pointer_boundary_cast<cMf32 *>(local_10->field_0018),
                     DAT_00853de0);
  if (iVar3 == 0) {
    local_8 = 0;
  }
  pcVar4_mg0 = st::fn_006B0140(0x232b,g_hINSTANCE_00807618);
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar4_mg0;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar4_mg0 + 1;
    cVar9 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar6;
  } while (cVar9 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = st::pointer_boundary_cast<char *>(&this_00->field_0x55fb);
  memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
  st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(this_00->field_0018),0,PTR_s_TITLE_MISSION_0079d838,(byte *)&this_00->field_0x55fb,0x104,
                nullptr,'\0',nullptr);
  st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(this_00->field_0018),0,PTR_s_TEXTURE_0079d83c,(byte *)&this_00->field_0x53f3,0x104,
                nullptr,'\0',nullptr);
  local_EAX_218 =
       st::fn_006F0C00((short *)this_00->field_000C,st::pointer_boundary_cast<int *>(this_00->field_0008));
  if (local_EAX_218 != 0) {
    local_8 = 0;
  }
  this_00->field_000C[4] = 0x20;
  local_EAX_254 =
       st::fn_006EFDB0
                 ((short *)this_00->field_000C,(int)this_00->field_0018,st::mutable_c_string("3D_MAP"),'\0');
  if (local_EAX_254 != 0) {
    local_8 = 0;
  }
  if (local_8 != 0) {
    /* ST_CALLSITE[006A0858]: CALL 0x00405277; direct=00405277 CGenerate::_saveObj */
    iVar3 = st::fn_00405277(this_00);
    if (iVar3 == 0) {
      local_8 = 0;
    }
  }
  local_c = (AnonShape_006B5050_99986F91 *)st::fn_004041D3((short *)this_00->field_000C);
  puVar10 = nullptr;
  cVar9 = '\0';
  puVar8 = nullptr;
  uVar4 = st::fn_006B5050(local_c);
  st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(this_00->field_0018),0xc,PTR_s_SMALL_MAP_0079d840,(byte *)local_c,uVar4,puVar8,cVar9,
                puVar10);
  if (local_c != nullptr) {
    st::fn_006AB060(&local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}

// 006A0960 CGenerate::_saveObj
#line 4 "decomp/ST.exe/functions/006A0960/decomp.c"
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
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Maps\\generate.cpp"),0xe0,0,iVar3,st::mutable_c_string("%s"),
                             "CGenerate::_saveObj");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

