
void __thiscall FUN_00488890(void *this,int param_1)

{
  uint index;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  DArrayTy *array;
  int iVar9;
  int *piVar10;
  int local_7c [2];
  char local_74;
  int local_4c [2];
  char local_44;
  undefined1 local_43;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  uint local_3a [7];
  undefined4 *local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  local_18 = 0;
  local_14 = this;
  do {
    iVar9 = local_18;
    local_8 = (undefined4 *)0x0;
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    local_1c = &DAT_00800fa0 + (uVar4 & 0xff) * 4;
    switch(iVar9) {
    case 0:
      local_8 = (undefined4 *)&DAT_008014a0;
      break;
    case 1:
      local_8 = (undefined4 *)&DAT_00800f90;
      break;
    case 2:
      local_8 = (undefined4 *)&DAT_00800f80;
      break;
    case 3:
      local_8 = (undefined4 *)&DAT_00801360;
      break;
    case 4:
      local_1c = (undefined4 *)0x0;
      uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
      local_8 = &DAT_00801370 + (uVar4 & 0xff) * 4;
    }
    if (*(int *)(param_1 + iVar9 * 4) == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x30,5);
      *(uint **)(param_1 + iVar9 * 4) = puVar5;
    }
    local_10 = 0;
    local_c = 0x32;
    do {
      iVar8 = local_c;
      if (((((local_1c == (undefined4 *)0x0) || (iVar6 = FUN_006b0fd0((int)local_1c), iVar6 != 0))
           && (iVar6 = FUN_006b0fd0((int)local_8), iVar6 != 0)) &&
          (iVar6 = thunk_FUN_004e6010(*(int *)((int)this + 0x24),iVar8 + -0x32), iVar6 != 0)) &&
         ((iVar8 < 0x54 || (0x5a < iVar8)))) {
        piVar10 = local_4c;
        for (iVar8 = 0xc; iVar6 = local_c, iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = 0;
        iVar8 = thunk_FUN_004e6c20(*(int *)((int)this + 0x24),local_c);
        if ((iVar8 == 0) ||
           (((iVar8 = GetPlayerRaceId(*(char *)((int)this + 0x24)), (char)iVar8 == '\x03' &&
             (iVar6 != 0x5c)) &&
            (*(int *)&g_playerRuntime[*(int *)((int)this + 0x24)].field_0x9ca == 0)))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        iVar8 = local_10;
        local_3e = *(undefined2 *)(&DAT_008545a8 + ((uVar4 & 0xff) + local_10) * 4);
        uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_42 = *(undefined2 *)(&DAT_007e1c4c + ((uVar4 & 0xff) + iVar8) * 4);
        iVar6 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        if ((char)iVar6 == '\x03') {
          uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          local_40 = *(undefined2 *)(&DAT_007e315c + ((uVar4 & 0xff) + iVar8) * 4);
        }
        else {
          uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          local_40 = *(undefined2 *)(&DAT_007e24f8 + ((uVar4 & 0xff) + iVar8) * 4);
        }
        local_3c = 0xffff;
        iVar8 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_43 = (undefined1)iVar8;
        thunk_FUN_004e6d00(*(int *)((int)this + 0x24),local_4c[0],local_3a);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_1 + iVar9 * 4),local_4c);
        iVar8 = local_c;
      }
      local_c = iVar8 + 1;
      local_10 = local_10 + 3;
    } while (iVar8 + -0x31 < 0x42);
    array = *(DArrayTy **)(param_1 + iVar9 * 4);
    puVar1 = (undefined4 *)array->count;
    puVar2 = puVar1;
    while (puVar2 != (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
      uVar4 = 0;
      if ((int)puVar1 + -2 < 0) break;
      do {
        DArrayGetElement(array,uVar4,local_4c);
        index = uVar4 + 1;
        DArrayGetElement(*(DArrayTy **)(param_1 + iVar9 * 4),index,local_7c);
        pvVar3 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00488b5f:
            uVar7 = GetPlayerRaceId(*(char *)((int)local_14 + 0x24));
            local_10 = (uVar7 & 0xff) + local_7c[0] * 3;
            uVar7 = GetPlayerRaceId(*(char *)((int)pvVar3 + 0x24));
            iVar9 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uVar7 & 0xff) + local_4c[0] * 3) * 4)) goto LAB_00488bce;
          }
          FUN_006b0cd0(*(AnonShape_00413AF0_B6B4EE9A **)(param_1 + iVar9 * 4),uVar4,index);
          local_1c = (undefined4 *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        array = *(DArrayTy **)(param_1 + iVar9 * 4);
        puVar1 = (undefined4 *)array->count;
        uVar4 = index;
        this = local_14;
        puVar2 = local_1c;
      } while ((int)index <= (int)puVar1 + -2);
    }
    local_18 = iVar9 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

