
void __thiscall FUN_00488890(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
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
    iVar10 = local_18;
    local_8 = (undefined4 *)0x0;
    uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    local_1c = &DAT_00800fa0 + (uVar5 & 0xff) * 4;
    switch(iVar10) {
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
      uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      local_8 = &DAT_00801370 + (uVar5 & 0xff) * 4;
    }
    if (*(int *)(param_1 + iVar10 * 4) == 0) {
      puVar6 = FUN_006ae290((uint *)0x0,5,0x30,5);
      *(uint **)(param_1 + iVar10 * 4) = puVar6;
    }
    local_10 = 0;
    local_c = 0x32;
    do {
      iVar9 = local_c;
      if (((((local_1c == (undefined4 *)0x0) || (iVar7 = FUN_006b0fd0((int)local_1c), iVar7 != 0))
           && (iVar7 = FUN_006b0fd0((int)local_8), iVar7 != 0)) &&
          (iVar7 = thunk_FUN_004e6010(*(int *)((int)this + 0x24),iVar9 + -0x32), iVar7 != 0)) &&
         ((iVar9 < 0x54 || (0x5a < iVar9)))) {
        piVar11 = local_4c;
        for (iVar9 = 0xc; iVar7 = local_c, iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        local_4c[0] = local_c;
        local_4c[1] = 0;
        iVar9 = thunk_FUN_004e6c20(*(int *)((int)this + 0x24),local_c);
        if ((iVar9 == 0) ||
           (((iVar9 = thunk_FUN_004406c0(*(char *)((int)this + 0x24)), (char)iVar9 == '\x03' &&
             (iVar7 != 0x5c)) && (*(int *)(&DAT_007f57ea + *(int *)((int)this + 0x24) * 0xa62) == 0)
            ))) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        iVar9 = local_10;
        local_3e = *(undefined2 *)(&DAT_008545a8 + ((uVar5 & 0xff) + local_10) * 4);
        uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        local_42 = *(undefined2 *)(&DAT_007e1c4c + ((uVar5 & 0xff) + iVar9) * 4);
        iVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        if ((char)iVar7 == '\x03') {
          uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          local_40 = *(undefined2 *)(&DAT_007e315c + ((uVar5 & 0xff) + iVar9) * 4);
        }
        else {
          uVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          local_40 = *(undefined2 *)(&DAT_007e24f8 + ((uVar5 & 0xff) + iVar9) * 4);
        }
        local_3c = 0xffff;
        iVar9 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
        local_43 = (undefined1)iVar9;
        thunk_FUN_004e6d00(*(int *)((int)this + 0x24),local_4c[0],local_3a);
        FUN_006ae1c0(*(uint **)(param_1 + iVar10 * 4),local_4c);
        iVar9 = local_c;
      }
      local_c = iVar9 + 1;
      local_10 = local_10 + 3;
    } while (iVar9 + -0x31 < 0x42);
    iVar9 = *(int *)(param_1 + iVar10 * 4);
    puVar2 = *(undefined4 **)(iVar9 + 0xc);
    puVar3 = puVar2;
    while (puVar3 != (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
      uVar5 = 0;
      if ((int)puVar2 + -2 < 0) break;
      do {
        FUN_006acc70(iVar9,uVar5,local_4c);
        uVar1 = uVar5 + 1;
        FUN_006acc70(*(int *)(param_1 + iVar10 * 4),uVar1,local_7c);
        pvVar4 = local_14;
        if (local_44 == '\0') {
          if (local_74 == '\0') {
LAB_00488b5f:
            uVar8 = thunk_FUN_004406c0(*(char *)((int)local_14 + 0x24));
            local_10 = (uVar8 & 0xff) + local_7c[0] * 3;
            uVar8 = thunk_FUN_004406c0(*(char *)((int)pvVar4 + 0x24));
            iVar10 = local_18;
            if (*(int *)(&DAT_007e1dac + local_10 * 4) <=
                *(int *)(&DAT_007e1dac + ((uVar8 & 0xff) + local_4c[0] * 3) * 4)) goto LAB_00488bce;
          }
          FUN_006b0cd0(*(int *)(param_1 + iVar10 * 4),uVar5,uVar1);
          local_1c = (undefined4 *)0x1;
        }
        else if (local_44 == local_74) goto LAB_00488b5f;
LAB_00488bce:
        iVar9 = *(int *)(param_1 + iVar10 * 4);
        puVar2 = *(undefined4 **)(iVar9 + 0xc);
        uVar5 = uVar1;
        this = local_14;
        puVar3 = local_1c;
      } while ((int)uVar1 <= (int)puVar2 + -2);
    }
    local_18 = iVar10 + 1;
    if (4 < local_18) {
      return;
    }
  } while( true );
}

