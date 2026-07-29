#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::Init */

void __thiscall VisibleClassTy::Init(VisibleClassTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  ST3DSMAPContext *pSVar3;
  VisibleClassTy *this_00;
  int iVar4;
  LPSTR pCVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  VisibleClassTy_field_0110Element *element_0110;
  VisibleClassTy_field_0110DArray *pVVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0xaa,0,iVar4,"%s",
                                "VisibleClassTy::Init");
    if (iVar10 == 0) {
      FUN_0070b600((int *)&local_8);
      RaiseInternalException(iVar4,0,"E:\\__titans\\grig\\visible.cpp",0xac);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DAT_00802a50 = -(uint)(local_10->field_0114 != 0) & 0x403765;
  if (local_10->field_0114 != 0) {
    puVar9 = &local_10->field_01D8;
    do {
      psVar15 = (short *)0x1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aec8,1,iVar10);
      local_8 = Library::Ourlib::MFIMG::mfQmtLoad(PTR_00806770,pCVar5,bVar13,bVar14,psVar15);
      (&DAT_007c9290)[iVar10] = (int)*(short *)((int)local_8 + 9);
      puVar7 = puVar9 + -0x30;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
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
      local_8 = Library::Ourlib::MFIMG::mfQmtLoad(PTR_00806770,pCVar5,bVar13,bVar14,psVar15);
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
              (g_sT3DSMAPContext_00807598,this_00->field_003C,this_00->field_0028,
               this_00->field_002C,(int)&this_00->field_0118,(int)this_00->field_004C,
               this_00->field_0030,this_00->field_0034,(int)&this_00->field_01D8,3,0x10,
               &DAT_007c9290,&DAT_007c929c);
    pVVar8 = this_00->field_0110;
    uVar11 = 0;
    if (0 < (int)pVVar8->count) {
      bVar12 = pVVar8->count != 0;
      do {
        if (bVar12) {
          element_0110 = DArrayAt<VisibleClassTy_field_0110Element>(pVVar8, uVar11);
        }
        else {
          element_0110 = (VisibleClassTy_field_0110Element *)0x0;
        }
        switch(element_0110->field_0000) {
        case '\0':
          sub_00558DC0(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,
                       (undefined *)(int)element_0110->field_0006,(int *)(uint)(byte)element_0110->field_0001,
                       (uint)(byte)element_0110->field_0007,(int *)element_0110->field_0008,0x4001);
          break;
        case '\x01':
          sub_005594A0(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                       (undefined *)(uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                       element_0110->field_0008,2);
          break;
        case '\x02':
          SetZoneDes(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                     (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                     element_0110->field_0008,4);
          break;
        case '\x03':
          SetZoneAst(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                     (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                     element_0110->field_0008,8);
          break;
        case '\x04':
          SetZoneTsh(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                     (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                     element_0110->field_0008,0x10);
          break;
        case '\x05':
          SetZoneMin1(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                      (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                      element_0110->field_0008,0x20);
          break;
        case '\x06':
          SetZoneMin2(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                      (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                      element_0110->field_0008,0x40);
        }
        pVVar8 = this_00->field_0110;
        uVar11 = uVar11 + 1;
        bVar12 = uVar11 < pVVar8->count;
      } while ((int)uVar11 < (int)pVVar8->count);
    }
    pSVar3 = g_sT3DSMAPContext_00807598;
    if (this_00->field_0114 != 0) {
      if (this_00->field_00F8 != 0) {
        g_sT3DSMAPContext_00807598->field_0466 = 1;
        pSVar3->field_02D8 = 1;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      goto LAB_00557fbb;
    }
  }
  this_00->field_00F8 = 0;
LAB_00557fbb:
  pSVar3 = g_sT3DSMAPContext_00807598;
  g_sT3DSMAPContext_00807598->field_0466 = 0;
  pSVar3->field_02D8 = 1;
  g_currentExceptionFrame = local_54.previous;
  return;
}

