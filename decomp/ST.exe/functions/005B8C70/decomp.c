
void __thiscall FUN_005b8c70(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar6;
  int *piVar7;
  undefined4 local_70;
  undefined4 local_6c [16];
  int local_2c [8];
  void *local_c;
  uint local_8;
  
  if (*(char *)((int)this + 0x65) != '\x02') {
    local_70 = DAT_00858df8;
    DAT_00858df8 = &local_70;
    local_c = this;
    iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar3 == 0) {
      iVar3 = 0xd;
      puVar6 = (uint *)((int)local_c + 0x66);
      do {
        if (*puVar6 != 0) {
          FUN_006e56b0(*(void **)((int)this_00 + 0xc),*puVar6);
        }
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (param_2 == 0) {
        *(undefined1 *)((int)this_00 + 0x1caa) = 0;
        *(undefined1 *)((int)this_00 + 0x1ca9) = 0;
        *(undefined1 *)((int)this_00 + 0x1a5a) = 0xff;
      }
      if (*(uint *)((int)this_00 + 0x1d8c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)this_00 + 0x1dd0),*(uint *)((int)this_00 + 0x1d8c));
      }
      iVar3 = *(int *)((int)this_00 + 0x1cab);
      if (iVar3 != 0) {
        piVar7 = local_2c;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar3;
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x18))(local_2c);
      }
      if (param_1 == 0) {
        *(undefined1 *)((int)this_00 + 0x65) = 2;
        thunk_FUN_005b6ff0();
        DAT_00858df8 = (undefined4 *)local_70;
        return;
      }
      if (param_3 == 0) {
        bVar5 = 0;
        local_8 = (uint)local_8._1_3_ << 8;
        if (*(char *)((int)this_00 + 0x9a) != '\0') {
          do {
            if (*(char *)((local_8 & 0xff) + 0x1c9c + (int)this_00) != '\0') {
              iVar3 = (local_8 & 0xff) * 0x1fb;
              uVar1 = *(uint *)((int)this_00 + iVar3 + 0x178);
              if (uVar1 != 0xffffffff) {
                FUN_006b3af0(*(int **)((int)this_00 + iVar3 + 0x1bc),uVar1);
              }
            }
            bVar5 = bVar5 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar5);
          } while (bVar5 < *(byte *)((int)this_00 + 0x9a));
        }
      }
      else {
        bVar5 = 0;
        *(undefined4 *)((int)this_00 + 0x1c9c) = 0x1010101;
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)((int)this_00 + 0x1ca0) = 0x1010101;
        *(undefined4 *)((int)this_00 + 0x1ca4) = 0x1010101;
        *(undefined1 *)((int)this_00 + 0x1ca8) = 1;
        if (*(char *)((int)this_00 + 0x9a) != '\0') {
          do {
            uVar1 = *(uint *)((int)this_00 + (local_8 & 0xff) * 0x1fb + 0x178);
            if (uVar1 != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)this_00 + (local_8 & 0xff) * 0x1fb + 0x1bc),uVar1);
            }
            bVar5 = bVar5 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar5);
          } while (bVar5 < *(byte *)((int)this_00 + 0x9a));
        }
      }
      *(undefined1 *)((int)this_00 + 0x65) = 4;
      thunk_FUN_005b6730(this_00,6,'\x01',-1);
      DAT_00858df8 = (undefined4 *)local_70;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_70;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1a4,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7ccb74,0x1a4);
  }
  return;
}

