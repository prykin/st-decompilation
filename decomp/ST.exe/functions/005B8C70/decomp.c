
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HidePanel */

void __thiscall MMsgTy::HidePanel(MMsgTy *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  MMsgTy *this_00;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  int *piVar6;
  InternalExceptionFrame local_70;
  int local_2c [8];
  MMsgTy *local_c;
  uint local_8;
  
  if (this->field_0065 != '\x02') {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    local_c = this;
    iVar2 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar2 == 0) {
      iVar2 = 0xd;
      puVar5 = (uint *)&local_c->field_0x66;
      do {
        if (*puVar5 != 0) {
          FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar5);
        }
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (param_2 == 0) {
        *(undefined1 *)(this_00 + 1) = 0;
        this_00->field_1CA9 = 0;
        this_00->field_0x1a5a = 0xff;
      }
      if (*(uint *)&this_00[1].field_0xe2 != 0xffffffff) {
        FUN_006b3af0(*(int **)&this_00[1].field_0x126,*(uint *)&this_00[1].field_0xe2);
      }
      iVar2 = *(int *)&this_00[1].field_0x1;
      if (iVar2 != 0) {
        piVar6 = local_2c;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar2;
        (**(code **)(**(int **)&this_00->field_0xc + 0x18))(local_2c);
      }
      if (param_1 == 0) {
        this_00->field_0065 = 2;
        HideSprites(this_00);
        g_currentExceptionFrame = local_70.previous;
        return;
      }
      if (param_3 == 0) {
        bVar4 = 0;
        local_8 = (uint)local_8._1_3_ << 8;
        if (this_00->field_0x9a != '\0') {
          do {
            if ((&this_00->field_0x1c9c)[local_8 & 0xff] != '\0') {
              iVar2 = (local_8 & 0xff) * 0x1fb;
              if (*(uint *)(&this_00->field_0x178 + iVar2) != 0xffffffff) {
                FUN_006b3af0(*(int **)(&this_00->field_0x1bc + iVar2),
                             *(uint *)(&this_00->field_0x178 + iVar2));
              }
            }
            bVar4 = bVar4 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar4);
          } while (bVar4 < (byte)this_00->field_0x9a);
        }
      }
      else {
        bVar4 = 0;
        *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)&this_00->field_0x1ca0 = 0x1010101;
        *(undefined4 *)&this_00->field_0x1ca4 = 0x1010101;
        this_00->field_0x1ca8 = 1;
        if (this_00->field_0x9a != '\0') {
          do {
            if (*(uint *)(&this_00->field_0x178 + (local_8 & 0xff) * 0x1fb) != 0xffffffff) {
              FUN_006b3af0(*(int **)(&this_00->field_0x1bc + (local_8 & 0xff) * 0x1fb),
                           *(uint *)(&this_00->field_0x178 + (local_8 & 0xff) * 0x1fb));
            }
            bVar4 = bVar4 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar4);
          } while (bVar4 < (byte)this_00->field_0x9a);
        }
      }
      this_00->field_0065 = 4;
      thunk_FUN_005b6730(this_00,6,'\x01',-1);
      g_currentExceptionFrame = local_70.previous;
      return;
    }
    g_currentExceptionFrame = local_70.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1a4,0,iVar2,&DAT_007a4ccc
                               ,s_MMsgTy__HidePanel_007cccc8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1a4);
  }
  return;
}

