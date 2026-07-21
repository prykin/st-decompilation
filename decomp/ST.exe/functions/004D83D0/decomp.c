
undefined4 FUN_004d83d0(undefined1 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (DAT_007fa168 == 0) {
    DAT_007fa168 = Library::DKW::LIB::FUN_006aac70((int)g_worldGrid.planeStride);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if ((int)g_worldGrid.sizeX < (int)(param_4 + param_2)) {
    param_4 = g_worldGrid.sizeX - param_2;
  }
  if ((int)g_worldGrid.sizeY < param_3 + param_5) {
    param_5 = g_worldGrid.sizeY - param_3;
  }
  iVar1 = param_3 + param_5;
  if (iVar1 <= param_3) {
    return 0;
  }
  do {
    puVar3 = (undefined4 *)(g_worldGrid.sizeX * param_3 + DAT_007fa168 + param_2);
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 1;
    for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = param_1;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  } while (param_3 < iVar1);
  return 0;
}

