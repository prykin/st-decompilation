
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::Init */

void __thiscall VisibleClassTy::Init(VisibleClassTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar3;
  VisibleClassTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  DArrayTy *pDVar9;
  undefined4 *puVar10;
  undefined4 unaff_ESI;
  int iVar11;
  uint uVar12;
  void *unaff_EDI;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  short *psVar16;
  InternalExceptionFrame local_54;
  VisibleClassTy *local_10;
  int local_c;
  short *local_8;
  
  iVar11 = 0;
  local_8 = (short *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar11 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0xaa,0,iVar4,&DAT_007a4ccc,
                                s_VisibleClassTy__Init_007c9310);
    if (iVar11 == 0) {
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
    puVar10 = &local_10->field_01D8;
    do {
      psVar16 = (short *)0x1;
      bVar15 = 0;
      bVar14 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aec8,1,iVar11);
      local_8 = Library::Ourlib::MFIMG::mfQmtLoad(PTR_00806770,pCVar5,bVar14,bVar15,psVar16);
      (&DAT_007c9290)[iVar11] = (int)*(short *)((int)local_8 + 9);
      puVar7 = puVar10 + -0x30;
      (&DAT_007c929c)[iVar11] = (int)*(short *)((int)local_8 + 0xb);
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
      psVar16 = (short *)0x1;
      bVar15 = 0;
      bVar14 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aecc,1,iVar11);
      local_8 = Library::Ourlib::MFIMG::mfQmtLoad(PTR_00806770,pCVar5,bVar14,bVar15,psVar16);
      puVar7 = (undefined4 *)((int)local_8 + 0x11);
      iVar4 = 0x10;
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar10 = uVar1;
        puVar10 = puVar10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_0070b600((int *)&local_8);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    Library::Ourlib::STDARK::FUN_007176f0
              (PTR_00807598,&this_00->field_003C,this_00->field_0028,this_00->field_002C,
               (int)&this_00->field_0118,this_00->field_004C,this_00->field_0030,this_00->field_0034
               ,(int)&this_00->field_01D8,3,0x10,&DAT_007c9290,&DAT_007c929c);
    pDVar9 = this_00->field_0110;
    uVar12 = 0;
    if (0 < (int)pDVar9->count) {
      bVar13 = pDVar9->count != 0;
      do {
        if (bVar13) {
          puVar8 = (undefined1 *)(pDVar9->elementSize * uVar12 + (int)pDVar9->data);
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
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_005594a0
                    ((AnonReceiver_00558C00 *)this_00,(int)*(short *)(puVar8 + 2),
                     (int)*(short *)(puVar8 + 4),puVar8[6],(undefined *)(uint)(byte)puVar8[1],
                     (uint)(byte)puVar8[7],*(undefined4 *)(puVar8 + 8),2);
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
        pDVar9 = this_00->field_0110;
        uVar12 = uVar12 + 1;
        bVar13 = uVar12 < pDVar9->count;
      } while ((int)uVar12 < (int)pDVar9->count);
    }
    pAVar3 = PTR_00807598;
    if (this_00->field_0114 != 0) {
      if (this_00->field_00F8 != 0) {
        PTR_00807598->field_0466 = 1;
        *(undefined4 *)&pAVar3->field_0x2d8 = 1;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      goto LAB_00557fbb;
    }
  }
  this_00->field_00F8 = 0;
LAB_00557fbb:
  pAVar3 = PTR_00807598;
  PTR_00807598->field_0466 = 0;
  *(undefined4 *)&pAVar3->field_0x2d8 = 1;
  g_currentExceptionFrame = local_54.previous;
  return;
}

