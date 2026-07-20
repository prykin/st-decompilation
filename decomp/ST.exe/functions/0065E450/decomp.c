
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0065E450_param_3Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190 */

int __fastcall
FUN_0065e450(AnonShape_0065E360_B94C37CB *param_1,undefined4 param_2,
            Global_sub_0065E450_param_3Enum param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  Global_sub_0065E450_param_3Enum GVar2;
  int iVar3;
  uint *groupContent;
  Global_sub_0065E450_param_3Enum GVar4;
  undefined2 *puVar5;
  void *this;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar8;
  int local_8;
  
  GVar2 = param_3;
  local_8 = 0;
  switch(param_3) {
  case CASE_A3:
    iVar3 = 0x4e;
    break;
  default:
    iVar3 = 0;
    break;
  case CASE_A8:
    iVar3 = 0x45;
    break;
  case CASE_B2:
    iVar3 = 0x70;
    break;
  case CASE_BE:
    iVar3 = 0x72;
  }
  groupContent = thunk_FUN_0065e360(param_1,param_2,iVar3);
  if (groupContent == (uint *)0x0) {
    return 0;
  }
  GVar4 = groupContent[3];
  param_3 = 0;
  uVar8 = extraout_EDX;
  if (0 < (int)GVar4) {
    do {
      if (param_3 < GVar4) {
        puVar5 = (undefined2 *)(groupContent[2] * param_3 + groupContent[7]);
      }
      else {
        puVar5 = (undefined2 *)0x0;
      }
      this = (void *)STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)puVar5 >> 8),param_1->field_0024),
                                CONCAT22((short)((uint)uVar8 >> 0x10),*puVar5),CASE_1);
      uVar8 = extraout_EDX_00;
      switch(GVar2) {
      case 0:
      case 5:
      case 0x1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar6 = thunk_FUN_004c5350(this,0,(int *)0x0,param_4,param_5,0,0,0);
        local_8 = local_8 + (uint)(uVar6 != 0);
        uVar8 = extraout_EDX_01;
        break;
      case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) {
LAB_0065e58d:
          if ((*(int *)((int)this + 0x245) != 0) || (*(int *)((int)this + 0x4ec) < 100))
          goto LAB_0065e5a7;
          bVar1 = 1;
        }
        else {
          uVar6 = thunk_FUN_004406c0((char)*(int *)((int)this + 0x23d));
          iVar3 = *(int *)((int)this + 0x235);
          uVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          uVar8 = extraout_EDX_02;
          if ((&DAT_007e1984)[(uVar7 & 0xff) + ((uVar6 & 0xff) + iVar3 * 3) * 3] != '\0')
          goto LAB_0065e58d;
LAB_0065e5a7:
          bVar1 = 0;
        }
        local_8 = local_8 + (uint)bVar1;
      }
                    /* WARNING: This code block may not be properly labeled as switch case */
      GVar4 = groupContent[3];
      param_3 = param_3 + 1;
    } while ((int)param_3 < (int)GVar4);
  }
  FUN_006ae110((byte *)groupContent);
  return local_8;
}

