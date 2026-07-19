
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006db0d0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  int local_8;
  
  piVar3 = (int *)&stack0xffffffe8;
  Library::MSVCRT::FUN_0072da40();
  iVar2 = -1;
  iVar1 = -(param_7 >> 1);
  iVar5 = param_3;
  if (0 < param_3) {
    do {
      for (; iVar1 < 1; iVar1 = iVar1 + param_3) {
        iVar2 = iVar2 + 1;
      }
      *piVar3 = iVar2;
      iVar1 = iVar1 - param_7;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_8 = param_4;
  param_7 = -(param_8 >> 1);
  pbVar4 = (byte *)(param_5 - param_6);
  do {
    if (param_7 < 1) {
      do {
        pbVar4 = pbVar4 + param_6;
        bVar6 = SCARRY4(param_7,param_4);
        param_7 = param_7 + param_4;
      } while (param_7 == 0 || bVar6 != param_7 < 0);
    }
    piVar3 = (int *)&stack0xffffffe8;
    iVar1 = param_3;
    if (((uint)param_1 & 2) == 0) {
joined_r0x006db171:
      while (1 < iVar1) {
        *param_1 = CONCAT22(*(undefined2 *)(param_9 + (uint)pbVar4[piVar3[1]] * 2),
                            *(undefined2 *)
                             (param_9 +
                             CONCAT22((short)((uint)*piVar3 >> 0x10),(ushort)pbVar4[*piVar3]) * 2));
        param_1 = param_1 + 1;
        piVar3 = piVar3 + 2;
        iVar1 = iVar1 + -2;
      }
      if (iVar1 + -2 != -2) {
        *(undefined2 *)param_1 = *(undefined2 *)(param_9 + (uint)pbVar4[*piVar3] * 2);
        param_1 = (undefined4 *)((int)param_1 + 2);
      }
    }
    else {
      piVar3 = (int *)&stack0xffffffec;
      *(undefined2 *)param_1 = *(undefined2 *)(param_9 + (uint)*pbVar4 * 2);
      param_1 = (undefined4 *)((int)param_1 + 2);
      iVar1 = param_3 + -1;
      if (iVar1 != 0 && 0 < param_3) goto joined_r0x006db171;
    }
    param_1 = (undefined4 *)((int)param_1 + param_2 + param_3 * -2);
    param_7 = param_7 - param_8;
    iVar1 = local_8 + -1;
    bVar6 = local_8 < 1;
    local_8 = iVar1;
    if (iVar1 == 0 || bVar6) {
      return;
    }
  } while( true );
}

