
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask */

void __thiscall MTaskTy::InitMTask(MTaskTy *this,char param_1,MTaskTy param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  MTaskTy *pMVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  uint *puVar7;
  LPSTR pCVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  byte *pbVar12;
  void *unaff_EDI;
  byte *pbVar13;
  MTaskTy *pMVar14;
  byte bVar15;
  char *pcVar16;
  undefined4 local_5a8 [256];
  byte local_1a8 [260];
  undefined4 local_a4 [20];
  undefined4 *local_54;
  undefined4 local_50 [16];
  MTaskTy *local_10;
  MTaskTy *local_c;
  undefined4 *local_8;
  
  *(undefined4 *)(this + 0x61) = *(undefined4 *)(this + 0x69);
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_10 = this;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_10;
  if (iVar4 != 0) {
    DAT_00858df8 = local_54;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0xdd,0,iVar4,&DAT_007a4ccc);
    pMVar3 = local_10;
    if (iVar4 == 0) {
      thunk_FUN_005b66e0(local_10);
      *(undefined4 *)(pMVar3 + 0x45) = 0x200;
      *(undefined4 *)(pMVar3 + 0x49) = 0;
      *(undefined4 *)(pMVar3 + 0x4d) = 0x6102;
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_10[0x6e] = (MTaskTy)param_1;
  if (param_1 == '\0') {
    local_10[0x6f] = param_2;
  }
  else {
    local_10[0x6f] = (MTaskTy)0x0;
  }
  if (local_10[0x6e] == (MTaskTy)0x1) {
    thunk_FUN_005daf20(DAT_0081176c);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (pMVar3[0x6e] == (MTaskTy)0x0) {
    puVar5 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    puVar5 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  *(undefined4 **)(pMVar3 + 0x70) = puVar5;
  if (DAT_0080fb6e != 0) {
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(*(int *)(pMVar3 + 0x70),PTR_s_DESCRIPTION_0079c21c,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(*(int *)(pMVar3 + 0x70),PTR_s_OBJECTIVES_0079c220,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar5 = &DAT_0080c3c3;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_8 = &DAT_0080c3c3;
    puVar6 = FUN_006f1ce0(0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&local_8,0);
    if ((puVar6 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
      uVar10 = 0xffffffff;
      pbVar12 = local_1a8;
      do {
        pbVar13 = pbVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar13 = pbVar12 + 1;
        bVar15 = *pbVar12;
        pbVar12 = pbVar13;
      } while (bVar15 != 0);
      uVar10 = ~uVar10;
      pbVar12 = pbVar13 + -uVar10;
      pbVar13 = (byte *)&DAT_0080c3c3;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar13 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
      }
    }
  }
  if (pMVar3[0x6e] == (MTaskTy)0x0) {
    iVar4 = *(int *)(pMVar3 + 0x70);
    pcVar16 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    iVar4 = *(int *)(pMVar3 + 0x70);
    pcVar16 = (char *)&DAT_0080e303;
  }
  iVar4 = FUN_00715050(iVar4,pcVar16,0);
  *(int *)(pMVar3 + 0x74) = iVar4;
  if (iVar4 == 0) {
    puVar7 = FUN_006ae290((uint *)0x0,1,0x50,1);
    puVar5 = local_a4;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(uint **)(pMVar3 + 0x74) = puVar7;
    local_a4[0]._0_1_ = 8;
    FUN_006ae1c0(puVar7,local_a4);
  }
  FUN_006afe40((int *)(pMVar3 + 0x78),*(uint **)(pMVar3 + 0x74));
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  iVar4 = 1;
  bVar15 = 0;
  pCVar8 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
  uVar9 = FUN_0070a9f0(DAT_00806780,pCVar8,bVar15,iVar4);
  *(undefined4 *)(pMVar3 + 0x5d) = uVar9;
  pMVar3[0x80] = (MTaskTy)0x1;
  puVar6 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_MT_CHECK_007cda58,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(pMVar3 + 0x81) = puVar6;
  thunk_FUN_00568bc0(&DAT_00807658,0);
  FUN_006bc360(*(int *)(pMVar3 + 0x5d),local_5a8,(int *)0x0);
  FUN_00718780((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)(pMVar3 + 0x91));
  FUN_00718780((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)(pMVar3 + 0x191));
  iVar4 = thunk_FUN_005defe0(*(int *)(pMVar3 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(int *)(pMVar3 + 0x89) = iVar4;
  *(undefined4 *)(iVar4 + 0x58) = 1;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  uVar9 = thunk_FUN_005df290(*(int *)(pMVar3 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  local_c = pMVar3 + 0x653;
  *(undefined4 *)(pMVar3 + 0x8d) = uVar9;
  pMVar14 = pMVar3 + 0x2a5;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,(uint *)pMVar14,0x31,0x402f63,0,0,(uint)local_c);
    FUN_006b3640(DAT_008075a8,*(uint *)pMVar14,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*(uint *)pMVar14);
    local_c = local_c + 0xc;
    pMVar14 = pMVar14 + 4;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  local_c = pMVar3 + 0x68f;
  pMVar14 = pMVar3 + 0x2bd;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,(uint *)pMVar14,0x31,0x402f63,0,0,(uint)local_c);
    FUN_006b3640(DAT_008075a8,*(uint *)pMVar14,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*(uint *)pMVar14);
    local_c = local_c + 0xc;
    pMVar14 = pMVar14 + 4;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(pMVar3 + 0x2d1),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(pMVar3 + 0x2d1) + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  *(undefined4 *)(pMVar3 + 0x2ed) = 0;
  *(undefined4 *)(pMVar3 + 0x2f1) = 0;
  *(undefined4 *)(pMVar3 + 0x2d9) = 0;
  if (*(uint *)(pMVar3 + 0x2d5) != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar3 + 0x319),*(uint *)(pMVar3 + 0x2d5));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(pMVar3 + 0x362),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(pMVar3 + 0x362) + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff);
  *(undefined4 *)(pMVar3 + 0x37e) = 0;
  *(undefined4 *)(pMVar3 + 0x382) = 0;
  *(undefined4 *)(pMVar3 + 0x36a) = 0;
  if (*(uint *)(pMVar3 + 0x366) != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar3 + 0x3aa),*(uint *)(pMVar3 + 0x366));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(pMVar3 + 0x3f3),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(pMVar3 + 0x3f3) + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  *(undefined4 *)(pMVar3 + 0x40f) = 0;
  *(undefined4 *)(pMVar3 + 0x413) = 0;
  *(undefined4 *)(pMVar3 + 0x3fb) = 0;
  if (*(uint *)(pMVar3 + 0x3f7) != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar3 + 0x43b),*(uint *)(pMVar3 + 0x3f7));
  }
  pMVar14 = pMVar3 + 0x484;
  FUN_006b2330((uint)DAT_008075a8,(uint *)pMVar14,0x32,0x402f63,0,0,(uint)(pMVar3 + 0x6bf));
  FUN_006b3640(DAT_008075a8,*(uint *)pMVar14,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*(uint *)pMVar14);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(pMVar3 + 0x48c),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(pMVar3 + 0x48c) + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  *(undefined4 *)(pMVar3 + 0x4a8) = 0;
  *(undefined4 *)(pMVar3 + 0x4ac) = 0;
  *(undefined4 *)(pMVar3 + 0x494) = 0;
  if (*(uint *)(pMVar3 + 0x490) != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar3 + 0x4d4),*(uint *)(pMVar3 + 0x490));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(pMVar3 + 0x51d),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(pMVar3 + 0x51d) + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff);
  *(undefined4 *)(pMVar3 + 0x539) = 0;
  *(undefined4 *)(pMVar3 + 0x53d) = 0;
  *(undefined4 *)(pMVar3 + 0x525) = 0;
  if (*(uint *)(pMVar3 + 0x521) != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar3 + 0x565),*(uint *)(pMVar3 + 0x521));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(pMVar3 + 0x5ae),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(pMVar3 + 0x5ae) + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  *(undefined4 *)(pMVar3 + 0x5ca) = 0;
  *(undefined4 *)(pMVar3 + 0x5ce) = 0;
  *(undefined4 *)(pMVar3 + 0x5b6) = 0;
  if (*(uint *)(pMVar3 + 0x5b2) != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar3 + 0x5f6),*(uint *)(pMVar3 + 0x5b2));
  }
  pMVar14 = pMVar3 + 0x63f;
  FUN_006b2330((uint)DAT_008075a8,(uint *)pMVar14,0x32,0x402f63,0,0,(uint)(pMVar3 + 0x6cb));
  FUN_006b3640(DAT_008075a8,*(uint *)pMVar14,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*(uint *)pMVar14);
  puVar7 = FUN_006ae310((uint *)0x0,10,0x9e,10,0x405de4);
  *(uint **)(pMVar3 + 0x64b) = puVar7;
  puVar7 = FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  *(uint **)(pMVar3 + 0x647) = puVar7;
  puVar7 = FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  *(uint **)(pMVar3 + 0x64f) = puVar7;
  if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  thunk_FUN_0055dbf0(DAT_0080759c,1,0);
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar9 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x3;
    *(undefined2 *)(this_00 + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this_00,0,uVar1,uVar9);
    CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    this_00[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
  }
  thunk_FUN_00540dc0(1,*(undefined4 *)(pMVar3 + 8),2,100,2,1,0,0,0,0,0,0);
  thunk_FUN_00540dc0(1,*(undefined4 *)(pMVar3 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
  pMVar3[0x6d] = (MTaskTy)0x3;
  PlayScript(pMVar3);
  PaintMTask(pMVar3);
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(pMVar3 + 0x5d),10,2);
  DAT_00858df8 = local_54;
  return;
}

