
undefined4 __fastcall FUN_005fc4a0(void *param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x34e);
  bVar5 = false;
  bVar4 = false;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x242) = sVar8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x350);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x244) = sVar8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x352);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x246) = sVar8;
  *(undefined4 *)((int)param_1 + 0x231) = 0xfe;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((short)(*(short *)((int)param_1 + 0x46f) * 0xc9 + 100) != *(short *)((int)param_1 + 0x34e))
      || ((short)(*(short *)((int)param_1 + 0x473) * 0xc9 + 100) != *(short *)((int)param_1 + 0x350)
         )) || ((short)(*(short *)((int)param_1 + 0x477) * 200 + 100) !=
                *(short *)((int)param_1 + 0x352))) {
    bVar5 = true;
    *(undefined2 *)((int)param_1 + 0x242) = *(undefined2 *)((int)param_1 + 0x46f);
    *(undefined2 *)((int)param_1 + 0x244) = *(undefined2 *)((int)param_1 + 0x473);
    *(undefined2 *)((int)param_1 + 0x246) = *(undefined2 *)((int)param_1 + 0x477);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x242);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar2 = *(short *)((int)param_1 + 0x244);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar3 = *(short *)((int)param_1 + 0x246);
  if ((((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar3)) ||
      (g_worldGrid.cells
       [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 + (int)sVar8
       ].objects[0] == (STWorldObject *)0x0)) &&
     (iVar6 = DumpClassC::WritePtr(sVar8,sVar2,sVar3,0,param_1), iVar6 == 0)) {
    *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + '\x01';
    bVar4 = true;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar8 = *(short *)((int)param_1 + 0x242);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar2 = *(short *)((int)param_1 + 0x246);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar3 = *(short *)((int)param_1 + 0x244);
    if (sVar8 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar8) {
      return 0;
    }
    if (sVar3 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar3) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar2) {
      return 0;
    }
    this = g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
            (int)sVar8].objects[0];
    if (this == (STWorldObject *)0x0) {
      return 0;
    }
    iVar6 = (*this->vtable->GetObjectTypeId)(this);
    if (((iVar6 != 0x1b) && (iVar6 != 7)) && (iVar6 != 0x13)) {
      return 0;
    }
    iVar6 = (*this->vtable[5].slots_00_28[9])(0xfe);
    if (iVar6 == 0) {
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    (*this->vtable[5].slots_00_28[10])(*(undefined4 *)((int)param_1 + 0x18));
    *(STWorldObjectVTable **)((int)param_1 + 0x2a3) = this[1].vtable;
    *(undefined2 *)((int)param_1 + 0x2ab) = *(undefined2 *)&this[1].field_0xe;
    *(undefined4 *)((int)param_1 + 0x2a7) = *(undefined4 *)&this->field_0x18;
    *(undefined1 *)((int)param_1 + 0x24e) = 1;
    *(undefined1 *)((int)param_1 + 0x24f) = 1;
    *(undefined4 *)((int)param_1 + 0x23a) = 4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(AnonReceiver_006EA050 **)((int)param_1 + 0x211) != (AnonReceiver_006EA050 *)0x0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460
                (*(AnonReceiver_006EA050 **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                 *(int *)&this[0xd].field_0x19);
    }
    bVar5 = false;
  }
  *(undefined1 *)((int)param_1 + 0x251) = *(undefined1 *)((int)param_1 + 0x354);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = (int)((ulonglong)((longlong)*(int *)((int)param_1 + 0x354) * -0x77777777) >> 0x20) +
          *(int *)((int)param_1 + 0x354);
  *(int *)((int)param_1 + 0x277) = (int)*(short *)((int)param_1 + 0x34e);
  *(int *)((int)param_1 + 0x2be) = (int)*(short *)((int)param_1 + 0x34e);
  *(int *)((int)param_1 + 0x27b) = (int)*(short *)((int)param_1 + 0x350);
  *(int *)((int)param_1 + 0x27f) = (int)*(short *)((int)param_1 + 0x352);
  *(int *)((int)param_1 + 0x2ba) = (iVar6 >> 3) - (iVar6 >> 0x1f);
  *(int *)((int)param_1 + 0x2c2) = (int)*(short *)((int)param_1 + 0x350);
  *(int *)((int)param_1 + 0x2c6) = (int)*(short *)((int)param_1 + 0x352);
  *(undefined4 *)((int)param_1 + 0x231) = 0xfe;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar7 = thunk_FUN_005fcd40(*(int *)((int)param_1 + 0x33e));
  *(undefined4 *)((int)param_1 + 0x2b1) = uVar7;
  *(undefined1 *)((int)param_1 + 0x235) = *(undefined1 *)((int)param_1 + 0x332);
  *(undefined4 *)((int)param_1 + 0x236) = 0;
  *(undefined4 *)((int)param_1 + 0x23e) = 2000;
  if (bVar4) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)((int)param_1 + 0x342) == 1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_005ef4b0(param_1,(uint)*(byte *)((int)param_1 + 0x251));
      *(undefined4 *)((int)param_1 + 0x23a) = 2;
      *(undefined1 *)((int)param_1 + 0x2e9) = 1;
    }
    else if (bVar5) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = thunk_FUN_005ecd70(param_1,(int)(short)(*(short *)((int)param_1 + 0x242) * 0xc9 + 100)
                                 ,(int)(short)(*(short *)((int)param_1 + 0x244) * 0xc9 + 100),
                                 (int)(short)(*(short *)((int)param_1 + 0x246) * 200 + 100),
                                 *(int *)((int)param_1 + 0x354),'\x01',0x1e);
      if (iVar6 != 0) {
        *(undefined4 *)((int)param_1 + 0x23a) = 2;
      }
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_005ecd70(param_1,*(int *)((int)param_1 + 0x277),*(int *)((int)param_1 + 0x27b),
                         *(int *)((int)param_1 + 0x27f) + -0x1e,*(int *)((int)param_1 + 0x354),'\0',
                         0x1e - (uVar1 >> 0x10) % 0xb);
      *(undefined4 *)((int)param_1 + 0x23a) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x2d6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0xffffffff;
  *(uint *)((int)param_1 + 0x2e0) = g_playSystem_00802A38->field_00E4;
  return 1;
}

