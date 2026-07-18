
uint * __cdecl
FUN_006774c0(undefined4 param_1,byte *param_2,char param_3,short param_4,short param_5,short param_6
            ,short param_7,short param_8,short param_9,int param_10)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  uint *local_8;
  
  uVar4 = DAT_00858df8;
  local_8 = (uint *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar1 == 0) {
    puVar2 = FUN_006ae290((uint *)0x0,10,2,10);
    puVar3 = &LAB_00401852;
    if (param_10 == 0) {
      puVar3 = &LAB_00403490;
    }
    local_8 = puVar2;
    thunk_FUN_00676d80(param_1,0,0x3fffffff,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,puVar3,puVar2,(undefined *)0x0);
    DAT_00858df8 = (undefined1 *)uVar4;
    return puVar2;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  if (local_8 != (uint *)0x0) {
    FUN_006ae110((byte *)local_8);
  }
  local_8 = (uint *)0x0;
  FUN_006a5e40(iVar1,0,0x7d2d58,0x2ee);
  return (uint *)0x0;
}

