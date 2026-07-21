
undefined4 __thiscall FUN_0056e9e0(void *this,int param_1)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  cMf32 *pcVar4;
  uint *puVar5;
  DArrayTy *pDVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte local_160 [260];
  InternalExceptionFrame local_5c;
  void *local_18;
  byte *local_14;
  undefined4 local_10;
  byte *local_c;
  cMf32 *local_8;

  local_10 = 1;
  if (param_1 != 0) {
    *(undefined1 *)((int)this + 0x1163) = 1;
    *(undefined4 *)((int)this + 0x7d0e) = 1;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pvVar2 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  local_c = (byte *)((int)local_18 + 0x76f6);
  pcVar4 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_c,0,0,0);
  local_8 = pcVar4;
  if (*(AnonShape_006B5570_4D68B99C **)((int)pvVar2 + 0x4ea7) != (AnonShape_006B5570_4D68B99C *)0x0)
  {
    FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)((int)pvVar2 + 0x4ea7));
  }
  puVar5 = Library::Ourlib::MFSARR::mfSarLoad(pcVar4,PTR_s_DESCRIPTION_0079b074,0);
  *(uint **)((int)pvVar2 + 0x4ea7) = puVar5;
  if (puVar5 == (uint *)0x0) {
    pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    *(DArrayTy **)((int)pvVar2 + 0x4ea7) = pDVar6;
  }
  if (*(AnonShape_006B5570_4D68B99C **)((int)pvVar2 + 0x4eab) != (AnonShape_006B5570_4D68B99C *)0x0)
  {
    FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)((int)pvVar2 + 0x4eab));
  }
  puVar5 = Library::Ourlib::MFSARR::mfSarLoad(pcVar4,PTR_s_OBJECTIVES_0079b078,0);
  *(uint **)((int)pvVar2 + 0x4eab) = puVar5;
  if (puVar5 == (uint *)0x0) {
    pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    *(DArrayTy **)((int)pvVar2 + 0x4eab) = pDVar6;
  }
  pbVar12 = (byte *)((int)pvVar2 + 0x4da3);
  pbVar10 = pbVar12;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10 = pbVar10 + 4;
  }
  local_14 = pbVar12;
  puVar7 = cMf32::RecGet(local_8,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_14,0);
  if ((puVar7 == (ushort *)0x0) || (*pbVar12 == 0)) {
    Library::MSVCRT::FUN_0072e730(local_c,(byte *)0x0,(byte *)0x0,local_160,(byte *)0x0);
    uVar8 = 0xffffffff;
    pbVar10 = local_160;
    do {
      pbVar11 = pbVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar11;
    } while (bVar1 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar11 + -uVar8;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar12 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    }
  }
  cMf32::delete(local_8,local_8);
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

