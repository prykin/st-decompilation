
undefined4 __cdecl FUN_0067ba50(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_48 [2];
  char local_40;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined4 local_39;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_48[0] = 0x66;
  local_48[1] = 0xffffffff;
  AiFltClassTy::GetAiMess((AiFltClassTy *)param_1,local_48);
  if (('\0' < local_40) && (param_2 != (uint *)0x0)) {
    local_10 = local_3d;
    _local_14 = CONCAT22(local_3f,*(undefined2 *)(param_1 + 0x7d));
    local_c = local_39;
    local_8 = 0xffffffff;
    Library::DKW::TBL::FUN_006ae1c0(param_2,(undefined4 *)&local_14);
  }
  return 0;
}

