#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetDepotForAttack

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall
STGroupBoatC::GetDepotForAttack
          (STGroupBoatC *this,uint param_1,undefined1 *param_2,short *param_3,short *param_4,
          short *param_5,short *param_6)

{
  int iVar2;
  STGameObjC *pSVar3;
  int iVar5;
  int local_EAX_310;
  int iVar4;
  uint index;
  STGroupBoatC *pSVar6;
  InternalExceptionFrame local_68;
  char local_24;
  char cStack_23;
  ushort uStack_22;
  dword local_1c;
  int local_18;
  STGroupBoatC *local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 1000000;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar6 = local_14;
  if (iVar2 == 0) {
    *param_3 = -1;
    if ((local_14->field_01E6 != CASE_2) || (local_14->field_020E == nullptr)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1708);
    }
    pSVar3 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,pSVar6->field_0024,(ushort)param_1,CASE_1);
    STFishC::sub_004162B0((STFishC *)pSVar3,&local_10,&local_e,&local_c);
    index = 0;
    local_1c = pSVar6->field_020E->count;
    iVar2 = local_18;
    if (0 < (int)local_1c) {
      do {
        DArrayGetElement(pSVar6->field_020E,index,&local_24);
        if (uStack_22 != 0xffff) {
          pSVar3 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,local_24,uStack_22,(int)cStack_23);
          iVar5 = pSVar3->vfunc_2C();
          if ((iVar5 == 0x3b) ||
             (iVar5 = pSVar3->vfunc_2C(), pSVar6 = local_14, iVar5 == 0x60)) {
            STFishC::sub_004162B0((STFishC *)pSVar3,&local_8,&local_6,&local_a);
            local_EAX_310 =
                 FUN_006aadd0((int)local_10,(int)local_e,(int)local_c,(int)local_8,(int)local_6,
                              (int)local_a);
            pSVar6 = local_14;
            if (local_EAX_310 < iVar2) {
              *param_2 = local_24;
              *param_3 = uStack_22;
              *param_4 = local_8;
              *param_5 = local_6;
              *param_6 = local_a;
              iVar2 = local_EAX_310;
              local_18 = local_EAX_310;
            }
          }
        }
        index = index + 1;
      } while ((int)index < (int)local_1c);
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  if (iVar2 != -0x5001fff7) {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x171b,0,iVar2,"%s",
                               "STGroupBoatC::GetDepotForAttack");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x171c);
  }
  return;
}

