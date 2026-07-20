
undefined4 __fastcall
FUN_0065e700(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2,int *param_3,int *param_4,
            int *param_5)

{
  uint *groupContent;
  int *piVar1;
  STFishC *this;
  int *extraout_ECX;
  int *piVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  uint uVar4;
  bool bVar5;
  short local_a;
  short local_8;
  short local_6;
  
  groupContent = thunk_FUN_0065da10(param_1,param_2);
  if ((groupContent == (uint *)0x0) || (groupContent[3] == 0)) {
    return 0xffffffff;
  }
  uVar4 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (0 < (int)groupContent[3]) {
    bVar5 = groupContent[3] != 0;
    piVar2 = param_3;
    iVar3 = extraout_EDX;
    do {
      if (bVar5) {
        piVar2 = (int *)groupContent[7];
        piVar1 = (int *)(groupContent[2] * uVar4 + (int)piVar2);
      }
      else {
        piVar1 = (int *)0x0;
      }
      this = (STFishC *)
             STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,
                        CONCAT31((int3)((uint)piVar2 >> 8),param_1->field_0024),
                        CONCAT22((short)((uint)iVar3 >> 0x10),(short)*piVar1),CASE_1);
      piVar2 = extraout_ECX;
      iVar3 = extraout_EDX_00;
      if (this != (STFishC *)0x0) {
        STFishC::sub_004162B0(this,&local_6,&local_8,&local_a);
        *param_3 = *param_3 + (int)local_6;
        iVar3 = (int)local_8;
        *param_4 = *param_4 + iVar3;
        piVar2 = (int *)(*param_5 + (int)local_a);
        *param_5 = (int)piVar2;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < groupContent[3];
    } while ((int)uVar4 < (int)groupContent[3]);
  }
  FUN_006ae110((byte *)groupContent);
  if (0 < (int)uVar4) {
    *param_3 = *param_3 / (int)uVar4;
    *param_4 = *param_4 / (int)uVar4;
    *param_5 = *param_5 / (int)uVar4;
    return 0;
  }
  return 0xffffffff;
}

