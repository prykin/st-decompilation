
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062D670 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0062CD19 */

byte * __thiscall FUN_0062d670(void *this,uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *local_14;
  byte *local_10;
  uint local_c;
  void *local_8;
  
  puVar1 = param_1;
  local_c = 0;
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xb4);
  local_8 = this;
  local_10 = (byte *)Library::DKW::LIB::FUN_006aac70(0x98);
  *(undefined4 *)((int)this + 0x28) = 2;
  if (this == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)((int)this + 0x1c);
  }
  pbVar7 = local_10;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    pbVar7 = pbVar7 + 4;
  }
  *param_1 = 0x98;
  param_1 = (uint *)0x0;
  do {
    switch(param_1) {
    case (uint *)0x0:
      piVar2 = (int *)((int)local_8 + 0x30);
      break;
    case (uint *)0x1:
      piVar2 = (int *)((int)local_8 + 0x50);
      break;
    case (uint *)0x2:
      piVar2 = (int *)((int)local_8 + 0x70);
      break;
    case (uint *)0x3:
      piVar2 = (int *)((int)local_8 + 0x90);
      break;
    default:
      goto switchD_0062d6cc_default;
    }
    if ((piVar2 != (int *)0x0) &&
       (local_14 = thunk_FUN_0062d550(piVar2,(int *)&local_c), local_c != 0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + local_c;
      local_10 = (byte *)Library::DKW::LIB::FUN_006acf50((int)local_10,uVar4 + local_c);
      puVar6 = local_14;
      puVar8 = (uint *)(local_10 + (*puVar1 - local_c));
      for (uVar4 = local_c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = local_c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar8 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar8 = (uint *)((int)puVar8 + 1);
      }
      FreeAndNull(&local_14);
    }
switchD_0062d6cc_default:
    param_1 = (uint *)((int)param_1 + 1);
    if (3 < (int)param_1) {
      return local_10;
    }
  } while( true );
}

