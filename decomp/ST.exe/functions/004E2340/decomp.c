
int __thiscall FUN_004e2340(void *this,uint param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  uVar3 = param_1;
  iVar4 = -1;
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    iVar4 = param_1 * 5 + 0x9b;
    piVar1 = (int *)((int)this + iVar4 * 8);
    iVar4 = *(int *)(&DAT_007e091c + *(int *)((int)this + iVar4 * 8) * 4) / 100;
    iVar5 = (**(code **)(*(int *)this + 0x2c))();
    iVar5 = thunk_FUN_004b72e0(*(char *)((int)this + 0x24),iVar5);
    if ((iVar5 != 0) &&
       ((iVar5 = thunk_FUN_004b79c0(*(char *)((int)this + 0x24),*(int *)((int)this + 0x18)),
        iVar5 == 0 && (iVar4 = iVar4 * 4, DAT_00811798 != (void *)0x0)))) {
      thunk_FUN_00621580(DAT_00811798,*(uint *)((int)this + 0x24),5);
    }
    iVar5 = *(int *)((int)this + param_1 * 0x28 + 0x4e8);
    if ((uint)(iVar5 + iVar4) <= (uint)PTR_00802a38->field_00E4) {
      param_1 = (uint)((PTR_00802a38->field_00E4 - iVar5) *
                      *(int *)((int)this + param_1 * 0x28 + 0x4e4)) /
                *(uint *)(&DAT_007e091c + *piVar1 * 4);
      iVar4 = (**(code **)(*(int *)this + 0x2c))();
      iVar4 = thunk_FUN_004b72e0(*(char *)((int)this + 0x24),iVar4);
      if ((iVar4 != 0) &&
         (iVar4 = thunk_FUN_004b79c0(*(char *)((int)this + 0x24),*(int *)((int)this + 0x18)),
         iVar4 == 0)) {
        param_1 = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
        if (param_1 == 0) {
          param_1 = 1;
        }
        if (DAT_00811798 != (void *)0x0) {
          thunk_FUN_00621580(DAT_00811798,*(uint *)((int)this + 0x24),5);
        }
      }
      iVar4 = *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
      iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4e4);
      if (iVar5 < (int)(iVar4 + param_1)) {
        param_1 = iVar5 - iVar4;
      }
      do {
        local_8 = 0;
        local_c = 0;
        iVar4 = *(int *)(&DAT_007e085c + *piVar1 * 4);
        param_2 = (int)(iVar4 * param_1) / iVar5;
        iVar4 = iVar4 - (iVar4 * *(int *)((int)this + uVar3 * 0x28 + 0x4dc)) / iVar5;
        iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4ec);
        if ((0 < iVar5) && (local_8 = -iVar5, local_8 < 0)) {
          local_8 = 0;
        }
        iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4f0);
        if ((0 < iVar5) && (local_c = -iVar5, local_c < 0)) {
          local_c = 0;
        }
        iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4f4);
        if ((iVar4 < iVar5 + param_2) && (param_2 = iVar4 - iVar5, param_2 < 0)) {
          param_2 = 0;
        }
        if ((((local_8 == 0) ||
             (iVar4 = thunk_FUN_004d7b10(*(char *)((int)this + 0x24),4), local_8 <= iVar4)) &&
            ((local_c == 0 ||
             (iVar4 = thunk_FUN_004d7b50(*(char *)((int)this + 0x24),4), local_c <= iVar4)))) &&
           ((param_2 == 0 ||
            (iVar4 = thunk_FUN_004d7b90(*(char *)((int)this + 0x24),4), param_2 <= iVar4)))) {
          if (local_8 != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4ec) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4ec) + local_8;
            thunk_FUN_004d7c10(*(char *)((int)this + 0x24),4,*(int *)((int)this + 0x18),local_8);
          }
          if (local_c != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4f0) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4f0) + local_c;
            thunk_FUN_004d7d30(*(char *)((int)this + 0x24),4,*(int *)((int)this + 0x18),local_c);
          }
          if (param_2 != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4f4) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4f4) + param_2;
            thunk_FUN_004d7e50(*(char *)((int)this + 0x24),4,*(int *)((int)this + 0x18),param_2);
          }
          *(uint *)((int)this + uVar3 * 0x28 + 0x4e0) =
               *(int *)((int)this + uVar3 * 0x28 + 0x4e0) + param_1;
          if ((param_3 != (undefined4 *)0x0) &&
             (*param_3 = 0,
             *(int *)((int)this + uVar3 * 0x28 + 0x4e4) <=
             *(int *)((int)this + uVar3 * 0x28 + 0x4e0))) {
            *param_3 = 1;
          }
          if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
            thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
          }
          break;
        }
        iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4e4);
        bVar2 = iVar5 / 100 < (int)param_1;
        param_1 = iVar5 / 100;
      } while (bVar2);
      *(undefined4 *)((int)this + uVar3 * 0x28 + 0x4e8) = PTR_00802a38->field_00E4;
      if (*(int *)((int)this + 0x524) + 0x19U < (uint)PTR_00802a38->field_00E4) {
        *(undefined4 *)((int)this + 0x524) = PTR_00802a38->field_00E4;
        iVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
        if ((char)iVar4 == '\x02') {
          (**(code **)(*(int *)this + 0x90))(3,0x2c8);
          return *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
        }
        (**(code **)(*(int *)this + 0x90))(3,0x200);
      }
    }
    iVar4 = *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
  }
  return iVar4;
}

