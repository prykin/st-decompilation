
void __thiscall FUN_00488890(void *this,int param_1)

{
  uint index;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int local_EAX_38;
  int uVar4;
  DArrayTy *pDVar4;
  int iVar5;
  int local_EAX_393;
  int local_EAX_430;
  int local_EAX_483;
  int local_EAX_519;
  int local_EAX_732;
  int uVar7;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint index_00;
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
    iVar7 = local_18;
    local_8 = (undefined4 *)0x0;
    local_EAX_38 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    local_1c = &DAT_00800fa0 + (local_EAX_38 & 0xffU) * 4;
    switch(iVar7) {
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
      local_8 = &DAT_00801370 + (uVar4 & 0xffU) * 4;
    }
    if (*(int *)(param_1 + iVar7 * 4) == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,0x30,5);
      *(DArrayTy **)(param_1 + iVar7 * 4) = pDVar4;
    }
    local_10 = 0;
    local_c = 0x32;
    do {
      iVar6 = local_c;
      if (((((local_1c == (undefined4 *)0x0) || (iVar5 = FUN_006b0fd0((int)local_1c), iVar5 != 0))
           && (iVar5 = FUN_006b0fd0((int)local_8), iVar5 != 0)) &&
          (iVar5 = thunk_FUN_004e6010(*(int *)((int)this + 0x24),iVar6 + -0x32), iVar5 != 0)) &&
         ((iVar6 < 0x54 || (0x5a < iVar6)))) {
        piVar8 = local_4c;
        for (iVar6 = 0xc; iVar5 = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = 0;
        iVar6 = thunk_FUN_004e6c20(*(int *)((int)this + 0x24),local_c);
        if ((iVar6 == 0) ||
           (((iVar6 = GetPlayerRaceId(*(char *)((int)this + 0x24)), (char)iVar6 == '\x03' &&
             (iVar5 != 0x5c)) &&
            (*(int *)&g_playerRuntime[*(int *)((int)this + 0x24)].field_0x9ca == 0)))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        local_EAX_393 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        iVar6 = local_10;
        local_3e = *(undefined2 *)(&DAT_008545a8 + ((local_EAX_393 & 0xffU) + local_10) * 4);
        local_EAX_430 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_42 = *(undefined2 *)(&DAT_007e1c4c + ((local_EAX_430 & 0xffU) + iVar6) * 4);
        iVar5 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        if ((char)iVar5 == '\x03') {
          local_EAX_483 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          local_40 = *(undefined2 *)(&DAT_007e315c + ((local_EAX_483 & 0xffU) + iVar6) * 4);
        }
        else {
          local_EAX_519 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          local_40 = *(undefined2 *)(&DAT_007e24f8 + ((local_EAX_519 & 0xffU) + iVar6) * 4);
        }
        local_3c = 0xffff;
        iVar6 = GetPlayerRaceId(*(char *)((int)this + 0x24));
        local_43 = (undefined1)iVar6;
        thunk_FUN_004e6d00(*(byte **)((int)this + 0x24),local_4c[0],local_3a);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_1 + iVar7 * 4),local_4c);
        iVar6 = local_c;
      }
      local_c = iVar6 + 1;
      local_10 = local_10 + 3;
    } while (iVar6 + -0x31 < 0x42);
    pDVar4 = *(DArrayTy **)(param_1 + iVar7 * 4);
    puVar1 = (undefined4 *)pDVar4->count;
    puVar2 = puVar1;
    while (puVar2 != (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
      index_00 = 0;
      if ((int)puVar1 + -2 < 0) break;
      do {
        DArrayGetElement(pDVar4,index_00,local_4c);
        index = index_00 + 1;
        DArrayGetElement(*(DArrayTy **)(param_1 + iVar7 * 4),index,local_7c);
        pvVar3 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00488b5f:
            local_EAX_732 = GetPlayerRaceId(*(char *)((int)local_14 + 0x24));
            local_10 = (local_EAX_732 & 0xffU) + local_7c[0] * 3;
            uVar7 = GetPlayerRaceId(*(char *)((int)pvVar3 + 0x24));
            iVar7 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uVar7 & 0xffU) + local_4c[0] * 3) * 4))
            goto LAB_00488bce;
          }
          FUN_006b0cd0(*(AnonShape_00413AF0_B6B4EE9A **)(param_1 + iVar7 * 4),index_00,index);
          local_1c = (undefined4 *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        pDVar4 = *(DArrayTy **)(param_1 + iVar7 * 4);
        puVar1 = (undefined4 *)pDVar4->count;
        index_00 = index;
        this = local_14;
        puVar2 = local_1c;
      } while ((int)index <= (int)puVar1 + -2);
    }
    local_18 = iVar7 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

