
undefined4 __thiscall FUN_004c56b0(void *this,void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  sVar5 = 0;
  sVar6 = 0;
  local_8 = 0;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    local_8 = (uint)*(ushort *)((int)this + 0x41);
  }
  if (&stack0x00000000 != (undefined1 *)0xfffffffc) {
    sVar6 = *(short *)((int)this + 0x43);
    sVar5 = *(short *)((int)this + 0x45);
  }
  iVar4 = (int)param_1 * 0x80;
  if (*(int *)(iVar4 + 0x2cd + (int)this) < *(int *)((int)this + iVar4 + 0x2d1)) {
    pvVar1 = (void *)((int)param_1 + *(int *)((int)this + 0x235) * 2);
    if ((&DAT_00792ca0)[(int)pvVar1 * 3] == 0xb3) {
      param_1 = (void *)0x0;
      if ((*(int *)((int)this + 0x4ec) != 0) &&
         (iVar2 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x4ec),(int *)&param_1), iVar2 == 0
         )) {
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        iVar2 = thunk_FUN_00617ca0(param_1,(int *)&local_8,&local_10,&local_18,&local_c,&local_14,
                                   &local_1c,uVar3 >> 0x10);
        if (iVar2 != 0) {
          *(uint *)((int)this + iVar4 + 0x2a5) = local_8;
          *(int *)((int)this + 0x4f4) = local_c;
          *(int *)((int)this + iVar4 + 0x2a9) = local_10;
          *(int *)((int)this + 0x4f8) = local_14;
          *(undefined4 *)((int)this + iVar4 + 0x2ad) = local_18;
          *(int *)((int)this + 0x4fc) = local_1c;
          return 1;
        }
      }
    }
    else {
      iVar4 = (int)pvVar1 * 0x16;
      iVar2 = (int)sVar5 + (int)*(short *)(&DAT_007932d8 + iVar4);
      sVar5 = (short)(iVar2 >> 0x1f);
      if (iVar2 < 0) {
        sVar5 = (((short)(iVar2 / 200) + sVar5) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) +
                -1;
      }
      else {
        sVar5 = ((short)(iVar2 / 200) + sVar5) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f);
      }
      iVar2 = (int)*(short *)(&DAT_007932d6 + iVar4) + (int)sVar6;
      sVar6 = (short)(iVar2 >> 0x1f);
      if (iVar2 < 0) {
        sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) +
                -1;
      }
      else {
        sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
      }
      iVar4 = (int)*(short *)(&DAT_007932d4 + iVar4) + (int)(short)local_8;
      sVar7 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        sVar7 = (((short)(iVar4 / 0xc9) + sVar7) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) +
                -1;
      }
      else {
        sVar7 = ((short)(iVar4 / 0xc9) + sVar7) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
      }
      if (((((sVar7 < 0) || (SHORT_007fb240 <= sVar7)) || (sVar6 < 0)) ||
          ((SHORT_007fb242 <= sVar6 || (sVar5 < 0)))) ||
         ((SHORT_007fb244 <= sVar5 ||
          (g_worldCells
           [(int)sVar6 * (int)SHORT_007fb240 + (int)sVar5 * (int)SHORT_007fb246 + (int)sVar7].
           objects[1] == (STWorldObject *)0x0)))) {
        return 1;
      }
    }
  }
  return 0;
}

