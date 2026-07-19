
int __cdecl
FUN_0070c690(int param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,uint param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_10 = param_7 >> 0x18;
  local_14 = param_7 >> 0x10 & 0xff;
  local_18 = param_7 >> 8 & 0xff;
  local_1c = param_7 & 0xff;
  local_20 = 0;
  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar2 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if ((local_c != (undefined4 *)0x0) && (local_c != local_8)) {
      FUN_006ab060(&local_c);
    }
    if (local_8 != (undefined4 *)0x0) {
      FUN_006ab060(&local_8);
    }
    return 0;
  }
  if ((param_4 < 1) || (param_5 < 1)) {
    param_5 = *(int *)(param_1 + 8);
    param_4 = *(int *)(param_1 + 4);
    param_3 = 0;
    param_2 = 0;
  }
  iVar2 = FUN_006b4fa0(param_1);
  local_c = FUN_006b55f0((undefined4 *)0x0,0,0,0,param_1,iVar2,param_2,param_3,param_4,param_5);
  if (local_c == (undefined4 *)0x0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x4d8);
  }
  if (local_10 == 0) {
    local_10 = 1;
  }
  if (local_14 == 0) {
    local_14 = 1;
  }
  if (local_18 == 0) {
    local_18 = 1;
  }
  if (local_1c == 0) {
    local_1c = 1;
  }
  if (((((local_10 != 1) || (local_14 != 1)) || (local_18 != 1)) ||
      (puVar1 = local_c, local_1c != 1)) &&
     (local_8 = FUN_00751cb0((undefined4 *)0x0,(ushort *)0x0,local_c,(ushort *)0x0,
                             (local_c[1] * local_10) / local_14,(local_c[2] * local_18) / local_1c),
     puVar1 = local_8, local_c != (undefined4 *)0x0)) {
    FUN_006ab060(&local_c);
    puVar1 = local_8;
  }
  local_8 = puVar1;
  iVar2 = FUN_006b4fa0((int)local_8);
  FUN_006b4b20(&local_20,(uint)local_8,iVar2,param_6);
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  g_currentExceptionFrame = local_64.previous;
  return local_20;
}

