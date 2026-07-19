
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DestroyObjectMsg
   
   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_DestroyObjectMsg_param_3Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __thiscall
STAllPlayersC::DestroyObjectMsg
          (STAllPlayersC *this,undefined4 *param_1,uint param_2,
          STAllPlayersC_DestroyObjectMsg_param_3Enum param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = param_2;
  switch(param_3) {
  case CASE_1:
    iVar4 = *(int *)((int)&DAT_007f4e29 + (char)param_1 * 0xa62);
    break;
  case CASE_2:
    iVar4 = DAT_007fa154;
    break;
  case CASE_3:
    iVar4 = DAT_007fa158;
    break;
  case CASE_4:
    iVar4 = DAT_007fa15c;
    break;
  case CASE_5:
    iVar4 = DAT_007fa160;
    break;
  case CASE_6:
    iVar4 = DAT_007fa164;
    break;
  default:
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2eb1,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__DestroyObjectMsg_007a86e0);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if (((iVar4 != 0) && (uVar3 = FUN_006acc70(iVar4,param_2 & 0xffff,&param_1), uVar3 != 0xfffffffc))
     && (param_1 != (undefined4 *)0x0)) {
    local_20 = 10000;
    local_1c = 0;
    local_18 = 0xfe;
    local_14 = (undefined2)uVar2;
    local_12 = *(undefined2 *)(param_1 + 6);
    local_2c = &local_20;
    local_10 = 0;
    local_c = 1;
    local_8 = param_4;
    local_30 = 0x128;
    (**(code **)*param_1)(local_40);
    return 1;
  }
  return 0;
}

