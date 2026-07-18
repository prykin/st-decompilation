
undefined4 __cdecl
FUN_00715630(int *param_1,int param_2,uint *param_3,int *param_4,undefined4 *param_5,uint *param_6,
            int param_7,int param_8)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  byte *pbVar4;
  void *unaff_EDI;
  undefined4 *local_a8;
  undefined4 local_a4 [16];
  undefined4 local_64;
  undefined4 local_60 [16];
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  local_14 = 0;
  local_8 = (byte *)0x0;
  local_c = (byte *)0x0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_64 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_64;
  iVar1 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    DAT_00858df8 = (undefined4 **)local_64;
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    if ((local_10 != 0) && (local_c != (byte *)0x0)) {
      FUN_006ab060(&local_c);
    }
    if (iVar1 != -0x4d) {
      FUN_006a5e40(iVar1,0,0x7f043c,0xbb);
      return 0xffffffff;
    }
    return 0xffffffb3;
  }
  local_a8 = DAT_00858df8;
  DAT_00858df8 = &local_a8;
  iVar1 = __setjmp3(local_a4,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    local_14 = FUN_006b7400(param_1,param_2,param_4,(int *)&local_8,(int *)&local_18,param_7,param_8
                           );
    DAT_00858df8 = (undefined4 **)local_a8;
  }
  else {
    DAT_00858df8 = (undefined4 **)local_a8;
    FUN_006a5e40(-0x4d,0,0x7f043c,0x97);
  }
  if (local_14 == 0) {
    local_c = FUN_007154e0(local_8,local_18,(byte *)&local_20,(int *)&local_10,&local_1c);
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = local_10;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = local_20 & 0xff;
    }
    if (local_10 != 0) {
      if (param_5 == (undefined4 *)0x0) {
        if (local_c != (byte *)0x0) {
          FUN_006ab060(&local_c);
        }
      }
      else if (local_1c == 0) {
        pbVar2 = (byte *)FUN_006aac70(local_10);
        *param_5 = pbVar2;
        pbVar4 = local_c;
        for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar2 = pbVar2 + 4;
        }
        for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
          *pbVar2 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar2 = pbVar2 + 1;
        }
      }
      else {
        *param_5 = local_c;
      }
    }
    if (local_8 != (byte *)0x0) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined4 **)local_64;
    return 1;
  }
  DAT_00858df8 = (undefined4 **)local_64;
  return 0;
}

