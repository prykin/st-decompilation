
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall PopUpTy::AddStr(PopUpTy *this,char *param_1,uint param_2)

{
  char cVar1;
  code *pcVar2;
  PopUpTy *this_00;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_58;
  PopUpTy *pPStack_14;
  uint *puStack_10;
  uint *puStack_c;
  uint *puStack_8;
  
  puStack_c = (uint *)0x0;
  puStack_10 = (uint *)0x0;
  puStack_8 = (uint *)0x0;
  if (param_1 != (char *)0x0) {
    IStack_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_58;
    pPStack_14 = this;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar8 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      puStack_8 = Library::DKW::LIB::FUN_006aac10(~uVar8 + 4);
      this_00 = pPStack_14;
      puVar4 = puStack_c;
      if (puStack_8 != (uint *)0x0) {
        wsprintfA((LPSTR)puStack_8,s__s_1d_s_007c6fe4,&DAT_007c6ff0,param_2 & 0xff,param_1);
        puVar4 = ccFntTy::_TxtToSarr(*(ccFntTy **)(this_00 + 0x94),puStack_8);
        puStack_c = puVar4;
        FUN_006ab060(&puStack_8);
      }
      puVar5 = puStack_10;
      if (puVar4 != (uint *)0x0) {
        puVar5 = ccFntTy::FormSarr(*(ccFntTy **)(this_00 + 0x94),(int)puVar4,
                                   (uint *)s________________007c21d8,
                                   (&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0,0xffffffff,1);
        puStack_10 = puVar5;
        ccFntTy::SepColorStrInSarr(*(ccFntTy **)(this_00 + 0x94),puVar5,puVar5);
        FUN_006b5570((byte *)puVar4);
      }
      if (puVar5 != (uint *)0x0) {
        iVar3 = 0;
        if (0 < (int)puVar5[2]) {
          if ((int)puVar5[2] < 1) {
            pcVar6 = (char *)0x0;
            goto LAB_0052d48d;
          }
          do {
            pcVar6 = *(char **)(puVar5[5] + iVar3 * 4);
LAB_0052d48d:
            iVar7 = Library::DKW::TBL::FUN_006b5aa0(*(int *)(this_00 + 0x98),pcVar6);
            if ((byte)this_00[0x9c] < (byte)DAT_00807346) {
              this_00[0x9c] = (PopUpTy)((char)this_00[0x9c] + 1);
            }
            if (((byte)this_00[0x9c] <= (byte)DAT_00807346) &&
               (OutStr(this_00,CONCAT31((int3)((uint)iVar7 >> 8),(char)this_00[0x9c] - 1)),
               DAT_00807342 != 0)) {
              if ((int)((byte)this_00[0x9c] - 1) < *(int *)(*(int *)(this_00 + 0x98) + 8)) {
                puVar4 = *(uint **)(*(int *)(*(int *)(this_00 + 0x98) + 0x14) + -4 +
                                   (uint)(byte)this_00[0x9c] * 4);
              }
              else {
                puVar4 = (uint *)0x0;
              }
              uVar8 = FUN_00711110(*(void **)(this_00 + 0x94),puVar4);
              if ((int)*(uint *)(*(int *)(this_00 + 0x90) + 4) <= (int)uVar8) {
                uVar8 = *(uint *)(*(int *)(this_00 + 0x90) + 4);
              }
              *(uint *)(this_00 + (uint)(byte)this_00[0x9c] * 4 + 0x50) = uVar8;
              FUN_006b2800((int)DAT_008075a8,
                           *(uint *)(this_00 + (uint)(byte)this_00[0x9c] * 4 + 0x14),uVar8,0x13);
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,*(uint *)(this_00 + (uint)(byte)this_00[0x9c] * 4 + 0x14),
                         0xffffffff,0xd,(uint)(byte)this_00[0x9c] * 0x13 + 0xb);
              Library::DKW::DDX::FUN_006b3430
                        (DAT_008075a8,*(uint *)(this_00 + (uint)(byte)this_00[0x9c] * 4 + 0x14));
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)puVar5[2]);
        }
        FUN_006b5570((byte *)puVar5);
      }
      g_currentExceptionFrame = IStack_58.previous;
      return;
    }
    g_currentExceptionFrame = IStack_58.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61,0,iVar3,&DAT_007a4ccc,
                               s_PopUpTy__AddStr_007c6fd0);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x61);
  }
  return;
}

