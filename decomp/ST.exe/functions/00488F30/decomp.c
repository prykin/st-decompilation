#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetInfo16

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40
    */

void __thiscall STBoatC::GetInfo16(STBoatC *this,AnonShape_00488F30_727896DE *param_1)

{
  code *pcVar1;
  int uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  AnonShape_00488F30_727896DE *pAVar7;

  pAVar7 = param_1;
  for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pAVar7 = 0xffffffff;
    pAVar7 = (AnonShape_00488F30_727896DE *)&pAVar7->field_0x4;
  }
  uVar2 = GetPlayerRaceId(*(char *)&this->field_0024);
  uVar3 = uVar2 & 0xff;
  if (uVar3 == 1) {
    uVar4 = thunk_FUN_004e60d0(this->field_0024,5);
    param_1->field_0x8 = 1;
    *(uint *)param_1 = (int)(short)uVar4 << 0x10 | 5;
    uVar4 = thunk_FUN_004e60d0(this->field_0024,4);
    *(uint *)&param_1->field_0x30 = (int)(short)uVar4 << 0x10 | 4;
LAB_00489086:
    param_1->field_0x38 = 1;
  }
  else {
    if (uVar3 == 2) {
      uVar4 = thunk_FUN_004e60d0(this->field_0024,0x82);
      param_1->field_0x8 = 1;
      *(uint *)param_1 = (int)(short)uVar4 << 0x10 | 0x82;
      uVar4 = thunk_FUN_004e60d0(this->field_0024,0x81);
      *(uint *)&param_1->field_0x30 = (int)(short)uVar4 << 0x10 | 0x81;
      goto LAB_00489086;
    }
    if (uVar3 != 3) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x44ca,0,0,"%s",
                                 "STBoatC::GetInfo16 invalid civ");
      if (iVar5 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x6d);
    param_1->field_0x8 = 1;
    *(uint *)param_1 = (int)(short)uVar4 << 0x10 | 0x6d;
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x65);
    param_1->field_0x38 = 1;
    *(uint *)&param_1->field_0x30 = (int)(short)uVar4 << 0x10 | 0x65;
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x4e);
    param_1->field_0x68 = 1;
    *(uint *)&param_1->field_0x60 = (int)(short)uVar4 << 0x10 | 0x4e;
  }
  iVar5 = 3;
  if (uVar3 == 0) goto cf_common_join_00489222;
  if (uVar3 < 3) {
    uVar4 = thunk_FUN_004e60d0(this->field_0024,10);
    if (0 < (short)uVar4) {
      iVar5 = 4;
      *(uint *)&param_1[1].field_0x20 = (int)(short)uVar4 << 0x10 | 10;
      param_1[1].field_0x28 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x1b);
    if (0 < (short)uVar4) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar4 << 0x10 | 0x1b;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x24);
    if (0 < (short)uVar4) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar4 << 0x10 | 0x24;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x2d);
    if ((short)uVar4 < 1) goto cf_common_join_00489222;
    uVar3 = (int)(short)uVar4 << 0x10 | 0x2d;
  }
  else {
    if (uVar3 != 3) goto cf_common_join_00489222;
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x66);
    if (0 < (short)uVar4) {
      iVar5 = 4;
      *(uint *)&param_1[1].field_0x20 = (int)(short)uVar4 << 0x10 | 0x66;
      param_1[1].field_0x28 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x67);
    if (0 < (short)uVar4) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar4 << 0x10 | 0x67;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x68);
    if (0 < (short)uVar4) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar4 << 0x10 | 0x68;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x6a);
    if ((short)uVar4 < 1) goto cf_common_join_00489222;
    uVar3 = (int)(short)uVar4 << 0x10 | 0x6a;
  }
  *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = uVar3;
  *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
cf_common_join_00489222:
  iVar5 = 9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)this->field_06CB + 0x2c)) {
  case 1:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0xb);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0xb;
      param_1[3].field_0x68 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x97);
    if (0 < (short)uVar4) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar4 << 0x10 | 0x97;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 2:
  case 3:
  case 6:
  case 0xb:
  case 0x26:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,6);
    if (0 < (short)uVar4) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 6;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 5:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x3c);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x3c;
      param_1[3].field_0x68 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x9a);
    if (0 < (short)uVar4) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar4 << 0x10 | 0x9a;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,6);
    if (0 < (short)uVar4) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar4 << 0x10 | 6;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0xd:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x83);
    if (0 < (short)uVar4) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x83;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 0xe:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x95);
    if (0 < (short)uVar4) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x95;
      param_1[3].field_0x68 = 1;
    }
    break;
  case 0xf:
  case 0x12:
  case 0x17:
  case 0x27:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x3a);
    if (0 < (short)uVar4) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x3a;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 0x11:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x91);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x91;
      param_1[3].field_0x68 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x41);
    if (0 < (short)uVar4) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar4 << 0x10 | 0x41;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x16:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x3a);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x3a;
      param_1[3].field_0x68 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x92);
    if (0 < (short)uVar4) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar4 << 0x10 | 0x92;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x1c:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x7d);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x7d;
      param_1[3].field_0x68 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x7e);
    if (0 < (short)uVar4) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar4 << 0x10 | 0x7e;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x1e:
  case 0x22:
  case 0x28:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x7a);
    if (0 < (short)uVar4) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x7a;
      param_1[3].field_0x68 = 1;
      return;
    }
    break;
  case 0x21:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x4b);
    if (0 < (short)uVar4) {
      iVar5 = 10;
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x4b;
      param_1[3].field_0x68 = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x4c);
    if (0 < (short)uVar4) {
      iVar6 = iVar5 * 0x30;
      iVar5 = iVar5 + 1;
      *(uint *)(&param_1->field_0x0 + iVar6) = (int)(short)uVar4 << 0x10 | 0x4c;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar6) + 8) = 1;
    }
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x76);
    if (0 < (short)uVar4) {
      *(uint *)(&param_1->field_0x0 + iVar5 * 0x30) = (int)(short)uVar4 << 0x10 | 0x76;
      *(undefined1 *)((int)(&param_1->field_0x0 + iVar5 * 0x30) + 8) = 1;
      return;
    }
    break;
  case 0x23:
    uVar4 = thunk_FUN_004e60d0(this->field_0024,0x69);
    if (0 < (short)uVar4) {
      *(uint *)&param_1[3].field_0x60 = (int)(short)uVar4 << 0x10 | 0x69;
      param_1[3].field_0x68 = 1;
      return;
    }
  }
  return;
}

