#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJListFromDArr

   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJListFromDArr_param_3Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * __thiscall
STAllPlayersC::GetTOBJListFromDArr
          (STAllPlayersC *this,uint param_1,AnonShape_0043EED0_93C25F9A *param_2,
          STAllPlayersC_GetTOBJListFromDArr_param_3Enum param_3,int param_4,char param_5)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  STAllPlayersC *this_00;
  int iVar4;
  STGameObjC *this_01;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar5;
  int iVar6;
  uint *puVar7;
  InternalExceptionFrame local_5c;
  undefined1 local_18 [4];
  STAllPlayersC *local_14;
  int local_10;
  DArrayTy *local_c;
  undefined4 local_8;

  local_10 = param_2->field_000C;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2049,0,iVar4,"%s"
                               ,"STAllPlayersC::GetTOBJListFromDArr");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x204a);
      return (uint *)0x0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
  this_00 = local_14;
  iVar4 = 0;
  if (0 < local_10) {
    do {
      uVar1 = *(ushort *)(param_2->field_001C + iVar4 * 2);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT22((short)((uint)param_2->field_001C >> 0x10),uVar1);
      if (uVar1 != 0xffff) {
        this_01 = GetObjPtr(this_00,(char)param_1,uVar1,CASE_1);
        if (this_01 == (STGameObjC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,
                     "E:\\__titans\\wlad\\to_allpl.cpp",0x2040);
switchD_0043efb1_caseD_3a:
          bVar3 = false;
        }
        else {
          SVar5 = (*this_01->vtable->vfunc_2C)();
          if ((SVar5 != param_3) || (iVar6 = this_01->vfunc_F8(), iVar6 == 0))
          goto switchD_0043efb1_caseD_3a;
          if (param_4 != 0) {
            switch(param_3) {
            case CASE_38:
            case CASE_39:
            case CASE_4F:
            case CASE_5E:
              if ((param_4 == 1) && (iVar6 = (*this_01->vtable->vfunc_88)(local_18), 0 < iVar6)) {
                bVar3 = true;
                goto LAB_0043efd8;
              }
            }
            goto switchD_0043efb1_caseD_3a;
          }
          bVar3 = true;
        }
LAB_0043efd8:
        if ((bVar3) &&
           ((param_5 == -1 || (iVar6 = this_01->vfunc_6C(), iVar6 == param_5)))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_10);
  }
  g_currentExceptionFrame = local_5c.previous;
  return &local_c->flags;
}

