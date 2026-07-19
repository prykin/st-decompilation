
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CmdToObj
   
   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_CmdToObj_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_21=33
    */

void __thiscall
STBoatC::CmdToObj(STBoatC *this,STBoatC_CmdToObj_param_1Enum param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_1 != CASE_21) && (param_1 != CASE_5)) {
    STAllPlayersC::DeleteGuardBoat
              (DAT_007fa174,CONCAT31((int3)((uint)this >> 8),this->field_0x24),this->field_0032,1);
  }
  this->field_02C4 = 1;
  switch(param_1) {
  case CASE_1:
    this->field_02CC = 1;
    puVar4 = (undefined4 *)&this->field_0x328;
    break;
  case CASE_2:
    this->field_02D0 = 1;
    *(undefined4 *)&this->field_0x332 = *param_2;
    *(undefined4 *)&this->field_0x336 = param_2[1];
    *(undefined4 *)&this->field_0x33a = param_2[2];
    *(undefined4 *)&this->field_0x33e = param_2[3];
    this->field_0x342 = *(undefined1 *)(param_2 + 4);
    return;
  case CASE_3:
  case CASE_21:
    this->field_02D4 = 1;
    *(undefined4 *)&this->field_0x343 = *param_2;
    return;
  case CASE_4:
    this->field_02D8 = 1;
    puVar4 = (undefined4 *)&this->field_0x39c;
    goto LAB_0045f0e0;
  case CASE_5:
    this->field_02DC = 1;
    this->field_03A6 = *param_2;
    this->field_03AA = param_2[1];
    this->field_03AE = param_2[2];
    this->field_03B2 = param_2[3];
    return;
  case CASE_6:
    this->field_02E0 = 1;
    *(undefined4 *)&this->field_0x347 = *param_2;
    *(undefined4 *)&this->field_0x34b = param_2[1];
    return;
  case CASE_7:
    this->field_02E4 = 1;
    puVar4 = (undefined4 *)&this->field_0x3d4;
    goto cf_common_exit_0045F1A9;
  case CASE_8:
    this->field_02E8 = 1;
    *(undefined4 *)&this->field_0x437 = *param_2;
    *(undefined4 *)&this->field_0x43b = param_2[1];
    *(undefined4 *)&this->field_0x43f = param_2[2];
    *(undefined4 *)&this->field_0x443 = param_2[3];
    return;
  case CASE_9:
    this->field_02EC = 1;
    *(undefined4 *)&this->field_0x3e8 = *param_2;
    *(undefined4 *)&this->field_0x3ec = param_2[1];
    *(undefined2 *)&this->field_0x3f0 = *(undefined2 *)(param_2 + 2);
    this->field_0x3f2 = *(undefined1 *)((int)param_2 + 10);
    return;
  case CASE_A:
    this->field_02F0 = 1;
    puVar4 = (undefined4 *)&this->field_0x3de;
LAB_0045f0e0:
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_2 + 2);
    return;
  case CASE_B:
    this->field_02F4 = 1;
    puVar4 = (undefined4 *)&this->field_0x41f;
    goto cf_common_exit_0045F1A9;
  case CASE_C:
    this->field_02F8 = 1;
    puVar4 = (undefined4 *)&this->field_0x34f;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  case CASE_D:
    this->field_02FC = 1;
    puVar4 = (undefined4 *)&this->field_0x392;
cf_common_exit_0045F1A9:
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_2 + 2);
    return;
  case CASE_E:
    this->field_0300 = 1;
    *(undefined4 *)&this->field_0x447 = *param_2;
    *(undefined4 *)&this->field_0x44b = param_2[1];
    *(undefined4 *)&this->field_0x44f = param_2[2];
    *(undefined2 *)&this->field_0x453 = *(undefined2 *)(param_2 + 3);
    return;
  case CASE_F:
    this->field_0304 = 1;
    *(undefined4 *)&this->field_0x3b6 = *param_2;
    uVar1 = param_2[1];
    this->field_03BA = (short)uVar1;
    this->field_03BC = (short)((uint)uVar1 >> 0x10);
    *(undefined4 *)&this->field_03BE = param_2[2];
    *(undefined2 *)((int)&this->field_03C0 + 2) = *(undefined2 *)(param_2 + 3);
    return;
  case CASE_10:
    this->field_0308 = 1;
    puVar4 = (undefined4 *)&this->field_0x3ca;
    break;
  case CASE_11:
    this->field_030C = 1;
    puVar4 = (undefined4 *)&this->field_0x36f;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)param_2;
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_2 + 2);
    return;
  case CASE_12:
    this->field_0310 = 1;
    *(undefined4 *)&this->field_0x429 = *param_2;
    *(undefined4 *)&this->field_0x42d = param_2[1];
    *(undefined4 *)&this->field_0x431 = param_2[2];
    *(undefined2 *)&this->field_0x435 = *(undefined2 *)(param_2 + 3);
    return;
  default:
    iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x13a7,0,0,&DAT_007a4ccc,
                               s_STBoatC__CmdToObj_unknown_type_007aa080);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  case CASE_14:
    this->field_0314 = 1;
    *(undefined4 *)&this->field_0x3c4 = *param_2;
    this->field_03C8 = *(undefined2 *)(param_2 + 1);
    return;
  case CASE_15:
    this->field_0318 = 1;
    puVar4 = (undefined4 *)&this->field_0x401;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  case CASE_16:
    this->field_031C = 1;
    *(undefined4 *)&this->field_0x3f3 = *param_2;
    *(undefined4 *)&this->field_0x3f7 = param_2[1];
    *(undefined4 *)&this->field_0x3fb = param_2[2];
    *(undefined2 *)&this->field_0x3ff = *(undefined2 *)(param_2 + 3);
    return;
  case CASE_17:
    this->field_0320 = 1;
    puVar4 = (undefined4 *)&this->field_0x415;
  }
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_2 + 2);
  return;
}

