
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeleteCtrls */

void __thiscall SettMapMTy::DeleteCtrls(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int iVar2;
  HoloTy *pHVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (iVar2 == 0) {
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    this_00 = local_8;
    SetAccelerator(0,local_8->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    if (this_00->field_21FC != 0) {
      FUN_006e56b0((void *)this_00->field_000C,this_00->field_21FC);
      this_00->field_21FC = 0;
    }
    if (-1 < (int)this_00->field_2200) {
      FUN_006b3af0(DAT_008075a8,this_00->field_2200);
    }
    if (this_00->field_21E6 != '\0') {
      if (*(uint *)(DAT_0081176c + 0x54c) != 0) {
        FUN_006e56b0((void *)this_00->field_000C,*(uint *)(DAT_0081176c + 0x54c));
        *(undefined4 *)(DAT_0081176c + 0x54c) = 0;
      }
      if (*(uint *)(DAT_0081176c + 0x550) != 0) {
        FUN_006e56b0((void *)this_00->field_000C,*(uint *)(DAT_0081176c + 0x550));
        *(undefined4 *)(DAT_0081176c + 0x550) = 0;
      }
      if (this_00->field_21F8 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F8);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_21F8);
        this_00->field_21F8 = (HoloTy *)0x0;
      }
      pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar3 == (HoloTy *)0x0) {
        pHVar3 = (HoloTy *)0x0;
      }
      else {
        pHVar3->field_0002 = 1;
        pHVar3->field_0000 = 0;
        pHVar3->field_0003 = 0xffffffff;
        pHVar3->field_0001 = 2;
        pHVar3->field_0007 = 0;
        pHVar3->field_000B = 0;
        *(undefined4 *)&pHVar3->field_0xf = 0;
        *(undefined4 *)&pHVar3->field_0x1b = 1;
        pHVar3->field_0013 = 1;
        pHVar3->field_0017 = 0xffffffff;
        pHVar3->field_0027 = 0;
        pHVar3->field_0023 = 0;
        pHVar3->field_002F = 1;
        pHVar3->field_002B = 1;
      }
      this_00->field_21F8 = pHVar3;
      if (pHVar3 != (HoloTy *)0x0) {
        uVar7 = 0;
        cVar6 = '\x01';
        uVar5 = 0x10;
        iVar4 = 1;
        iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar5 = HoloTy::Init(this_00->field_21F8,CASE_1,200,0x1f1,iVar2,iVar4,uVar5,cVar6,uVar7);
        if (uVar5 != 0) {
          pHVar3 = this_00->field_21F8;
          pHVar3->field_0002 = 0;
          pHVar3->field_0017 = 0xffffffff;
          uVar5 = this_00->field_21F8->field_0003;
          if (-1 < (int)uVar5) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar5);
          }
          HoloTy::NextFas(this_00->field_21F8);
        }
        FUN_006b5f80(DAT_008075a8,200,0x1f1,400,0x62);
        PutDDXClip(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c)
                  );
      }
      FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
      }
    }
    SettMapTy::DeleteCtrls((SettMapTy *)this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0xc0,0,iVar2,&DAT_007a4ccc,
                             s_SettMapMTy__DeleteCtrls_007cd2d4);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_settmobj_cpp_007cd258,0xc0);
  return;
}

