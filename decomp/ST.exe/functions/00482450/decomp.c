
/* WARNING: Removing unreachable block (ram,0x0048268f) */

undefined4 FUN_00482450(uint param_1,short *param_2,short *param_3,short *param_4,uint *param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_80;
  undefined4 local_7c [16];
  uint local_3c;
  int local_38;
  undefined4 local_34;
  short local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined8 local_20;
  uint local_18;
  float local_14 [2];
  float local_c;
  float local_8;
  
  local_28 = param_1 >> 0x10;
  local_20 = CONCAT44(param_1,(undefined4)local_20) & 0xffffffffffff;
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  iVar2 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3d5f,0,iVar2,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar2,0,0x7a9d3c,0x3d60);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  iVar2 = local_20._4_4_;
  if (((longlong)local_20 < 0) || ((int)(*(byte *)(local_24 + 0x281) - 1) < local_20._4_4_)) {
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x3d4f);
  }
  uVar3 = FUN_006acc70(*(int *)(local_24 + 0x282 + iVar2 * 4),local_28,&local_34);
  if (uVar3 == 0xfffffffc) {
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a9d3c,0x3d50);
  }
  puVar4 = (undefined4 *)thunk_FUN_0041dc40(&local_3c,local_34,local_30,*(short *)(local_24 + 0x6c))
  ;
  uVar8 = *puVar4;
  local_30 = *(short *)(puVar4 + 1);
  *param_2 = *(short *)(local_24 + 0x41) + (short)uVar8;
  local_34._2_2_ = (short)((uint)uVar8 >> 0x10);
  *param_3 = *(short *)(local_24 + 0x43) - local_34._2_2_;
  *param_4 = *(short *)(local_24 + 0x45) + local_30;
  local_34 = uVar8;
  FUN_006dd530(*(void **)(local_24 + 0x211),local_14,&local_c,&local_8);
  lVar10 = __ftol();
  local_3c = (uint)(short)lVar10;
  local_38 = (int)local_3c >> 0x1f;
  lVar10 = __ftol();
  uVar3 = (uint)(short)lVar10;
  local_28 = (int)uVar3 >> 0x1f;
  local_2c = uVar3;
  lVar10 = __ftol();
  uVar5 = (uint)(short)lVar10;
  local_20 = CONCAT44((int)uVar5 >> 0x1f,(undefined4)local_20);
  uVar6 = (uint)*(short *)(local_24 + 0x43);
  iVar9 = (((int)uVar6 >> 0x1f) - local_28) - (uint)(uVar6 < uVar3);
  uVar7 = (uint)*(short *)(local_24 + 0x41);
  local_18 = uVar7 - local_3c;
  local_14[0] = (float)((((int)uVar7 >> 0x1f) - local_38) - (uint)(uVar7 < local_3c));
  uVar7 = (uint)*param_4;
  iVar2 = (((int)uVar7 >> 0x1f) - ((int)uVar5 >> 0x1f)) - (uint)(uVar7 < uVar5);
  local_20 = __allmul(uVar7 - uVar5,iVar2,uVar7 - uVar5,iVar2);
  uVar5 = (uint)*param_2;
  uVar7 = uVar5 - local_3c;
  local_38 = (((int)uVar5 >> 0x1f) - local_38) - (uint)(uVar5 < local_3c);
  uVar5 = (uint)*param_3;
  iVar2 = (((int)uVar5 >> 0x1f) - local_28) - (uint)(uVar5 < local_2c);
  lVar10 = __allmul(uVar5 - local_2c,iVar2,uVar5 - local_2c,iVar2);
  local_c = (float)((ulonglong)lVar10 >> 0x20);
  local_28 = (uint)lVar10;
  lVar10 = __allmul(uVar7,local_38,uVar7,local_38);
  lVar10 = lVar10 + CONCAT44(local_c,local_28) + local_20;
  local_28 = (uint)lVar10;
  local_c = (float)((ulonglong)lVar10 >> 0x20);
  lVar10 = __allmul(local_18,(int)local_14[0],local_18,(int)local_14[0]);
  local_3c = (uint)lVar10;
  lVar11 = __allmul(uVar6 - uVar3,iVar9,uVar6 - uVar3,iVar9);
  if ((longlong)(lVar11 + CONCAT44((int)((ulonglong)lVar10 >> 0x20),local_3c) + local_20) <=
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

