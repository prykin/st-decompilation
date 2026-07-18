
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_006adc30(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  DAT_00854eb0 = ExceptionList;
  if (*(int *)*param_1 == -0x7ffffffd) {
    return 0;
  }
  DAT_00854a9c = DAT_00854eb4;
  if (DAT_00854eb4 != (int *)0x0) {
    puVar1 = ExceptionList;
    if (DAT_007ed79c != 0) {
      FUN_00733f70(DAT_00854eb4,(byte *)s__d_______________________________007ed9c0);
      DAT_007ed79c = 0;
      puVar1 = DAT_00854eb0;
    }
    do {
      DAT_00854eb0 = puVar1;
      if ((DAT_00854eb0 == (uint *)0x0) || (*(uint **)(param_1[1] + 0xc4) <= DAT_00854eb0)) break;
      puVar1 = (uint *)*DAT_00854eb0;
    } while (DAT_00854eb0 < (uint *)*DAT_00854eb0);
    FUN_00733f70(DAT_00854a9c,(byte *)s_________________________________E_007ed990);
    FUN_00733f70(DAT_00854a9c,(byte *)s__08X_007ed988);
    if (*(int *)(*param_1 + 0x10) != 0) {
      FUN_00733f70(DAT_00854a9c,&DAT_007ed984);
      DAT_00854aa0 = 0;
      FUN_00733f70(DAT_00854a9c,&DAT_007ed97c);
      DAT_00854aa0 = DAT_00854aa0 + 1;
      if ((int)DAT_00854aa0 < *(int *)(*param_1 + 0x10)) {
        do {
          FUN_00733f70(DAT_00854a9c,&DAT_007ed978);
          FUN_00733f70(DAT_00854a9c,&DAT_007ed97c);
          DAT_00854aa0 = DAT_00854aa0 + 1;
        } while ((int)DAT_00854aa0 < *(int *)(*param_1 + 0x10));
      }
      FUN_00733f70(DAT_00854a9c,&DAT_007ed974);
    }
    FUN_00733f70(DAT_00854a9c,(byte *)s__________________007ed960);
    FUN_00733f70(DAT_00854a9c,(byte *)s__08X__08X__08X__08X__08X__08X__0_007ed930);
    FUN_00733f70(DAT_00854a9c,(byte *)s__08X__08X__08X__08X__08X__08X__0_007ed8fc);
    FUN_00733f70(DAT_00854a9c,(byte *)s__________________007ed960);
    DAT_00854ea4 = *(uint **)(param_1[1] + 0xb4);
    if ((*(uint **)(param_1[1] + 0xc4) <= DAT_00854ea4) && (DAT_00854ea4 < DAT_00854eb0)) {
      DAT_00854aa0 = 0;
      FUN_00733f70(DAT_00854a9c,(byte *)s__08X_007ed840);
      _DAT_00854ea8 = DAT_00854ea4;
      puVar1 = (uint *)*DAT_00854ea4;
      bVar3 = DAT_00854ea4 < puVar1;
      DAT_00854ea4 = puVar1;
      if (bVar3) {
        do {
          DAT_00854ea4 = puVar1;
          if (DAT_00854eb0 <= puVar1) break;
          DAT_00854aa0 = DAT_00854aa0 + 1;
          uVar2 = DAT_00854aa0 & 0x80000007;
          bVar3 = uVar2 == 0;
          if ((int)uVar2 < 0) {
            bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
          }
          if (bVar3) {
            FUN_00733f70(DAT_00854a9c,&DAT_007c8ff4);
          }
          FUN_00733f70(DAT_00854a9c,(byte *)s__08X_007ed840);
          _DAT_00854ea8 = DAT_00854ea4;
          puVar1 = (uint *)*DAT_00854ea4;
          bVar3 = DAT_00854ea4 < puVar1;
          DAT_00854ea4 = puVar1;
        } while (bVar3);
      }
      uVar2 = DAT_00854aa0 & 0x80000007;
      bVar3 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (!bVar3) {
        FUN_00733f70(DAT_00854a9c,&DAT_007c8ff4);
      }
    }
    FUN_00733f70(DAT_00854a9c,(byte *)s__________________007ed960);
    DAT_00854a80 = *(uint **)(param_1[1] + 0xc4);
    DAT_00854aa0 = 0;
    do {
      if (DAT_00854eb0 <= DAT_00854a80) break;
      FUN_00733f70(DAT_00854a9c,(byte *)s__08X_007ed840);
      DAT_00854a80 = DAT_00854a80 + 1;
      DAT_00854aa0 = DAT_00854aa0 + 1;
      uVar2 = DAT_00854aa0 & 0x80000007;
      bVar3 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (bVar3) {
        FUN_00733f70(DAT_00854a9c,&DAT_007c8ff4);
      }
    } while ((int)DAT_00854aa0 < 400);
    uVar2 = DAT_00854aa0 & 0x80000007;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar3) {
      FUN_00733f70(DAT_00854a9c,&DAT_007c8ff4);
    }
    FUN_00733f70(DAT_00854a9c,(byte *)s__________________007ed960);
    DAT_00854aa0 = 0;
    if (0 < DAT_00858ddc) {
      do {
        FUN_00733f70(DAT_00854a9c,(byte *)s__08X_007ed840);
        DAT_00854aa0 = DAT_00854aa0 + 1;
        uVar2 = DAT_00854aa0 & 0x80000007;
        bVar3 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar3) {
          FUN_00733f70(DAT_00854a9c,&DAT_007c8ff4);
        }
      } while ((int)DAT_00854aa0 < DAT_00858ddc);
    }
    uVar2 = DAT_00854aa0 & 0x80000007;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar3) {
      FUN_00733f70(DAT_00854a9c,&DAT_007c8ff4);
    }
    DAT_00858ddc = 0;
    FUN_00733d60(DAT_00854a9c);
    if (DAT_00854eb4 == (int *)0x0) {
      FUN_0072ea90(DAT_00854a9c);
    }
  }
  return 1;
}

