
/* WARNING: Removing unreachable block (ram,0x006a1015) */

undefined4 __cdecl
FUN_006a0ef0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
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
    iVar3 = local_c[-1] + param_2;
    iVar4 = *local_c + param_3;
    if ((((iVar3 < 0) || (*param_1 <= iVar3)) || (iVar4 < 0)) ||
       (((param_1[1] <= iVar4 || (param_4 < 0)) || (5 < param_4)))) {
      uVar2 = local_8 & 0x80000001;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar5) {
        *local_14 = local_8;
        local_14 = local_14 + 1;
      }
    }
    else {
      iVar1 = thunk_FUN_006a20e0(param_1,iVar3,iVar4,param_4,param_5);
      if (iVar1 != 0) {
        iVar3 = thunk_FUN_006a1370(param_1,iVar3,iVar4,param_4,(undefined4 *)&local_1c);
        iVar3 = thunk_FUN_006a24e0(param_6,param_4,&local_1c,(int)(short)iVar3,param_5);
        if (iVar3 != 0) {
          if (param_5 == 0xff) {
            uVar2 = (uint)uStack_18;
          }
          else {
            uVar2 = CONCAT22(uStack_18,uStack_1a);
            if (param_5 != 1) {
              uVar2 = CONCAT22(uStack_1a,local_1c);
            }
          }
          local_10 = local_10 | *(ushort *)(&DAT_007df898 + (local_8 + (uVar2 & 0xf) * 8) * 2);
        }
      }
    }
    local_c = local_c + 2;
    local_8 = local_8 + 1;
  } while ((int)local_c < 0x7df86c);
  return CONCAT22((short)((uint)local_c >> 0x10),(undefined2)local_10);
}

