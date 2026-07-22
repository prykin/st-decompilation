
undefined4 __fastcall FUN_005ebd80(void *param_1)

{
  short sVar1;
  short sVar2;
  STWorldObject *this;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x34a);
  bVar4 = false;
  bVar3 = false;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x242) = sVar8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x34c);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x244) = sVar8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x34e);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x246) = sVar8;
  *(undefined4 *)((int)param_1 + 0x231) = 0xfd;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((short)(*(short *)((int)param_1 + 0x46b) * 0xc9 + 100) != *(short *)((int)param_1 + 0x34a))
      || ((short)(*(short *)((int)param_1 + 0x46f) * 0xc9 + 100) != *(short *)((int)param_1 + 0x34c)
         )) || ((short)(*(short *)((int)param_1 + 0x473) * 200 + 100) !=
                *(short *)((int)param_1 + 0x34e))) {
    *(undefined2 *)((int)param_1 + 0x242) = *(undefined2 *)((int)param_1 + 0x46b);
    *(undefined2 *)((int)param_1 + 0x244) = *(undefined2 *)((int)param_1 + 0x46f);
    *(undefined2 *)((int)param_1 + 0x246) = *(undefined2 *)((int)param_1 + 0x473);
    bVar4 = true;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar8 = *(short *)((int)param_1 + 0x242);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)((int)param_1 + 0x244);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar2 = *(short *)((int)param_1 + 0x246);
  if ((((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
        ((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) ||
      (g_worldGrid.cells
       [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar1 + (int)sVar8
       ].objects[0] == (STWorldObject *)0x0)) &&
     (iVar5 = DumpClassC::WritePtr(sVar8,sVar1,sVar2,0,param_1), iVar5 == 0)) {
    *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + '\x01';
    bVar3 = true;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar8 = *(short *)((int)param_1 + 0x242);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar1 = *(short *)((int)param_1 + 0x246);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar2 = *(short *)((int)param_1 + 0x244);
    if (sVar8 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar8) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar2) {
      return 0;
    }
    if (sVar1 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar1) {
      return 0;
    }
    this = g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar2 +
            (int)sVar8].objects[0];
    if (this == (STWorldObject *)0x0) {
      return 0;
    }
    iVar5 = (*this->vtable->GetObjectTypeId)(this);
    if (((iVar5 != 0x1b) && (iVar5 != 7)) && (iVar5 != 0x13)) {
      return 0;
    }
    iVar5 = (*this->vtable[5].slots_00_28[9])(0xfe);
    if (iVar5 == 0) {
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
    bVar4 = false;
  }
  *(undefined1 *)((int)param_1 + 0x251) = *(undefined1 *)((int)param_1 + 0x350);
  *(undefined4 *)((int)param_1 + 0x236) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = (int)((ulonglong)((longlong)*(int *)((int)param_1 + 0x350) * -0x77777777) >> 0x20) +
          *(int *)((int)param_1 + 0x350);
  *(int *)((int)param_1 + 0x277) = (int)*(short *)((int)param_1 + 0x34a);
  *(int *)((int)param_1 + 0x2be) = (int)*(short *)((int)param_1 + 0x34a);
  *(int *)((int)param_1 + 0x27b) = (int)*(short *)((int)param_1 + 0x34c);
  *(int *)((int)param_1 + 0x27f) = (int)*(short *)((int)param_1 + 0x34e);
  *(int *)((int)param_1 + 0x2ba) = (iVar5 >> 3) - (iVar5 >> 0x1f);
  *(int *)((int)param_1 + 0x2c2) = (int)*(short *)((int)param_1 + 0x34c);
  *(int *)((int)param_1 + 0x2c6) = (int)*(short *)((int)param_1 + 0x34e);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar6 = thunk_FUN_005ec5e0(*(int *)((int)param_1 + 0x33e));
  *(undefined4 *)((int)param_1 + 0x2b1) = uVar6;
  *(undefined1 *)((int)param_1 + 0x235) = *(undefined1 *)((int)param_1 + 0x332);
  *(undefined4 *)((int)param_1 + 0x23e) = 2000;
  if (bVar3) {
    if (bVar4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = thunk_FUN_005ecd70(param_1,(int)(short)(*(short *)((int)param_1 + 0x242) * 0xc9 + 100)
                                 ,(int)(short)(*(short *)((int)param_1 + 0x244) * 0xc9 + 100),
                                 (int)(short)(*(short *)((int)param_1 + 0x246) * 200 + 100),
                                 *(int *)((int)param_1 + 0x350),'\x01',0x1e);
      if (iVar5 != 0) {
        *(undefined4 *)((int)param_1 + 0x23a) = 2;
      }
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar7 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar7;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_005ecd70(param_1,*(int *)((int)param_1 + 0x277),*(int *)((int)param_1 + 0x27b),
                         *(int *)((int)param_1 + 0x27f) + -0x1e,*(int *)((int)param_1 + 0x350),'\0',
                         0x1e - (uVar7 >> 0x10) % 0xb);
      *(undefined4 *)((int)param_1 + 0x23a) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x2d6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0xffffffff;
  *(uint *)((int)param_1 + 0x2e0) = g_playSystem_00802A38->field_00E4;
  return 1;
}

