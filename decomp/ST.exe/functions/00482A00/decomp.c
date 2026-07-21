#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ChangeActivity

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

void __thiscall STBoatC::ChangeActivity(STBoatC *this,int param_1)

{
  code *pcVar1;
  STBoatC *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  STBoatC *local_8;

  if (this->field_0455 != 1) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar2 == 0) {
      if ((param_1 == 1) && (local_8->field_0024 == (uint)DAT_0080874d)) {
        switch(local_8->field_06F7) {
        case CASE_1:
          uVar4 = 0xc9;
          break;
        case CASE_2:
          uVar4 = 0xcf;
          break;
        case CASE_3:
          uVar4 = 0xd5;
          break;
        case CASE_4:
          uVar4 = 0xdb;
          break;
        case CASE_5:
          uVar4 = 0xe1;
          break;
        case CASE_6:
          uVar4 = 0xe8;
          break;
        case CASE_7:
          uVar4 = 0xef;
          break;
        case CASE_8:
          uVar4 = 0xf6;
          break;
        case CASE_9:
          uVar4 = 0xfe;
          break;
        case CASE_A:
          uVar4 = 0x103;
          break;
        case CASE_B:
          uVar4 = 0x109;
          break;
        case CASE_C:
          uVar4 = 0x10f;
          break;
        case CASE_D:
          uVar4 = 0x12d;
          break;
        case CASE_E:
          uVar4 = 0x133;
          break;
        case CASE_F:
          uVar4 = 0x139;
          break;
        case CASE_10:
          uVar4 = 0x13f;
          break;
        case CASE_11:
          uVar4 = 0x145;
          break;
        case CASE_12:
          uVar4 = 0x14c;
          break;
        case CASE_13:
          uVar4 = 0x153;
          break;
        case CASE_14:
          uVar4 = 0x15a;
          break;
        case CASE_15:
          uVar4 = 0x162;
          break;
        case CASE_16:
          uVar4 = 0x167;
          break;
        case CASE_17:
          uVar4 = 0x16f;
          break;
        case CASE_18:
          uVar4 = 0x175;
          break;
        case CASE_19:
          uVar4 = 0x191;
          break;
        case CASE_1A:
          uVar4 = 0x199;
          break;
        case CASE_1B:
          uVar4 = 0x1a1;
          break;
        case CASE_1C:
          uVar4 = 0x1a7;
          break;
        case CASE_1D:
          uVar4 = 0x1ad;
          break;
        case CASE_1E:
          uVar4 = 0x1b4;
          break;
        case CASE_1F:
          uVar4 = 0x1ba;
          break;
        case CASE_20:
          uVar4 = 0x1c0;
          break;
        case CASE_21:
          uVar4 = 0x1c6;
          break;
        case CASE_22:
          uVar4 = 0x1cd;
          break;
        case CASE_23:
          uVar4 = 0x1d4;
          break;
        case CASE_24:
          uVar4 = 0x1da;
          break;
        case CASE_25:
          uVar4 = 0x17b;
          break;
        case CASE_26:
          uVar4 = 0x115;
          break;
        case CASE_27:
          uVar4 = 0x181;
          break;
        case CASE_28:
          uVar4 = 0x1e0;
          break;
        default:
          uVar4 = 0;
        }
        iVar2 = thunk_FUN_00493cd0((AnonShape_00493CD0_11D91B87 *)local_8);
        if (iVar2 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->vtable->field_0090)(4,uVar4);
        }
      }
      thunk_FUN_0041dd00(this_00,param_1);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3dc3,0,-1,"%s",
                               "STBoatC::ChangeActivity");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\To_boat.cpp",0x3dc4);
  }
  return;
}

