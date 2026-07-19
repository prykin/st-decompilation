
void FUN_005c2760(void)

{
  DWORD DVar1;
  DWORD DVar2;
  BITMAPINFO *pBVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_2c;
  undefined1 local_20;
  undefined4 local_1e;
  
  DVar2 = timeGetTime();
  DVar1 = DAT_00811754;
  if ((DAT_0081175c != 0) && (99 < DVar2 - DAT_00811754)) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pBVar3 = (BITMAPINFO *)FUN_0070b3a0(DAT_0081175c,(int)*(short *)(DAT_0081175c + 0x29));
    thunk_FUN_005403c0(0x15,0x14,'\x06',pBVar3);
    Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
    *(short *)(DAT_0081175c + 0x29) = *(short *)(DAT_0081175c + 0x29) + 1;
    if (*(short *)(DAT_0081175c + 0x23) <= *(short *)(DAT_0081175c + 0x29)) {
      *(undefined2 *)(DAT_0081175c + 0x29) = 0;
    }
    DVar1 = DVar2;
    if ((DAT_00811750 != '\0') && (DAT_0080877e != '\0')) {
      puVar5 = &local_2c;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
      local_2c._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
      local_20 = DAT_0080733b;
      local_2c._2_1_ = 0;
      local_1e = DAT_00808754;
      FUN_00715360(DAT_00811764,0,'\x1a',(char *)&local_2c,0x26,1,0xffffffff);
    }
  }
  DAT_00811754 = DVar1;
  return;
}

