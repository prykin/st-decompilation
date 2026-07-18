
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall PrividerTy::InitPrivider(PrividerTy *this,char param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  PrividerTy *this_01;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  PrividerTy *pPVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PrividerTy *pPVar12;
  char cVar13;
  int iVar14;
  undefined4 local_454 [256];
  undefined4 *local_54;
  undefined4 local_50 [16];
  PrividerTy *local_10;
  int local_c;
  uint local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_10 = this;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    puVar5 = FUN_006b54f0((uint *)0x0,1,10);
    this_01 = local_10;
    *(uint **)(local_10 + 0x1c92) = puVar5;
    FUN_006b5aa0((int)puVar5,(char *)&DAT_00807ddd);
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
    iVar4 = *(int *)(DAT_0081176c + 0x2c);
    *(int *)(this_01 + 0x5d) = iVar4;
    FUN_006bc360(iVar4,local_454,(int *)0x0);
    *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x140) = 0x1f;
    FUN_00718780((int)local_454,0,0x100,0x8b,0x15,(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x144)
                );
    if (param_2 != '\0') {
      thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    }
    this_01[0x1a71] = (PrividerTy)0x0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') && (iVar4 = thunk_FUN_005daa90(), iVar4 != 0)) {
      param_1 = '\0';
    }
    SetMode(this_01,param_1,'\x01');
    this_01[0x1a60] = this_01[0x1a5f];
    if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::ShowSprites(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) =
           *(undefined4 *)(this_01 + 8);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(this_01 + 0x1a77),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(this_01 + 0x1a77) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    *(undefined4 *)(this_01 + 0x1a93) = 0x289;
    *(undefined4 *)(this_01 + 0x1a97) = 0x6a;
    *(undefined4 *)(this_01 + 0x1a7f) = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(this_01 + 0x1b08),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(this_01 + 0x1b08) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    *(undefined4 *)(this_01 + 0x1b24) = 0x289;
    *(undefined4 *)(this_01 + 0x1b28) = 0x176;
    *(undefined4 *)(this_01 + 0x1b10) = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(this_01 + 0x1b99),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(this_01 + 0x1b99) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    iVar4 = 1;
    *(undefined4 *)(this_01 + 0x1bb5) = 0x28e;
    *(undefined4 *)(this_01 + 0x1bb9) = 0x8a;
    puVar8 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
    *(undefined4 *)(this_01 + 0x1ba1) = 0;
    uVar7 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
    iVar4 = FUN_006b50c0(0x208,0x143,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar7,puVar8,
                         iVar4);
    *(int *)(this_01 + 0x1c82) = iVar4;
    uVar7 = *(uint *)(iVar4 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pPVar11 = this_01 + 0x1c2a;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar7 = 0x67;
    do {
      FUN_006b2330((uint)DAT_008075a8,(uint *)pPVar11,0x31,0x40597f,
                   *(uint *)(*(int *)(this_01 + 0x1c82) + 4),0x13,(uint)this_01);
      FUN_006b3640(DAT_008075a8,*(uint *)pPVar11,0xffffffff,0x7a,uVar7);
      uVar7 = uVar7 + 0x13;
      pPVar11 = pPVar11 + 4;
    } while ((int)uVar7 < 0x209);
    iVar4 = 1;
    puVar8 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
    uVar7 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
    iVar4 = FUN_006b50c0(0x22e,0x2e,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar7,puVar8,
                         iVar4);
    *(int *)(this_01 + 0x1c8e) = iVar4;
    uVar7 = *(uint *)(iVar4 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c8e),0,3,1,0x22c,0x14)
    ;
    uVar6 = 2;
    iVar14 = -1;
    iVar4 = -2;
    puVar5 = (uint *)FUN_006b0140(0x26b5,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar5,iVar4,iVar14,uVar6);
    uVar7 = *(uint *)(this_01 + 0x1c8e);
    pPVar11 = this_01 + 0x1c8a;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pPVar11,0x31,0x4023f6,*(uint *)(uVar7 + 4),
                 *(uint *)(uVar7 + 8),uVar7);
    FUN_006b3640(DAT_008075a8,*(uint *)pPVar11,0xffffffff,0x79,0x197);
    CreateCtrls(this_01,'\x01');
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403c74,0x22e,0x145,(uint)this_01);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x51);
    puVar9 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9[2] = 1;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 3) = 0xffffffff;
      puVar9[1] = 2;
      *(undefined4 *)(puVar9 + 7) = 0;
      *(undefined4 *)(puVar9 + 0xb) = 0;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      *(undefined4 *)(puVar9 + 0x1b) = 1;
      *(undefined4 *)(puVar9 + 0x13) = 1;
      *(undefined4 *)(puVar9 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar9 + 0x27) = 0;
      *(undefined4 *)(puVar9 + 0x23) = 0;
      *(undefined4 *)(puVar9 + 0x2f) = 1;
      *(undefined4 *)(puVar9 + 0x2b) = 1;
    }
    *(undefined1 **)(this_01 + 0x1c96) = puVar9;
    if (puVar9 != (undefined1 *)0x0) {
      uVar10 = 0;
      cVar13 = '\x01';
      uVar7 = 0x10;
      iVar14 = 1;
      iVar4 = FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar7 = HoloTy::Init(*(HoloTy **)(this_01 + 0x1c96),2,0x79,0x51,iVar4,iVar14,uVar7,cVar13,
                           uVar10);
      if (uVar7 != 0) {
        iVar4 = *(int *)(this_01 + 0x1c96);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1c96) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1c96) + 3));
        }
        if (*(uint *)(this_01 + 0x1a7b) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_01 + 0x1abf),*(uint *)(this_01 + 0x1a7b));
        }
        if (*(uint *)(this_01 + 0x1b0c) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_01 + 0x1b50),*(uint *)(this_01 + 0x1b0c));
        }
        if (*(uint *)(this_01 + 0x1b9d) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_01 + 0x1be1),*(uint *)(this_01 + 0x1b9d));
        }
        pPVar12 = this_01 + 0x1c2a;
        local_c = 0x16;
        do {
          FUN_006b3af0(DAT_008075a8,*(uint *)pPVar12);
          pPVar12 = pPVar12 + 4;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_01[0x1a5f] == (PrividerTy)0x0) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   *(int *)(this_01 + 0x1a5b) + 0x140);
      FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      puVar9 = (undefined1 *)FUN_0072e530(0x33);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9[2] = 1;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 3) = 0xffffffff;
        puVar9[1] = 2;
        *(undefined4 *)(puVar9 + 7) = 0;
        *(undefined4 *)(puVar9 + 0xb) = 0;
        *(undefined4 *)(puVar9 + 0xf) = 0;
        *(undefined4 *)(puVar9 + 0x1b) = 1;
        *(undefined4 *)(puVar9 + 0x13) = 1;
        *(undefined4 *)(puVar9 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x27) = 0;
        *(undefined4 *)(puVar9 + 0x23) = 0;
        *(undefined4 *)(puVar9 + 0x2f) = 1;
        *(undefined4 *)(puVar9 + 0x2b) = 1;
      }
      *(undefined1 **)(this_01 + 0x1c9a) = puVar9;
      if (puVar9 != (undefined1 *)0x0) {
        uVar10 = 0;
        cVar13 = '\x01';
        uVar7 = 0x10;
        iVar14 = 1;
        iVar4 = FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar7 = HoloTy::Init(*(HoloTy **)(this_01 + 0x1c9a),1,0x79,0x197,iVar4,iVar14,uVar7,cVar13,
                             uVar10);
        if (uVar7 != 0) {
          iVar4 = *(int *)(this_01 + 0x1c9a);
          *(undefined1 *)(iVar4 + 2) = 1;
          *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
          if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1c9a) + 3)) {
            FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1c9a) + 3));
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)pPVar11);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0(DAT_008075a8,*(uint *)pPVar11);
    }
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar6 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar1,uVar6);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(this_01 + 0x5d),10,2);
    }
    pcVar2 = *(char **)(this_01 + 0x1c96);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (-1 < (int)*(uint *)(pcVar2 + 3))) {
      FUN_006b3430(DAT_008075a8,*(uint *)(pcVar2 + 3));
    }
    pcVar2 = *(char **)(this_01 + 0x1c9a);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (-1 < (int)*(uint *)(pcVar2 + 3))) {
      FUN_006b3430(DAT_008075a8,*(uint *)(pcVar2 + 3));
    }
    DAT_00858df8 = local_54;
    return;
  }
  DAT_00858df8 = local_54;
  iVar14 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0xac,0,iVar4,&DAT_007a4ccc);
  if (iVar14 == 0) {
    FUN_006a5e40(iVar4,0,0x7ccd28,0xac);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

