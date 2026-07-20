
int FUN_006b7190(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  AnonShape_006B7190_816EEFBC *pAVar6;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  AnonShape_006B7190_816EEFBC *local_8;
  
  piVar1 = param_1;
LAB_006b719c:
  while( true ) {
    while( true ) {
      iVar2 = (**(code **)(*(int *)*piVar1 + 100))((int *)*piVar1,&local_10,local_14,0,0,&local_c);
      if (iVar2 != -0x7788ffe2) {
        if (iVar2 == -0x7788ff42) {
          return 0;
        }
        return iVar2;
      }
      local_8 = (AnonShape_006B7190_816EEFBC *)Library::DKW::LIB::FUN_006aac70(local_c);
      iVar2 = (**(code **)(*(int *)*piVar1 + 100))
                        ((int *)*piVar1,&local_10,local_14,0,local_8,&local_c);
      if (iVar2 == -0x7788ff42) {
        FUN_006a5e90((short *)local_8);
        return 0;
      }
      if (local_10 != 0) break;
      FUN_006ab060(&local_8);
    }
    if (*(char *)local_8 != '\x05') break;
    param_1 = (int *)FUN_006b73e0(piVar1[0x14],local_10);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)Library::DKW::LIB::FUN_006aac70(0x18);
      if (param_1 == (int *)0x0) {
        return -2;
      }
      FUN_006b9910(piVar1 + 0x14,(int)param_1);
    }
    else {
      FUN_006a5e90((short *)param_1[5]);
    }
    param_1[1] = local_10;
    param_1[2] = (uint)(byte)local_8->field_0001;
    param_1[3] = (int)(short)local_8->field_0002;
    param_1[4] = local_c + -8;
    iVar2 = Library::DKW::LIB::FUN_006aac70(*(int *)((int)&local_8->field_0002 + 2));
    param_1[5] = iVar2;
    uVar5 = param_1[4];
    pAVar6 = local_8 + 1;
    puVar3 = (undefined4 *)param_1[5];
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *(undefined4 *)pAVar6;
      pAVar6 = (AnonShape_006B7190_816EEFBC *)((int)&pAVar6->field_0002 + 2);
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)pAVar6;
      pAVar6 = (AnonShape_006B7190_816EEFBC *)&pAVar6->field_0001;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (*(char *)local_8 == '\x06') goto code_r0x006b72b1;
  goto LAB_006b7373;
code_r0x006b72b1:
  param_1 = (int *)FUN_006b73e0(piVar1[0x14],local_10);
  if (param_1 != (int *)0x0) {
    if (((char)param_1[2] == local_8->field_0001) &&
       ((int)(short)local_8->field_0002 == param_1[3] + -1)) {
      param_1[3] = param_1[3] + -1;
      pAVar6 = local_8 + 1;
      puVar3 = (undefined4 *)(param_1[5] + param_1[4]);
      for (uVar5 = local_c - 8U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *(undefined4 *)pAVar6;
        pAVar6 = (AnonShape_006B7190_816EEFBC *)((int)&pAVar6->field_0002 + 2);
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = local_c - 8U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)pAVar6;
        pAVar6 = (AnonShape_006B7190_816EEFBC *)&pAVar6->field_0001;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      param_1[4] = param_1[4] + local_c + -8;
      if (param_1[3] == 0) {
        FUN_006ab060(&local_8);
        local_8 = (AnonShape_006B7190_816EEFBC *)param_1[5];
        local_c = param_1[4];
        FUN_006b98c0(piVar1 + 0x14,param_1);
        FUN_006ab060(&param_1);
LAB_006b7373:
        puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x14);
        if (puVar3 == (undefined4 *)0x0) {
          return -2;
        }
        puVar3[2] = local_10;
        puVar3[4] = local_8;
        puVar3[3] = local_c;
        FUN_006d2530(piVar1 + 0x11,puVar3);
      }
    }
    else {
      FUN_006ab060((LPVOID *)(param_1 + 5));
      FUN_006b98c0(piVar1 + 0x14,param_1);
      FUN_006ab060(&param_1);
    }
  }
  goto LAB_006b719c;
}

