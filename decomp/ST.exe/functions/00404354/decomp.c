
/* WARNING: Removing unreachable block (ram,0x006a1015) */

undefined4 __cdecl
thunk_FUN_006a0ef0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint auStack_2c [4];
  ushort uStack_1c;
  undefined2 uStack_1a;
  ushort uStack_18;
  uint *puStack_14;
  uint uStack_10;
  int *piStack_c;
  uint uStack_8;
  
  puStack_14 = auStack_2c;
  uStack_10 = 0;
  uStack_8 = 0;
  piStack_c = &DAT_007df82c;
  do {
    iVar3 = piStack_c[-1] + param_2;
    iVar4 = *piStack_c + param_3;
    if ((((iVar3 < 0) || (*param_1 <= iVar3)) || (iVar4 < 0)) ||
       (((param_1[1] <= iVar4 || (param_4 < 0)) || (5 < param_4)))) {
      uVar2 = uStack_8 & 0x80000001;
      bVar5 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar5) {
        *puStack_14 = uStack_8;
        puStack_14 = puStack_14 + 1;
      }
    }
    else {
      iVar1 = thunk_FUN_006a20e0(param_1,iVar3,iVar4,param_4,param_5);
      if (iVar1 != 0) {
        iVar3 = thunk_FUN_006a1370(param_1,iVar3,iVar4,param_4,(undefined4 *)&uStack_1c);
        iVar3 = thunk_FUN_006a24e0(param_6,param_4,&uStack_1c,(int)(short)iVar3,param_5);
        if (iVar3 != 0) {
          if (param_5 == 0xff) {
            uVar2 = (uint)uStack_18;
          }
          else {
            uVar2 = CONCAT22(uStack_18,uStack_1a);
            if (param_5 != 1) {
              uVar2 = CONCAT22(uStack_1a,uStack_1c);
            }
          }
          uStack_10 = uStack_10 | *(ushort *)(&DAT_007df898 + (uStack_8 + (uVar2 & 0xf) * 8) * 2);
        }
      }
    }
    piStack_c = piStack_c + 2;
    uStack_8 = uStack_8 + 1;
  } while ((int)piStack_c < 0x7df86c);
  return CONCAT22((short)((uint)piStack_c >> 0x10),(undefined2)uStack_10);
}

