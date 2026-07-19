
uint * __thiscall thunk_FUN_0068e4f0(void *this,int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uStack_c;
  uint uStack_8;
  
  puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,2,0x14);
  iVar3 = *(int *)((int)this + 0xa5);
  uStack_8 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    bVar9 = *(int *)(iVar3 + 0xc) != 0;
    iVar6 = extraout_EDX;
    do {
      uVar8 = uStack_8;
      if (bVar9) {
        iVar6 = *(int *)(iVar3 + 0x1c);
        iVar3 = *(int *)(iVar3 + 8) * uStack_8 + iVar6;
      }
      else {
        iVar3 = 0;
      }
      if ((*(int *)(iVar3 + 4) != 0) &&
         (puVar4 = thunk_FUN_0065e360(*(int *)(iVar3 + 4),iVar6,param_1), iVar6 = extraout_EDX_00,
         puVar4 != (uint *)0x0)) {
        uVar1 = puVar4[3];
        if ((uVar1 != 0) && (uVar7 = 0, uVar8 = uStack_8, 0 < (int)uVar1)) {
          bVar9 = uVar1 != 0;
          iVar3 = extraout_EDX_00;
          do {
            if (bVar9) {
              puVar5 = (undefined2 *)(puVar4[2] * uVar7 + puVar4[7]);
            }
            else {
              puVar5 = (undefined2 *)0x0;
            }
            uStack_c = CONCAT22((short)((uint)iVar3 >> 0x10),*puVar5);
            Library::DKW::TBL::FUN_006ae1c0(puVar2,&uStack_c);
            uVar7 = uVar7 + 1;
            bVar9 = uVar7 < puVar4[3];
            iVar3 = extraout_EDX_01;
            uVar8 = uStack_8;
          } while ((int)uVar7 < (int)puVar4[3]);
        }
        FUN_006ae110((byte *)puVar4);
        iVar6 = extraout_EDX_02;
      }
      uStack_8 = uVar8 + 1;
      iVar3 = *(int *)((int)this + 0xa5);
      bVar9 = uStack_8 < *(uint *)(iVar3 + 0xc);
    } while ((int)uStack_8 < (int)*(uint *)(iVar3 + 0xc));
  }
  if (puVar2[3] != 0) {
    return puVar2;
  }
  FUN_006ae110((byte *)puVar2);
  return (uint *)0x0;
}

