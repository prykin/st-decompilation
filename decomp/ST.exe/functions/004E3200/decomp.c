
void __thiscall FUN_004e3200(void *this,int *param_1)

{
  uint index;
  undefined1 uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  int iVar5;
  DArrayTy *array;
  undefined1 *puVar6;
  int *piVar7;
  uint index_00;
  uint *puVar8;
  undefined4 *puVar9;
  undefined1 local_78 [8];
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

  puVar6 = (undefined1 *)0x0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  if (*param_1 == 0) {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x30,5);
    *param_1 = (int)puVar3;
  }
  if (param_1[1] == 0) {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x30,5);
    param_1[1] = (int)puVar3;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  iVar4 = *(int *)((int)this + 0x5ac);
  if (iVar4 == 0x35) {
    do {
      if (puVar6[(int)(&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)]] == '\0') {
        iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar6);
        iVar4 = thunk_FUN_004e7f20(*(int *)((int)this + 0x24),(int)puVar6,iVar4 + 1);
      }
      else {
        iVar4 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),(uint)puVar6);
      }
      if (iVar4 != 0) {
        uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),(int)puVar6);
        iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((iVar4 < CONCAT31(extraout_var_01,uVar1)) &&
           (((*(int *)((int)this + 0x361) != 2 || (*(undefined1 **)((int)this + 0x369) != puVar6))
            && (iVar4 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),(uint)puVar6), iVar4 == 0))))
        {
          puVar3 = local_48;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar6);
          local_48[0] = (iVar4 + 1) * 0x10000 | (uint)puVar6 & 0xffff;
          if (puVar6[(int)(&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)]] == '\0') {
LAB_004e3526:
            local_40 = '\x01';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),(uint)puVar6);
            local_40 = '\0';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_02,bVar2) != 0) goto LAB_004e3526;
          }
          thunk_FUN_004c7260(this,CASE_2,(int)puVar6,&local_8,&local_c,&local_10,&local_14);
          local_3a = (undefined2)local_8;
          local_3e = (undefined2)local_c;
          iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          if ((char)iVar4 == '\x03') {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          puVar9 = local_36;
          local_3f = (undefined1)iVar4;
          iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),(int)puVar6);
          thunk_FUN_004e68a0(*(int *)((int)this + 0x24),puVar6,iVar4 + 1,puVar9);
          if (puVar6[(int)(&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)]] == '\0') {
            puVar3 = (uint *)param_1[1];
          }
          else {
            puVar3 = (uint *)*param_1;
          }
          Library::DKW::TBL::FUN_006ae1c0(puVar3,local_48);
        }
      }
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < 0x9b);
  }
  else if (((0x53 < iVar4) && (iVar4 < 0x5b)) &&
          (local_18 = 0, (&DAT_0079a3fc)[(iVar4 * 3 + -0xfc) * 5] != 0)) {
    puVar3 = &DAT_0079a3fc + (iVar4 * 3 + -0xfc) * 5;
    do {
      if (0xe < local_18) break;
      iVar4 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),*puVar3);
      if (iVar4 != 0) {
        uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),*puVar3);
        iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),*puVar3);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (((iVar4 < CONCAT31(extraout_var,uVar1)) &&
            ((*(int *)((int)this + 0x361) != 2 || (*(uint *)((int)this + 0x369) != *puVar3)))) &&
           (iVar4 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),*puVar3), iVar4 == 0)) {
          iVar4 = *(int *)((int)this + 0x24);
          puVar8 = local_48;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          iVar4 = thunk_FUN_004e60d0(iVar4,*puVar3);
          local_48[0] = (iVar4 + 1) * 0x10000 | (uint)(ushort)*puVar3;
          if (*(int *)((int)this + 0x4d4) == 0) {
LAB_004e336e:
            local_40 = '\0';
          }
          else {
            bVar2 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),*puVar3);
            local_40 = '\x01';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_004e336e;
          }
          thunk_FUN_004c7260(this,CASE_2,*puVar3,&local_8,&local_c,&local_10,&local_14);
          local_3e = (undefined2)local_c;
          local_3a = (undefined2)local_8;
          iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          if ((char)iVar4 == '\x03') {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          iVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
          local_3f = (undefined1)iVar4;
          puVar9 = local_36;
          iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),*puVar3);
          thunk_FUN_004e68a0(*(int *)((int)this + 0x24),(undefined1 *)*puVar3,iVar4 + 1,puVar9);
          Library::DKW::TBL::FUN_006ae1c0((uint *)*param_1,local_48);
        }
      }
      puVar8 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      local_18 = local_18 + 1;
    } while (*puVar8 != 0);
  }
  local_18 = 2;
  piVar7 = param_1;
  do {
    param_1 = *(int **)(*piVar7 + 0xc);
    while (param_1 != (int *)0x0) {
      array = (DArrayTy *)*piVar7;
      param_1 = (int *)0x0;
      index_00 = 0;
      if ((int)(array->count - 2) < 0) break;
      do {
        DArrayGetElement(array,index_00,local_48);
        index = index_00 + 1;
        DArrayGetElement((DArrayTy *)*piVar7,index,local_78);
        if ((local_40 == '\0') && (local_70 != '\0')) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)*piVar7,index_00,index);
          param_1 = (int *)0x1;
        }
        array = (DArrayTy *)*piVar7;
        index_00 = index;
      } while ((int)index <= (int)(array->count - 2));
    }
    piVar7 = piVar7 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      return;
    }
  } while( true );
}

