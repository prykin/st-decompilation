#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::CreateMap */

undefined4 __thiscall CGenerate::CreateMap(CGenerate *this)

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
  uint uVar7;
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
  local_EAX_42 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Maps\\generate.cpp",0x72,0,local_EAX_42,
                               "%s","CGenerate::CreateMap");
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
  pcVar11 = &local_10->field_0x53f3;
  memmove(pcVar11, pcVar10, uVar8); /* compiler REP MOVS byte copy */
  local_8 = nullptr;
  cMf32::RecGet(*(cMf32 **)&(local_10->aggregate_001C).field_0x218,0xc,"TEXTURE_DSCR",
                (int *)&local_8,1);
  thunk_FUN_00693710(*local_8);
  cMf32::RecMemFree(*(cMf32 **)&(this_00->aggregate_001C).field_0x218,(uint *)&local_8);
  pcVar3 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                              (0x345,&(this_00->aggregate_001C).field_0x4,1,0,0);
  this_00->field_0018 = pcVar3;
  /* ST_CALLSITE[006A02A2]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  pbVar4 = (byte *)Library::Ourlib::MFSTMAP::mfTMapCreate
                             ((this_00->aggregate_001C).field_020C,
                              (this_00->aggregate_001C).field_0210,
                              *(cMf32 **)&(this_00->aggregate_001C).field_0x218,
                              *(int *)&(this_00->aggregate_001C).field_0x21d,0x20);
  this_00->field_000C = pbVar4;
  /* ST_CALLSITE[006A02D2]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  piVar5 = Library::Ourlib::MFSTMAP::FUN_006f0620((short *)this_00->field_000C);
  this_00->field_0008 = piVar5;
  /* ST_CALLSITE[006A02E8]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  thunk_FUN_006a2d80(1,this_00->field_0008);
  /* ST_CALLSITE[006A02FD]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  local_EAX_314 =
       Library::Ourlib::MFSTMAP::AuxTMapRefreshAll((short *)this_00->field_000C,this_00->field_0008);
  if (local_EAX_314 != 0) {
    local_c = 0;
  }
  /* ST_CALLSITE[006A031B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  iVar6 = thunk_FUN_00693ad0(&this_00->field_0x24e,(undefined2 *)&this_00->field_53EB);
  if (iVar6 == 0) {
    local_c = 0;
  }
  /* ST_CALLSITE[006A033B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  local_20 = (this_00->aggregate_001C).field_020C;
  local_1c = (this_00->aggregate_001C).field_0210;
  local_18 = 6;
  /* ST_CALLSITE[006A035B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  thunk_FUN_006945c0(&this_00->field_0x1bef,&local_20);
  /* ST_CALLSITE[006A0371]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  thunk_FUN_00691690(&this_00->field_0x1c03,*(cMf32 **)&(this_00->aggregate_001C).field_0x21d,
                     nullptr,0,*(undefined **)&(this_00->aggregate_001C).field_0x22e);
  /* ST_CALLSITE[006A0393]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this_00);
  g_currentExceptionFrame = local_64.previous;
  return local_c;
}

