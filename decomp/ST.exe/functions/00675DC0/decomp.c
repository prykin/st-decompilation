
void __cdecl FUN_00675dc0(uint param_1,int param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((DAT_007fa174 != (STAllPlayersC *)0x0) && (param_2 != 0)) &&
     (iVar3 = *(int *)(param_2 + 0xc), iVar3 != 0)) {
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar4 = 0;
      if (iVar3 == 0) {
        puVar1 = (undefined2 *)0x0;
        goto LAB_00675dfe;
      }
      do {
        puVar1 = (undefined2 *)(*(int *)(param_2 + 8) * uVar4 + *(int *)(param_2 + 0x1c));
LAB_00675dfe:
        piVar2 = (int *)STAllPlayersC::GetObjPtr
                                  (DAT_007fa174,param_1,
                                   CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x2c))(), iVar3 == 0x78)) &&
           (iVar3 = (**(code **)(*piVar2 + 0x2c))(), iVar3 == 0x78)) {
          *(undefined4 *)((int)piVar2 + 0x269) = 0xffffffff;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xffff;
      } while (uVar4 < *(uint *)(param_2 + 0xc));
    }
    STAllPlayersC::AddObjsToGroup(DAT_007fa174,param_1,0,param_2,(undefined2 *)0x0);
  }
  return;
}

