
uint __thiscall
FUN_005fb1f0(void *this,short param_1,short param_2,uint param_3,int param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar3 = (int)param_1 - (int)*(short *)((int)this + 0x41);
  uVar8 = (int)uVar3 >> 0x1f;
  if ((((int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0) &&
      (uVar3 = (int)param_2 - (int)*(short *)((int)this + 0x43), uVar8 = (int)uVar3 >> 0x1f,
      (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a0)) &&
     (local_8 = (int)(short)param_3, uVar3 = local_8 - *(short *)((int)this + 0x45),
     uVar8 = (int)uVar3 >> 0x1f, (int)((uVar3 ^ uVar8) - uVar8) < DAT_007ce7a8)) {
    iVar4 = FUN_006aff5b((int)*(short *)((int)this + 0x6c));
    iVar5 = FUN_006aff50((int)*(short *)((int)this + 0x6c));
    iVar9 = (int)param_1 - (int)*(short *)((int)this + 0x41);
    iVar7 = (int)param_2 - (int)*(short *)((int)this + 0x43);
    uVar3 = (iVar9 * iVar5 - iVar7 * iVar4) / 10000;
    uVar8 = (iVar7 * iVar5 + iVar9 * iVar4) / 10000;
    uVar6 = local_8 - *(short *)((int)this + 0x45);
    if ((int)(DAT_007ce7a8 * uVar6 * uVar6 + DAT_007ce7a4 * uVar8 * uVar8 +
             DAT_007ce7a0 * uVar3 * uVar3) < DAT_007ce7ac) {
      iVar9 = (int)(short)param_4 - (int)*(short *)((int)this + 0x41);
      iVar7 = (int)param_5 - (int)*(short *)((int)this + 0x43);
      thunk_FUN_0060e680((iVar9 * iVar5 - iVar7 * iVar4) / 10000,
                         (iVar7 * iVar5 + iVar9 * iVar4) / 10000,
                         (int)param_6 - (int)*(short *)((int)this + 0x45),uVar3,uVar8,uVar6,
                         (int *)&DAT_007ce794,0x7ce7a0,&param_3,&local_c,&local_10);
      param_4 = (int)(param_3 * iVar5 + local_c * iVar4) / 10000;
      iVar4 = (int)(local_c * iVar5 - param_3 * iVar4) / 10000;
      FUN_006dd530(*(void **)((int)this + 0x211),&local_1c,&local_18,&local_14);
      lVar10 = __ftol();
      sVar1 = *(short *)((int)this + 0x45);
      lVar11 = __ftol();
      sVar2 = *(short *)((int)this + 0x43);
      lVar12 = __ftol();
      param_2._0_1_ = (undefined1)iVar4;
      return ((uint)(0 < (int)(((int)(short)lVar10 - (int)sVar1) * local_10 +
                               ((int)(short)lVar11 - (int)sVar2) * iVar4 +
                              ((int)(short)lVar12 - (int)*(short *)((int)this + 0x41)) * param_4))
              << 8 | local_10 & 0xff) << 0x10 | (uint)CONCAT11((undefined1)param_2,(char)param_4);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

