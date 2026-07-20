
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0043E640_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

short FUN_0043e640(char param_1,Global_sub_0043E640_param_2Enum param_2,int param_3,char param_4)

{
  DArrayTy *pDVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  Global_sub_0043E640_param_2Enum GVar5;
  int iVar6;
  int iVar7;
  undefined1 local_c [4];
  dword local_8;
  
  iVar7 = 0;
  sVar4 = 0;
  pDVar1 = g_playerRuntime[param_1].objects;
  local_8 = pDVar1->count;
  sVar3 = 0;
  if (0 < (int)local_8) {
    do {
      sVar4 = sVar3;
      piVar2 = *(int **)((int)pDVar1->data + iVar7 * 4);
      if (((piVar2 != (int *)0x0) && (GVar5 = (**(code **)(*piVar2 + 0x2c))(), GVar5 == param_2)) &&
         (iVar6 = (**(code **)(*piVar2 + 0xf8))(), iVar6 != 0)) {
        if (param_3 == 0) {
LAB_0043e6d3:
          if ((param_4 == -1) ||
             (iVar6 = (**(code **)(**(int **)((int)pDVar1->data + iVar7 * 4) + 0x6c))(),
             iVar6 == param_4)) {
            sVar4 = sVar4 + 1;
          }
        }
        else {
          switch(param_2) {
          case CASE_38:
          case CASE_39:
          case CASE_4F:
          case CASE_5E:
            if ((param_3 == 1) && (iVar6 = (**(code **)(*piVar2 + 0x88))(local_c), 0 < iVar6))
            goto LAB_0043e6d3;
          }
        }
      }
      iVar7 = iVar7 + 1;
      sVar3 = sVar4;
    } while (iVar7 < (int)local_8);
  }
  return sVar4;
}

