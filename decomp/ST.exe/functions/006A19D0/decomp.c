
undefined4 __cdecl
FUN_006a19d0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  byte bVar8;
  undefined4 local_14 [2];
  undefined4 local_c;
  ushort local_8;
  
  thunk_FUN_006a1370(param_1,param_2,param_3,param_4,local_14);
  uVar5 = thunk_FUN_006a0ef0(param_1,param_2,param_3,param_4,param_5,param_6);
  uVar4 = (ushort)uVar5;
  if (uVar4 == 0xffff) {
    return 0;
  }
  if (uVar4 != 0) {
    bVar3 = thunk_FUN_006a1100(param_1,param_2,param_3,param_4,param_5,param_6);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      iVar6 = thunk_FUN_006a1070(uVar4);
      uVar4 = (ushort)iVar6;
      if (0x7fff < uVar4) {
        return 0;
      }
      uVar5 = *(undefined4 *)param_6;
      local_8 = param_6[2];
      bVar8 = (byte)iVar6;
      if (param_5 == 0xff) {
        local_8 = local_8 ^ ((byte)local_8 ^ bVar8) & 0xf;
        local_c = uVar5;
        uVar7 = FUN_0072e6c0();
        local_8 = local_8 ^ (byte)(((char)((int)uVar7 %
                                          (int)*(short *)(&DAT_007df9a8 + (short)uVar4 * 2)) +
                                   '\x01') * '\x10' ^ (byte)local_8) & 0xf0;
      }
      else {
        local_c._0_2_ = (ushort)uVar5;
        uVar1 = (ushort)local_c;
        local_c._2_2_ = (ushort)((uint)uVar5 >> 0x10);
        uVar2 = local_c._2_2_;
        if (param_5 == 1) {
          local_c._2_1_ = (byte)((uint)uVar5 >> 0x10);
          local_c = CONCAT22(uVar2 ^ (local_c._2_1_ ^ bVar8) & 0xf,(ushort)local_c);
          uVar7 = FUN_0072e6c0();
          bVar8 = ((char)((int)uVar7 % (int)*(short *)(&DAT_007df9c8 + (short)uVar4 * 2)) + '\x01')
                  * '\x10' ^ local_c._2_1_;
          local_c = CONCAT22(local_c._2_2_ ^ bVar8 & 0xf0,(ushort)local_c);
        }
        else {
          local_c._0_1_ = (byte)uVar5;
          local_c = CONCAT22(local_c._2_2_,uVar1 ^ ((byte)local_c ^ bVar8) & 0xf);
          uVar7 = FUN_0072e6c0();
          bVar8 = ((char)((int)uVar7 % (int)*(short *)(&DAT_007df9c8 + (short)uVar4 * 2)) + '\x01')
                  * '\x10' ^ (byte)local_c;
          local_c = CONCAT22(local_c._2_2_,(ushort)local_c ^ bVar8 & 0xf0);
        }
      }
      thunk_FUN_006a1620(param_1,param_2,param_3,param_4,param_5,(ushort *)&local_c,param_7,param_8)
      ;
    }
  }
  return 1;
}

