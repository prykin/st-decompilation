
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::PaintMMsg */

void __thiscall MMsgTy::PaintMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint *puVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (*(uint *)&local_8[1].field_0x51 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)&local_8[1].field_0x95,*(uint *)&local_8[1].field_0x51,
                 *(uint *)&local_8[1].field_0x55,*(uint *)&local_8[1].field_0x69,
                 *(uint *)&local_8[1].field_0x6d);
    }
    if (*(uint *)&pMVar2[1].field_0xe2 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)&pMVar2[1].field_0x126,*(uint *)&pMVar2[1].field_0xe2,
                 *(uint *)&pMVar2[1].field_0xe6,*(uint *)&pMVar2[1].field_0xfa,
                 *(uint *)&pMVar2[1].field_0xfe);
    }
    iVar3 = 0;
    if (pMVar2->field_0x9a != '\0') {
      puVar5 = (uint *)&pMVar2->field_0xff;
      do {
        if (puVar5[-6] != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)puVar5[0xb],puVar5[-6],puVar5[-5],*puVar5,puVar5[1]);
        }
        if (*(uint *)((int)puVar5 + 0x79) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar5 + 0xbd),*(uint *)((int)puVar5 + 0x79),
                     *(uint *)((int)puVar5 + 0x7d),*(uint *)((int)puVar5 + 0x91),
                     *(uint *)((int)puVar5 + 0x95));
        }
        if ((*(char *)((int)puVar5 + -0x1d) != '\0') &&
           (*(uint *)((int)puVar5 + 0x10a) != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)((int)puVar5 + 0x14e),*(uint *)((int)puVar5 + 0x10a),
                     *(uint *)((int)puVar5 + 0x10e),*(uint *)((int)puVar5 + 0x122),
                     *(uint *)((int)puVar5 + 0x126));
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)(byte)pMVar2->field_0x9a);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x59,0,iVar3,&DAT_007a4ccc,
                             s_MMsgTy__PaintMMsg_007ccc60);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x59);
  return;
}

