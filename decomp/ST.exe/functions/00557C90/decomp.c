
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::Init */

void __thiscall VisibleClassTy::Init(VisibleClassTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  void *pvVar3;
  VisibleClassTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_ESI;
  int iVar10;
  uint uVar11;
  void *unaff_EDI;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  short *psVar15;
  InternalExceptionFrame local_54;
  VisibleClassTy *local_10;
  int local_c;
  short *local_8;
  
  iVar10 = 0;
  local_8 = (short *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0xaa,0,iVar4,&DAT_007a4ccc,
                                s_VisibleClassTy__Init_007c9310);
    if (iVar10 == 0) {
      FUN_0070b600((int *)&local_8);
      RaiseInternalException(iVar4,0,s_E____titans_grig_visible_cpp_007c92cc,0xac);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DAT_00802a50 = -(uint)(local_10->field_0114 != 0) & 0x403765;
  if (local_10->field_0114 != 0) {
    puVar9 = &local_10->field_01D8;
    do {
      psVar15 = (short *)0x1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aec8,1,iVar10);
      local_8 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806770,pCVar5,bVar13,bVar14,psVar15);
      (&DAT_007c9290)[iVar10] = (int)*(short *)((int)local_8 + 9);
      puVar7 = puVar9 + -0x30;
      (&DAT_007c929c)[iVar10] = (int)*(short *)((int)local_8 + 0xb);
      puVar6 = (undefined4 *)((int)local_8 + 0x11);
      local_c = 0x10;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      FUN_0070b600((int *)&local_8);
      psVar15 = (short *)0x1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aecc,1,iVar10);
      local_8 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806770,pCVar5,bVar13,bVar14,psVar15);
      puVar7 = (undefined4 *)((int)local_8 + 0x11);
      iVar4 = 0x10;
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_0070b600((int *)&local_8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    Library::Ourlib::STDARK::FUN_007176f0
              (DAT_00807598,&this_00->field_003C,this_00->field_0028,this_00->field_002C,
               (int)&this_00->field_0118,this_00->field_004C,this_00->field_0030,this_00->field_0034
               ,(int)&this_00->field_01D8,3,0x10,&DAT_007c9290,&DAT_007c929c);
    iVar4 = this_00->field_0110;
    uVar11 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar12 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar12) {
          puVar8 = (undefined1 *)(*(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c));
        }
        else {
          puVar8 = (undefined1 *)0x0;
        }
        switch(*puVar8) {
        case 0:
          thunk_FUN_00558dc0(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             (undefined *)(int)(char)puVar8[6],(int *)(uint)(byte)puVar8[1],
                             (uint)(byte)puVar8[7],*(int **)(puVar8 + 8),0x4001);
          break;
        case 1:
          thunk_FUN_005594a0(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(undefined *)(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),2);
          break;
        case 2:
          SetZoneDes(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),puVar8[6],
                     (uint)(byte)puVar8[1],(uint)(byte)puVar8[7],*(undefined4 *)(puVar8 + 8),4);
          break;
        case 3:
          SetZoneAst(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),puVar8[6],
                     (uint)(byte)puVar8[1],(uint)(byte)puVar8[7],*(undefined4 *)(puVar8 + 8),8);
          break;
        case 4:
          SetZoneTsh(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),puVar8[6],
                     (uint)(byte)puVar8[1],(uint)(byte)puVar8[7],*(undefined4 *)(puVar8 + 8),0x10);
          break;
        case 5:
          SetZoneMin1(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),puVar8[6],
                      (uint)(byte)puVar8[1],(uint)(byte)puVar8[7],*(undefined4 *)(puVar8 + 8),0x20);
          break;
        case 6:
          SetZoneMin2(this_00,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),puVar8[6],
                      (uint)(byte)puVar8[1],(uint)(byte)puVar8[7],*(undefined4 *)(puVar8 + 8),0x40);
        }
        iVar4 = this_00->field_0110;
        uVar11 = uVar11 + 1;
        bVar12 = uVar11 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
    }
    pvVar3 = DAT_00807598;
    if (this_00->field_0114 != 0) {
      if (this_00->field_00F8 != 0) {
        *(undefined4 *)((int)DAT_00807598 + 0x466) = 1;
        *(undefined4 *)((int)pvVar3 + 0x2d8) = 1;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      goto LAB_00557fbb;
    }
  }
  this_00->field_00F8 = 0;
LAB_00557fbb:
  pvVar3 = DAT_00807598;
  *(undefined4 *)((int)DAT_00807598 + 0x466) = 0;
  *(undefined4 *)((int)pvVar3 + 0x2d8) = 1;
  g_currentExceptionFrame = local_54.previous;
  return;
}

