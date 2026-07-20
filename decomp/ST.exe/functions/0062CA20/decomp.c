
/* [STPrototypeApplier] Propagated return.
   Evidence: 0062CA20 returns return of Library::DKW::LIB::FUN_006aac70 @ 0062CA5B */

int __cdecl FUN_0062ca20(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)0x0;
  uVar3 = 0x6d;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x6d);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *param_2 = uVar3;
  }
  return (int)puVar1;
}

