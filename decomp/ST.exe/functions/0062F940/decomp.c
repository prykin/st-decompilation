
void __thiscall FUN_0062f940(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  *param_1 = 0;
  local_c = 0x3d;
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x3d);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xbe;
    puVar1[1] = 0xff;
    puVar1[2] = 0;
    puVar1[3] = 2;
    iVar6 = 5;
    puVar1[5] = *(undefined4 *)((int)this + 0x1d5);
    puVar1[6] = *(undefined4 *)((int)this + 0x1d9);
    puVar1[7] = *(undefined4 *)((int)this + 0x1dd);
    piVar4 = (int *)((int)this + 0x1e5);
    puVar1[8] = *(undefined4 *)((int)this + 0x1e1);
    piVar3 = puVar1 + 9;
    piVar2 = piVar4;
    do {
      *piVar3 = *piVar2;
      if (*piVar2 != 0) {
        local_8 = local_8 + 1;
      }
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(undefined1 *)(puVar1 + 0xe) = *(undefined1 *)((int)this + 0x1f9);
    *(undefined4 *)((int)puVar1 + 0x39) = *(undefined4 *)((int)this + 0x1fa);
    if (local_8 != 0) {
      local_c = local_8 * 0x3e + 0x3d;
      iVar6 = Library::DKW::LIB::FUN_006acf50(puVar1,local_c);
      if (iVar6 == 0) {
        return;
      }
      puVar1 = (undefined4 *)(iVar6 + 0x3d);
      local_8 = 5;
      do {
        if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)*piVar4;
          puVar7 = puVar1;
          for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
          puVar1 = (undefined4 *)((int)puVar1 + 0x3e);
        }
        piVar4 = piVar4 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *param_1 = local_c;
  }
  return;
}

