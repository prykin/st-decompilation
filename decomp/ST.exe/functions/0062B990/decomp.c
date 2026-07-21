
void __cdecl
FUN_0062b990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [6];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_18 = *(undefined4 *)(param_5 + 0x18);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(undefined4 *)(param_5 + 0x24);
  local_c = param_6;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 2;
  local_8 = param_7;
  (*PTR_00802a38->vtable->vfunc_08)(0x124,0,0,local_44,0);
  return;
}

