
uint * FUN_0065f840(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
      ((int)param_2 < *(int *)(param_1 + 0xc))) && (0 < param_3)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar1 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar1 != 0) {
      g_currentExceptionFrame = local_54.previous;
      if (local_8 != (uint *)0x0) {
        FUN_006ae110((byte *)local_8);
      }
      return (uint *)0x0;
    }
    puVar2 = FUN_006ae290((uint *)0x0,5,6,5);
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar5 = param_2;
    local_8 = puVar2;
    if ((int)param_2 < (int)uVar3) {
      do {
        if (param_3 <= (int)(uVar5 - param_2)) {
          g_currentExceptionFrame = local_54.previous;
          return puVar2;
        }
        if (uVar5 < uVar3) {
          puVar4 = (undefined4 *)(*(int *)(param_1 + 8) * uVar5 + *(int *)(param_1 + 0x1c));
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        local_10 = *puVar4;
        local_c = *(undefined2 *)(puVar4 + 1);
        FUN_006ae1c0(puVar2,&local_10);
        uVar3 = *(uint *)(param_1 + 0xc);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar3);
    }
    g_currentExceptionFrame = local_54.previous;
    return puVar2;
  }
  return (uint *)0x0;
}

