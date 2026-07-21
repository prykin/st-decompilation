
void FUN_00496cc0(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,void *param_6
                 )

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;

  uVar1 = param_3;
  uVar2 = thunk_FUN_00496a90(param_1,param_2,param_3,param_4,param_5,&param_3);
  pvVar3 = param_6;
  if ((int)uVar2 < 0) {
    iVar4 = thunk_FUN_00497370(param_1,param_2,uVar1,param_5,param_6);
    if (0 < iVar4) {
      param_5 = thunk_FUN_004969f0(param_1,param_2,uVar1,param_4,param_5,pvVar3,0xffffffff);
      if ((&DAT_007fb24c)[uVar1] == 0) {
        puVar5 = (undefined4 *)
                 Library::DKW::LIB::FUN_006aac70
                           ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX);
        iVar4 = (int)g_pathingScratchGrid.sizeY;
        iVar6 = (int)g_pathingScratchGrid.sizeX;
        (&DAT_007fb24c)[uVar1] = puVar5;
        for (uVar2 = (uint)(iVar4 * iVar6) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = iVar4 * iVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      thunk_FUN_00496b30(param_5,uVar1,1);
    }
  }
  else if (param_3 != 0) {
    if (uVar2 < PTR_007fb270->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_007fb270, uVar2) (runtime stride) */
      pvVar3 = (void *)(PTR_007fb270->elementSize * uVar2 + (int)PTR_007fb270->data);
    }
    else {
      pvVar3 = (void *)0x0;
    }
    thunk_FUN_00496b30(uVar2,*(int *)((int)pvVar3 + 8),0);
    thunk_FUN_004969f0(param_1,param_2,uVar1,param_4,param_5,param_6,uVar2);
    thunk_FUN_00496b30(uVar2,uVar1,1);
    return;
  }
  return;
}

