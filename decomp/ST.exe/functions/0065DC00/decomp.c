
int __fastcall FUN_0065dc00(int param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  DArrayTy *array;
  dword dVar2;
  undefined2 *puVar3;
  STGameObjC *pSVar4;
  int iVar5;
  void *pvVar6;
  IMAGE_DOS_HEADER *pIVar7;
  undefined4 extraout_ECX;
  void *pvVar8;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  uint uVar9;
  int local_8;
  
  local_8 = 0;
  array = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)param_1,param_2);
  if (array == (DArrayTy *)0x0) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x81);
  if ((cVar1 < '\0') || ('\a' < cVar1)) {
    cVar1 = (char)*(undefined4 *)(param_1 + 0x24);
  }
  pvVar8 = (void *)CONCAT31((int3)((uint)extraout_ECX >> 8),param_4);
  if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
    param_4 = -1;
    cVar1 = param_4;
  }
  param_4 = cVar1;
  dVar2 = array->count;
  uVar9 = 0;
  if (0 < (int)dVar2) {
    do {
      if (uVar9 < dVar2) {
        pvVar8 = array->data;
        puVar3 = (undefined2 *)(array->elementSize * uVar9 + (int)pvVar8);
      }
      else {
        puVar3 = (undefined2 *)0x0;
      }
      pSVar4 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)pvVar8 >> 8),*(undefined1 *)(param_1 + 0x24)),
                          CONCAT22((short)((uint)puVar3 >> 0x10),*puVar3),CASE_1);
      pvVar8 = extraout_ECX_00;
      if ((pSVar4 != (STGameObjC *)0x0) &&
         (iVar5 = (*pSVar4->vtable[1].vfunc_24)(), pvVar8 = extraout_ECX_01, iVar5 != 0)) {
        if (-1 < param_4) {
          pvVar6 = (void *)(*pSVar4->vtable->vfunc_6C)();
          pvVar8 = (void *)(int)param_4;
          if ((void *)(int)param_4 != pvVar6) goto LAB_0065dcca;
        }
        iVar5 = (*pSVar4->vtable->vfunc_2C)();
        pIVar7 = thunk_FUN_00674fb0(iVar5);
        pvVar8 = (void *)param_3;
        if ((param_3 & (uint)pIVar7) != 0) {
          local_8 = local_8 + 1;
        }
      }
LAB_0065dcca:
      dVar2 = array->count;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)dVar2);
  }
  DArrayDestroy(array);
  return local_8;
}

