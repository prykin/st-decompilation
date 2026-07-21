
/* WARNING: Removing unreachable block (ram,0x006a1015) */

undefined4 __cdecl
FUN_006a0ef0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_2c [4];
  ushort local_1c;
  undefined2 uStack_1a;
  ushort uStack_18;
  uint *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_14 = local_2c;
  local_10 = 0;
  local_8 = 0;
  local_c = &DAT_007df82c;
  do {
    iVar4 = local_c[-1] + param_2;
    iVar5 = *local_c + param_3;
    if ((((iVar4 < 0) || (*param_1 <= iVar4)) || (iVar5 < 0)) ||
       (((param_1[1] <= iVar5 || (param_4 < 0)) || (5 < param_4)))) {
      uVar3 = local_8 & 0x80000001;
      bVar1 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar1 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar1) {
        *local_14 = local_8;
        local_14 = local_14 + 1;
      }
    }
    else {
      iVar2 = thunk_FUN_006a20e0(param_1,iVar4,iVar5,param_4,param_5);
      if (iVar2 != 0) {
        iVar4 = thunk_FUN_006a1370(param_1,iVar4,iVar5,param_4,(undefined4 *)&local_1c);
        bVar1 = thunk_FUN_006a24e0(param_6,param_4,&local_1c,(int)(short)iVar4,param_5);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          if (param_5 == 0xff) {
            uVar3 = (uint)uStack_18;
          }
          else {
            uVar3 = CONCAT22(uStack_18,uStack_1a);
            if (param_5 != 1) {
              uVar3 = CONCAT22(uStack_1a,local_1c);
            }
          }
          local_10 = local_10 | *(ushort *)(&DAT_007df898 + (local_8 + (uVar3 & 0xf) * 8) * 2);
        }
      }
    }
    local_c = local_c + 2;
    local_8 = local_8 + 1;
  } while ((int)local_c < 0x7df86c);
  return CONCAT22((short)((uint)local_c >> 0x10),(undefined2)local_10);
}

