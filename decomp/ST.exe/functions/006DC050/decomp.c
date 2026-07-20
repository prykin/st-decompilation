
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006dc050(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined8 param_15,undefined8 param_16,int param_17)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 extraout_ST0;
  longlong lVar5;
  
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(*(int *)((int)param_1 + 0x350),0x658);
  iVar4 = 0;
  *(undefined4 **)((int)param_1 + 0x350) = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x350) + 4) = 0;
  puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006acf50(*(int *)((int)param_1 + 0x354),0x658);
  *(undefined4 **)((int)param_1 + 0x354) = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x354) + 4) = 0;
  *(undefined8 *)((int)param_1 + 200) = param_15;
  *(undefined8 *)((int)param_1 + 0xd0) = param_16;
  *(undefined4 *)((int)param_1 + 0x128) = 0;
  *(undefined4 *)((int)param_1 + 0x41c) = 0;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  FUN_006dbd20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               (double)CONCAT44(param_12,param_11),(double)CONCAT44(param_14,param_13));
  if (0 < param_17) {
    puVar3 = FUN_006b04d0(0x4f2);
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = FUN_006dbca0((int)puVar3);
    }
    *(int *)((int)param_1 + 0x358) = iVar4;
    *(int *)((int)param_1 + 0x380) = param_17;
    *(double *)((int)param_1 + 0x368) = *(double *)((int)param_1 + 200) / (double)param_17;
    lVar5 = Library::MSVCRT::__ftol();
    *(int *)((int)param_1 + 0x370) = (int)lVar5;
    *(double *)((int)param_1 + 0x360) = (double)((float10)(int)lVar5 * extraout_ST0);
    *(undefined8 *)(iVar4 + 200) = param_15;
    *(undefined8 *)(*(int *)((int)param_1 + 0x358) + 0xd0) = param_16;
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x128) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x41c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x124) = 1;
    dVar1 = *(double *)((int)param_1 + 0x360) * _DAT_007901c0;
    dVar2 = *(double *)((int)param_1 + 0x360) * _DAT_0079df58;
    param_16._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    param_16._0_4_ = SUB84(dVar1,0);
    param_15._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    param_15._0_4_ = SUB84(dVar2,0);
    FUN_006dbd20(*(void **)((int)param_1 + 0x358),0,0,0,*(int *)((int)param_1 + 0x370),
                 *(int *)((int)param_1 + 0x370),(undefined4)param_15,param_15._4_4_,
                 (undefined4)param_16,param_16._4_4_,dVar2,dVar1);
    FUN_006dd790(*(void **)((int)param_1 + 0x358),
                 (float)((float10)_DAT_0079df88 -
                        (float10)*(double *)((int)param_1 + 0xd0) * (float10)_DAT_0079df90));
    FUN_006dd800(*(void **)((int)param_1 + 0x358),
                 (float)((float10)*(double *)((int)param_1 + 0xd0) +
                         (float10)*(double *)((int)param_1 + 0xd0) + (float10)_DAT_0079df88));
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x128) = 0x70;
    *(int *)(*(int *)((int)param_1 + 0x358) + 0x380) = param_17;
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x370) = *(undefined4 *)((int)param_1 + 0x370);
    dVar1 = *(double *)((int)param_1 + 0xd0) * _DAT_0079df80;
    *(undefined4 *)((int)param_1 + 900) = 0x20;
    *(double *)((int)param_1 + 0x394) = dVar1;
    dVar2 = *(double *)((int)param_1 + 0xd0) * _DAT_0079df90;
    *(double *)((int)param_1 + 0x39c) = dVar2;
    *(double *)((int)param_1 + 0x3a4) = dVar2 - dVar1;
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 900) = 0x20;
  }
  return;
}

