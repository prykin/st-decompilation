
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 006025D0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006021E2 */

byte * __thiscall FUN_006025d0(void *this,undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;

  if (*(int *)((int)this + 0x36e) != 3) {
    pbVar1 = (byte *)Library::DKW::LIB::FUN_006aac70(0x17e);
    if (*(int *)((int)this + 0x36e) == 2) {
      *(uint *)((int)this + 0x36e) = (uint)(*(char *)((int)this + 0x39f) < '\x01');
    }
    *(undefined4 *)((int)this + 0x23d) = 2;
    puVar3 = (undefined4 *)((int)this + 0x231);
    pbVar4 = pbVar1;
    for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pbVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pbVar4 = pbVar4 + 4;
    }
    *(undefined2 *)pbVar4 = *(undefined2 *)puVar3;
    *param_1 = 0x17e;
    return pbVar1;
  }
  *param_1 = 0;
  return (byte *)0x0;
}

