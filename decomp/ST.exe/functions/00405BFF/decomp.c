
void __thiscall VisibleClassTy::Init(VisibleClassTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  void *pvVar3;
  VisibleClassTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  VisibleClassTy *pVVar8;
  VisibleClassTy *pVVar9;
  undefined4 unaff_ESI;
  int iVar10;
  uint uVar11;
  void *unaff_EDI;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  InternalExceptionFrame IStack_54;
  VisibleClassTy *pVStack_10;
  int iStack_c;
  short *psStack_8;
  
  iVar10 = 0;
  psStack_8 = (short *)0x0;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pVStack_10 = this;
  iVar4 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pVStack_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_54.previous;
    iVar10 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0xaa,0,iVar4,&DAT_007a4ccc,
                                s_VisibleClassTy__Init_007c9310);
    if (iVar10 == 0) {
      FUN_0070b600((int *)&psStack_8);
      RaiseInternalException(iVar4,0,s_E____titans_grig_visible_cpp_007c92cc,0xac);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DAT_00802a50 = -(uint)(*(int *)(pVStack_10 + 0x114) != 0) & 0x403765;
  if (*(int *)(pVStack_10 + 0x114) != 0) {
    pVVar9 = pVStack_10 + 0x1d8;
    do {
      iVar4 = 1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aec8,1,iVar10);
      psStack_8 = FUN_0070b430(DAT_00806770,pCVar5,bVar13,bVar14,iVar4);
      (&DAT_007c9290)[iVar10] = (int)*(short *)((int)psStack_8 + 9);
      pVVar8 = pVVar9 + -0xc0;
      (&DAT_007c929c)[iVar10] = (int)*(short *)((int)psStack_8 + 0xb);
      puVar6 = (undefined4 *)((int)psStack_8 + 0x11);
      iStack_c = 0x10;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *(undefined4 *)pVVar8 = uVar1;
        pVVar8 = pVVar8 + 4;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
      FUN_0070b600((int *)&psStack_8);
      iVar4 = 1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aecc,1,iVar10);
      psStack_8 = FUN_0070b430(DAT_00806770,pCVar5,bVar13,bVar14,iVar4);
      puVar6 = (undefined4 *)((int)psStack_8 + 0x11);
      iVar4 = 0x10;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *(undefined4 *)pVVar9 = uVar1;
        pVVar9 = pVVar9 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_0070b600((int *)&psStack_8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    FUN_007176f0(DAT_00807598,(undefined4 *)(this_00 + 0x3c),*(int *)(this_00 + 0x28),
                 *(int *)(this_00 + 0x2c),(int)(this_00 + 0x118),*(int *)(this_00 + 0x4c),
                 *(undefined4 *)(this_00 + 0x30),*(undefined4 *)(this_00 + 0x34),
                 (int)(this_00 + 0x1d8),3,0x10,&DAT_007c9290,&DAT_007c929c);
    iVar4 = *(int *)(this_00 + 0x110);
    uVar11 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar12 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar12) {
          puVar7 = (undefined1 *)(*(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c));
        }
        else {
          puVar7 = (undefined1 *)0x0;
        }
        switch(*puVar7) {
        case 0:
          thunk_FUN_00558dc0(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),
                             (undefined *)(int)(char)puVar7[6],(uint)(byte)puVar7[1],
                             (undefined *)(uint)(byte)puVar7[7],*(int *)(puVar7 + 8),0x4001);
          break;
        case 1:
          thunk_FUN_005594a0(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),
                             puVar7[6],(undefined *)(uint)(byte)puVar7[1],(uint)(byte)puVar7[7],
                             *(undefined4 *)(puVar7 + 8),2);
          break;
        case 2:
          SetZoneDes(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),puVar7[6],
                     (uint)(byte)puVar7[1],(uint)(byte)puVar7[7],*(undefined4 *)(puVar7 + 8),4);
          break;
        case 3:
          SetZoneAst(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),puVar7[6],
                     (uint)(byte)puVar7[1],(uint)(byte)puVar7[7],*(undefined4 *)(puVar7 + 8),8);
          break;
        case 4:
          SetZoneTsh(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),puVar7[6],
                     (uint)(byte)puVar7[1],(uint)(byte)puVar7[7],*(undefined4 *)(puVar7 + 8),0x10);
          break;
        case 5:
          SetZoneMin1(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),puVar7[6],
                      (uint)(byte)puVar7[1],(uint)(byte)puVar7[7],*(undefined4 *)(puVar7 + 8),0x20);
          break;
        case 6:
          SetZoneMin2(this_00,(int)*(short *)(puVar7 + 2),(int)*(short *)(puVar7 + 4),puVar7[6],
                      (uint)(byte)puVar7[1],(uint)(byte)puVar7[7],*(undefined4 *)(puVar7 + 8),0x40);
        }
        iVar4 = *(int *)(this_00 + 0x110);
        uVar11 = uVar11 + 1;
        bVar12 = uVar11 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
    }
    pvVar3 = DAT_00807598;
    if (*(int *)(this_00 + 0x114) != 0) {
      if (*(int *)(this_00 + 0xf8) != 0) {
        *(undefined4 *)((int)DAT_00807598 + 0x466) = 1;
        *(undefined4 *)((int)pvVar3 + 0x2d8) = 1;
        g_currentExceptionFrame = IStack_54.previous;
        return;
      }
      goto LAB_00557fbb;
    }
  }
  *(undefined4 *)(this_00 + 0xf8) = 0;
LAB_00557fbb:
  pvVar3 = DAT_00807598;
  *(undefined4 *)((int)DAT_00807598 + 0x466) = 0;
  *(undefined4 *)((int)pvVar3 + 0x2d8) = 1;
  g_currentExceptionFrame = IStack_54.previous;
  return;
}

