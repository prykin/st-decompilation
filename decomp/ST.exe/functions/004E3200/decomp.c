
void __thiscall FUN_004e3200(void *this,int *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar6;
  AnonShape_006ACC70_C8641025 *pAVar7;
  undefined1 *puVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 local_78 [2];
  char local_70;
  uint local_48 [2];
  char local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_36 [7];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar8 = (undefined1 *)0x0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  if (*param_1 == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x30,5);
    *param_1 = (int)puVar4;
  }
  if (param_1[1] == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x30,5);
    param_1[1] = (int)puVar4;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  iVar5 = *(int *)((int)this + 0x5ac);
  if (iVar5 == 0x35) {
    do {
      if (puVar8[(int)(&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)]] == '\0') {
        iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar8);
        iVar5 = thunk_FUN_004e7f20(*(int *)((int)this + 0x24),(int)puVar8,iVar5 + 1);
      }
      else {
        bVar2 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),(uint)puVar8);
        iVar5 = CONCAT31(extraout_var_03,bVar2);
      }
      if (iVar5 != 0) {
        uVar3 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),(int)puVar8);
        iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar8);
        if ((iVar5 < CONCAT31(extraout_var_04,uVar3)) &&
           (((*(int *)((int)this + 0x361) != 2 || (*(undefined1 **)((int)this + 0x369) != puVar8))
            && (bVar2 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),(uint)puVar8),
               CONCAT31(extraout_var_05,bVar2) == 0)))) {
          puVar4 = local_48;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar8);
          local_48[0] = (iVar5 + 1) * 0x10000 | (uint)puVar8 & 0xffff;
          if (puVar8[(int)(&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)]] == '\0') {
LAB_004e3526:
            local_40 = '\x01';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),(uint)puVar8);
            local_40 = '\0';
            if (CONCAT31(extraout_var_06,bVar2) != 0) goto LAB_004e3526;
          }
          thunk_FUN_004c7260(this,CASE_2,(int)puVar8,&local_8,&local_c,&local_10,&local_14);
          local_3a = (undefined2)local_8;
          local_3e = (undefined2)local_c;
          iVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          if ((char)iVar5 == '\x03') {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          iVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          puVar12 = local_36;
          local_3f = (undefined1)iVar5;
          iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar8);
          thunk_FUN_004e68a0(*(int *)((int)this + 0x24),puVar8,iVar5 + 1,puVar12);
          if (puVar8[(int)(&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)]] == '\0') {
            puVar4 = (uint *)param_1[1];
          }
          else {
            puVar4 = (uint *)*param_1;
          }
          Library::DKW::TBL::FUN_006ae1c0(puVar4,local_48);
        }
      }
      puVar8 = puVar8 + 1;
    } while ((int)puVar8 < 0x9b);
  }
  else if (((0x53 < iVar5) && (iVar5 < 0x5b)) &&
          (local_18 = 0, (&DAT_0079a3fc)[(iVar5 * 3 + -0xfc) * 5] != 0)) {
    puVar4 = &DAT_0079a3fc + (iVar5 * 3 + -0xfc) * 5;
    do {
      if (0xe < local_18) break;
      bVar2 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),*puVar4);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        uVar3 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),*puVar4);
        iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),*puVar4);
        if (((iVar5 < CONCAT31(extraout_var_00,uVar3)) &&
            ((*(int *)((int)this + 0x361) != 2 || (*(uint *)((int)this + 0x369) != *puVar4)))) &&
           (bVar2 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),*puVar4),
           CONCAT31(extraout_var_01,bVar2) == 0)) {
          iVar5 = *(int *)((int)this + 0x24);
          puVar11 = local_48;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          iVar5 = thunk_FUN_004e60d0(iVar5,*puVar4);
          local_48[0] = (iVar5 + 1) * 0x10000 | (uint)(ushort)*puVar4;
          if (*(int *)((int)this + 0x4d4) == 0) {
LAB_004e336e:
            local_40 = '\0';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),*puVar4);
            local_40 = '\x01';
            if (CONCAT31(extraout_var_02,bVar2) == 0) goto LAB_004e336e;
          }
          thunk_FUN_004c7260(this,CASE_2,*puVar4,&local_8,&local_c,&local_10,&local_14);
          local_3e = (undefined2)local_c;
          local_3a = (undefined2)local_8;
          iVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          if ((char)iVar5 == '\x03') {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          iVar5 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          local_3f = (undefined1)iVar5;
          puVar12 = local_36;
          iVar5 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),*puVar4);
          thunk_FUN_004e68a0(*(int *)((int)this + 0x24),(undefined1 *)*puVar4,iVar5 + 1,puVar12);
          Library::DKW::TBL::FUN_006ae1c0((uint *)*param_1,local_48);
        }
      }
      puVar11 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      local_18 = local_18 + 1;
    } while (*puVar11 != 0);
  }
  local_18 = 2;
  piVar9 = param_1;
  do {
    param_1 = *(int **)(*piVar9 + 0xc);
    while (param_1 != (int *)0x0) {
      pAVar7 = (AnonShape_006ACC70_C8641025 *)*piVar9;
      param_1 = (int *)0x0;
      uVar10 = 0;
      if ((int)(pAVar7->field_000C - 2) < 0) break;
      do {
        FUN_006acc70(pAVar7,uVar10,local_48);
        uVar1 = uVar10 + 1;
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)*piVar9,uVar1,local_78);
        if ((local_40 == '\0') && (local_70 != '\0')) {
          FUN_006b0cd0((AnonShape_006B0CD0_C8D121FA *)*piVar9,uVar10,uVar1);
          param_1 = (int *)0x1;
        }
        pAVar7 = (AnonShape_006ACC70_C8641025 *)*piVar9;
        uVar10 = uVar1;
      } while ((int)uVar1 <= (int)(pAVar7->field_000C - 2));
    }
    piVar9 = piVar9 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      return;
    }
  } while( true );
}

