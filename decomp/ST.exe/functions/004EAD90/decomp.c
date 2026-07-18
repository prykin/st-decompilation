
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ead90(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)param_1 + 0x4d0);
  if (((1 < *(int *)(&DAT_0079aa08 + iVar1 * 4)) &&
      (*(int *)((int)param_1 + 0x4d4) < *(int *)(&DAT_0079aa08 + iVar1 * 4))) &&
     ((uint)(*(int *)((int)param_1 + 0x4dc) + *(int *)((int)param_1 + 0x4d8)) <=
      *(uint *)(DAT_00802a38 + 0xe4))) {
    *(uint *)((int)param_1 + 0x4d8) = *(uint *)(DAT_00802a38 + 0xe4);
    iVar6 = *(int *)((int)param_1 + 0x4d4) + 1;
    iVar5 = iVar1 * 0x18;
    *(int *)((int)param_1 + 0x4d4) = iVar6;
    iVar1 = *(int *)(&DAT_0079aa08 + iVar1 * 4);
    iVar2 = *(int *)(&DAT_0079aa20 + iVar5);
    iVar3 = *(int *)(&DAT_0079aa2c + iVar5);
    iVar4 = ((*(int *)(&DAT_0079aa28 + iVar5) - *(int *)(&DAT_0079aa1c + iVar5)) * iVar6) / iVar1 +
            *(int *)(&DAT_0079aa1c + iVar5) + (int)*(short *)((int)param_1 + 0x43);
    *(int *)((int)param_1 + 0x4e0) =
         (int)*(short *)((int)param_1 + 0x41) +
         *(int *)(&DAT_0079aa18 + iVar5) +
         ((*(int *)(&DAT_0079aa24 + iVar5) - *(int *)(&DAT_0079aa18 + iVar5)) * iVar6) / iVar1;
    *(int *)((int)param_1 + 0x4e4) = iVar4;
    iVar1 = (int)*(short *)((int)param_1 + 0x45) + ((iVar3 - iVar2) * iVar6) / iVar1 + iVar2;
    *(int *)((int)param_1 + 0x4e8) = iVar1;
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)*(int *)((int)param_1 + 0x4e0) * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if ((*(int *)(&DAT_0079aa08 + *(int *)((int)param_1 + 0x4d0) * 4) <=
         *(int *)((int)param_1 + 0x4d4)) && (*(int *)((int)param_1 + 0x4d0) == 3)) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
    }
  }
  return 0;
}

