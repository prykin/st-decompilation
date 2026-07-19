
undefined4 * __thiscall thunk_FUN_0062d670(void *this,uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puStack_14;
  undefined4 *puStack_10;
  uint uStack_c;
  void *pvStack_8;
  
  puVar1 = param_1;
  uStack_c = 0;
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xb4);
  pvStack_8 = this;
  puStack_10 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x98);
  *(undefined4 *)((int)this + 0x28) = 2;
  if (this == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)((int)this + 0x1c);
  }
  puVar7 = puStack_10;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *param_1 = 0x98;
  param_1 = (uint *)0x0;
  do {
    switch(param_1) {
    case (uint *)0x0:
      piVar2 = (int *)((int)pvStack_8 + 0x30);
      break;
    case (uint *)0x1:
      piVar2 = (int *)((int)pvStack_8 + 0x50);
      break;
    case (uint *)0x2:
      piVar2 = (int *)((int)pvStack_8 + 0x70);
      break;
    case (uint *)0x3:
      piVar2 = (int *)((int)pvStack_8 + 0x90);
      break;
    default:
      goto switchD_0062d6cc_default;
    }
    if ((piVar2 != (int *)0x0) &&
       (puStack_14 = thunk_FUN_0062d550(piVar2,(int *)&uStack_c), uStack_c != 0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + uStack_c;
      puStack_10 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(puStack_10,uVar4 + uStack_c);
      puVar6 = puStack_14;
      puVar8 = (uint *)((*puVar1 - uStack_c) + (int)puStack_10);
      for (uVar4 = uStack_c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uStack_c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar8 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar8 = (uint *)((int)puVar8 + 1);
      }
      FUN_006ab060(&puStack_14);
    }
switchD_0062d6cc_default:
    param_1 = (uint *)((int)param_1 + 1);
    if (3 < (int)param_1) {
      return puStack_10;
    }
  } while( true );
}

