
void __thiscall FUN_00575120(void *this,short *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  
  iVar3 = 6;
  iVar2 = (int)param_1[1] * (int)*param_1;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  puVar4 = (undefined4 *)
           ((int)param_1 + (iVar2 * 5 + param_2 + (*param_1 * param_3) / 2) * 4 + 0x459);
  local_8 = this;
  do {
    puVar1 = (undefined4 *)*puVar4;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[6] = 0;
      thunk_FUN_005745e0((AnonShape_005745E0_AF52CC75 *)param_1,puVar1);
    }
    puVar4 = puVar4 + -iVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_8 = (undefined4 *)
            Library::DKW::LIB::FUN_006aac70
                      ((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2));
  thunk_FUN_00574920(param_1,param_2,param_3,local_8);
  FreeAndNull(&local_8);
  return;
}

