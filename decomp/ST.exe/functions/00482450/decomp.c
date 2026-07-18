
/* WARNING: Removing unreachable block (ram,0x0048268f) */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetExplosionInfo */

undefined4 __thiscall
STBoatC::GetExplosionInfo
          (STBoatC *this,uint param_1,short *param_2,short *param_3,short *param_4,uint *param_5)

{
  code *pcVar1;
  STBoatC *pSVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_80;
  undefined4 local_7c [16];
  uint local_3c;
  int local_38;
  undefined4 local_34;
  short local_30;
  uint local_2c;
  uint local_28;
  STBoatC *local_24;
  undefined8 local_20;
  uint local_18;
  float local_14 [2];
  float local_c;
  float local_8;
  
  local_28 = param_1 >> 0x10;
  local_20 = CONCAT44(param_1,(undefined4)local_20) & 0xffffffffffff;
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_24 = this;
  iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_24;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d5f,0,iVar3,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar3,0,0x7a9d3c,0x3d60);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  iVar3 = local_20._4_4_;
  if (((longlong)local_20 < 0) || ((int)((byte)local_24[0x281] - 1) < local_20._4_4_)) {
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x3d4f);
  }
  uVar4 = FUN_006acc70(*(int *)(pSVar2 + iVar3 * 4 + 0x282),local_28,&local_34);
  if (uVar4 == 0xfffffffc) {
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x3d50);
  }
  puVar5 = (undefined4 *)thunk_FUN_0041dc40(&local_3c,local_34,local_30,*(short *)(pSVar2 + 0x6c));
  uVar9 = *puVar5;
  local_30 = *(short *)(puVar5 + 1);
  *param_2 = *(short *)(pSVar2 + 0x41) + (short)uVar9;
  local_34._2_2_ = (short)((uint)uVar9 >> 0x10);
  *param_3 = *(short *)(pSVar2 + 0x43) - local_34._2_2_;
  *param_4 = *(short *)(pSVar2 + 0x45) + local_30;
  local_34 = uVar9;
  FUN_006dd530(*(void **)(pSVar2 + 0x211),local_14,&local_c,&local_8);
  lVar11 = __ftol();
  local_3c = (uint)(short)lVar11;
  local_38 = (int)local_3c >> 0x1f;
  lVar11 = __ftol();
  uVar4 = (uint)(short)lVar11;
  local_28 = (int)uVar4 >> 0x1f;
  local_2c = uVar4;
  lVar11 = __ftol();
  uVar6 = (uint)(short)lVar11;
  local_20 = CONCAT44((int)uVar6 >> 0x1f,(undefined4)local_20);
  uVar7 = (uint)*(short *)(pSVar2 + 0x43);
  iVar10 = (((int)uVar7 >> 0x1f) - local_28) - (uint)(uVar7 < uVar4);
  uVar8 = (uint)*(short *)(pSVar2 + 0x41);
  local_18 = uVar8 - local_3c;
  local_14[0] = (float)((((int)uVar8 >> 0x1f) - local_38) - (uint)(uVar8 < local_3c));
  uVar8 = (uint)*param_4;
  iVar3 = (((int)uVar8 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar8 < uVar6);
  local_20 = __allmul(uVar8 - uVar6,iVar3,uVar8 - uVar6,iVar3);
  uVar6 = (uint)*param_2;
  uVar8 = uVar6 - local_3c;
  local_38 = (((int)uVar6 >> 0x1f) - local_38) - (uint)(uVar6 < local_3c);
  uVar6 = (uint)*param_3;
  iVar3 = (((int)uVar6 >> 0x1f) - local_28) - (uint)(uVar6 < local_2c);
  lVar11 = __allmul(uVar6 - local_2c,iVar3,uVar6 - local_2c,iVar3);
  local_c = (float)((ulonglong)lVar11 >> 0x20);
  local_28 = (uint)lVar11;
  lVar11 = __allmul(uVar8,local_38,uVar8,local_38);
  lVar11 = lVar11 + CONCAT44(local_c,local_28) + local_20;
  local_28 = (uint)lVar11;
  local_c = (float)((ulonglong)lVar11 >> 0x20);
  lVar11 = __allmul(local_18,(int)local_14[0],local_18,(int)local_14[0]);
  local_3c = (uint)lVar11;
  lVar12 = __allmul(uVar7 - uVar4,iVar10,uVar7 - uVar4,iVar10);
  if ((longlong)(lVar12 + CONCAT44((int)((ulonglong)lVar11 >> 0x20),local_3c) + local_20) <=
      CONCAT44(local_c,local_28)) {
    *param_5 = (uint)(local_30 + 0x46 < 0x15);
    *param_5 = 1;
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  *param_5 = 0;
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

